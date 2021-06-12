#include "ComedoresController.h"
#include "SensoresController.h"

using namespace SistemaMonitoreoGranjaController;
using namespace System;
using namespace System::IO;
ComedoresController::ComedoresController() {
	this->listaComederos = gcnew List<Comederos^>();
}


Comederos^ ComedoresController::buscarComedero(String^ ID) {
	Comederos^ objComederoEncontrado;
	array<String^>^ lineas = File::ReadAllLines("Comederos.txt");
	String^ separadores = ";";
	for each (String ^ lineaComedero in lineas) {
		array<String^>^ palabras = lineaComedero->Split(separadores->ToCharArray());
		String^ IDcomedero = palabras[0];
		String^ nombre = palabras[1];
		int capComida = Convert::ToInt32(palabras[2]);
		int capAgua = Convert::ToInt32(palabras[3]);
		int capProteinas = Convert::ToInt32(palabras[4]);
		String^ horaLlenado = palabras[5];
		if (ID == IDcomedero) {
			objComederoEncontrado = gcnew Comederos(capComida, capAgua, capProteinas, horaLlenado, nombre, IDcomedero);
			objComederoEncontrado->listaSensores = buscarSensoresComedero(IDcomedero);
			break;
		}
	}
	return objComederoEncontrado;
}

void ComedoresController::CargarComederoDesdeArchivo()
{
	this->listaComederos->Clear();

	array<String^>^ lineas = File::ReadAllLines("comederos.txt"); //leer la info del archivo y ponerla en un arreglo

	String^ separadores = ";";
	for each (String ^ line in lineas) {
		array<String^>^ palabras = line->Split(separadores->ToCharArray());
		String^ ID = palabras[0];
		String^ nombre = palabras[1];
		int capComida = Convert::ToInt32(palabras[2]);
		int capAgua = Convert::ToInt32(palabras[3]);
		int capProteinas = Convert::ToInt32(palabras[4]);
		String^ horaLlenado = palabras[5];

		Comederos^ objComedero = gcnew Comederos(capComida, capAgua, capProteinas, horaLlenado, nombre, ID);
		List<Sensores^>^ listSensoresComedero = buscarSensoresComedero(ID);
		//Alimentos^ objAlimento = buscarAlimentoComedero();

		objComedero->listaSensores = listSensoresComedero;
		//objComedero->objAlimento = objAlimento;

		this->listaComederos->Add(objComedero);
	}
}

List<Sensores^>^ ComedoresController::buscarSensoresComedero(String^ IDcomedero)
{
	List<Sensores^>^ listaEncontrados = gcnew List<Sensores^>();
	array<String^>^ lineas = File::ReadAllLines("SensoresComederos.txt");
	String^ separadores = ";";
	for each (String ^ line in lineas) {
		array<String^>^ palabras = line->Split(separadores->ToCharArray());
		String^ Idsensor = palabras[0];
		String^ Idcomedero = palabras[1];
		if (Idcomedero == IDcomedero) {
			//buscar a los alumnos como objetos 
			SensoresController^ gestorSensorController = gcnew SensoresController();
			Sensores^ objSensor = gestorSensorController->buscarSensor(Idsensor);
			listaEncontrados->Add(objSensor);
		}
	}
	return listaEncontrados;
}

int ComedoresController::ObtenerCantidadComederos()
{
	return this->listaComederos->Count;
}

Comederos^ ComedoresController::ObtenerComederoLista(int indice)
{
	return this->listaComederos[indice];
}

List<Comederos^>^ ComedoresController::obtenerListaComederos()
{
	return this->listaComederos;
}
