#pragma once
namespace SistemaMonitoreoGranjaController {
	using namespace SistemaMonitoreoGranjaModel;
	using namespace System::Collections::Generic;
	using namespace System;
	public ref class TareaController {

	private:
		List <Tarea^>^ listaTarea;

	public:
		TareaController();
		/*Tarea^ TareaPendiente(String^ tarea);*/

		void realizarTareaSensor(String^ IdSensor);

		void TareaPendiente(List<Advertencia^>^ listaTareasProgramadas);
		//List <Tarea^>^ TareaAlerta();
		List <Tarea^>^ RetornarListaTarea();
		void GuardarListaEnTXT();
		void CargarTareaDesdeArchivo();
	};
}