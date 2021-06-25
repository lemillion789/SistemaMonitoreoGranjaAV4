#include "AdvertenciaController.h"
#include "SensoresController.h"
#include "MedicionController.h"

using namespace SistemaMonitoreoGranjaController;
using namespace System;

AdvertenciaController::AdvertenciaController()
{
	this->listaAdvertencias = gcnew List<Advertencia^>();
}

List<Advertencia^>^ AdvertenciaController::generarReporteAdvertencias()
{
	SensoresController^ gestorSensores = gcnew SensoresController();
	gestorSensores->CargarSensores();
	List<Sensores^>^ listaSensores = gestorSensores->obtenerListaSensores();
	
	for (int i = 0; i < listaSensores->Count; i++) {
		Sensores^ objSensor = listaSensores[i];
		int cantidadMediciones = objSensor->listaMediciones->Count;
		Medicion^ ultimaMedicion = objSensor->listaMediciones[cantidadMediciones - 1];
		
		//falta aclarar limites
		Boolean Alarma = (ultimaMedicion->medida == 0);
		Advertencia^ objAdvertencia = gcnew Advertencia(objSensor->ID, Alarma);
		this->listaAdvertencias->Add(objAdvertencia);
	}

	return this->listaAdvertencias;
}

List<Advertencia^>^ AdvertenciaController::obtenerlistaAdvertencias() {
	
	
	return this->listaAdvertencias;




}