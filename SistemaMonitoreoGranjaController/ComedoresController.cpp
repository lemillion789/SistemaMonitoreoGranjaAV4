#include "ComedoresController.h"
#include "SensoresController.h"

using namespace SistemaMonitoreoGranjaController;
using namespace System;
using namespace System::IO;
ComedoresController::ComedoresController() {
	this->listaComederos = gcnew List<Comederos^>();
}


Comederos^ ComedoresController::buscarComedero(String^ ID) {
	Comederos^ objComederoEncontrado;
	array<String^>^ lineas = File::ReadAllLines("Comederos.txt");
	String^ separadores = ";";
	for each (String ^ lineaComedero in lineas) {
		array<String^>^ palabras = lineaComedero->Split(separadores->ToCharArray());
		String^ IDcomedero = palabras[0];
		String^ nombre = palabras[1];
		int capComida = Convert::ToInt32(palabras[2]);
		int capAgua = Convert::ToInt32(palabras[3]);
		int capProteinas = Convert::ToInt32(palabras[4]);
		String^ horaLlenado = palabras[5];
		if (ID == IDcomedero) {
			objComederoEncontrado = gcnew Comederos(capComida, capAgua, capProteinas, horaLlenado, nombre, IDcomedero);
			objComederoEncontrado->listaSensores = buscarSensoresComedero(IDcomedero);
			//falta alimento
			break;
		}
	}
	return objComederoEncontrado;
}

List<Comederos^>^ ComedoresController::buscarComederoxCapacidadMinima(int capAguaMin, int capProteinasMin, int capComidaMin)
{
	List<Comederos^>^ listaComederosEncontrados = gcnew List<Comederos^>(); 

	array<String^>^ lineas = File::ReadAllLines("Comederos.txt");
	String^ separadores = ";";
	for each (String ^ lineaComedero in lineas) {
		array<String^>^ palabras = lineaComedero->Split(separadores->ToCharArray());
		String^ IDcomedero = palabras[0];
		String^ nombre = palabras[1];
		int capComida = Convert::ToInt32(palabras[2]);
		int capAgua = Convert::ToInt32(palabras[3]);
		int capProteinas = Convert::ToInt32(palabras[4]);
		String^ horaLlenado = palabras[5];
		if (capAgua> capAguaMin && capComida > capComidaMin && capProteinas > capProteinasMin) {
			Comederos^ objComederoEncontrado = gcnew Comederos(capComida, capAgua, capProteinas, horaLlenado, nombre, IDcomedero);
			objComederoEncontrado->listaSensores = buscarSensoresComedero(IDcomedero);
			listaComederosEncontrados->Add(objComederoEncontrado);
			//falta alimento
		}
	}
	return listaComederosEncontrados;
}

int SistemaMonitoreoGranjaController::ComedoresController::verificarSiComederoPerteneceArea(String^ IDComedero)
{
	int pertenece = 0;
	array<String^>^ lineas = File::ReadAllLines("ComederoEnArea.txt");
	String^ separadores = ";";
	for each (String ^ line in lineas) {
		array<String^>^ palabras = line->Split(separadores->ToCharArray());
		String^ IDComederoArchivo = palabras[0];
		if (IDComederoArchivo == IDComedero) {
			pertenece = 1;
			break;
		}
	}
	return pertenece;
}

void ComedoresController::CargarComederoDesdeArchivo()
{
	this->listaComederos->Clear();

	array<String^>^ lineas = File::ReadAllLines("Comederos.txt"); //leer la info del archivo y ponerla en un arreglo

	String^ separadores = ";";
	for each (String ^ line in lineas) {
		array<String^>^ palabras = line->Split(separadores->ToCharArray());
		String^ ID = palabras[0];
		String^ nombre = palabras[1];
		int capComida = Convert::ToInt32(palabras[2]);
		int capAgua = Convert::ToInt32(palabras[3]);
		int capProteinas = Convert::ToInt32(palabras[4]);
		String^ horaLlenado = palabras[5];

		Comederos^ objComedero = gcnew Comederos(capComida, capAgua, capProteinas, horaLlenado, nombre, ID);
		List<Sensores^>^ listSensoresComedero = buscarSensoresComedero(ID);
		//Alimentos^ objAlimento = buscarAlimentoComedero();

		objComedero->listaSensores = listSensoresComedero;
		//objComedero->objAlimento = objAlimento;

		this->listaComederos->Add(objComedero);
	}
}

