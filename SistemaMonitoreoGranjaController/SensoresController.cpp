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
		objSensor->listaMediciones = buscarMedicionesxSensor(ID_Sensor);		// añadir mediciones al sensor
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
	array<String^>^ lineas = File::ReadAllLines("SensoresEnComedero.txt");
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
	Medicion^ objMedicion;
	MedicionController^ gestorMedicion = gcnew MedicionController();
	int Max;
	int Min;
	int medidaNueva;
	//AÑADIR MEDICION A CADA SENSOR
	for (int i = 0; i < this->listaSensores->Count; i++) {
		Sensores^ objSensorGrab = this->listaSensores[i];

		List<Medicion^>^ listaMedicion = buscarMedicionesxSensor(objSensorGrab->ID);
		
		int aleatorio = rand() % 2;

		if (objSensorGrab->tipoSensor == "Temperatura") {
			Max = 30;
			Min = 0;
		}
		else if (objSensorGrab->tipoSensor == "Humedad") {
			Max = 100;
			Min = 0;
		}
		else if (objSensorGrab->tipoSensor == "Nivel de Agua") {
			Max = 3;
			Min = 0;
		}
		else if (objSensorGrab->tipoSensor == "Nivel de Proteinas") {
			Max = 100;
			Min = 0;
		}
		else if (objSensorGrab->tipoSensor == "Peso") {
			Max = 5;
			Min = 0;
		}


		if (listaMedicion->Count == 0) {
			medidaNueva = Max;
		}
		else {
			objMedicion = listaMedicion[listaMedicion->Count - 1]; //cuidado
			
			if (objMedicion->medida >= Min && objSensorGrab->tipoSensor != "Temperatura" && objSensorGrab->tipoSensor != "Humedad") {
				//comida,agua,proteinas
				if (objMedicion->medida <= Min) {
					medidaNueva = 0;
				}
				else {
					medidaNueva = objMedicion->medida - aleatorio;
				}
			}
			else if (objMedicion->medida >= Min && objMedicion->medida <= Max && (objSensorGrab->tipoSensor == "Temperatura" || objSensorGrab->tipoSensor == "Humedad")) {
				//temperatura, humedad
				int factor = rand() % 2;
				if (factor) {
					medidaNueva = objMedicion->medida + aleatorio;
				}
				else {
					medidaNueva = objMedicion->medida - aleatorio;
				}
				if (medidaNueva >= Max) {
					medidaNueva = Max;
				}
				else if (medidaNueva <= Min) {
					medidaNueva = Min;
				}
			}
		}

		//AGREGAR LA MEDICION ALEATORIA
		List<Medicion^>^ listaNueva = gestorMedicion->agregarMedicionAleatoria(objSensorGrab,medidaNueva);
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

/*String^ SensoresController::IDSensorAlarma()
{
	String^ IDSensorIdentificado;
	this->listaSensores->Clear();
	CargarSensores();
	int Max;
	int Min;
	for (int i = 0; i < this->listaSensores->Count; i++) {
		Sensores^ SensorElegido = this->listaSensores[i];
		List<Medicion^>^ listaMedicionesSensor = gcnew List<Medicion^>();
		listaMedicionesSensor= SensorElegido->listaMediciones;
		Medicion^ ultimaMedicion = gcnew Medicion();
		ultimaMedicion = listaMedicionesSensor[(listaMedicionesSensor->Count) - 1];
		int ultimaMedida = ultimaMedicion->medida;

		if (SensorElegido->tipoSensor == "Temperatura") {
			Max = 30;
			Min = 0;
		}
		else if (SensorElegido->tipoSensor == "Humedad") {
			Max = 100;
			Min = 0;
		}
		else if (SensorElegido->tipoSensor == "Nivel de Agua") {
			Max = 100;
			Min = 0;
		}
		else if (SensorElegido->tipoSensor == "Nivel de Comida") {
			Max = 100;
			Min = 0;
		}


		if (ultimaMedida <= Min) {
			return SensorElegido->ID;	//falta corregir para una lista de errores
		}
		else {
			return "-1";
		}
	}*/



void SensoresController::EliminarSensor(String^ IDSensor) {
	this->listaSensores->Clear();
	CargarSensores();
	for (int i = 0; i < this->listaSensores->Count; i++) {
		Sensores^ objSensor = this->listaSensores[i];
		if (objSensor->ID == IDSensor) {
			this->listaSensores->RemoveAt(i);
			break;
		}
	}
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
	}
	*/
String^ SensoresController::BuscarUnidadxIDSensor(String^ ID_SensorID) {
	
	String^ Unidades;
	array<String^>^ lineas = File::ReadAllLines("Sensores.txt");		
	String^ separadores = ";";
	for each (String ^ line in lineas) {
		array<String^>^ palabras = line->Split(separadores->ToCharArray());
		String^ IDSensor = palabras[0];
		String^ tipoSensor = palabras[1];
		String^ Marca = palabras[2];
		String^ sensortipounidad = palabras[3];
		String^ Unidad = palabras[4];
		if (IDSensor == ID_SensorID) {
			Unidades = Unidad;
			break;
		}
	}
	return Unidades;
}


void SensoresController::GuardarEnArchivo(List<Sensores^>^ lista)
{
	this->listaSensores = lista;
	array<String^>^ lineasArchivoSensores = gcnew array<String^>(this->listaSensores->Count);

	for (int i = 0; i < this->listaSensores->Count; i++) {
		Sensores^ objSensor = this->listaSensores[i];
		lineasArchivoSensores[i] = objSensor->ID + ";" + objSensor->Nombre + ";" + objSensor->marca + ";" + objSensor->tipoSensor + ";" + objSensor->unidades;

	}
	File::WriteAllLines("Sensores.txt", lineasArchivoSensores);
}