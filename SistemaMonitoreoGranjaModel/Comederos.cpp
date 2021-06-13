#include "Comederos.h"
using namespace SistemaMonitoreoGranjaModel;

Comederos::Comederos(int cap_comida, int cap_agua, int cap_proteinas, String^ hora_llenado, String^ nombre, String^ ID)
{
    this->capComida = cap_comida;
    this->capAgua = cap_agua;
    this->capProteinas = cap_proteinas;
    this->horaLlenado = hora_llenado;
    this->nombre = nombre;
    this->ID = ID;
    this->listaSensores = gcnew List<Sensores^>();
    this->objAlimento = gcnew Alimentos();
}




