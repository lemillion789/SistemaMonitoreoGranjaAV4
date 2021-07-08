#pragma once

using namespace SistemaMonitoreoGranjaModel;
using namespace System::Collections::Generic;
using namespace System;
using namespace System::Data::SqlClient;

namespace SistemaMonitoreoGranjaController {

	public ref class MovimientoController {

	private:
		List <Movimiento^ >^ listaMovimientos;
		SqlConnection^ objConexion;

	public:
		MovimientoController();
		void AbrirConexion();
		void CerrarConexion();
		void limpiarTabla();
		List<Movimiento^>^ leerDatos();
		void guardarDatos(List<Movimiento^>^);
		List<Movimiento^>^ buscarTipoElemento(String^ tipo, String^ elemento);

	};
}