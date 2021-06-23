#pragma once
using namespace System::Collections::Generic;
namespace SistemaMonitoreoGranjaModel {
	using namespace System;

	public ref class Tarea {
		/*Atributos o Datos*/
	private:
		String^ lugar;
		String^ fecha;
		String^ descripcion;
		List<Personal^>^ ListPersonal;

		/*Métodos o Funciones*/
	public:
		Tarea();
		Tarea(String^ lugar, String^ fecha, String^ descripcion);


	};
}