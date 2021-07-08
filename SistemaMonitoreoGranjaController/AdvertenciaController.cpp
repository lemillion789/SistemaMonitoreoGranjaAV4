#include "AdvertenciaController.h"
#include "SensoresController.h"
#include "MedicionController.h"
#include "TareaController.h"
using namespace SistemaMonitoreoGranjaController;
using namespace System;
using namespace System::IO;
AdvertenciaController::AdvertenciaController()
{
	this->listaAdvertencias = gcnew List<Advertencia^>();
	this->listaAdvertenciasControladas = gcnew List<Advertencia^>();
}

List<Advertencia^>^ AdvertenciaController::generarReporteAdvertencias()
{
	SensoresController^ gestorSensores = gcnew SensoresController();
	gestorSensores->CargarSensores();
	List<Sensores^>^ listaSensores = gestorSensores->obtenerListaSensores();
	List<Advertencia^>^ listaAdvertenciaGrabar = gcnew List<Advertencia^>();
	List<Advertencia^>^ listaconAlarma = gcnew List<Advertencia^>();
	for (int i = 0; i < listaSensores->Count; i++) {
		Sensores^ objSensor = listaSensores[i];
		int cantidadMediciones = objSensor->listaMediciones->Count;
		Medicion^ ultimaMedicion = objSensor->listaMediciones[cantidadMediciones - 1];
		Boolean Alarma;
		//falta aclarar limites
			if (objSensor->tipoSensor == "Temperatura") {
				Alarma = ultimaMedicion->medida < 10 || ultimaMedicion->medida>30;
			}
			else if (objSensor->tipoSensor == "Humedad") {
				Alarma = ultimaMedicion->medida < 40 || ultimaMedicion->medida>70;
			}
			else if (objSensor->tipoSensor == "Nivel de Agua") {
				Alarma = ultimaMedicion->medida <= 0;
			}
			else if (objSensor->tipoSensor == "Peso") { //Nivel de comida
				Alarma = ultimaMedicion->medida <= 0;
			}
			else if (objSensor->tipoSensor == "Nivel de Proteinas") {
				Alarma = ultimaMedicion->medida <= 0;
			}

		//Boolean Alarma = (ultimaMedicion->medida == 0);
		Advertencia^ objAdvertencia = gcnew Advertencia(objSensor, Alarma);
		listaAdvertenciaGrabar->Add(objAdvertencia);
	}
	for (int j = 0; j < listaAdvertenciaGrabar->Count; j++) {
		if (listaAdvertenciaGrabar[j]->alarma) {
			listaconAlarma->Add(listaAdvertenciaGrabar[j]);
		}
	}
	if (EsDiferente(listaconAlarma)) {
		generarReporteAdvertenciasControladas(listaAdvertenciaGrabar);
	}

	this->listaAdvertencias = listaAdvertenciaGrabar;
	return listaAdvertenciaGrabar;
}

void AdvertenciaController::generarReporteAdvertenciasControladas(List<Advertencia^>^ listaAdvertencia)
{
	List<Advertencia^>^ listaComparar = obtenerListaTXT();
	List<Advertencia^>^ listaAdvertenciasTareas = gcnew List<Advertencia^>();
	for (int i = 0; i < listaAdvertencia->Count; i++) {
		Advertencia^ objAdvertencia = listaAdvertencia[i];
		if (objAdvertencia->alarma) {
			/*Sensores^ objSensor = objAdvertencia->objSensor;
			objTareacontroller->TareaPendiente(objSensor);
			//
			//MessageBox::Show(objAdvertencia->IdSensor + "necesita revision");*/
			listaAdvertenciasTareas->Add(objAdvertencia);
		}
	}
	
	if (listaAdvertenciasTareas->Count > listaComparar->Count) {
		this->listaAdvertenciasControladas = listaComparar;
		for (int i = 0; i < listaAdvertenciasTareas->Count; i++) {//agregar una nueva advertencia al final
			if (!SeEncuentra(listaAdvertenciasTareas[i],listaComparar)) {
				Advertencia^ objAdvertenciaNueva = gcnew Advertencia(listaAdvertenciasTareas[i]->objSensor, listaAdvertenciasTareas[i]->alarma);
				this->listaAdvertenciasControladas->Add(objAdvertenciaNueva);
			}
		}
	}
	else if (listaAdvertenciasTareas->Count < listaComparar->Count) {
		this->listaAdvertenciasControladas = listaComparar;
		for (int i = 0; i < listaComparar->Count; i++) {//poner en completado una advertencia
			if (!SeEncuentra(listaComparar[i], listaAdvertenciasTareas)) {
				this->listaAdvertenciasControladas[i]->alarma = false;
			}
		}
	}
	GuardarAdvertenciaTXT(this->listaAdvertenciasControladas);
	TareaController^ gestorTarea = gcnew TareaController();
	gestorTarea->TareaPendiente(this->listaAdvertenciasControladas);
	
	/*else {
		for (int i = 0; i < listaAdvertencia->Count; i++) {
			if (listaAdvertencia[i]->objSensor->ID != listaComparar[i]->objSensor->ID || listaAdvertencia[i]->alarma != listaComparar[i]->alarma) {
				Diferencia = 1;
				break;
			}
		}
	}*/
	/*for (int i = 0; i < this->listaAdvertencias->Count; i++) {
		
	}*/
}

