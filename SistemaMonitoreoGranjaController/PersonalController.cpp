#include "PersonalController.h"
#include "TareaController.h"
using namespace SistemaMonitoreoGranjaController;
using namespace System;
using namespace System::IO;
PersonalController::PersonalController() {
	this->listaPersonal = gcnew List<Personal^>();
}
void PersonalController::CargarPersonalDesdeArchivo() {

	this->listaPersonal->Clear();
	array<String^>^ lineas = File::ReadAllLines("Personal.txt");

	String^ separadores = ";";
	for each (String ^ lineaPersonal in lineas) {
		array<String^>^ palabras = lineaPersonal->Split(separadores->ToCharArray());
		String^ ID = palabras[0];
		String^ nombre = palabras[1];
		String^ ApPaterno = palabras[2];
		String^ ApMaterno = palabras[3];
		String^ Funcion = palabras[4];
		String^ horario = palabras[5];
		String^ asistencia = palabras[6];

		TareaController^ gestorTarea = gcnew TareaController();
		List<Tarea^>^ listaTareas = gestorTarea->buscarTareaxPersonal(ID);
		Personal^ objPersonal = gcnew Personal(ID, nombre, ApPaterno, ApMaterno, Funcion, horario, listaTareas,asistencia);
		this->listaPersonal->Add(objPersonal);
		
	}
}
List<Personal^>^ PersonalController::obtenerListaPersonal() {
	return this->listaPersonal;

}
void PersonalController::GuardarPersonalEnArchivo(Personal^ objPersonal) {
	this->listaPersonal->Clear();
	CargarPersonalDesdeArchivo();
	this->listaPersonal->Add(objPersonal);




	array<String^>^ lineasArchivo = gcnew array<String^>(this->listaPersonal->Count);


	for (int j = 0; j < this->listaPersonal->Count; j++) {
		Personal^objPersonal2 = this->listaPersonal[j];
		lineasArchivo[j] = objPersonal2->ID + ";" + objPersonal2->nombre + ";" + objPersonal2->ApPaterno + ";" + objPersonal2->ApMaterno + ";" + objPersonal2->funcion + ";" + objPersonal2->horario + ";" + objPersonal2->asistencia;
		
	}
	File::WriteAllLines("Personal.txt", lineasArchivo);
}
/*Aquí ya mi array de lineasArchivo esta OK, con la información a grabar*/
List<Personal^>^ PersonalController::buscarPersonal(String^ nombreBuscar) {

	List<Personal^>^ listaPersonalEncontrados = gcnew List<Personal^>();

	array<String^>^ lineas = File::ReadAllLines("Personal.txt");
	String^ separadores = ";";
	for each (String ^ lineaAlumno in lineas) {
		array<String^>^ palabras = lineaAlumno->Split(separadores->ToCharArray());
		String^ ID = palabras[0];
		String^ nombre = palabras[1];
		String^ ApPaterno = palabras[2];
		String^ ApMaterno = palabras[3];
		String^ funcion = palabras[4];
		String^ horario = palabras[5];
		String^ asistencia = palabras[6];

		TareaController^ gestorTarea = gcnew TareaController();
		if (nombreBuscar == nombre) {
			List<Tarea^>^ listaTareas = gestorTarea->buscarTareaxPersonal(ID);
			Personal^ objPersonalEncontrado = gcnew Personal(ID, nombre, ApPaterno, ApMaterno, funcion, horario, listaTareas, asistencia);
			listaPersonalEncontrados->Add(objPersonalEncontrado);
		}
	}
	return listaPersonalEncontrados;
}

