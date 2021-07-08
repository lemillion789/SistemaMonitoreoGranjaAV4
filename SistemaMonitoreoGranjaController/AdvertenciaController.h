#pragma once
namespace SistemaMonitoreoGranjaController {

	using namespace System::Collections::Generic;
	using namespace SistemaMonitoreoGranjaModel;
	using namespace System;

	public ref class AdvertenciaController {
	private:
		List<Advertencia^>^ listaAdvertencias;
		List<Advertencia^>^ listaAdvertenciasControladas;

	public:
		AdvertenciaController();
		List<Advertencia^>^ generarReporteAdvertencias();
		void generarReporteAdvertenciasControladas(List<Advertencia^>^ listaAdvertencia);
		List<Advertencia^>^ obtenerlistaAdvertencias();
		List<Advertencia^>^ obtenerListaTXT();
		List<Advertencia^>^ obtenerlistaAdvertenciasControlada();
		void GuardarAdvertenciaTXT(List<Advertencia^>^ listaAdvertencias);
		int EsDiferente(List<Advertencia^>^ listaAdvertencia);
		int SeEncuentra(Advertencia^ objAdvertencia,List<Advertencia^>^ listaComparar);
	};
}