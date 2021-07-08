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
		
		
		//Diego
		List<Sensores^>^ buscarSensorxTipo(String^ tipoSensor);
		List<Medicion^>^ buscarMedicionesxSensor(String^ ID_Sensor);
		void CrearMedicionesNuevas(); //crea mediciones para cada sensor;
		void EliminarSensor(String^ IDSensor);
		void GuardarEnArchivo(List<Sensores^>^ objSensor);
		void GuardarMedicionesEnArchivo();

		String^ BuscarUnidadxIDSensor(String^ ID_SensorID);
		//String^ IDSensorAlarma(); //ID Sensor identificado;

	};

}