#pragma once

#include "Alimentos.h"
#include "Sensores.h"
namespace SistemaMonitoreoGranjaModel {
	using namespace System;
	using namespace System::Collections::Generic;
	public ref class Comederos {
		/*Atributos o Datos*/
	public:
		int capComida;
		int capAgua;
		int capProteinas;
		String^ horaLlenado;
		String^ nombre;
		String^ ID;
		Alimentos^ objAlimento;
		List<Sensores^>^ listaSensores;
		/*Métodos o Funciones*/
	public:
		Comederos(int capComida, int capAgua, int capProteinas, String^ horaLlenado, String^ nombre, String^ ID);
	};
}