void PersonalController::EliminarPersonal(String^ IDPersonalEliminar) {
	CargarPersonalDesdeArchivo();
	for (int i = 0; i < this->listaPersonal->Count; i++) {
		Personal^ objPartido = this->listaPersonal[i];
		if (objPartido->ID == IDPersonalEliminar) {
			this->listaPersonal->RemoveAt(i);
			break;
		}
	}
	array<String^>^ lineasArchivo = gcnew array<String^>(this->listaPersonal->Count);


	for (int j = 0; j < this->listaPersonal->Count; j++) {
		Personal^ objPersonal = this->listaPersonal[j];
		lineasArchivo[j] = objPersonal->ID + ";" + objPersonal->nombre + ";" + objPersonal->ApPaterno + ";" + objPersonal->ApMaterno + ";" + objPersonal->funcion + ";" + objPersonal->horario + ";" + objPersonal->asistencia;

	}
	File::WriteAllLines("Personal.txt", lineasArchivo);


}

Personal^ PersonalController::buscarPersonalxCodigo(String^ IDBuscar) {
	Personal^ objPersonalEncontrado;
	array<String^>^ lineas = File::ReadAllLines("Personal.txt");
	String^ separadores = ";";
	for each (String ^ lineaAlumno in lineas) {
		array<String^>^ palabras = lineaAlumno->Split(separadores->ToCharArray());
		String^ ID = palabras[0];
		String^ nombre = palabras[1];
		String^ ApPaterno = palabras[2];
		String^ ApMaterno = palabras[3];
		String^ funcion = palabras[4];
		String^ horario = palabras[5];
		String^ asistencia = palabras[6];

		TareaController^ gestorTarea = gcnew TareaController();
		if (IDBuscar == ID) {
			List<Tarea^>^ listaTareas = gestorTarea->buscarTareaxPersonal(ID);
			objPersonalEncontrado = gcnew Personal(ID, nombre, ApPaterno, ApMaterno, funcion, horario, listaTareas, asistencia);
			break;
		}
	}
	return objPersonalEncontrado;


}

void PersonalController::asignarTarea(String^ IDpersonalSeleccionado, List<Tarea^>^ listaTareas)
{
	this->listaPersonal->Clear();
	CargarPersonalDesdeArchivo();
	for (int i = 0; i < this->listaPersonal->Count; i++) {
		Personal^ objPersonal = this->listaPersonal[i];
		if (objPersonal->ID == IDpersonalSeleccionado) {
			this->listaPersonal[i]->listaTareas = listaTareas;
			break;
		}
	}

	/*Primero vamos a guardar la información de los miembros de los partidos
	en su respectivo archivo*/
	/*1.- Voy a contar cuantos miembros en total hay entre todos lo partidos*/
	int totalTareas = 0;
	for (int i = 0; i < this->listaPersonal->Count; i++) {
		Personal^ objPersonalGrabar = this->listaPersonal[i];
		totalTareas = totalTareas + objPersonalGrabar->listaTareas->Count;
	}
	array<String^>^ lineasArchivo = gcnew array<String^>(totalTareas);
	int k = 0;
	for (int i = 0; i < this->listaPersonal->Count; i++) {
		Personal^ objPersonalGrabar = this->listaPersonal[i];
		for (int j = 0; j < objPersonalGrabar->listaTareas->Count; j++) {
			Tarea^ objTarea = objPersonalGrabar->listaTareas[j];
			lineasArchivo[k] = objTarea->IDtarea + ";" + objPersonalGrabar->ID;
			k++;
		}
	}
	/*Aquí ya mi array de lineasArchivo esta OK, con la información a grabar*/
	File::WriteAllLines("TareaxPersonal.txt", lineasArchivo);

	array<String^>^ lineasArchivoPersonal = gcnew array<String^>(this->listaPersonal->Count);
	for (int i = 0; i < this->listaPersonal->Count; i++) {
		Personal^ objPersonal = this->listaPersonal[i];
		lineasArchivoPersonal[i] = objPersonal->ID + ";" + objPersonal->nombre + ";" + objPersonal->ApPaterno + ";" + objPersonal->ApMaterno + ";" + objPersonal->funcion + ";" + objPersonal->horario + ";" + objPersonal->asistencia;
	}
	/*Aquí ya mi array de lineasArchivoPartido esta OK, con la información a grabar*/
	File::WriteAllLines("Personal.txt", lineasArchivoPersonal);
}
