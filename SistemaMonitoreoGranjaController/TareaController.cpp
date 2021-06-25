#include "SensoresController.h"
#include "TareaController.h"
#include "AreasDeAnimalesController.h"
#include "AdvertenciaController.h"
using namespace SistemaMonitoreoGranjaController;

using namespace SistemaMonitoreoGranjaModel;
using namespace System;
using namespace System::IO;
TareaController::TareaController() {
	this->listaTarea = gcnew List<Tarea^>();
}
void TareaController::TareaPendiente(String^ IDSensor) {


	SensoresController^ objSensor = gcnew SensoresController();
	String^ Unidades = objSensor->BuscarUnidadxIDSensor(IDSensor);

	AreasDeAnimalesController^ objArea = gcnew AreasDeAnimalesController();
	String^ IDArea = objArea->AreaDeAnimalesxIDsensor(IDSensor);


	String^ Animal = objArea->AnimalxIDAreaAnimales(IDArea);


	String^ Lugar = "En Area de" + Animal;
	String^ Fecha = "Revisar sensor";
	String^ Descripcion = "El sensor de" + Unidades + "Detecto que en el comedero de" + Animal + "esta vacio";
	Tarea^ objTarea = gcnew Tarea(Lugar, Fecha, Descripcion);
	this->listaTarea->Add(objTarea);

}

List <Tarea^>^ TareaController::RetornarListaTarea() {

	 return this->listaTarea;
}
void TareaController::GuardarListaEnTXT() {

array<String^>^ lineasArchivo = gcnew array<String^>(this->listaTarea->Count);


	for (int j = 0; j < this->listaTarea->Count; j++) {
		Tarea^ objTarea2 = this->listaTarea[j];
		lineasArchivo[j] = objTarea2->lugar + ";" + objTarea2->fecha + ";" + objTarea2->descripcion;

	}
	File::WriteAllLines("Tarea.txt", lineasArchivo);



}

void TareaController::CargarTareaDesdeArchivo() {

	this->listaTarea->Clear();
	array<String^>^ lineas = File::ReadAllLines("Tarea.txt");

	String^ separadores = ";";
	for each (String ^ lineaPersonal in lineas) {
		array<String^>^ palabras = lineaPersonal->Split(separadores->ToCharArray());
		String^ Lugar = palabras[0];
		String^ Fecha = palabras[1];
		String^ Descripcion = palabras[2];


		Tarea^ objPersonal = gcnew Tarea(Lugar, Fecha, Descripcion);
		this->listaTarea->Add(objPersonal);

	}
}