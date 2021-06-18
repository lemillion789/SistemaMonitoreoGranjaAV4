#pragma once
namespace SistemaMonitoreoGranjaController {
	using namespace SistemaMonitoreoGranjaModel;
	using namespace System::Collections::Generic;
	using namespace System;
	public ref class PersonalController {

	private:
		List <Personal^ >^ listaPersonal;

	public:
		PersonalController();
		void CargarPersonalDesdeArchivo();

		List<Personal^>^ obtenerListaPersonal();
		void GuardarPersonalEnArchivo(Personal^ objPersonal);
		List<Personal^>^ buscarPersonal(String^ nombreBuscar);
		void EliminarPersonal(String^ IDPersonalEliminar);
		Personal^ buscarPersonalxCodigo(String^ IDBuscar);
	};
}