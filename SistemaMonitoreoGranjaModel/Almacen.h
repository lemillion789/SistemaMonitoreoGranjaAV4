#pragma once
#pragma once

#include "Farmacos.h"
#include "Alimentos.h"

namespace SistemaMonitoreoGranjaModel {
	using namespace System::Collections::Generic;
	using namespace System;
	public ref class Almacen {

		/*Atributos o Datos*/
	public:
		String^ codigo;
		String^ nombre;
		String^ elemento;
		String^ fecha_lote;
		int cantidad;
		String^ estado;
		String^ zona;
		List< Farmacos^>^ List_Farmacos;
		List < Alimentos^>^ List_Alimentos;

		/*Metrodos y Funciones*/

	public:

		Almacen();
		Almacen(String^ codigo, String^ nombre, String^ elemento, String^ fecha_lote, int cantidad, String^ estado, String^ zona,List< Farmacos^>^ List_Farmacos, List < Alimentos^>^ List_Alimentos);
		Almacen(String^ codigo, String^ nombre, String^ estado, String^ zona);

	};
}