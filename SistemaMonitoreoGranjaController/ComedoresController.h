#pragma once

namespace SistemaMonitoreoGranjaController {

	using namespace System::Collections::Generic;
	using namespace SistemaMonitoreoGranjaModel;
	using namespace System;
	using namespace System::Data::SqlClient;

	public ref class ComedoresController {
	private:
		List<Comederos^>^ listaComederos;
		SqlConnection^ objConexion;
	public:
		void AbrirConexion();
		void CerrarConexion();
		ComedoresController();
		Comederos^ buscarComedero(String^ ID);
		List<Comederos^>^ buscarComederoxCapacidadMinima(int capAguaMin, int capProteinasMin, int capComidaMin);
		int verificarSiComederoPerteneceArea(String^ IDComedero);
		

		void CargarComederoDesdeArchivo();
		List<Sensores^>^ buscarSensoresComedero(String^ IDcomedero);
		int ObtenerCantidadComederos();
		Comederos^ ObtenerComederoLista(int indice);
		List<Comederos^>^ obtenerListaComederos();
		

		void GuardarComederoEnArchivo(Comederos^ objComedero);
		List<Comederos^>^ buscarComederos(String^ nombre);  
		void eliminarComedero(String^ IDComedero);   
		Comederos^ buscarComederoxID(String^ IDComedero);  
		void editarComedero(String^ IDComederoEditar, List<Sensores^>^ listaSensores); 



	};
}