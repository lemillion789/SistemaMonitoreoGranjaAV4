#include "UsuarioController.h"

using namespace SistemaMonitoreoGranjaController;
using namespace System;
using namespace System::IO;
UsuarioController::UsuarioController() {
	this->listaUsuario = gcnew List<Usuario^>();
}
int^ UsuarioController::ValidarDatosID(String^ IDBOX) {
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

int^ UsuarioController::ValidarDatosContrasena(String^ ContrasenaBOX) {

	int pertenece = 0;
	array<String^>^ lineas = File::ReadAllLines("UsuarioDatos.txt");
	String^ separadores = ";";
	for each (String ^ lineaPersona in lineas) {
		array<String^>^ palabras = lineaPersona->Split(separadores->ToCharArray());
		String^ ContraseņaPersonal = palabras[1];
		if (ContraseņaPersonal == ContrasenaBOX) {
			pertenece = 1;
			break;
		}
	}
	return pertenece;

}