#include "MedicionController.h"
#include<stdlib.h>
#include<time.h>

using namespace SistemaMonitoreoGranjaController;
using namespace System;
using namespace System::IO;


MedicionController::MedicionController() {
	this->listaMediciones = gcnew List<Medicion^>();
}

void MedicionController::CargarMedicionesDesdeArchivo()
{
	this->listaMediciones->Clear();

	array<String^>^ lineas = File::ReadAllLines("Mediciones.txt");

	String^ separadores = ";";
	for each (String ^ line in lineas) {
		array<String^>^ palabras = line->Split(separadores->ToCharArray());
		String^ IDSensor = palabras[0];
		//int codigoPartido = Convert::ToInt32(palabras[0]);
		int Medida = Convert::ToInt32(palabras[1]);
		String^ Unidad = palabras[2];
		String^ Hora = palabras[3];
		
		Medicion^ objMedicion = gcnew Medicion(Hora,Unidad,Medida,IDSensor);

		this->listaMediciones->Add(objMedicion);  
	}
}

List<Medicion^>^ MedicionController::agregarMedicionAleatoria(Sensores^ ObjSensor, int aleatorio)
{
	//srand(time(NULL));

	this->listaMediciones->Clear();
	CargarMedicionesDesdeArchivo();

	List<Medicion^>^ listaEnviar = gcnew List<Medicion^>();
	for (int i = 0; i < listaMediciones->Count; i++) {
		Medicion^ objMedicion = listaMediciones[i];
		if (objMedicion->ID_sensor == ObjSensor->ID) {
			listaEnviar->Add(objMedicion);
		}
	}
	
	//int aleatorio = rand() % 100;

	Medicion^ medicionNueva = gcnew Medicion();
	medicionNueva->medida = aleatorio;
	medicionNueva->ID_sensor = ObjSensor->ID;
	medicionNueva->unidades = ObjSensor->unidades; //cambiar luego: objSensorGrab->unidades

	//actualizar Hora 
	//ctime(&current_time);
	//	FALTA FUNCION DE HORA ACTUAL
	/*time_t tiempo = time(0);
	struct tm* tlocal = localtime(&tiempo);
	char output[128];
	strftime(output, 128, "%d/%m/%y %H:%M:%S", tlocal);
	
	//medicionNueva->registro_hora = Convert::ToString("10:55");  //cambiar
	medicionNueva->registro_hora = Convert::ToString(output);*/
	//añadir Medicion
	DateTime^ Gestortiempo = gcnew DateTime();
	medicionNueva->registro_hora = Gestortiempo->Now.ToLongTimeString();
	listaEnviar->Add(medicionNueva);
	return listaEnviar;
}

/*List<Medicion^>^ MedicionController::CrearlistaMedicionesparaSensor(String^ IDSensor)
{
	/*this->listaMediciones->Clear();
	CargarMedicionesDesdeArchivo();
	Medicion^ objmedicion;


	int totalMediciones = 0;
	for (int i = 0; i < this->listaPartidosPoliticos->Count; i++) {
		PartidoPolitico^ objPartidoGrabar = this->listaPartidosPoliticos[i];   //selecciona partido en la lista de partidos
		totalMediciones = totalMediciones + objPartidoGrabar->listaAlumnos->Count;  //acumular cantidad de miembros del partido
	}

	//guardar en miembrosPartido.txt
	array<String^>^ lineasArchivo = gcnew array<String^>(totalMiembros); //crear arreglo de un largo = total de miembros
	int k = 0;
	for (int i = 0; i < this->listaPartidosPoliticos->Count; i++) {
		PartidoPolitico^ objPartidoGrabar = this->listaPartidosPoliticos[i];   //selecciona partido en la lista de partidos	
		for (int j = 0; j < objPartidoGrabar->listaAlumnos->Count; j++) {
			Alumno^ objAlumno = objPartidoGrabar->listaAlumnos[j];		//Selecciona alumno de la lista de partido
			lineasArchivo[k] = objAlumno->codigo + ";" + objPartidoGrabar->codigo;  //linea[0]: codigoAlumno;codigoPartido
			k++;  //pasar a la siguiente linea -> arreglo
		}
	}
	/*Aquí ya mi array de lineasArchivo esta OK, con la información a grabar*/
	//File::WriteAllLines("mediciones.txt", lineasArchivo);

//}

