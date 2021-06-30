#include "Tarea.h"
using namespace SistemaMonitoreoGranjaModel;



Tarea::Tarea(String^ IDtarea, String^ lugar ,String^ fecha, String^ descripcion)
{
    this->IDtarea = IDtarea;
    this->lugar = lugar;
    this->fecha = fecha;
    this->descripcion = descripcion;
    //this->ListaPersonal = gcnew List<Personal^>();
}


