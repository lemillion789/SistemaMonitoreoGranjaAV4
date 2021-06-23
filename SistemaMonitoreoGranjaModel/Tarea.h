#pragma once
#include "Personal.h"
using namespace System::Collections::Generic;
namespace SistemaMonitoreoGranjaModel {
	using namespace System;

	public ref class Tarea {
		/*Atributos o Datos*/
	public:
		String^ lugar;
		String^ fecha;
		String^ descripcion;
		List<Personal^>^ListaPersonal;

		/*Métodos o Funciones*/
	public:
		
		Tarea(String^ lugar, String^ fecha, String^ descripcion);


	};
}