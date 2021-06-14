#include "Medicion.h"
using namespace SistemaMonitoreoGranjaModel;
Medicion::Medicion(String^ registro_hora, String^ unidades, int medida, String^ ID_sensor)
{
    this->registro_hora = registro_hora;
    this->unidades = unidades;
    this->medida = medida;
    this->ID_sensor = ID_sensor;
}

Medicion::Medicion()
{
}