List<Sensores^>^ ComedoresController::buscarSensoresComedero(String^ IDcomedero)
{
	List<Sensores^>^ listaEncontrados = gcnew List<Sensores^>();
	array<String^>^ lineas = File::ReadAllLines("SensoresEnComedero.txt"); //IDsensor;IDcomedero
	String^ separadores = ";";
	for each (String ^ line in lineas) {
		array<String^>^ palabras = line->Split(separadores->ToCharArray());
		String^ Idsensor = palabras[0];
		String^ Idcomedero = palabras[1];
		if (Idcomedero == IDcomedero) {
			//buscar a los alumnos como objetos 
			SensoresController^ gestorSensorController = gcnew SensoresController();
			Sensores^ objSensor = gestorSensorController->buscarSensor(Idsensor);
			listaEncontrados->Add(objSensor);
			//falta alimento
		}
	}
	return listaEncontrados;
}

int ComedoresController::ObtenerCantidadComederos()
{
	return this->listaComederos->Count;
}

Comederos^ ComedoresController::ObtenerComederoLista(int indice)
{
	return this->listaComederos[indice];
}

List<Comederos^>^ ComedoresController::obtenerListaComederos()
{
	return this->listaComederos;
}

void SistemaMonitoreoGranjaController::ComedoresController::GuardarComederoEnArchivo(Comederos^ objComedero)
{
	this->listaComederos->Clear();   
	CargarComederoDesdeArchivo();			
	this->listaComederos->Add(objComedero);		
	

	int totalSensores = 0;
	for (int i = 0; i < this->listaComederos->Count; i++) {
		Comederos^ objComedorGrabar = this->listaComederos[i]; 
		totalSensores = totalSensores + objComedorGrabar->listaSensores->Count;
	}

	//guardar en miembrosPartido.txt
	array<String^>^ lineasArchivo = gcnew array<String^>(totalSensores); //crear arreglo de un largo = total de sensores
	int k = 0;
	for (int i = 0; i < this->listaComederos->Count; i++) {
		Comederos^ objComedorGrabar = this->listaComederos[i]; 
		for (int j = 0; j < objComedorGrabar->listaSensores->Count; j++) {
			Sensores^ objSensor = objComedorGrabar->listaSensores[j];
			lineasArchivo[k] = objSensor->ID + ";" + objComedorGrabar->ID;  //linea[0]: codigoAlumno;codigoPartido
			k++;  //pasar a la siguiente linea -> arreglo
		}
	}
	/*Aquí ya mi array de lineasArchivo esta OK, con la información a grabar*/
	File::WriteAllLines("SensoresEnComedero.txt", lineasArchivo);


	array<String^>^ lineasArchivoPartido = gcnew array<String^>(this->listaComederos->Count);
	for (int i = 0; i < this->listaComederos->Count; i++) {
		Comederos^ objComedero = this->listaComederos[i];  //
		lineasArchivoPartido[i] = objComedero->ID + ";" + objComedero->nombre + ";" + objComedero->capComida + ";" + objComedero->capAgua + ";" + objComedero->capProteinas + ";" + objComedero->horaLlenado;
	}
	/*Aquí ya mi array de lineasArchivoPartido esta OK, con la información a grabar*/
	File::WriteAllLines("Comederos.txt", lineasArchivoPartido);

	//falta guardar alimentos
}

List<Comederos^>^ ComedoresController::buscarComederos(String^ nombreComedero)
{
	List<Comederos^>^ listaEncontrados = gcnew List<Comederos^>();
	array<String^>^ lineas = File::ReadAllLines("Comederos.txt");
	String^ separadores = ";";
	for each (String ^ line in lineas) {
		array<String^>^ palabras = line->Split(separadores->ToCharArray());
		String^ ID = palabras[0];
		String^ nombre = palabras[1];
		int capComida = Convert::ToInt32(palabras[2]);
		int capAgua = Convert::ToInt32(palabras[3]);
		int capProteinas = Convert::ToInt32(palabras[4]);
		String^ horaLlenado = palabras[5];
		if (nombreComedero->ToUpper() == nombre->ToUpper()) {  //ToUpper para volver a mayuscula la palabra
			Comederos^ objComederoEncontrado = gcnew Comederos(capComida, capAgua, capProteinas, horaLlenado, nombre, ID);
			objComederoEncontrado->listaSensores = buscarSensoresComedero(ID);
			listaEncontrados->Add(objComederoEncontrado);
			//falta alimento
		}
	}
	return listaEncontrados;
}

