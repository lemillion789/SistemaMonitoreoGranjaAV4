#include "AlimentosController.h"

using namespace SistemaMonitoreoGranjaController;

AlimentosController::AlimentosController() {
	this->listaAlimentos = gcnew List<Alimentos^>();
	this->objConexion = gcnew SqlConnection();
}

void AlimentosController::AbrirConexion() {
	/*La cadena de conexión está compuesto de: Servidor de BD, nombre BD, usuario BD, password BD*/
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20152005;User ID=a20152005;Password=WLt8qnYH;";
	this->objConexion->Open(); /*Ya establecí conexión con la BD*/
}

void AlimentosController::CerrarConexion() {
	this->objConexion->Close();
}

List<Alimentos^>^ AlimentosController::leerDatos() {
	List<Alimentos^>^ listaAlimentos = gcnew List<Alimentos^>();
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from Alimentos;";
	SqlDataReader^ objData = objQuery->ExecuteReader();
	while (objData->Read()) {
		String^ codigo = safe_cast<String^>(objData[0]);
		String^ nombre = safe_cast<String^>(objData[1]);
		String^ descripcion = safe_cast<String^>(objData[2]);
		String^ fecha = safe_cast<String^>(objData[3]);
		int presentacion = safe_cast<int>(objData[4]);
		String^ unidad = safe_cast<String^>(objData[5]);
		Alimentos^ objAlimento = gcnew Alimentos(codigo, nombre, descripcion, fecha, presentacion, unidad);
		listaAlimentos->Add(objAlimento);
	}
	objData->Close();
	CerrarConexion();
	return listaAlimentos;
}
void AlimentosController::limpiarTabla() {
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "delete from Alimentos;";
	objQuery->ExecuteNonQuery();
	CerrarConexion();
}

void AlimentosController::guardarDatos(List<Alimentos^>^ listaAlimentos) {
	Alimentos^ objAlimento;
	limpiarTabla();
	AbrirConexion();
	for (int i = 0; i < listaAlimentos->Count; i++) {
		objAlimento = listaAlimentos[i];
		SqlCommand^ objQuery = gcnew SqlCommand();
		objQuery->Connection = this->objConexion;
		objQuery->CommandText = "insert into Alimentos values (@p1,@p2,@p3,@p4,@p5,@p6);";
		SqlParameter^ p1 = gcnew SqlParameter("@p1", System::Data::SqlDbType::VarChar, 8);
		p1->Value = objAlimento->codigo;
		SqlParameter^ p2 = gcnew SqlParameter("@p2", System::Data::SqlDbType::VarChar, 20);
		p2->Value = objAlimento->nombre;
		SqlParameter^ p3 = gcnew SqlParameter("@p3", System::Data::SqlDbType::VarChar, 150);
		p3->Value = objAlimento->descripcion;
		SqlParameter^ p4 = gcnew SqlParameter("@p4", System::Data::SqlDbType::VarChar, 10);
		p4->Value = objAlimento->fechaVencimiento;
		SqlParameter^ p5 = gcnew SqlParameter("@p5", System::Data::SqlDbType::Int);
		p5->Value = objAlimento->presentacion;
		SqlParameter^ p6 = gcnew SqlParameter("@p6", System::Data::SqlDbType::VarChar, 2);
		p6->Value = objAlimento->unidadMedida;
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
Alimentos^ AlimentosController::buscarAlimentosCodigo(String^ codigo) {
	AbrirConexion();
	Alimentos^ objAlimento;
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from Alimentos where codigo='" + codigo + "';";
	SqlDataReader^ objData = objQuery->ExecuteReader();
	while (objData->Read()) {
		String^ codigo = safe_cast<String^>(objData[0]);
		String^ nombre = safe_cast<String^>(objData[1]);
		String^ descripcion = safe_cast<String^>(objData[2]);
		String^ fecha = safe_cast<String^>(objData[3]);
		int presentacion = safe_cast<int>(objData[4]);
		String^ unidad = safe_cast<String^>(objData[5]);
		objAlimento = gcnew Alimentos(codigo, nombre, descripcion, fecha, presentacion, unidad);
	}
	objData->Close();
	CerrarConexion();
	return objAlimento;
}
