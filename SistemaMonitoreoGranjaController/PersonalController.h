#pragma once
namespace SistemaMonitoreoGranjaController {
	using namespace SistemaMonitoreoGranjaModel;
	using namespace System::Collections::Generic;
	using namespace System;
	using namespace System::Data::SqlClient;
	public ref class PersonalController {

	private:
		List <Personal^ >^ listaPersonal;
		SqlConnection^ objConexion;
	public:
		PersonalController();
		//void CargarPersonalDesdeArchivo();

		//List<Personal^>^ obtenerListaPersonal();
		//void GuardarPersonalEnArchivo(Personal^ objPersonal);
		//List<Personal^>^ buscarPersonal(String^ nombreBuscar);
		//void EliminarPersonal(String^ IDPersonalEliminar);
		//Personal^ buscarPersonalxCodigo(String^ IDBuscar);
			//base de datos

		void AbrirConexion();
		void CerrarConexion();
	
		List<Personal^>^ buscarPersonalxNombreBD(String^ Nombre);
		List<Personal^>^ ObtenerlistaPersonaldesdeBD();
		void EliminarPersonalBD(String^ IDPersonalEliminar);
		void GuardarPersonalEnBD(Personal^ objPersonal);
		Personal^ buscarPersonalxIDBD(String^ ID);
		void EditarPersonalenBD(Personal^ objPersonal, String^ ID);

		//List<Personal^>^ obtenerListaPersonal();
		//void GuardarPersonalEnArchivo(Personal^ objPersonal);
		//List<Personal^>^ buscarPersonal(String^ nombreBuscar);
		//void EliminarPersonal(String^ IDPersonalEliminar);
		//Personal^ buscarPersonalxCodigo(String^ IDBuscar);


		void asignarTarea(String^ IDpersonalSeleccionado, List<Tarea^>^ listaTareas);
	};
}