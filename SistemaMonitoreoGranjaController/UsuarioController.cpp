#include "UsuarioController.h"


using namespace SistemaMonitoreoGranjaController;
using namespace System;
using namespace System::IO;
UsuarioController::UsuarioController() {
	this->listaUsuario = gcnew List<Usuario^>();
	this->objConexion = gcnew SqlConnection();

}
int UsuarioController::ValidarDatosID(String^ IDBOX) {
	int pertenece = 0;
	array<String^>^ lineas = File::ReadAllLines("UsuarioDatos.txt");
	String^ separadores = ";";
	for each (String ^ lineaPersona in lineas) {
		array<String^>^ palabras = lineaPersona->Split(separadores->ToCharArray());
		String^ IDPersonal = palabras[0];
		if (IDPersonal == IDBOX) {
			pertenece = 1;
			break;
		}
	}
	return pertenece;
}

int UsuarioController::ValidarDatosContrasena(String^ ContrasenaBOX) {

	int pertenece = 0;
	array<String^>^ lineas = File::ReadAllLines("UsuarioDatos.txt");
	String^ separadores = ";";
	for each (String ^ lineaPersona in lineas) {
		array<String^>^ palabras = lineaPersona->Split(separadores->ToCharArray());
		String^ ContraseñaPersonal = palabras[1];
		if (ContraseñaPersonal == ContrasenaBOX) {
			pertenece = 1;
			break;
		}
	}
	return pertenece;
	
}
void UsuarioController::AbrirConexion() {

	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20152005;User ID=a20152005;Password=WLt8qnYH;";
	this->objConexion->Open();
}
void UsuarioController::CerrarConexion() {
	this->objConexion->Close();

}
int UsuarioController::BuscarIDenBD(String^ IDBOX) {
	int existe = 0;
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from Usuario where ID='" + IDBOX + "';";
	SqlDataReader^ objData = objQuery->ExecuteReader(); /*Cuando es un select, se utiliza ExecuteReader*/
	while (objData->Read()) {
		existe = 1;

	}
	objData->Close();
	CerrarConexion();
	return existe;


}
int UsuarioController::BuscarContraseñaenBD(String^ ContrasenaBOX) {
	int existe = 0;
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from Usuario where Contraseña='" + ContrasenaBOX + "';";
	SqlDataReader^ objData = objQuery->ExecuteReader(); /*Cuando es un select, se utiliza ExecuteReader*/
	while (objData->Read()) {
		existe = 1;
	}
	objData->Close();
	CerrarConexion();
	return existe;
}
Usuario^ UsuarioController::buscarUsuarioxIDBD(String^ ID) {
	
	Usuario^ objUsuario = nullptr;
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from Usuario where ID='" + ID + "';";
	SqlDataReader^ objData = objQuery->ExecuteReader(); /*Cuando es un select, se utiliza ExecuteReader*/
	while (objData->Read()) {
		String^ ID = safe_cast<String^>(objData[0]);
		String^ contraseña = safe_cast<String^>(objData[1]);
	
		objUsuario = gcnew Usuario(ID, contraseña);

	}
	objData->Close();
	CerrarConexion();
	return objUsuario;
}


void UsuarioController::Grabarusuario(String^ ID) {

	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "insert into Usuario values (@p1,@p2);";
	/*Esto de los parámetros es solo para el insert*/
	SqlParameter^ p1 = gcnew SqlParameter("@p1", System::Data::SqlDbType::Int);
	p1->Value = ID;
	SqlParameter^ p2 = gcnew SqlParameter("@p2", System::Data::SqlDbType::VarChar, 50);
	p2->Value = 000000;

	objQuery->Parameters->Add(p1);
	objQuery->Parameters->Add(p2);

	/*Este método se ejecuta tanto para el update, delete e insert*/
	objQuery->ExecuteNonQuery();
	CerrarConexion();
}

void UsuarioController::EliminarusuarioBD(String^ ID) {
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "Delete FROM Usuario where ID = " + ID + "; ";
	objQuery->ExecuteNonQuery();
	CerrarConexion();
}

void UsuarioController::EditarContraseña(String^ ID, String^ ContrasenaBOX) {


	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "update Usuario set  Contraseña = '" + ContrasenaBOX + "' where ID =" + ID + ";";
	objQuery->ExecuteNonQuery();
	CerrarConexion();

}
/*int UsuarioController::validar(String^ IDBOX, String^ ContrasenaBOX) {
	
	int valido1;
	int valido2;
	valido1 = BuscarIDenBD(IDBOX);
	valido2 = BuscarContraseñaenBD(ContrasenaBOX);
		if ((valido1 && valido2) == 1) {
		     
			String^obj1 = "1";
			String^ obj2 = "1";

			Usuario^ objusuario = gcnew Usuario(obj1,obj2);
			this->listaUsuario->Add(objusuario);
		
		}
		else {
		
			String^ obj1 = "0";
			String^ obj2 = "";

			Usuario^ objusuario = gcnew Usuario(obj1, obj2);
			this->listaUsuario->Add(objusuario);
		
		
		}




}*/