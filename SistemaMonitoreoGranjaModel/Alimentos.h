#pragma once

namespace SistemaMonitoreoGranjaModel {
	using namespace System;

	public ref class Alimentos {
		/*Atributos o Datos*/

	public:
		String^ codigo;
		String^ nombre;
		String^ descripcion;
		String^ fechaVencimiento;
		int presentacion;
		String^ unidadMedida;


		/*Métodos o Funciones*/
	public:
		Alimentos();
		Alimentos(String^ codigo, String^ nombre, String^ descripcion, String^ fechaVencimiento, int presentacion, String^ unidadMedida);


	};
}