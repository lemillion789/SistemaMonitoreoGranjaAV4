#include "Personal.h"
using namespace SistemaMonitoreoGranjaModel;


Personal::Personal(String^ ID,String^ nombre, String^ ApPaterno, String^ ApMaterno, String^ funcion, String^ horario, String^ asistencia)
{
    this->ID = ID;
    this->nombre = nombre;
    this->ApPaterno = ApPaterno;
    this->ApMaterno = ApMaterno;
    this->funcion= funcion;
    this->horario = horario;
   
    this->asistencia = asistencia;

   
}



