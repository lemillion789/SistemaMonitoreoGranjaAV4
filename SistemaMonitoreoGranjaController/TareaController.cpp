#include "SensoresController.h"
#include "TareaController.h"
#include "AreasDeAnimalesController.h"
#include "MedicionController.h"
using namespace SistemaMonitoreoGranjaController;

using namespace SistemaMonitoreoGranjaModel;
using namespace System;
using namespace System::IO;
TareaController::TareaController() {
	this->listaTarea = gcnew List<Tarea^>();
}
void SistemaMonitoreoGranjaController::TareaController::realizarTareaSensor(String^ IdSensor)
{
	SensoresController^ GestorSensores = gcnew SensoresController();
	MedicionController^ gestorMedicion = gcnew MedicionController();
	GestorSensores->CargarSensores();
	List<Sensores^>^ listaSensores = GestorSensores->obtenerListaSensores();

	//Sensores^ objSensor = GestorSensores->buscarSensor(IdSensor);
	//Medicion^ ultimaMedicion = objSensor->listaMediciones[(objSensor->listaMediciones->Count) - 1];
	//String^ tipoSensor = objSensor->tipoSensor;
	int MedidaCorregida = 0;
	
	//corregir ultimaMedida

	for (int i = 0; i < listaSensores->Count; i++) {
		Sensores^ objSensorGrab = listaSensores[i];

		if (objSensorGrab->ID == IdSensor) {
			if (objSensorGrab->tipoSensor == "Temperatura") {
				MedidaCorregida = 25;
			}
			else if (objSensorGrab->tipoSensor == "Humedad") {
				MedidaCorregida = 55;
			}
			else if (objSensorGrab->tipoSensor == "Nivel de Agua") {
				MedidaCorregida = 100;
			}
			else if (objSensorGrab->tipoSensor == "Peso") { //Nivel de comida
				MedidaCorregida = 100;
			}
			else if (objSensorGrab->tipoSensor == "Nivel de Proteinas") {
				MedidaCorregida = 100;
			}
			//AGREGAR LA MEDICION NUEVA
			List<Medicion^>^ listaNueva = gestorMedicion->agregarMedicionAleatoria(objSensorGrab, MedidaCorregida);
			objSensorGrab->listaMediciones = listaNueva;
			break;
		}

	}

	//GUARDAR
	int totalMediciones = 0;
	for (int i = 0; i < listaSensores->Count; i++) {
		Sensores^ objSensorGrab = listaSensores[i];
		totalMediciones = totalMediciones + objSensorGrab->listaMediciones->Count;
	}

	//guardar en Mediciones.txt
	array<String^>^ lineasArchivo = gcnew array<String^>(totalMediciones);
	int k = 0;
	for (int i = 0; i < listaSensores->Count; i++) {
		Sensores^ objSensorGrab = listaSensores[i];
		for (int j = 0; j < objSensorGrab->listaMediciones->Count; j++) {
			Medicion^ objMedicion = objSensorGrab->listaMediciones[j];
			lineasArchivo[k] = objSensorGrab->ID + ";" + objMedicion->medida + ";" + objMedicion->unidades + ";" + objMedicion->registro_hora;
			k++;  //pasar a la siguiente linea -> arreglo
		}
	}
	/*Aquí ya mi array de lineasArchivo esta OK, con la información a grabar*/
	File::WriteAllLines("Mediciones.txt", lineasArchivo);

}
/*Tarea^ TareaController::TareaPendiente(String^ IDSensor) {
	SensoresController^ objSensor = gcnew SensoresController();
	String^Unidades= objSensor->BuscarUnidadxIDSensor(IDSensor);
	AreasDeAnimalesController^ objArea = gcnew AreasDeAnimalesController();
	String^ IDArea = objArea->AreaDeAnimalesxIDsensor( IDSensor);
	
	
	
}*/
