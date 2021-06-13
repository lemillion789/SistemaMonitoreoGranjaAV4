#include "Sensores.h"
using namespace SistemaMonitoreoGranjaModel;

Sensores::Sensores()
{
    throw gcnew System::NotImplementedException();
}

Sensores::Sensores(String^ tipoSensor, String^ ID, String^ marca, int unidades)
{
    this->tipoSensor = tipoSensor;
    this->ID = ID;
    this->marca = marca;
    this->unidades = unidades;
}


Sensores::Sensores(String^ ID, String^ Nombre, String^ Marca, String^ Tipo_Sensor, int unidades) {
    this->Nombre = Nombre;
    this->tipoSensor = Tipo_Sensor;
    this->ID = ID;
    this->marca = Marca;
    this->unidades = unidades;
    this->listaMediciones = gcnew List<Medicion^>();


}

