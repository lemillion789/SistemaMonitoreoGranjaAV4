#include "SensoresController.h"
#include "MedicionController.h"
#include <time.h>
#include<stdlib.h>
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
		String^ Unidad =(palabras[4]);
		if (ID_Sensor == ID) {
			objSensorEncontrado = gcnew Sensores(ID, Nombre, Marca, Tipo_Sensor, Unidad);
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
		String^ Unidad = (palabras[4]);
		Sensores^ objSensor = gcnew  Sensores(ID_Sensor, Nombre, Marca, Tipo_Sensor, Unidad);
		//List<Sensores^>^ listaSensores = BuscarAlumnosPartidoPolitico(codigoPartido);
		//objPartido->listaAlumnos = listAlumnosPartido;
		this->listaSensores->Add(objSensor);
	}
}

List<Sensores^>^ SensoresController::obtenerListaSensores() {
	return this->listaSensores;
}

void SensoresController::GuardarSensorEnArchivo(Sensores^ objSensor) {
	
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

List<Sensores^>^ SensoresController::buscarSensorxTipo(String^ tipoSensor)
{
	List<Sensores^>^ listaEncontrados = gcnew List<Sensores^>();
	array<String^>^ lineas = File::ReadAllLines("Sensores.txt");
	String^ separadores = ";";
	for each (String ^ line in lineas) {
		array<String^>^ palabras = line->Split(separadores->ToCharArray());
		String^ ID_Sensor = palabras[0];
		String^ Nombre = palabras[1];
		String^ Marca = palabras[2];
		String^ Tipo_Sensor = palabras[3];
		String^ Unidad = (palabras[4]);
		if (Tipo_Sensor == tipoSensor) { 
			Sensores^ objSensorEncontrado = gcnew Sensores(ID_Sensor, Nombre, Marca, Tipo_Sensor, Unidad);
			objSensorEncontrado->listaMediciones = buscarMedicionesxSensor(ID_Sensor);

			listaEncontrados->Add(objSensorEncontrado);
			//falta alimento
		}
	}
	return listaEncontrados;
}

List<Medicion^>^ SensoresController::buscarMedicionesxSensor(String^ ID_Sensor)
{
	List<Medicion^>^ listaEncontrados = gcnew List<Medicion^>();
	array<String^>^ lineas = File::ReadAllLines("Mediciones.txt");		//IDSensor;Medida;Unidad;Hora
	String^ separadores = ";";
	for each (String ^ line in lineas) {
		array<String^>^ palabras = line->Split(separadores->ToCharArray());
		String^ IDSensor = palabras[0];
		int Medida = Convert::ToInt32(palabras[1]);
		String^ Unidad = palabras[2];
		String^ Hora = palabras[3];
		if (IDSensor == ID_Sensor) {
			Medicion^ objMedida = gcnew Medicion(Hora, Unidad, Medida, IDSensor);
			listaEncontrados->Add(objMedida);
		}
	}
	return listaEncontrados;
}


void SensoresController::CrearMedicionesNuevas()
{
	srand(time(NULL));
	this->listaSensores->Clear();
	CargarSensores();

	//AÑADIR MEDICION A CADA SENSOR
	for (int i = 0; i < this->listaSensores->Count; i++) {
		Sensores^ objSensorGrab = this->listaSensores[i];
		
		int aleatorio = rand() % 100;
		//AGREGAR LA MEDICION ALEATORIA
		MedicionController^ gestorMedicion = gcnew MedicionController();
		List<Medicion^>^ listaNueva = gestorMedicion->agregarMedicionAleatoria(objSensorGrab,aleatorio);
		objSensorGrab->listaMediciones = listaNueva;
	}
	
	//GUARDAR
	int totalMediciones = 0;
	for (int i = 0; i < this->listaSensores->Count; i++) {
		Sensores^ objSensorGrab = this->listaSensores[i];
		totalMediciones = totalMediciones + objSensorGrab->listaMediciones->Count;
	}

	//guardar en Mediciones.txt
	array<String^>^ lineasArchivo = gcnew array<String^>(totalMediciones);
	int k = 0;
	for (int i = 0; i < this->listaSensores->Count; i++) {
		Sensores^ objSensorGrab = this->listaSensores[i];
		for (int j = 0; j < objSensorGrab->listaMediciones->Count; j++) {
			Medicion^ objMedicion = objSensorGrab->listaMediciones[j];
			lineasArchivo[k] = objSensorGrab->ID + ";" + objMedicion->medida + ";" + objMedicion->unidades + ";" + objMedicion->registro_hora;
			k++;  //pasar a la siguiente linea -> arreglo
		}
	}
	/*Aquí ya mi array de lineasArchivo esta OK, con la información a grabar*/
	File::WriteAllLines("Mediciones.txt", lineasArchivo);
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
