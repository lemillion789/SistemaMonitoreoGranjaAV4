#pragma once
#include "Medicion.h"
namespace SistemaMonitoreoGranjaModel {
	using namespace System;
	using namespace System::Collections::Generic;
	public ref class Sensores {
		/*Atributos o Datos*/
	public:
		String^ Nombre;
		String^ tipoSensor;
		String^ ID;
		String^ marca;
		int unidades;
		List<Medicion^>^ listaMediciones;
		/*M�todos o Funciones*/
	public:
		Sensores();
		Sensores(String^ ID, String^ Nombre, String^ Marca, String^ Tipo_Sensor, int unidades);
		Sensores(String^ tipoSensor, String^ ID, String^ marca, int unidades);

	};
}