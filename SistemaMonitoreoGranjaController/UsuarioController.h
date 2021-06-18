#pragma once
namespace SistemaMonitoreoGranjaController {
	using namespace SistemaMonitoreoGranjaModel;
	using namespace System::Collections::Generic;
	using namespace System;
	public ref class UsuarioController {

	private:
		List <Usuario^ >^ listaUsuario;

	public:
		UsuarioController();
		int^ ValidarDatosID(String^ IDBOX);
		int^ ValidarDatosContrasena(String^ ContrasenaBOX);

	};
}