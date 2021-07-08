#pragma once
namespace SistemaMonitoreoGranjaController {
	using namespace SistemaMonitoreoGranjaModel;
	using namespace System::Collections::Generic;
	using namespace System;

	using namespace System::Data::SqlClient;
	public ref class TareaController {

	private:
		List <Tarea^>^ listaTarea;
		SqlConnection^ objConexion;
	public:
		TareaController();
		void AbrirConexion();
		void CerrarConexion();
		/*Tarea^ TareaPendiente(String^ tarea);*/

		void realizarTareaSensor(String^ IdSensor);
		void realizarTarea(String^ IdTarea);		//REVISAR REVISAR

		void TareaPendiente(List<Advertencia^>^ listaTareasProgramadas); //crear tareas
		int seEncuentraTareaEnLista(String^ ID);
		//List <Tarea^>^ TareaAlerta();
		List <Tarea^>^ RetornarListaTarea();
		void GuardarListaEnTXT();
		void CargarTareaDesdeArchivo();
		List<Tarea^>^ obtenerCodigosTarea();

		void asignarTarea(String^ IDPersonal,String^ IDtarea);
		List<Tarea^>^ buscarTareaxPersonal(String^ IDPersonal);
		Tarea^ buscarTareaxID(String^ ID);
		int verificarSiTareaPertenecePersonal(String^ IDTareaAsignar);
	};
}