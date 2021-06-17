#include "ReporteController.h"
#include "AreasDeAnimalesController.h"
using namespace SistemaMonitoreoGranjaController;


SistemaMonitoreoGranjaController::ReporteController::ReporteController()
{
	this->listaReporte = gcnew List<ReporteAreas^>();
}

List<ReporteAreas^>^ ReporteController::GenerarReporte() {
	List<ReporteAreas^>^ listaReporteAreas = gcnew List<ReporteAreas^>();
	AreasDeAnimalesController^ objGestorArea = gcnew AreasDeAnimalesController();
	objGestorArea->CargarAreasDesdeArchivo();
	for (int i = 0; i < objGestorArea->ObtenerCantidadAreas(); i++) {
		AreaDeAnimales^ objArea = objGestorArea->ObtenerAreaLista(i);
		
		String^ nombreArea = objArea->tipo_animal + " " + objArea->raza + " de sexo " + objArea->sexo;
		int cantComederos = objArea->listaComederos->Count;
		ReporteAreas^ objReporteArea = gcnew ReporteAreas(nombreArea, cantComederos);
		listaReporteAreas->Add(objReporteArea);
	}
	return listaReporteAreas;
}