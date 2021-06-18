#include "Usuario.h"
using namespace SistemaMonitoreoGranjaModel;
Usuario::Usuario()
{
	throw gcnew System::NotImplementedException();
}

Usuario::Usuario(String^ ID, String^ contraseña)
{
	this->ID = ID;
	this->contraseña = contraseña;
}
