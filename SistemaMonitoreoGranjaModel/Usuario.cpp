#include "Usuario.h"
using namespace SistemaMonitoreoGranjaModel;
Usuario::Usuario()
{
	throw gcnew System::NotImplementedException();
}

Usuario::Usuario(String^ ID, String^ contrase�a)
{
	this->ID = ID;
	this->contrase�a = contrase�a;
}
