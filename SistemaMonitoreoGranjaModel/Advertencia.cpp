#include "Advertencia.h"
#include "Sensores.h"
using namespace SistemaMonitoreoGranjaModel;
Advertencia::Advertencia()
{
}

Advertencia::Advertencia(Sensores^ objSensor, Boolean alarma)
{
	this->objSensor = objSensor;
	this->alarma = alarma;
}