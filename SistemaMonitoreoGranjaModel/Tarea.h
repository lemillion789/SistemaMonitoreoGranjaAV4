#pragma once
//#include "Personal.h"
namespace SistemaMonitoreoGranjaModel {
	using namespace System;
	using namespace System::Collections::Generic;
	public ref class Tarea {
		/*Atributos o Datos*/
	public:
		String^ IDtarea;
		String^ lugar;
		String^ fecha;
		String^ descripcion;
		//List<Personal^>^ListaPersonal;

		/*Métodos o Funciones*/
	public:
		Tarea(String^ IDtarea, String^ lugar, String^ fecha, String^ descripcion);
	};
}