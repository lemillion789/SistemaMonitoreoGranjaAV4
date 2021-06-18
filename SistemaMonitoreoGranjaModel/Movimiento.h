#pragma once
#include "AreaDeAnimales.h"
#include "Almacen.h"
#include "Alimentos.h"
#include "Farmacos.h"

namespace SistemaMonitoreoGranjaModel {
	using namespace System;

	public ref class Movimiento {
		/*Atributos o Datos*/
	public:
		int cantidad;
		String^ tipoMovimiento;
		String^ elementos;
		String^ fecha;
		String^ origen;
		String^ destino;
		/*Métodos o Funciones*/
	public:
		Movimiento(int cantidad, String^ tipoMovimiento, String^ elementos, String^ fecha, String^ origen, String^ destino);
		Movimiento();


	};
}