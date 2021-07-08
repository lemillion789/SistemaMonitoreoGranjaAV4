#include "MovimientoController.h"

using namespace SistemaMonitoreoGranjaController;

MovimientoController::MovimientoController() {
	this->listaMovimientos = gcnew List<Movimiento^>();
	this->objConexion = gcnew SqlConnection();
}
void MovimientoController::AbrirConexion() {
	/*La cadena de conexión está compuesto de: Servidor de BD, nombre BD, usuario BD, password BD*/
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20152005;User ID=a20152005;Password=WLt8qnYH;";
	this->objConexion->Open(); /*Ya establecí conexión con la BD*/
}

void MovimientoController::CerrarConexion() {
	this->objConexion->Close();
}
List<Movimiento^>^ MovimientoController::leerDatos() {
	List<Movimiento^>^ listaMovimientos = gcnew List<Movimiento^>();
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from HistorialMov;";
	SqlDataReader^ objData = objQuery->ExecuteReader();
	while (objData->Read()) {
		String^ tipo = safe_cast<String^>(objData[0]);
		String^ origen = safe_cast<String^>(objData[1]);
		String^ destino = safe_cast<String^>(objData[2]);
		String^ elemento = safe_cast<String^>(objData[3]);
		int cantidad = safe_cast<int>(objData[4]);
		String^ fecha = safe_cast<String^>(objData[5]);
		Movimiento^ objMovimiento = gcnew Movimiento(cantidad, tipo, elemento, fecha, origen, destino);
		listaMovimientos->Add(objMovimiento);
	}
	objData->Close();
	CerrarConexion();
	return listaMovimientos;
}
void MovimientoController::limpiarTabla() {
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "delete from HistorialMov;";
	objQuery->ExecuteNonQuery();
	CerrarConexion();
}

void MovimientoController::guardarDatos(List<Movimiento^>^ listaMovimientos) {
	Movimiento^ objMovimiento;
	limpiarTabla();
	AbrirConexion();
	for (int i = 0; i < listaMovimientos->Count; i++) {
		objMovimiento = listaMovimientos[i];
		SqlCommand^ objQuery = gcnew SqlCommand();
		objQuery->Connection = this->objConexion;
		objQuery->CommandText = "insert into HistorialMov values (@p1,@p2,@p3,@p4,@p5,@p6);";
		SqlParameter^ p1 = gcnew SqlParameter("@p1", System::Data::SqlDbType::VarChar, 30);
		p1->Value = objMovimiento->tipoMovimiento;
		SqlParameter^ p2 = gcnew SqlParameter("@p2", System::Data::SqlDbType::VarChar, 30);
		p2->Value = objMovimiento->origen;
		SqlParameter^ p3 = gcnew SqlParameter("@p3", System::Data::SqlDbType::VarChar, 30);
		p3->Value = objMovimiento->destino;
		SqlParameter^ p4 = gcnew SqlParameter("@p4", System::Data::SqlDbType::VarChar, 20);
		p4->Value = objMovimiento->elementos;
		SqlParameter^ p5 = gcnew SqlParameter("@p5", System::Data::SqlDbType::Int);
		p5->Value = objMovimiento->cantidad;
		SqlParameter^ p6 = gcnew SqlParameter("@p6", System::Data::SqlDbType::VarChar, 20);
		p6->Value = objMovimiento->fecha;
		objQuery->Parameters->Add(p1);
		objQuery->Parameters->Add(p2);
		objQuery->Parameters->Add(p3);
		objQuery->Parameters->Add(p4);
		objQuery->Parameters->Add(p5);
		objQuery->Parameters->Add(p6);
		objQuery->ExecuteNonQuery();
	}
	CerrarConexion();
}

List<Movimiento^>^ MovimientoController::buscarTipoElemento(String^ tipo, String^ elemento) {
	List<Movimiento^>^ listaMovimientos = gcnew List<Movimiento^>();
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from HistorialMov where tipo='" + tipo + "' and elemento='" + elemento + "'";
	SqlDataReader^ objData = objQuery->ExecuteReader();
	while (objData->Read()) {
		String^ tipo = safe_cast<String^>(objData[0]);
		String^ origen = safe_cast<String^>(objData[1]);
		String^ destino = safe_cast<String^>(objData[2]);
		String^ elemento = safe_cast<String^>(objData[3]);
		int cantidad = safe_cast<int>(objData[4]);
		String^ fecha = safe_cast<String^>(objData[5]);
		Movimiento^ objMovimiento = gcnew Movimiento(cantidad, tipo, elemento, fecha, origen, destino);
		listaMovimientos->Add(objMovimiento);
	}
	objData->Close();
	CerrarConexion();
	return listaMovimientos;
}