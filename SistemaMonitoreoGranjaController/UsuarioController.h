#pragma once
namespace SistemaMonitoreoGranjaController {
	using namespace SistemaMonitoreoGranjaModel;
	using namespace System::Collections::Generic;
	using namespace System;
	using namespace System::Data::SqlClient;
	public ref class UsuarioController {

	private:
		List <Usuario^ >^ listaUsuario;
		SqlConnection^ objConexion;

		
	public:
		UsuarioController();
		int ValidarDatosID(String^ IDBOX);
		int ValidarDatosContrasena(String^ ContrasenaBOX);
		 void AbrirConexion();
		 void CerrarConexion();
		 int BuscarIDenBD(String^ IDBOX);
		 int BuscarContraseñaenBD(String^ ContrasenaBOX);
		 Usuario^ buscarUsuarioxIDBD(String^ ID);
		// int validar(String^ IDBOX, String^ ContrasenaBOX);
         void Grabarusuario(String^ ID);
		 void EliminarusuarioBD(String^ ID);
		 void EditarContraseña(String^ ID, String^ ContrasenaBOX);

	};
}