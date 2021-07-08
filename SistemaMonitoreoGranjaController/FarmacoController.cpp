#include "FarmacoController.h"

using namespace SistemaMonitoreoGranjaController;
using namespace System;
using namespace System::IO; /*Este es el namespace que permite manipular las clases y métodos para manejo de archivos de texto*/

FarmacoController::FarmacoController() {
	this->listaFarmacos = gcnew List<Farmacos^>();
	this->objConexion = gcnew SqlConnection();
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

//////SQL

void FarmacoController::AbrirConexion() {
	/*La cadena de conexión está compuesto de: Servidor de BD, nombre BD, usuario BD, password BD*/
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20152005;User ID=a20152005;Password=WLt8qnYH;";
	this->objConexion->Open(); /*Ya establecí conexión con la BD*/
}

void FarmacoController::CerrarConexion() {
	this->objConexion->Close();
}

List<Farmacos^>^ FarmacoController::leerDatos() {
	List<Farmacos^>^ listaFarmaco = gcnew List<Farmacos^>();
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from Farmacos;";
	SqlDataReader^ objData = objQuery->ExecuteReader();
	while (objData->Read()) {
		String^ ID = safe_cast<String^>(objData[0]);
		String^ nombre = safe_cast<String^>(objData[1]);
		int cantidad = safe_cast<int>(objData[2]);
		String^ fecha = safe_cast<String^>(objData[3]);
		String^ descripcion = safe_cast<String^>(objData[4]);
		Farmacos^ objFarmaco = gcnew Farmacos(ID, nombre, cantidad, fecha, descripcion);
		listaFarmaco->Add(objFarmaco);
	}
	objData->Close();
	CerrarConexion();
	return listaFarmaco;
}
void FarmacoController::limpiarTabla() {
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "delete from Farmacos;";
	objQuery->ExecuteNonQuery();
	CerrarConexion();
}

void FarmacoController::guardarDatos(List<Farmacos^>^ listaFarmaco) {
	Farmacos^ objFarmaco;
	limpiarTabla();
	AbrirConexion();
	for (int i = 0; i < listaFarmaco->Count; i++) {
		objFarmaco = listaFarmaco[i];
		SqlCommand^ objQuery = gcnew SqlCommand();
		objQuery->Connection = this->objConexion;
		objQuery->CommandText = "insert into Farmacos values (@p1,@p2,@p3,@p4,@p5);";
		SqlParameter^ p1 = gcnew SqlParameter("@p1", System::Data::SqlDbType::VarChar, 8);
		p1->Value = objFarmaco->ID;
		SqlParameter^ p2 = gcnew SqlParameter("@p2", System::Data::SqlDbType::VarChar, 20);
		p2->Value = objFarmaco->nombre;
		SqlParameter^ p3 = gcnew SqlParameter("@p3", System::Data::SqlDbType::Int);
		p3->Value = objFarmaco->cantidad;
		SqlParameter^ p4 = gcnew SqlParameter("@p4", System::Data::SqlDbType::VarChar, 10);
		p4->Value = objFarmaco->fechaVencimiento;
		SqlParameter^ p5 = gcnew SqlParameter("@p5", System::Data::SqlDbType::VarChar, 150);
		p5->Value = objFarmaco->descripcion;
		objQuery->Parameters->Add(p1);
		objQuery->Parameters->Add(p2);
		objQuery->Parameters->Add(p3);
		objQuery->Parameters->Add(p4);
		objQuery->Parameters->Add(p5);
		objQuery->ExecuteNonQuery();
	}
	CerrarConexion();
}
Farmacos^ FarmacoController::buscarFarmacosCodigo(String^ codigo) {
	AbrirConexion();
	Farmacos^ objFarmaco;
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from Farmacos where ID='" + codigo + "';";
	SqlDataReader^ objData = objQuery->ExecuteReader();
	while (objData->Read()) {
		String^ ID = safe_cast<String^>(objData[0]);
		String^ nombre = safe_cast<String^>(objData[1]);
		int cantidad = safe_cast<int>(objData[2]);
		String^ fecha = safe_cast<String^>(objData[3]);
		String^ descripcion = safe_cast<String^>(objData[4]);
		objFarmaco = gcnew Farmacos(ID, nombre, cantidad, fecha, descripcion);
	}
	objData->Close();
	CerrarConexion();
	return objFarmaco;
}