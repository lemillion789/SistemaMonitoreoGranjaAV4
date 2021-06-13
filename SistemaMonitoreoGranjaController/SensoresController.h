#pragma once

namespace SistemaMonitoreoGranjaController {

	using namespace System::Collections::Generic;
	using namespace SistemaMonitoreoGranjaModel;
	using namespace System;

	public ref class SensoresController {
	private:
		List<Sensores^>^ listaSensores;

	public:
		SensoresController();
		void CargarSensores();
		Sensores^ buscarSensor(String^ ID);
		List<Sensores^>^ obtenerListaSensores();
		//Sensores^ buscarAlumno(String^ codigoAlumno);
		void GuardarSensorEnArchivo(Sensores^ objSensor);
		int verificarSensor(String^ IDsensor);


	};

}