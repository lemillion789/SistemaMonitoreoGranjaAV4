#pragma once

using namespace SistemaMonitoreoGranjaModel;
using namespace System::Collections::Generic;
using namespace System;
using namespace System::Data::SqlClient;

namespace SistemaMonitoreoGranjaController {

	public ref class AlmacenController {

	private:
		List <Almacen^ >^ listaAlmacenes;
		SqlConnection^ objConexion;

	public:
		AlmacenController();
		void AbrirConexion();
		void CerrarConexion();
		void limpiarTabla();
		List<Almacen^>^ leerDatos();
		void guardarDatos(List<Almacen^>^);
		List<Farmacos^>^ obtenerFarmacosAlmacen(String^ almacen);
		List<Alimentos^>^ obtenerAlimentosAlmacen(String^ almacen);
		void guardarElementoAlmacen(String^ almacen, String^ elemento, String^ tipo, int cantidad);
		int verificaElementoAlmacen(String^ almacen, String^ elemento);
		int calcularCantidadAlmacen(String^ almacen, String^ elemento);
		void eliminarElemento(String^ almacen, String^ elemento);


	};
}