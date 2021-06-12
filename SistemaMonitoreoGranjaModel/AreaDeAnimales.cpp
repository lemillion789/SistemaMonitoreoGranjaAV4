#include "AreaDeAnimales.h"
using namespace SistemaMonitoreoGranjaModel;

AreaDeAnimales::AreaDeAnimales(String^ raza, String^ color, String^ tipo_animal, String^ sexo, String^ estado_salud, int peso, int edad, int cantidad, String^ ID)
{
    this->raza = raza;
    this->color = color;
    this->tipo_animal = tipo_animal;
    this->sexo = sexo;
    this->estado_salud = estado_salud;
    this->peso = peso;
    this->edad = edad;
    this->cantidad = cantidad;
	this->ID = ID;
    this->listaComederos = gcnew List<Comederos^>();
}

AreaDeAnimales::AreaDeAnimales(String^ raza, String^ color, String^ tipoAnimal, String^ sexo, String^ estadoSalud, int peso, int edad, int cantidad, String^ ID, List<Comederos^>^ listaComederos)
{
	this->raza = raza;
	this->color = color;
	this->tipo_animal = tipoAnimal;
	this->sexo = sexo;
	this->estado_salud = estadoSalud;
	this->peso = peso;
	this->edad = edad;
	this->cantidad = cantidad;
	this->ID = ID;
	this->listaComederos = listaComederos;
}



