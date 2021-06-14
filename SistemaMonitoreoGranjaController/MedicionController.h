#pragma once

namespace SistemaMonitoreoGranjaController {

	using namespace System::Collections::Generic;
	using namespace SistemaMonitoreoGranjaModel;
	using namespace System;

	public ref class MedicionController {
	private:
		List<Medicion^>^ listaMediciones;

	public:
		MedicionController();
		
		void CargarMedicionesDesdeArchivo();
		//List<Medicion^>^ CrearlistaMedicionesparaSensor(String^ IDSensor);
		List<Medicion^>^ agregarMedicionAleatoria(Sensores^ ObjSensor, int aleatorio);

	};
}