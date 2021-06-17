#pragma once

namespace SistemaMonitoreoGranjaModel {

	using namespace System;

	public ref class ReporteAreas {
	public:
		String^ nombreArea; 
		int cantComederos;

	public:
		ReporteAreas(String^ nombreArea, int cantComederos);
	};

}