#pragma once
namespace SistemaMonitoreoGranjaController {

	using namespace System::Collections::Generic;
	using namespace SistemaMonitoreoGranjaModel;
	using namespace System;

	public ref class AdvertenciaController {
	private:
		List<Advertencia^>^ listaAdvertencias;


	public:
		AdvertenciaController();
		List<Advertencia^>^ generarReporteAdvertencias();
		
		List<Advertencia^>^ obtenerlistaAdvertencias();
	};
}