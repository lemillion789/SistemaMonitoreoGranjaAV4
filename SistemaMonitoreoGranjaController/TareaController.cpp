#include "SensoresController.h"
#include "TareaController.h"
#include "AreasDeAnimalesController.h"
#include "MedicionController.h"
#include "AdvertenciaController.h"
#include "PersonalController.h"
using namespace SistemaMonitoreoGranjaController;

using namespace SistemaMonitoreoGranjaModel;
using namespace System;
using namespace System::IO;
TareaController::TareaController() {
	this->listaTarea = gcnew List<Tarea^>();
}

void SistemaMonitoreoGranjaController::TareaController::realizarTareaSensor(String^ IdSensor)
{
	SensoresController^ GestorSensores = gcnew SensoresController();
	MedicionController^ gestorMedicion = gcnew MedicionController();
	GestorSensores->CargarSensores();
	List<Sensores^>^ listaSensores = GestorSensores->obtenerListaSensores();

	//Sensores^ objSensor = GestorSensores->buscarSensor(IdSensor);
	//Medicion^ ultimaMedicion = objSensor->listaMediciones[(objSensor->listaMediciones->Count) - 1];
	//String^ tipoSensor = objSensor->tipoSensor;
	int MedidaCorregida = 0;
	
	//corregir ultimaMedida

	for (int i = 0; i < listaSensores->Count; i++) {
		Sensores^ objSensorGrab = listaSensores[i];

		if (objSensorGrab->ID == IdSensor) {
			if (objSensorGrab->tipoSensor == "Temperatura") {
				MedidaCorregida = 25;
			}
			else if (objSensorGrab->tipoSensor == "Humedad") {
				MedidaCorregida = 55;
			}
			else if (objSensorGrab->tipoSensor == "Nivel de Agua") {
				MedidaCorregida = 100;
			}
			else if (objSensorGrab->tipoSensor == "Peso") { //Nivel de comida
				MedidaCorregida = 100;
			}
			else if (objSensorGrab->tipoSensor == "Nivel de Proteinas") {
				MedidaCorregida = 100;
			}
			//AGREGAR LA MEDICION NUEVA
			List<Medicion^>^ listaNueva = gestorMedicion->agregarMedicionAleatoria(objSensorGrab, MedidaCorregida);
			objSensorGrab->listaMediciones = listaNueva;
			break;
		}

	}

	//GUARDAR
	int totalMediciones = 0;
	for (int i = 0; i < listaSensores->Count; i++) {
		Sensores^ objSensorGrab = listaSensores[i];
		totalMediciones = totalMediciones + objSensorGrab->listaMediciones->Count;
	}

	//guardar en Mediciones.txt
	array<String^>^ lineasArchivo = gcnew array<String^>(totalMediciones);
	int k = 0;
	for (int i = 0; i < listaSensores->Count; i++) {
		Sensores^ objSensorGrab = listaSensores[i];
		for (int j = 0; j < objSensorGrab->listaMediciones->Count; j++) {
			Medicion^ objMedicion = objSensorGrab->listaMediciones[j];
			lineasArchivo[k] = objSensorGrab->ID + ";" + objMedicion->medida + ";" + objMedicion->unidades + ";" + objMedicion->registro_hora;
			k++;  //pasar a la siguiente linea -> arreglo
		}
	}
	/*Aquí ya mi array de lineasArchivo esta OK, con la información a grabar*/
	File::WriteAllLines("Mediciones.txt", lineasArchivo);

}
void TareaController::TareaPendiente(List<Advertencia^>^ listaTareasProgramadas) {
	//GENERAR TAREAS
	/*SensoresController^ objSensor = gcnew SensoresController();
	String^ Unidades = objSensor->BuscarUnidadxIDSensor(IDSensor);
	AreasDeAnimalesController^ objArea = gcnew AreasDeAnimalesController();
	String^ IDArea = objArea->AreaDeAnimalesxIDsensor(IDSensor);
	String^ Animal = objArea->AnimalxIDAreaAnimales(IDArea);
	*/
	this->listaTarea->Clear();
	AreasDeAnimalesController^ objArea = gcnew AreasDeAnimalesController();
	for (int i = 0; i < listaTareasProgramadas->Count; i++) {
		Sensores^ objSensor = listaTareasProgramadas[i]->objSensor;
		int cantMediciones = objSensor->listaMediciones->Count;
		String^ IDArea = objArea->AreaDeAnimalesxIDsensor(objSensor->ID);
		AreaDeAnimales^ objAreaAnimal = objArea->buscarAreaxID(IDArea);
		String^ IDtarea = i.ToString("D5");
		String^ Lugar = "En Area de " + objAreaAnimal->tipo_animal + " " + objAreaAnimal->raza + " de sexo " + objAreaAnimal->sexo;
		String^ Fecha = objSensor->listaMediciones[(cantMediciones)-1]->registro_hora;
		String^ Descripcion = "El sensor de " + objSensor->tipoSensor + " Detecto que el comedero de " + objAreaAnimal->tipo_animal + " esta vacio o tiene problemas";
		Tarea^ objTarea = gcnew Tarea(IDtarea, Lugar, Fecha, Descripcion);
		this->listaTarea->Add(objTarea);
	}
	
}

