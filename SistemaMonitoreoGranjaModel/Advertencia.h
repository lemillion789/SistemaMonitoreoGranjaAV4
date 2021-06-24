#pragma once

namespace SistemaMonitoreoGranjaModel {
	using namespace System;

	public ref class Advertencia {
		/*Atributos o Datos*/

	public:
		String^ IdSensor;
		Boolean alarma;  //1 alerta, 0 no hay alerta


		/*Métodos o Funciones*/
	public:
		Advertencia();
		Advertencia(String^ IdSensor, Boolean alarma);


	};
}