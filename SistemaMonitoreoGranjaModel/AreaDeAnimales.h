#pragma once

#include "Comederos.h"
namespace SistemaMonitoreoGranjaModel {
	using namespace System;
	using namespace System::Collections::Generic;
	public ref class AreaDeAnimales {
	public:
		String^ ID;
		String^ raza;
		String^ color;
		String^ tipo_animal;
		String^ sexo;
		String^ estado_salud;
		int peso;
		int edad;
		int cantidad;
		List<Comederos^>^ listaComederos;
	public:

		AreaDeAnimales(String^ raza, String^ color, String^ tipo_animal, String^ sexo, String^ estado_salud, int peso, int edad, int cantidad,String^ ID);
		AreaDeAnimales(String^ raza, String^ color, String^ tipoAnimal, String^ sexo, String^ estadoSalud, int peso, int edad, int cantidad, String^ ID,List<Comederos^>^ listaComederos);

	};

	
}