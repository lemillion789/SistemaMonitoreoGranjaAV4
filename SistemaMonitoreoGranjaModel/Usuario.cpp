#include "Usuario.h"
using namespace SistemaMonitoreoGranjaModel;
Usuario::Usuario()
{
	throw gcnew System::NotImplementedException();
}

Usuario::Usuario(String^ ID, String^ contraseņa)
{
	this->ID = ID;
	this->contraseņa = contraseņa;
}
