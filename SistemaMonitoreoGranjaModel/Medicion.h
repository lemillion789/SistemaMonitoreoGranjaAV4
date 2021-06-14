#pragma once
namespace SistemaMonitoreoGranjaModel {
	using namespace System;

	public ref class Medicion {
		/*Atributos o Datos*/
	public:
		String^ registro_hora;
		//String^ lugar;
		//String^ tipo_de_medicion;
		String^ ID_sensor;
		String^ unidades;
		int medida;

		/*Métodos o Funciones*/
	public:
		Medicion(String^ registro_hora, String^ unidades, int medida, String^ ID_sensor);
		Medicion();

	};
}
