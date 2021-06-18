#include "Movimiento.h"

using namespace SistemaMonitoreoGranjaModel;
Movimiento::Movimiento(int cantidad, String^ tipoMovimiento, String^ elementos, String^ fecha, String^ origen, String^ destino)
{
    this->cantidad = cantidad;
    this->tipoMovimiento = tipoMovimiento;
    this->elementos = elementos;
    this->fecha = fecha;
    this->origen = origen;
    this->destino = destino;
}

Movimiento::Movimiento()
{
    throw gcnew System::NotImplementedException();
}
