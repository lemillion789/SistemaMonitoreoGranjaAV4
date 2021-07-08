#include"AlmacenController.h"
#include "AlimentosController.h"
#include "FarmacoController.h"

using namespace SistemaMonitoreoGranjaController;

AlmacenController::AlmacenController() {
	this->listaAlmacenes = gcnew List<Almacen^>();
	this->objConexion = gcnew SqlConnection();
}
void AlmacenController::AbrirConexion() {
	/*La cadena de conexión está compuesto de: Servidor de BD, nombre BD, usuario BD, password BD*/
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20152005;User ID=a20152005;Password=WLt8qnYH;";
	this->objConexion->Open(); /*Ya establecí conexión con la BD*/
}

void AlmacenController::CerrarConexion() {
	this->objConexion->Close();
}
List<Almacen^>^ AlmacenController::leerDatos() {
	List<Almacen^>^ listaAlmacen = gcnew List<Almacen^>();
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from Almacen;";
	SqlDataReader^ objData = objQuery->ExecuteReader();
	while (objData->Read()) {
		String^ codigo = safe_cast<String^>(objData[0]);
		String^ nombre = safe_cast<String^>(objData[1]);
		String^ estado = safe_cast<String^>(objData[2]);
		String^ zona = safe_cast<String^>(objData[3]);
		Almacen^ objAlmacen = gcnew Almacen(codigo, nombre, estado, zona);
		listaAlmacen->Add(objAlmacen);
	}
	objData->Close();
	CerrarConexion();
	return listaAlmacen;
}
void AlmacenController::limpiarTabla() {
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "delete from Almacen;";
	objQuery->ExecuteNonQuery();
	CerrarConexion();
}

void AlmacenController::guardarDatos(List<Almacen^>^ listaAlmacen) {
	Almacen^ objAlmacen;
	limpiarTabla();
	AbrirConexion();
	for (int i = 0; i < listaAlmacen->Count; i++) {
		objAlmacen = listaAlmacen[i];
		SqlCommand^ objQuery = gcnew SqlCommand();
		objQuery->Connection = this->objConexion;
		objQuery->CommandText = "insert into Almacen values (@p1,@p2,@p3,@p4);";
		SqlParameter^ p1 = gcnew SqlParameter("@p1", System::Data::SqlDbType::VarChar, 8);
		p1->Value = objAlmacen->codigo;
		SqlParameter^ p2 = gcnew SqlParameter("@p2", System::Data::SqlDbType::VarChar, 50);
		p2->Value = objAlmacen->nombre;
		SqlParameter^ p3 = gcnew SqlParameter("@p3", System::Data::SqlDbType::VarChar, 8);
		p3->Value = objAlmacen->estado;
		SqlParameter^ p4 = gcnew SqlParameter("@p4", System::Data::SqlDbType::VarChar, 6);
		p4->Value = objAlmacen->zona;
		objQuery->Parameters->Add(p1);
		objQuery->Parameters->Add(p2);
		objQuery->Parameters->Add(p3);
		objQuery->Parameters->Add(p4);
		objQuery->ExecuteNonQuery();
	}
	CerrarConexion();
}

List<Farmacos^>^ AlmacenController::obtenerFarmacosAlmacen(String^ almacen) {
	String^ codigo = "0";
	Farmacos^ objFarmaco;
	List<Farmacos^>^ listaFarmacos = gcnew List<Farmacos^>();
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from ElementoxAlmacen where codigoAlmacen='" + almacen + "' and tipo='Farmaco';";
	SqlDataReader^ objData = objQuery->ExecuteReader();
	while (objData->Read()) {
		codigo = safe_cast<String^>(objData[1]);
		int cantidad = safe_cast<int>(objData[3]);
		FarmacoController^ objGestor = gcnew FarmacoController();
		objFarmaco = objGestor->buscarFarmacosCodigo(codigo);
		listaFarmacos->Add(objFarmaco);
	}
	objData->Close();
	CerrarConexion();
	return listaFarmacos;

}

