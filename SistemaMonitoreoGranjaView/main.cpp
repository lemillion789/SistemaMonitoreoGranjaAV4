
#include "frmPrincipal.h" //Lo primero que hará es que abrirá nuestra ventana principal
using namespace System;
using namespace System::Windows::Forms;
using namespace SistemaMonitoreoGranjaView;
// "SistemaEleccionesEstudiantilView" **Es el espacio de nombres en donde están todas las ventanas y formularios que creamos**. Esto lo hace visual code de manera automática

void main(array <String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Como necesitamos que lo primero en mostrarse sea la pantalla principal, hacemos lo siguiente
	frmPrincipal ventana; //Creamos un objeto del tipo frmPrincipal
	Application::Run(% ventana); // Ejecutamos la ventana
}
