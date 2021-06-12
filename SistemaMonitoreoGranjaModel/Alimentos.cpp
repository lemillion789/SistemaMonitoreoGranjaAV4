#include "Alimentos.h"

using namespace SistemaMonitoreoGranjaModel;
Alimentos::Alimentos()
{
    throw gcnew System::NotImplementedException();
}

Alimentos::Alimentos(String^ codigo, String^ nombre, String^ descripcion, String^ fechaVencimiento, int presentacion, String^ unidadMedida)
{
    this->codigo = codigo;
    this->nombre = nombre;
    this->descripcion = descripcion;
    this->fechaVencimiento = fechaVencimiento;
    this->presentacion = presentacion;
    this->unidadMedida = unidadMedida;
}



