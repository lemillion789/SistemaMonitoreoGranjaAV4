#include "PersonalController.h"
#include "TareaController.h"
using namespace SistemaMonitoreoGranjaController;
using namespace System;
using namespace System::IO;
PersonalController::PersonalController() {
	this->listaPersonal = gcnew List<Personal^>();
	this->objConexion = gcnew SqlConnection();
}
/*
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
/*Aquí ya mi array de lineasArchivo esta OK, con la información a grabar
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
}*/
// TODO EN BASE DE DATOS 
void PersonalController::AbrirConexion() {

	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20152005;User ID=a20152005;Password=WLt8qnYH;";
	this->objConexion->Open();
}
void PersonalController::CerrarConexion() {
	this->objConexion->Close();
}
List<Personal^>^ PersonalController::buscarPersonalxNombreBD(String^ Nombre) {
	List<Personal^>^ listaPersonal=gcnew List<Personal^>();
	Personal^ objPersonal = nullptr;
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from Personal where Nombre='" + Nombre + "';";
	SqlDataReader^ objData = objQuery->ExecuteReader(); /*Cuando es un select, se utiliza ExecuteReader*/
	while (objData->Read()) {
		String^ ID =Convert::ToString( (safe_cast<int>(objData[0])));
		String^ Nombres = safe_cast<String^>(objData[1]);
		String^ apellidoPaterno = safe_cast<String^>(objData[2]);
		String^ apellidoMaterno = safe_cast<String^>(objData[3]);
		String^ Funcion = safe_cast<String^>(objData[4]);
		String^ Horario = safe_cast<String^>(objData[5]);
		//String^ Tarea = safe_cast<String^>(objData[6]);
		String^ Asistencia = safe_cast<String^>(objData[6]);
		objPersonal = gcnew Personal(ID, Nombres, apellidoPaterno, apellidoMaterno, Funcion, Horario, Asistencia);
		listaPersonal->Add(objPersonal);
	}
	objData->Close();
	CerrarConexion();
	return listaPersonal;
}
List<Personal^>^ PersonalController::ObtenerlistaPersonaldesdeBD() {

	List<Personal^>^ listaPersonal = gcnew List<Personal^>();
	Personal^ objPersonal = nullptr;
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from Personal;";
	SqlDataReader^ objData = objQuery->ExecuteReader(); /*Cuando es un select, se utiliza ExecuteReader*/
	while (objData->Read()) {
		String^ ID = Convert::ToString((safe_cast<int>(objData[0])));
		String^ Nombres = safe_cast<String^>(objData[1]);
		String^ apellidoPaterno = safe_cast<String^>(objData[2]);
		String^ apellidoMaterno = safe_cast<String^>(objData[3]);
		String^ Funcion = safe_cast<String^>(objData[4]);
		String^ Horario = safe_cast<String^>(objData[5]);
		//String^ Tarea = safe_cast<String^>(objData[6]);
		String^ Asistencia = safe_cast<String^>(objData[6]);
		objPersonal = gcnew Personal(ID, Nombres, apellidoPaterno, apellidoMaterno, Funcion, Horario, Asistencia);
		listaPersonal->Add(objPersonal);
	}
	objData->Close();
	CerrarConexion();
	return listaPersonal;

}
void PersonalController::EliminarPersonalBD(String^ IDPersonalEliminar) {


	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "Delete FROM Personal where ID = " + IDPersonalEliminar + "; ";
objQuery->ExecuteNonQuery();
	CerrarConexion();
}
void PersonalController::GuardarPersonalEnBD(Personal^ objPersonal) {

	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "insert into Personal values (@p1,@p2,@p3,@p4,@p5,@p6,@p7);";
	/*Esto de los parámetros es solo para el insert*/
	SqlParameter^ p1 = gcnew SqlParameter("@p1", System::Data::SqlDbType::Int);
	p1->Value = objPersonal->ID;
	SqlParameter^ p2 = gcnew SqlParameter("@p2", System::Data::SqlDbType::VarChar, 50);
	p2->Value = objPersonal->nombre;
	SqlParameter^ p3 = gcnew SqlParameter("@p3", System::Data::SqlDbType::VarChar, 50);
	p3->Value = objPersonal->ApPaterno;
	SqlParameter^ p4 = gcnew SqlParameter("@p4", System::Data::SqlDbType::VarChar, 50);
	p4->Value = objPersonal->ApMaterno;
	SqlParameter^ p5 = gcnew SqlParameter("@p5", System::Data::SqlDbType::VarChar, 50);
	p5->Value = objPersonal->funcion;
	SqlParameter^ p6 = gcnew SqlParameter("@p6", System::Data::SqlDbType::VarChar, 50);
	p6->Value = objPersonal->horario;
	//SqlParameter^ p7 = gcnew SqlParameter("@p7", System::Data::SqlDbType::VarChar, 50);
	//p7->Value = objPersonal->tareas;
	SqlParameter^ p7 = gcnew SqlParameter("@p7", System::Data::SqlDbType::VarChar, 50);
	p7->Value = objPersonal->asistencia;
	objQuery->Parameters->Add(p1);
	objQuery->Parameters->Add(p2);
	objQuery->Parameters->Add(p3);
	objQuery->Parameters->Add(p4);
	objQuery->Parameters->Add(p5);
	objQuery->Parameters->Add(p6);
	objQuery->Parameters->Add(p7);
	//objQuery->Parameters->Add(p8);
	/*Este método se ejecuta tanto para el update, delete e insert*/
	objQuery->ExecuteNonQuery();
	CerrarConexion();



}
Personal^ PersonalController::buscarPersonalxIDBD(String^ ID) {
	List<Personal^>^ listaPersonal = gcnew List<Personal^>();
	Personal^ objPersonal = nullptr;
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from Personal where ID='" + ID + "';";
	SqlDataReader^ objData = objQuery->ExecuteReader(); /*Cuando es un select, se utiliza ExecuteReader*/
	while (objData->Read()) {
		String^ ID = Convert::ToString((safe_cast<int>(objData[0])));
		String^ Nombres = safe_cast<String^>(objData[1]);
		String^ apellidoPaterno = safe_cast<String^>(objData[2]);
		String^ apellidoMaterno = safe_cast<String^>(objData[3]);
		String^ Funcion = safe_cast<String^>(objData[4]);
		String^ Horario = safe_cast<String^>(objData[5]);
		//String^ Tarea = safe_cast<String^>(objData[6]);
		String^ Asistencia = safe_cast<String^>(objData[6]);
		objPersonal = gcnew Personal(ID, Nombres, apellidoPaterno, apellidoMaterno, Funcion, Horario, Asistencia);
		
	}
	objData->Close();
	CerrarConexion();
	return objPersonal;
}

void PersonalController::EditarPersonalenBD(Personal^ objPersonal, String^ ID) {

	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "update Personal set ID = "+ objPersonal->ID +", Nombre = '" + objPersonal->nombre + "', apPaterno = '" + objPersonal->ApPaterno + "', ApMaterno = '" + objPersonal->ApMaterno + "', Funcion= '" + objPersonal->funcion + "', Horario = '" + objPersonal->horario + "',  Asistencia = '" + objPersonal->asistencia + "' where ID =" + ID + ";";
	objQuery->ExecuteNonQuery();
	CerrarConexion();





}