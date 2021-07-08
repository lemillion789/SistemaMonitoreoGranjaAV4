#pragma once
#include "Sensores.h"

namespace SistemaMonitoreoGranjaModel {
	using namespace System;

	public ref class Advertencia {
		/*Atributos o Datos*/

	public:
		//String^ IdSensor;
		Sensores^ objSensor;
		Boolean alarma;  //1 alerta, 0 no hay alerta
		//Boolean Verificado;

		/*Métodos o Funciones*/
	public:
		Advertencia();
		Advertencia(Sensores^ objSensor, Boolean alarma);


	};
}