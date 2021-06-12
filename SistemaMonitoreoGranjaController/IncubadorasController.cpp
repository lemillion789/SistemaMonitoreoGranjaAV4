#include "IncubadorasController.h"

using namespace SistemaMonitoreoGranjaController;
using namespace System;
using namespace System::IO;
IncubadorasController::IncubadorasController() {
	this->listaIncubadoras = gcnew List<Incubadoras^>();
}

List<Incubadoras^>^ IncubadorasController::obtenerListaIncubadoras() {
	return this->listaIncubadoras;
}

Incubadoras^ IncubadorasController::buscarIncubadoras(String^ TipoAnimal) {
	Incubadoras^ objIncubadoraEncontrada;
	//array<String^>^ lineas = File::ReadAllLines("Incubadoras.txt");
	//String^ separadores = ";";
	List<Incubadoras^>^ ListadeIncubadoras= obtenerListaIncubadoras();
	for (int i = 0; i < ListadeIncubadoras->Count; i++){
	//for each (String ^ Lista in ListadeIncubadoras) {
		Incubadoras^ objIncubadora= ListadeIncubadoras[i];
		String^ Tipo = objIncubadora->tipoAnimal;
	
		if (Tipo == TipoAnimal) {
			objIncubadoraEncontrada = objIncubadora;
			break;
		}
	}
	return objIncubadoraEncontrada;
}