#pragma once

namespace SistemaMonitoreoGranjaController {

	using namespace SistemaMonitoreoGranjaModel;
	using namespace System::Collections::Generic;

	public ref class ReporteController {
	private:
		List<ReporteAreas^>^ listaReporte;

	public:
		ReporteController();
		List<ReporteAreas^>^ GenerarReporte();
	};
}
