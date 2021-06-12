#include "SensoresController.h"
//#include "MedicionController.h"
using namespace SistemaMonitoreoGranjaModel;
using namespace SistemaMonitoreoGranjaController;
using namespace System;
using namespace System::IO;


SensoresController::SensoresController() {
	this->listaSensores = gcnew List<Sensores^>();
}

Sensores^ SensoresController::buscarSensor(String^ ID) {
	Sensores^ objSensorEncontrado;
	array<String^>^ lineas = File::ReadAllLines("Sensores.txt");
	String^ separadores = ";";
	for each (String ^ lineaComedero in lineas) {
		array<String^>^ palabras = lineaComedero->Split(separadores->ToCharArray());
		String^ ID_Sensor = palabras[0];
		String^ Nombre = palabras[1];
		String^ Marca = palabras[2];
		String^ Tipo_Sensor = palabras[3];
		int Cantidad = Convert::ToInt32(palabras[4]);
		if (ID_Sensor == ID) {
			objSensorEncontrado = gcnew Sensores(ID, Nombre, Marca, Tipo_Sensor, Cantidad);
			break;
		}
	}
	return objSensorEncontrado;
}

void SensoresController::CargarSensores() {
	array<String^>^ lineas = File::ReadAllLines("Sensores.txt");

	String^ separadores = ";";
	for each (String ^ lineaSensor in lineas) {
		array<String^>^ palabras = lineaSensor->Split(separadores->ToCharArray());
		String^ ID_Sensor = palabras[0];
		String^ Nombre = palabras[1];
		String^ Marca = palabras[2];
		String^ Tipo_Sensor = palabras[3];
		int Cantidad = Convert::ToInt32(palabras[4]);
		Sensores^ objSensor = gcnew  Sensores(ID_Sensor, Nombre, Marca, Tipo_Sensor, Cantidad);
		//List<Sensores^>^ listaSensores = BuscarAlumnosPartidoPolitico(codigoPartido);
		//objPartido->listaAlumnos = listAlumnosPartido;
		this->listaSensores->Add(objSensor);
	}
}

List<Sensores^>^ SensoresController::obtenerListaSensores() {
	return this->listaSensores;
}

void SensoresController::GuardarSensorEnArchivo(Sensores^ objSensor) {
	//Miembros de Partidos Politicos
	this->listaSensores->Clear();
	CargarSensores();
	String^ codigo = objSensor->ID;
	int pertenece = verificarSensor(codigo);
	if (pertenece) {

		this->listaSensores->Clear();
		CargarSensores();
		for (int i = 0; i < this->listaSensores->Count; i++) {
			Sensores^ SensorElegido = this->listaSensores[i];
			if (SensorElegido->ID == codigo) {
				SensorElegido->ID = objSensor->ID;
				SensorElegido->Nombre = objSensor->Nombre;
				SensorElegido->marca = objSensor->marca;
				SensorElegido->tipoSensor = objSensor->tipoSensor;
				SensorElegido->unidades = objSensor->unidades;

				//this->listaSensores[i]->   = listaMiembros;
				break;
			}
		}
	}
	else if(!pertenece){

		this->listaSensores->Add(objSensor);
	}
	array<String^>^ lineasArchivoSensores = gcnew array<String^>(this->listaSensores->Count);

	for (int i = 0; i < this->listaSensores->Count; i++) {
			Sensores^ objSensor = this->listaSensores[i];
			lineasArchivoSensores[i] = objSensor->ID + ";" + objSensor->Nombre + ";" + objSensor->marca + ";" + objSensor->tipoSensor + ";" + objSensor->unidades;

	}
	File::WriteAllLines("Sensores.txt", lineasArchivoSensores);

}

int SensoresController::verificarSensor(String^ IDsensor) {
	int pertenece = 0;
	array<String^>^ lineas = File::ReadAllLines("Sensores.txt");
	String^ separadores = ";";
	for each (String ^ lineaSensores in lineas) {
		array<String^>^ palabras = lineaSensores->Split(separadores->ToCharArray());
		String^ IDdelSensor = palabras[0];
		if (IDsensor == IDdelSensor) {
			pertenece = 1;
			break;
		}
	}
	return pertenece;
}

/*
void SensoresController::editarSensor(int codigoPartidoEditar, List<Sensores^>^ listaMiembros) {
	this->listaPartidosPoliticos->Clear();
	CargarPartidosDesdeArchivo();
	for (int i = 0; i < this->listaPartidosPoliticos->Count; i++) {
		PartidoPolitico^ objPartido = this->listaPartidosPoliticos[i];
		if (objPartido->codigo == codigoPartidoEditar) {
			this->listaPartidosPoliticos[i]->listaAlumnos = listaMiembros;
			break;
		}
	}
	*/
