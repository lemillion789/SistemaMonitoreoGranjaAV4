#pragma once

using namespace System::Collections::Generic;
using namespace SistemaMonitoreoGranjaModel;
using namespace System;
using namespace System::Data::SqlClient;

namespace SistemaMonitoreoGranjaController {

	public ref class AlimentosController {
	private:
		List<Alimentos^>^ listaAlimentos;
		SqlConnection^ objConexion;

	public:
		AlimentosController();
		void AbrirConexion();
		void CerrarConexion();
		void limpiarTabla();
		List<Alimentos^>^ leerDatos();
		void guardarDatos(List<Alimentos^>^);
		Alimentos^ buscarAlimentosCodigo(String^ codigo);
	};
}