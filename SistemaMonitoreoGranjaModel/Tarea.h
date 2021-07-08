#pragma once
//#include "Personal.h"
#include "AreaDeAnimales.h"
#include "Sensores.h"
namespace SistemaMonitoreoGranjaModel {
	using namespace System;
	using namespace System::Collections::Generic;
	public ref class Tarea {
		/*Atributos o Datos*/
	public:
		/*String^ IDtarea;
		String^ lugar;
		String^ fecha;
		String^ descripcion;*/
		//List<Personal^>^ListaPersonal;
		String^ IDtarea;
		String^ fecha;
		AreaDeAnimales^ objArea;
		Sensores^ objSensor;
		Boolean Estado;
		/*Métodos o Funciones*/
	public:
		//Tarea(String^ IDtarea, String^ lugar, String^ fecha, String^ descripcion);
		Tarea(String^ IDtarea, String^ fecha, AreaDeAnimales^ objArea, Sensores^ objSensor, Boolean Estado);
	};
}