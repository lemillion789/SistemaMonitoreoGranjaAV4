#include "FarmacoController.h"

using namespace SistemaMonitoreoGranjaController;
using namespace System;
using namespace System::IO; /*Este es el namespace que permite manipular las clases y métodos para manejo de archivos de texto*/

FarmacoController::FarmacoController() {
	this->listaFarmacos = gcnew List<Farmacos^>();
}

void FarmacoController::CargarFarmacosDesdeArchivo() {
	array<String^>^ lineas = File::ReadAllLines("Farmacos.txt");
	String^ separadores = ";";
	for each (String ^ line in lineas) {
		array<String^>^ palabras = line->Split(separadores->ToCharArray());
		String^ ID = palabras[0];
		String^ nombre = palabras[1];
		int cantidad = Convert::ToInt32(palabras[2]);	
		String^ fecha = palabras[3];
		String^ descripcion = palabras[4];
		Farmacos^ objFarmaco = gcnew Farmacos(ID, nombre, cantidad, fecha, descripcion);

		this->listaFarmacos->Add(objFarmaco);
	}
}

int SistemaMonitoreoGranjaController::FarmacoController::ObtenerCantidadFarmacos()
{
	return this->listaFarmacos->Count;
}

Farmacos^ SistemaMonitoreoGranjaController::FarmacoController::ObtenerFarmacoLista(int indice)
{
	return this->listaFarmacos[indice];
}

List<Farmacos^>^ SistemaMonitoreoGranjaController::FarmacoController::obtenerListaFarmacos()
{
	return this->listaFarmacos;
}

void SistemaMonitoreoGranjaController::FarmacoController::GuardarFarmacoEnArchivo(Farmacos^ objFarmaco)
{
	this->listaFarmacos->Clear();
	CargarFarmacosDesdeArchivo();
	this->listaFarmacos->Add(objFarmaco);

	//guardar en Farmacos.txt
	array<String^>^ lineasArchivoFarmacos = gcnew array<String^>(this->listaFarmacos->Count);
	for (int i = 0; i < this->listaFarmacos->Count; i++) {
		Farmacos^ obj = this->listaFarmacos[i];  //
		lineasArchivoFarmacos[i] = obj->ID + ";" + obj->nombre + ";" + obj->cantidad + ";" + obj->fechaVencimiento + ";" + obj->descripcion;
	}
	File::WriteAllLines("Farmacos.txt", lineasArchivoFarmacos);
}

List<Farmacos^>^ SistemaMonitoreoGranjaController::FarmacoController::buscarFarmacos(String^ nombreFarmaco)
{
	List<Farmacos^>^ listaEncontrados = gcnew List<Farmacos^>();
	array<String^>^ lineas = File::ReadAllLines("Farmacos.txt");
	String^ separadores = ";";
	for each (String ^ line in lineas) {
		array<String^>^ palabras = line->Split(separadores->ToCharArray());
		String^ ID = palabras[0];
		String^ nombre = palabras[1];
		int cantidad = Convert::ToInt32(palabras[2]);
		String^ fecha = palabras[3];
		String^ descripcion = palabras[4];

		
		if (nombre->ToUpper() == nombreFarmaco->ToUpper()) {
			Farmacos^ objFarmaco = gcnew Farmacos(ID, nombre, cantidad, fecha, descripcion);
			listaEncontrados->Add(objFarmaco);
		}
	}
	return listaEncontrados;
}

void SistemaMonitoreoGranjaController::FarmacoController::eliminarFarmaco(String^ ID)
{
	CargarFarmacosDesdeArchivo();
	for (int i = 0; i < this->listaFarmacos->Count; i++) {
		Farmacos^ obj = this->listaFarmacos[i];
		if (obj->ID == ID) {
			this->listaFarmacos->RemoveAt(i);  
			break;
		}
	}

	array<String^>^ lineasArchivoFarmacos = gcnew array<String^>(this->listaFarmacos->Count);
	for (int i = 0; i < this->listaFarmacos->Count; i++) {
		Farmacos^ obj = this->listaFarmacos[i];  //
		lineasArchivoFarmacos[i] = obj->ID + ";" + obj->nombre + ";" + obj->cantidad + ";" + obj->fechaVencimiento + ";" + obj->descripcion;
	}
	File::WriteAllLines("Farmacos.txt", lineasArchivoFarmacos);
}

Farmacos^ SistemaMonitoreoGranjaController::FarmacoController::buscarFarmacoxID(String^ ID)
{
	Farmacos^ objEncontrado;
	array<String^>^ lineas = File::ReadAllLines("Farmacos.txt");
	String^ separadores = ";";
	for each (String ^ line in lineas) {
		array<String^>^ palabras = line->Split(separadores->ToCharArray());
		String^ IDFarmaco = palabras[0];
		String^ nombre = palabras[1];
		int cantidad = Convert::ToInt32(palabras[2]);
		String^ fecha = palabras[3];
		String^ descripcion = palabras[4];

		if (IDFarmaco == ID) {
			objEncontrado = gcnew Farmacos(IDFarmaco, nombre, cantidad, fecha, descripcion);
			break;
		}
	}
	return objEncontrado;
}

void SistemaMonitoreoGranjaController::FarmacoController::editarFarmaco(String^ IDFarmaco, String^ nombre, int cantidad, String^ fecha, String^ descripcion)
{
	this->listaFarmacos->Clear();
	CargarFarmacosDesdeArchivo();
	for (int i = 0; i < this->listaFarmacos->Count; i++) {
		Farmacos^ objFarmaco = this->listaFarmacos[i];
		if (objFarmaco->ID == IDFarmaco) {
			this->listaFarmacos[i]->nombre = nombre;
			this->listaFarmacos[i]->cantidad = cantidad;
			this->listaFarmacos[i]->fechaVencimiento = fecha;
			this->listaFarmacos[i]->descripcion = descripcion;
			break;
		}
	}

	array<String^>^ lineasArchivoFarmaco = gcnew array<String^>(this->listaFarmacos->Count);
	for (int i = 0; i < this->listaFarmacos->Count; i++) {
		Farmacos^ obj = this->listaFarmacos[i];
		lineasArchivoFarmaco[i] = obj->ID + ";" + obj->nombre + ";" + obj->cantidad + ";" + obj->fechaVencimiento + ";" + obj->descripcion;
	}
	/*Aquí ya mi array de lineasArchivoPartido esta OK, con la información a grabar*/
	File::WriteAllLines("Farmacos.txt", lineasArchivoFarmaco);
}
