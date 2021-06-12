#pragma once
#include "Medicion.h"
namespace SistemaMonitoreoGranjaModel {
	using namespace System;

	public ref class Sensores {
		/*Atributos o Datos*/
	public:
		String^ Nombre;
		String^ tipoSensor;
		String^ ID;
		String^ marca;
		int unidades;
		Medicion^ objMedicion;
		/*Métodos o Funciones*/
	public:
		Sensores();
		Sensores(String^ ID, String^ Nombre, String^ Marca, String^ Tipo_Sensor, int unidades);
		Sensores(String^ tipoSensor, String^ ID, String^ marca, int unidades);

	};
}