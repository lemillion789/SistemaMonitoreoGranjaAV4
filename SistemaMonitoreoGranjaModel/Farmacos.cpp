#include "Farmacos.h"
using namespace SistemaMonitoreoGranjaModel;
Farmacos::Farmacos()
{
    throw gcnew System::NotImplementedException();
}

Farmacos::Farmacos(String^ codigo, String^ nombre, int cantidad, String^ fechaVencimiento, String^ descripcion)
{
    this->ID = codigo;
    this->nombre = nombre;
    this->cantidad = cantidad;
    this->fechaVencimiento = fechaVencimiento;
    this->descripcion = descripcion;
}