List <Tarea^>^ TareaController::RetornarListaTarea() {

	 return this->listaTarea;
}
void TareaController::GuardarListaEnTXT() {

array<String^>^ lineasArchivo = gcnew array<String^>(this->listaTarea->Count);
	for (int j = 0; j < this->listaTarea->Count; j++) {
		Tarea^ objTarea2 = this->listaTarea[j];
		lineasArchivo[j] = objTarea2->IDtarea + ";" + objTarea2->lugar + ";" + objTarea2->fecha + ";" + objTarea2->descripcion;

	}
	File::WriteAllLines("Tarea.txt", lineasArchivo);
}

void TareaController::CargarTareaDesdeArchivo() {

	this->listaTarea->Clear();
	array<String^>^ lineas = File::ReadAllLines("Tarea.txt");

	String^ separadores = ";";
	for each (String ^ lineaPersonal in lineas) {
		array<String^>^ palabras = lineaPersonal->Split(separadores->ToCharArray());
		String^ Lugar = palabras[1];
		String^ Fecha = palabras[2];
		String^ Descripcion = palabras[3];
		String^ ID = palabras[0];
		Tarea^ objTarea = gcnew Tarea(ID,Lugar, Fecha, Descripcion);
		this->listaTarea->Add(objTarea);

	}
}

void TareaController::asignarTarea(String^ IDPersonal, String^ IDtarea)
{
	this->listaTarea->Clear();
	Tarea^ objTarea = buscarTareaxID(IDtarea);

	PersonalController^ gestorPersonal = gcnew PersonalController();
	Personal^ objPersonal = gestorPersonal->buscarPersonalxCodigo(IDPersonal);
	objPersonal->listaTareas->Add(objTarea);
	/*
	gestorPersonal->CargarPersonalDesdeArchivo();
	List<Personal^>^ listaPersonal = gestorPersonal->obtenerListaPersonal();
	//guardar
	int totalTareas = 0;
	for (int i = 0; i < listaPersonal->Count; i++) {
		Personal^ objPersonalGrabar = listaPersonal[i];
		totalTareas = totalTareas + objPersonalGrabar->listaTareas->Count;
	}
	array<String^>^ lineasArchivo = gcnew array<String^>(totalTareas);
	int k = 0;
	for (int i = 0; i < listaPersonal->Count; i++) {
		Personal^ Personal = listaPersonal[i];
		for (int j = 0; j < objPersonal->listaTareas->Count; j++) {
			Tarea^ objTarea2 = objPersonal->listaTareas[j];
			lineasArchivo[k] = objTarea2->IDtarea + ";" + objPersonal->ID;
			k++;
		}
	}
	File::WriteAllLines("TareaxPersonal.txt", lineasArchivo);
	*/
	/*int pertenecePartido = objGestorAlumno->verificarSiAlumnoPertencePartidoPolitico(codigoAlumnoSeleccionado);
	if (!pertenecePartido) {
		//Aquí voy a ver si no esta repetido
		int esta_repetido = 0;
		for (int i = 0; i < this->listaMiembros->Count; i++) {
			Alumno^ objAlumno = this->listaMiembros[i];
			if (objAlumno->codigo == codigoAlumnoSeleccionado) {
				esta_repetido = 1;
				break;
			}
		}
		if (!esta_repetido) {
			Personal^ objPersonal = gestorPersonal->buscarPersonalxCodigo(IDPersonal);
			objPersonal->listaTareas->Add(objTarea);
			this->Close();
		}
		else {
			MessageBox::Show("El alumno ya se encuentra dentro de la lista de miembros del partido");
		}
	}
	else {
		MessageBox::Show("El alumno ya pertenece a otro partido");
	}*/

}

List<Tarea^>^ TareaController::buscarTareaxPersonal(String^ IDPersonal)
{
	List<Tarea^>^ listaEncontrados = gcnew List<Tarea^>();
	array<String^>^ lineas = File::ReadAllLines("TareaxPersonal.txt");		//IDTarea,IDpersonal
	String^ separadores = ";";
	for each (String ^ line in lineas) {
		array<String^>^ palabras = line->Split(separadores->ToCharArray());
		String^ IDtarea = palabras[0];
		String^ IDpersonal = palabras[1];
		if (IDpersonal == IDPersonal) {
			Tarea^ objTarea = buscarTareaxID(IDtarea);
			listaEncontrados->Add(objTarea);
		}
	}
	return listaEncontrados;
}
Tarea^ TareaController::buscarTareaxID(String^ ID) {
	Tarea^ objEncontrado;
	array<String^>^ lineas = File::ReadAllLines("Tarea.txt");
	String^ separadores = ";";
	for each (String ^ line in lineas) {
		array<String^>^ palabras = line->Split(separadores->ToCharArray());
		String^ IDtarea = palabras[0];
		String^ lugar = palabras[1];
		String^ fecha = palabras[2];
		String^ descripcion = palabras[3];
		if (IDtarea == ID) {
			objEncontrado = gcnew Tarea(IDtarea,lugar,fecha,descripcion);
			break;
		}
	}
	return objEncontrado;
}

int TareaController::verificarSiTareaPertenecePersonal(String^ IDTareaAsignar)
{
	int pertenece = 0;
	array<String^>^ lineas = File::ReadAllLines("TareaxPersonal.txt");
	String^ separadores = ";";
	for each (String ^ line in lineas) {
		array<String^>^ palabras = line->Split(separadores->ToCharArray());
		String^ IDTarea = palabras[0];
		if (IDTarea == IDTareaAsignar) {
			pertenece = 1;
			break;
		}
	}
	return pertenece;
}
