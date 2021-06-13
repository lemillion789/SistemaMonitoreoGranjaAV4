#include "AreasDeAnimalesController.h"
#include "SensoresController.h"
#include "ComedoresController.h"

using namespace SistemaMonitoreoGranjaController;
using namespace System;
using namespace System::IO; /*Este es el namespace que permite manipular las clases y métodos para manejo de archivos de texto*/

AreasDeAnimalesController::AreasDeAnimalesController() {
	this->listaAreaDeAnimales = gcnew List<AreaDeAnimales^>();
}

void AreasDeAnimalesController::CargarAreasDesdeArchivo() {
	array<String^>^ lineas = File::ReadAllLines("AreasDeAnimales.txt");
	String^ separadores = ";";
	for each (String ^ lineaAreas in lineas) {
		array<String^>^ palabras = lineaAreas->Split(separadores->ToCharArray());
		String^ raza = palabras[0];
		String^ color = palabras[1];
		String^ tipo_animal = palabras[2];
		String^ sexo = palabras[3];
		String^ estado_salud = palabras[4];
		int peso = Convert::ToInt32(palabras[5]);
		int edad = Convert::ToInt32(palabras[6]);
		int cantidad = Convert::ToInt32(palabras[7]);

		AreaDeAnimales^ objArea = gcnew AreaDeAnimales(raza, color, tipo_animal, sexo, estado_salud, peso, edad, cantidad);

		List<Comederos^>^ listComederosArea = BuscarComederosArea(tipo_animal, raza);
		objArea->listaComederos = listComederosArea;
		this->listaAreaDeAnimales->Add(objArea);
	}
}
List<Comederos^>^ AreasDeAnimalesController::BuscarComederosArea(String^ ID) {
	List<Comederos^>^ listaComederosEncontrados = gcnew List<Comederos^>();
	array<String^>^ lineas = File::ReadAllLines("ComederoenArea.txt");   //IDcomedero,IDraza
	String^ separadores = ";";
	for each (String ^ lineaComederosArea in lineas) {
		array<String^>^ palabras = lineaComederosArea->Split(separadores->ToCharArray());
		String^ IDcomedero = palabras[0];
		String^ IDraza = palabras[1];
		/*String^ tipoAnimal = palabras[1];
		String^ raza = palabras[2];*/
		if (IDraza=ID) {
			ComedoresController^ gestorComederoController = gcnew ComedoresController();
			Comederos^ objComedero = gestorComederoController->buscarComedero(IDcomedero);
			listaComederosEncontrados->Add(objComedero); //agregar nuevo elemeto a la lista
		}
	}
	return listaComederosEncontrados;
}
int AreasDeAnimalesController::ObtenerCantidadAreas() {
	return this->listaAreaDeAnimales->Count;
}
AreaDeAnimales^ AreasDeAnimalesController::ObtenerAreaLista(int indice) {
	return this->listaAreaDeAnimales[indice];
}

List<AreaDeAnimales^>^ AreasDeAnimalesController::obtenerListaAreas()
{
	return this->listaAreaDeAnimales;
}

void AreasDeAnimalesController::GuardarAreaEnArchivo(AreaDeAnimales^ objArea)
{
	this->listaAreaDeAnimales->Clear();
	CargarAreasDesdeArchivo();
	this->listaAreaDeAnimales->Add(objArea);


	int totalComederos = 0;
	for (int i = 0; i < this->listaAreaDeAnimales->Count; i++) {
		AreaDeAnimales^ objAreaGrabar = this->listaAreaDeAnimales[i];
		totalComederos = totalComederos + objAreaGrabar->listaComederos->Count;
	}

	//guardar en ComederoenArea.txt
	array<String^>^ lineasArchivo = gcnew array<String^>(totalComederos);
	int k = 0;
	for (int i = 0; i < this->listaAreaDeAnimales->Count; i++) {
		AreaDeAnimales^ objAreaGrabar = this->listaAreaDeAnimales[i];
		for (int j = 0; j < objAreaGrabar->listaComederos->Count; j++) {
			Comederos^ objComedero = objAreaGrabar->listaComederos[j];
			lineasArchivo[k] = objComedero->ID + ";" + objAreaGrabar->tipo_animal + ";" + objAreaGrabar->raza;
			k++;  //pasar a la siguiente linea -> arreglo
		}
	}
	/*Aquí ya mi array de lineasArchivo esta OK, con la información a grabar*/
	File::WriteAllLines("ComederoenArea.txt", lineasArchivo);

	//guardar en areasDeAnimales.txt
	array<String^>^ lineasArchivoArea = gcnew array<String^>(this->listaAreaDeAnimales->Count);
	for (int i = 0; i < this->listaAreaDeAnimales->Count; i++) {
		AreaDeAnimales^ objArea = this->listaAreaDeAnimales[i];  //
		lineasArchivoArea[i] = objArea->raza + ";" + objArea->color + ";" + objArea->tipo_animal + ";" + objArea->sexo + ";" + objArea->estado_salud + ";" + objArea->peso + ";" + objArea->edad + ";" + objArea->cantidad;
	}
	/*Aquí ya mi array de lineasArchivoArea esta OK, con la información a grabar*/
	File::WriteAllLines("AreasDeAnimales.txt", lineasArchivoArea);
}

