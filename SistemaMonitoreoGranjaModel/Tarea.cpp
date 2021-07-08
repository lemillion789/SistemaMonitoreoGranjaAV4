#include "Tarea.h"
using namespace SistemaMonitoreoGranjaModel;



/*Tarea::Tarea(String^ IDtarea, String^ lugar, String^ fecha, String^ descripcion)
{
    this->IDtarea = IDtarea;
    this->lugar = lugar;
    this->fecha = fecha;
    this->descripcion = descripcion;
    //this->ListaPersonal = gcnew List<Personal^>();
}*/

Tarea::Tarea(String^ IDtarea, String^ fecha, AreaDeAnimales^ objArea, Sensores^ objSensor, Boolean Estado)
{
    this->IDtarea = IDtarea;
    this->fecha = fecha;
    this->objArea = objArea;
    this->objSensor = objSensor;
    this->Estado = Estado;
}
