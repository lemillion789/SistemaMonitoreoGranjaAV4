#pragma once

#include "Sensores.h"
#include "AreaDeAnimales.h"
namespace SistemaMonitoreoGranjaModel {
	using namespace System::Collections::Generic;
	using namespace System;

	public ref class Incubadoras :AreaDeAnimales {
	public:

		//String^ codigo;
		//String^ modelo;
		//String^ tipoAnimal;
		//String^ marca;
		//int temperatura;
		//int humedad;
		List<Sensores^>^ List_Sensores;

	public:
		//Incubadoras();
		//Incubadoras(String^ codigo, String^ marca, String^ modelo, int temperatura, int humedad);
		//Incubadoras(String^ codigo, String^ marca, String^ modelo, String^ tipoAnimal);
		//Incubadoras(String^ raza, String^ color, String^ tipo_animal, String^ sexo, String^ estado_salud, int peso, int edad, int cantidad, String^ tipoAnimal, List<Sensores^>^ List_Sensores);
		Incubadoras(String^ raza, String^ color, String^ tipo_animal, String^ sexo, String^ estado_salud, int peso, int edad, int cantidad, String^ ID, List<Sensores^>^ listaSensores);
		//Incubadoras(String^ tipoAnimal, List<Sensores^>^ List_Sensores);
		//Incubadoras(String^ tipoAnimal, List<Sensores^>^ List_Sensores)
	};
}