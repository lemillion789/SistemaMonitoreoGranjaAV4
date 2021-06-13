#include "Medicion.h"
using namespace SistemaMonitoreoGranjaModel;
Medicion::Medicion(String^ registro_hora, String^ unidades, int medida)
{
    this->registro_hora = registro_hora;
    this->unidades = unidades;
    this->medida = medida;
}

Medicion::Medicion()
{
    throw gcnew System::NotImplementedException();
}
