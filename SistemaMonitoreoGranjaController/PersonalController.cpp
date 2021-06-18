#include "PersonalController.h"

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
		String^ tareas = palabras[6];
		String^ asistencia = palabras[7];

		Personal^ objPersonal = gcnew Personal(ID, nombre, ApPaterno, ApMaterno, Funcion, horario, tareas, asistencia);
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
		lineasArchivo[j] = objPersonal2->ID + ";" + objPersonal2->nombre + ";" + objPersonal2->ApPaterno + ";" + objPersonal2->ApMaterno + ";" + objPersonal2->funcion + ";" + objPersonal2->horario +";"+ objPersonal2->tareas + ";" + objPersonal2->asistencia;
		
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
		String^ tareas = palabras[6];
		String^ asistencia = palabras[7];

		if (nombreBuscar == nombre) {
			Personal^ objPersonalEncontrado = gcnew Personal(ID, nombre, ApPaterno, ApMaterno, funcion, horario, tareas, asistencia);
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
		lineasArchivo[j] = objPersonal->ID + ";" + objPersonal->nombre + ";" + objPersonal->ApPaterno + ";" + objPersonal->ApMaterno + ";" + objPersonal->funcion + ";" + objPersonal->horario +";"+ objPersonal->tareas + ";" + objPersonal->asistencia;

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
		String^ tareas = palabras[6];
		String^ asistencia = palabras[7];

		if (IDBuscar == ID) {
			objPersonalEncontrado = gcnew Personal(ID, nombre, ApPaterno, ApMaterno, funcion, horario, tareas, asistencia);
			break;
		}
	}
	return objPersonalEncontrado;


}