List<AreaDeAnimales^>^ AreasDeAnimalesController::buscarAreas(String^ tipoAnimal, String^ raza)
{
	List<AreaDeAnimales^>^ listaEncontrados = gcnew List<AreaDeAnimales^>();
	array<String^>^ lineas = File::ReadAllLines("AreasDeAnimales.txt");
	String^ separadores = ";";

	/*	AreaDeAnimales^ objArea = gcnew AreaDeAnimales(raza, color, tipo_animal, sexo, estado_salud, peso, edad, cantidad);

		List<Comederos^>^ listComederosArea = BuscarComederosArea(tipo_animal, raza);
		objArea->listaComederos = listComederosArea;
		this->listaAreaDeAnimales->Add(objArea);
	}*/
	for each (String ^ lineaAreas in lineas) {
		array<String^>^ palabras = lineaAreas->Split(separadores->ToCharArray());
		String^ raza_animal = palabras[0];
		String^ color = palabras[1];
		String^ tipo_animal = palabras[2];
		String^ sexo = palabras[3];
		String^ estado_salud = palabras[4];
		int peso = Convert::ToInt32(palabras[5]);
		int edad = Convert::ToInt32(palabras[6]);
		int cantidad = Convert::ToInt32(palabras[7]);

		if (tipoAnimal->ToUpper() == tipo_animal->ToUpper() && raza_animal->ToUpper() == raza->ToUpper()) {  //ToUpper para volver a mayuscula la palabra
			AreaDeAnimales^ objArea = gcnew AreaDeAnimales(raza, color, tipo_animal, sexo, estado_salud, peso, edad, cantidad);
			List<Comederos^>^ listComederoArea = BuscarComederosArea(tipo_animal, raza_animal);
			objArea->listaComederos = listComederoArea;
			listaEncontrados->Add(objArea);
		}
	}
	return listaEncontrados;
}

void AreasDeAnimalesController::eliminarArea(String^ tipoAnimal, String^ raza)
{
	CargarAreasDesdeArchivo();
	for (int i = 0; i < this->listaAreaDeAnimales->Count; i++) {
		AreaDeAnimales^ objArea = this->listaAreaDeAnimales[i];
		if (objArea->tipo_animal == tipoAnimal && objArea->raza == raza) {
			this->listaAreaDeAnimales->RemoveAt(i);   //remover partido de la lista
			break;
		}
	}

	int totalComederos = 0;
	for (int i = 0; i < this->listaAreaDeAnimales->Count; i++) {
		AreaDeAnimales^ objAreaGrabar = this->listaAreaDeAnimales[i];
		totalComederos = totalComederos + objAreaGrabar->listaComederos->Count;
	}

	//guardar en ComederoenArea.txt
	array<String^>^ lineasArchivo = gcnew array<String^>(totalComederos);
	int k = 0;
	for (int i = 0; i < this->listaAreaDeAnimales->Count; i++) {
		AreaDeAnimales^ objAreaGrabar = this->listaAreaDeAnimales[i];
		for (int j = 0; j < objAreaGrabar->listaComederos->Count; j++) {
			Comederos^ objComedero = objAreaGrabar->listaComederos[j];
			lineasArchivo[k] = objComedero->ID + ";" + objAreaGrabar->tipo_animal + ";" + objAreaGrabar->raza;
			k++;  //pasar a la siguiente linea -> arreglo
		}
	}
	/*Aquí ya mi array de lineasArchivo esta OK, con la información a grabar*/
	File::WriteAllLines("ComederoenArea.txt", lineasArchivo);

	//guardar en areasDeAnimales.txt
	array<String^>^ lineasArchivoArea = gcnew array<String^>(this->listaAreaDeAnimales->Count);
	for (int i = 0; i < this->listaAreaDeAnimales->Count; i++) {
		AreaDeAnimales^ objArea = this->listaAreaDeAnimales[i];  //
		lineasArchivoArea[i] = objArea->raza + ";" + objArea->color + ";" + objArea->tipo_animal + ";" + objArea->sexo + ";" + objArea->estado_salud + ";" + objArea->peso + ";" + objArea->edad + ";" + objArea->cantidad;
	}
	/*Aquí ya mi array de lineasArchivoArea esta OK, con la información a grabar*/
	File::WriteAllLines("AreasDeAnimales.txt", lineasArchivoArea);
}

