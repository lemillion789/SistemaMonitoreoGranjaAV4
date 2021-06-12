#pragma once
namespace SistemaMonitoreoGranjaModel {
	using namespace System;

	public ref class Tarea {
		/*Atributos o Datos*/
	private:
		String^ lugar;
		String^ tipo_de_tarea;
		String^ nombre_personal;
		String^ ID;
		String^ fecha;
		String^ descripcion;


		/*Métodos o Funciones*/
	public:
		Tarea();
		Tarea(String^ lugar, String^ tipo_de_tarea, String^ nombre_personal, String^ ID, String^ fecha, String^ descripcion);


	};
}