#include "Advertencia.h"

using namespace SistemaMonitoreoGranjaModel;
Advertencia::Advertencia()
{
}

Advertencia::Advertencia(String^ IdSensor, Boolean alarma)
{
	this->IdSensor = IdSensor;
	this->alarma = alarma;
}