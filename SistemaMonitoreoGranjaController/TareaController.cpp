#include "SensoresController.h"
#include "TareaController.h"
#include "AreasDeAnimalesController.h"
using namespace SistemaMonitoreoGranjaController;

using namespace SistemaMonitoreoGranjaModel;
using namespace System;
using namespace System::IO;
TareaController::TareaController() {
	this->listaTarea = gcnew List<Tarea^>();
}
/*Tarea^ TareaController::TareaPendiente(String^ IDSensor) {
	SensoresController^ objSensor = gcnew SensoresController();
	String^Unidades= objSensor->BuscarUnidadxIDSensor(IDSensor);
	AreasDeAnimalesController^ objArea = gcnew AreasDeAnimalesController();
	String^ IDArea = objArea->AreaDeAnimalesxIDsensor( IDSensor);
	
	
	
}*/
