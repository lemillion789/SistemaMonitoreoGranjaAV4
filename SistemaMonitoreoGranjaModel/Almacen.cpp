#include "Almacen.h"
using namespace SistemaMonitoreoGranjaModel;
Almacen::Almacen()
{
    throw gcnew System::NotImplementedException();
}

Almacen::Almacen(String^ codigo, String^ nombre, String^ estado, String^ zona)
{
    this->codigo = codigo;
    this->nombre = nombre;
    this->estado = estado;
    this->zona = zona;
    this->List_Farmacos = gcnew List<Farmacos^>();
    this->List_Alimentos = gcnew List<Alimentos^>();

}
Almacen::Almacen(String^ codigo, String^ nombre, String^ elemento, String^ fecha_lote, int cantidad, String^ estado, String^ zona, List< Farmacos^>^ List_Farmacos, List < Alimentos^>^ List_Alimentos) {

}