List<Advertencia^>^ AdvertenciaController::obtenerlistaAdvertencias() {
	return this->listaAdvertencias;
}

int AdvertenciaController::EsDiferente(List<Advertencia^>^ listaAdvertencia)
{
	int Diferencia = 0;
	List<Advertencia^>^ listaComparar = obtenerListaTXT();
	List<Advertencia^>^ listaCompararAlarma = gcnew List<Advertencia^>();
	for (int j = 0; j < listaComparar->Count; j++) {
		if (listaComparar[j]->alarma) {
			listaCompararAlarma->Add(listaComparar[j]);
		}
	}
	if (listaAdvertencia->Count != listaCompararAlarma->Count) {
		Diferencia = 1;
	}
	else {
		for (int i = 0; i < listaAdvertencia->Count; i++) {
			if (!SeEncuentra(listaAdvertencia[i],listaCompararAlarma)) {
				Diferencia = 1;
				break;
			}
		}
		
	}
	return Diferencia;
}
int SistemaMonitoreoGranjaController::AdvertenciaController::SeEncuentra(Advertencia^ objAdvertencia, List<Advertencia^>^ listaComparar)
{
	int Encuentra = 0;
	for (int i = 0; i < listaComparar->Count; i++) {
		if (listaComparar[i]->objSensor->ID == objAdvertencia->objSensor->ID && listaComparar[i]->alarma == objAdvertencia->alarma) {
			Encuentra = 1;
			break;
		}
	}
	return Encuentra;
}
List<Advertencia^>^ AdvertenciaController::obtenerListaTXT()
{
	List<Advertencia^>^ listaAdvertencia = gcnew List<Advertencia^>();
	SensoresController^ gestorSensor = gcnew SensoresController();
	array<String^>^ lineas = File::ReadAllLines("Advertencias.txt");
	String^ separadores = ";";
	for each (String ^ lineaComedero in lineas) {
		array<String^>^ palabras = lineaComedero->Split(separadores->ToCharArray());
		String^ IDSensor = palabras[0];
		Boolean Alarma = palabras[1]=="True";
		Sensores^ objSensor = gestorSensor->buscarSensor(IDSensor);
		Advertencia^ objAdvertencia = gcnew Advertencia(objSensor, Alarma);
		listaAdvertencia->Add(objAdvertencia);
	}
	return listaAdvertencia;
}

List<Advertencia^>^ AdvertenciaController::obtenerlistaAdvertenciasControlada()
{
	return this->listaAdvertenciasControladas;
}

void AdvertenciaController::GuardarAdvertenciaTXT(List<Advertencia^>^ listaAdvertencias)
{
	array<String^>^ lineasArchivoPartido = gcnew array<String^>(listaAdvertencias->Count);
	for (int i = 0; i < listaAdvertencias->Count; i++) {
		Advertencia^ objAdvertencia = listaAdvertencias[i];  //
		lineasArchivoPartido[i] = objAdvertencia->objSensor->ID + ";" + (objAdvertencia->alarma).ToString();
	}
	/*Aquí ya mi array de lineasArchivoPartido esta OK, con la información a grabar*/
	File::WriteAllLines("Advertencias.txt", lineasArchivoPartido);

	//falta guardar alimentos
}
