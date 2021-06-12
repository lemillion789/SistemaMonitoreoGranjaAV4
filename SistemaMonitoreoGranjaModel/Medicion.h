#pragma once
namespace SistemaMonitoreoGranjaModel {
	using namespace System;

	public ref class Medicion {
		/*Atributos o Datos*/
	private:
		String^ registro_hora;
		String^ lugar;
		String^ tipo_de_medicion;
		String^ ID_sensor;
		String^ unidades;
		String^ medida;

		/*Métodos o Funciones*/
	public:
		Medicion(String^ registro_hora, String^ lugar, String^ tipo_de_medicion, String^ ID_sensor, String^ unidades, String^ medida);
		Medicion();

	};
}
