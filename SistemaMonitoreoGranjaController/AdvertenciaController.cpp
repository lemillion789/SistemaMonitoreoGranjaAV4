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
		Boolean Alarma;
		//falta aclarar limites
			if (objSensor->tipoSensor == "Temperatura") {
				Alarma = ultimaMedicion->medida < 10 || ultimaMedicion->medida>40;
			}
			else if (objSensor->tipoSensor == "Humedad") {
				Alarma = ultimaMedicion->medida < 40 || ultimaMedicion->medida>70;
			}
			else if (objSensor->tipoSensor == "Nivel de Agua") {
				Alarma = ultimaMedicion->medida <= 0;
			}
			else if (objSensor->tipoSensor == "Peso") { //Nivel de comida
				Alarma = ultimaMedicion->medida <= 0;
			}
			else if (objSensor->tipoSensor == "Nivel de Proteinas") {
				Alarma = ultimaMedicion->medida <= 0;
			}

		//Boolean Alarma = (ultimaMedicion->medida == 0);
		Advertencia^ objAdvertencia = gcnew Advertencia(objSensor, Alarma);
		this->listaAdvertencias->Add(objAdvertencia);
	}

	return this->listaAdvertencias;
}

List<Advertencia^>^ AdvertenciaController::obtenerlistaAdvertencias() {
	
	
	return this->listaAdvertencias;




}