List<Alimentos^>^ AlmacenController::obtenerAlimentosAlmacen(String^ almacen) {
	String^ codigo = "0";
	Alimentos^ objAlimento;
	List<Alimentos^>^ listaAlimentos=gcnew List<Alimentos^>();
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from ElementoxAlmacen where codigoAlmacen='" + almacen + "' and tipo='Alimento';";
	SqlDataReader^ objData = objQuery->ExecuteReader();
	while (objData->Read()) {
		codigo = safe_cast<String^>(objData[1]);
		int cantidad = safe_cast<int>(objData[3]);
		AlimentosController^ objGestor = gcnew AlimentosController();
		objAlimento = objGestor->buscarAlimentosCodigo(codigo);
		listaAlimentos->Add(objAlimento);
	}
	objData->Close();
	CerrarConexion();
	return listaAlimentos;
}

int AlmacenController::verificaElementoAlmacen(String^ almacen, String^ elemento) {
	int existe = 0;
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from ElementoxAlmacen where codigoAlmacen='" + almacen + "' and codigoElemento='" + elemento +"';";
	SqlDataReader^ objData = objQuery->ExecuteReader();
	while (objData->Read()) {
		existe = 1;
	}
	objData->Close();
	CerrarConexion();
	return existe;
}

int AlmacenController::calcularCantidadAlmacen(String^ almacen, String^ elemento) {
	int cantidad;
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from ElementoxAlmacen where codigoAlmacen='" + almacen + "' and codigoElemento='" + elemento + "';";
	SqlDataReader^ objData = objQuery->ExecuteReader();
	while (objData->Read()) {
		cantidad = safe_cast<int>(objData[3]);
	}
	objData->Close();
	CerrarConexion();
	return cantidad;
}

void AlmacenController::eliminarElemento(String^ almacen, String^ elemento) {
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "delete from ElementoxAlmacen where codigoAlmacen='" + almacen + "' and codigoElemento='" + elemento + "';";
	objQuery->ExecuteNonQuery();
	CerrarConexion();
}

void AlmacenController::guardarElementoAlmacen(String^ almacen, String^ elemento, String^ tipo, int cantidad) {
	int existe = verificaElementoAlmacen(almacen, elemento);
	if (existe) {
		int numero = calcularCantidadAlmacen(almacen, elemento);
		cantidad = cantidad + numero;
		eliminarElemento(almacen, elemento);
		AbrirConexion();
		SqlCommand^ objQuery = gcnew SqlCommand();
		objQuery->Connection = this->objConexion;
		objQuery->CommandText = "insert into ElementoxAlmacen values (@p1,@p2,@p3,@p4);";
		SqlParameter^ p1 = gcnew SqlParameter("@p1", System::Data::SqlDbType::VarChar, 8);
		p1->Value = almacen;
		SqlParameter^ p2 = gcnew SqlParameter("@p2", System::Data::SqlDbType::VarChar, 8);
		p2->Value = elemento;
		SqlParameter^ p3 = gcnew SqlParameter("@p3", System::Data::SqlDbType::VarChar, 20);
		p3->Value = tipo;
		SqlParameter^ p4 = gcnew SqlParameter("@p4", System::Data::SqlDbType::Int);
		p4->Value = cantidad;
		objQuery->Parameters->Add(p1);
		objQuery->Parameters->Add(p2);
		objQuery->Parameters->Add(p3);
		objQuery->Parameters->Add(p4);
		objQuery->ExecuteNonQuery();
		CerrarConexion();
	}
	else
	{
		AbrirConexion();
		SqlCommand^ objQuery = gcnew SqlCommand();
		objQuery->Connection = this->objConexion;
		objQuery->CommandText = "insert into ElementoxAlmacen values (@p1,@p2,@p3,@p4);";
		SqlParameter^ p1 = gcnew SqlParameter("@p1", System::Data::SqlDbType::VarChar, 8);
		p1->Value = almacen;
		SqlParameter^ p2 = gcnew SqlParameter("@p2", System::Data::SqlDbType::VarChar, 8);
		p2->Value = elemento;
		SqlParameter^ p3 = gcnew SqlParameter("@p3", System::Data::SqlDbType::VarChar, 20);
		p3->Value = tipo;
		SqlParameter^ p4 = gcnew SqlParameter("@p4", System::Data::SqlDbType::Int);
		p4->Value = cantidad;
		objQuery->Parameters->Add(p1);
		objQuery->Parameters->Add(p2);
		objQuery->Parameters->Add(p3);
		objQuery->Parameters->Add(p4);
		objQuery->ExecuteNonQuery();
		CerrarConexion();
	}

}