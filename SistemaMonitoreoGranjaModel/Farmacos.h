#pragma once

namespace SistemaMonitoreoGranjaModel {
	using namespace System;
	public ref class Farmacos {

		/*Atributos o Datos*/
	public:
		String^ codigo;
		String^ nombre;
		int cantidad;
		String^ fechaVencimiento;
		String^ descripcion;

		/*Metrodos y Funciones*/
	public:

		Farmacos();
		Farmacos(String^ codigo, String^ nombre, int cantidad, String^ fechaVencimiento, String^ descripcion);

	};
}