void ComedoresController::eliminarComedero(String^ IDComedero)
{
	CargarComederoDesdeArchivo();
	for (int i = 0; i < this->listaComederos->Count; i++) {
		Comederos^ objComedero = this->listaComederos[i];
		if (objComedero->ID == IDComedero) {   
			this->listaComederos->RemoveAt(i);  
			break;
		}
	}


	int totalSensores = 0;
	for (int i = 0; i < this->listaComederos->Count; i++) {
		Comederos^ objComedorGrabar = this->listaComederos[i];
		totalSensores = totalSensores + objComedorGrabar->listaSensores->Count;
	}
	//guardar en SensoresEnComedero.txt
	array<String^>^ lineasArchivo = gcnew array<String^>(totalSensores); //crear arreglo de un largo = total de sensores
	int k = 0;
	for (int i = 0; i < this->listaComederos->Count; i++) {
		Comederos^ objComedorGrabar = this->listaComederos[i];
		for (int j = 0; j < objComedorGrabar->listaSensores->Count; j++) {
			Sensores^ objSensor = objComedorGrabar->listaSensores[j];
			lineasArchivo[k] = objSensor->ID + ";" + objComedorGrabar->ID;  //linea[0]: codigoAlumno;codigoPartido
			k++;  //pasar a la siguiente linea -> arreglo
		}
	}
	/*Aquí ya mi array de lineasArchivo esta OK, con la información a grabar*/
	File::WriteAllLines("SensoresEnComedero.txt", lineasArchivo);

	array<String^>^ lineasArchivoPartido = gcnew array<String^>(this->listaComederos->Count);
	for (int i = 0; i < this->listaComederos->Count; i++) {
		Comederos^ objComedero = this->listaComederos[i];  //
		lineasArchivoPartido[i] = objComedero->ID + ";" + objComedero->nombre + ";" + objComedero->capComida + ";" + objComedero->capAgua + ";" + objComedero->capProteinas + ";" + objComedero->horaLlenado;
	}
	/*Aquí ya mi array de lineasArchivoPartido esta OK, con la información a grabar*/
	File::WriteAllLines("Comederos.txt", lineasArchivoPartido);

	//falta guardar alimentos
}

Comederos^ ComedoresController::buscarComederoxID(String^ IDComedero)
{
	Comederos^ objComederoEncontrado;
	array<String^>^ lineas = File::ReadAllLines("Comederos.txt");
	String^ separadores = ";";
	for each (String ^ lineaComedero in lineas) {
		array<String^>^ palabras = lineaComedero->Split(separadores->ToCharArray());
		String^ ID = palabras[0];
		String^ nombre = palabras[1];
		int capComida = Convert::ToInt32(palabras[2]);
		int capAgua = Convert::ToInt32(palabras[3]);
		int capProteinas = Convert::ToInt32(palabras[4]);
		String^ horaLlenado = palabras[5];
		if (ID == IDComedero) {
			objComederoEncontrado = gcnew Comederos(capComida, capAgua, capProteinas, horaLlenado, nombre, ID);
			objComederoEncontrado->listaSensores = buscarSensoresComedero(ID);
			//falta alimento
			break;
		}
	}
	return objComederoEncontrado;
	
		
}

void ComedoresController::editarComedero(String^ IDComederoEditar, List<Sensores^>^ listaSensores)
{
	this->listaComederos->Clear();

	CargarComederoDesdeArchivo();
	for (int i = 0; i < this->listaComederos->Count; i++) {
		Comederos^ objComedero = this->listaComederos[i];
		if (objComedero->ID == IDComederoEditar) {
			this->listaComederos[i]->listaSensores = listaSensores;
			break;
		}
	}


	int totalSensores = 0;
	for (int i = 0; i < this->listaComederos->Count; i++) {
		Comederos^ objComedorGrabar = this->listaComederos[i];
		totalSensores = totalSensores + objComedorGrabar->listaSensores->Count;
	}
	//guardar en SensoresEnComedero.txt
	array<String^>^ lineasArchivo = gcnew array<String^>(totalSensores); //crear arreglo de un largo = total de sensores
	int k = 0;
	for (int i = 0; i < this->listaComederos->Count; i++) {
		Comederos^ objComedorGrabar = this->listaComederos[i];
		for (int j = 0; j < objComedorGrabar->listaSensores->Count; j++) {
			Sensores^ objSensor = objComedorGrabar->listaSensores[j];
			lineasArchivo[k] = objSensor->ID + ";" + objComedorGrabar->ID;  //linea[0]: codigoAlumno;codigoPartido
			k++;  //pasar a la siguiente linea -> arreglo
		}
	}

	/*Aquí ya mi array de lineasArchivo esta OK, con la información a grabar*/
	File::WriteAllLines("SensoresEnComedero.txt", lineasArchivo);


	array<String^>^ lineasArchivoPartido = gcnew array<String^>(this->listaComederos->Count);
	for (int i = 0; i < this->listaComederos->Count; i++) {
		Comederos^ objComedero = this->listaComederos[i];  //
		lineasArchivoPartido[i] = objComedero->ID + ";" + objComedero->nombre + ";" + objComedero->capComida + ";" + objComedero->capAgua + ";" + objComedero->capProteinas + ";" + objComedero->horaLlenado;
	}
	/*Aquí ya mi array de lineasArchivoPartido esta OK, con la información a grabar*/
	File::WriteAllLines("Comederos.txt", lineasArchivoPartido);

	//falta guardar alimentos
}