AreaDeAnimales^ AreasDeAnimalesController::buscarAreaxAnimalxRaza(String^ tipoAnimal, String^ razaAnimal)
{
	AreaDeAnimales^ objArea;
	array<String^>^ lineas = File::ReadAllLines("AreasDeAnimales.txt");
	String^ separadores = ";";

	/*	AreaDeAnimales^ objArea = gcnew AreaDeAnimales(raza, color, tipo_animal, sexo, estado_salud, peso, edad, cantidad);

		List<Comederos^>^ listComederosArea = BuscarComederosArea(tipo_animal, raza);
		objArea->listaComederos = listComederosArea;
		this->listaAreaDeAnimales->Add(objArea);
	}*/
	for each (String ^ lineaAreas in lineas) {
		array<String^>^ palabras = lineaAreas->Split(separadores->ToCharArray());
		String^ raza_animal = palabras[0];
		String^ color = palabras[1];
		String^ tipo_animal = palabras[2];
		String^ sexo = palabras[3];
		String^ estado_salud = palabras[4];
		int peso = Convert::ToInt32(palabras[5]);
		int edad = Convert::ToInt32(palabras[6]);
		int cantidad = Convert::ToInt32(palabras[7]);

		if (tipoAnimal->ToUpper() == tipo_animal->ToUpper() && raza_animal->ToUpper() == razaAnimal->ToUpper()) {  //ToUpper para volver a mayuscula la palabra
			objArea = gcnew AreaDeAnimales(raza_animal, color, tipo_animal, sexo, estado_salud, peso, edad, cantidad);
			List<Comederos^>^ listComederoArea = BuscarComederosArea(tipo_animal, raza_animal);
			objArea->listaComederos = listComederoArea;
			break;
		}
	}
	return objArea;
}

void AreasDeAnimalesController::editarArea(String^ tipoAnimal, String^ raza, List<Comederos^>^ listaComedereos)
{
	this->listaAreaDeAnimales->Clear();
	CargarAreasDesdeArchivo();
	//encontrar area a editar
	for (int i = 0; i < this->listaAreaDeAnimales->Count; i++) {
		AreaDeAnimales^ objArea = this->listaAreaDeAnimales[i];
		if (objArea->tipo_animal == tipoAnimal && objArea->raza == raza) {
			this->listaAreaDeAnimales[i]->listaComederos = listaComedereos;
			break;
		}
	}


	int totalComederos = 0;
	for (int i = 0; i < this->listaAreaDeAnimales->Count; i++) {
		AreaDeAnimales^ objAreaGrabar = this->listaAreaDeAnimales[i];
		totalComederos = totalComederos + objAreaGrabar->listaComederos->Count;
	}

	//guardar en ComederoenArea.txt
	array<String^>^ lineasArchivo = gcnew array<String^>(totalComederos);
	int k = 0;
	for (int i = 0; i < this->listaAreaDeAnimales->Count; i++) {
		AreaDeAnimales^ objAreaGrabar = this->listaAreaDeAnimales[i];
		for (int j = 0; j < objAreaGrabar->listaComederos->Count; j++) {
			Comederos^ objComedero = objAreaGrabar->listaComederos[j];
			lineasArchivo[k] = objComedero->ID + ";" + objAreaGrabar->tipo_animal + ";" + objAreaGrabar->raza;
			k++;  //pasar a la siguiente linea -> arreglo
		}
	}
	/*Aquí ya mi array de lineasArchivo esta OK, con la información a grabar*/
	File::WriteAllLines("ComederoenArea.txt", lineasArchivo);

	//guardar en areasDeAnimales.txt
	array<String^>^ lineasArchivoArea = gcnew array<String^>(this->listaAreaDeAnimales->Count);
	for (int i = 0; i < this->listaAreaDeAnimales->Count; i++) {
		AreaDeAnimales^ objArea = this->listaAreaDeAnimales[i];  //
		lineasArchivoArea[i] = objArea->raza + ";" + objArea->color + ";" + objArea->tipo_animal + ";" + objArea->sexo + ";" + objArea->estado_salud + ";" + objArea->peso + ";" + objArea->edad + ";" + objArea->cantidad;
	}
	/*Aquí ya mi array de lineasArchivoArea esta OK, con la información a grabar*/
	File::WriteAllLines("AreasDeAnimales.txt", lineasArchivoArea);
}
