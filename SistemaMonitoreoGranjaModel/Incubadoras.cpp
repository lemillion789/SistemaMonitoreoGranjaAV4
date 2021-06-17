#include "Incubadoras.h"
#include "AreaDeAnimales.h"
using namespace SistemaMonitoreoGranjaModel;
using namespace System;
using namespace System::Collections::Generic;

/*
Incubadoras::Incubadoras(String^ codigo, String^ marca, String^ modelo, int temperatura, int humedad):AreaDeAnimales(raza, color, tipo_animal, sexo,estado_salud,peso,edad,cantidad) {

}
Incubadoras::Incubadoras(String^ codigo, String^ marca, String^ modelo, String^ tipoAnimal) : AreaDeAnimales(raza, color, tipo_animal, sexo, estado_salud, peso, edad, cantidad) {
	this->codigo = codigo;
	this->marca = marca;
	this->modelo = modelo;
	this->tipoAnimal = tipoAnimal;
}
*/

Incubadoras::Incubadoras(String^ raza, String^ color, String^ tipo_animal, String^ sexo, String^ estado_salud, int peso, int edad, int cantidad, String^ ID, List<Sensores^>^  listaSensores) : AreaDeAnimales(raza, color, tipo_animal, sexo, estado_salud, peso, edad, cantidad, ID) {
	
	this->List_Sensores = listaSensores;
	

}
