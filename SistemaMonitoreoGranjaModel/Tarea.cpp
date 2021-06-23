#include "Tarea.h"
using namespace SistemaMonitoreoGranjaModel;



Tarea::Tarea(String^ lugar ,String^ fecha, String^ descripcion)
{
    this->lugar = lugar;
    this->fecha = fecha;
    this->descripcion = descripcion;
    this->ListaPersonal = gcnew List<Personal^>();
}


