#include "SensoresController.h"
#include "TareaController.h"
#include "AreasDeAnimalesController.h"
#include "MedicionController.h"
#include "AdvertenciaController.h"
#include "PersonalController.h"
using namespace SistemaMonitoreoGranjaController;

using namespace SistemaMonitoreoGranjaModel;
using namespace System;
using namespace System::IO;
TareaController::TareaController() {
	this->listaTarea = gcnew List<Tarea^>();
	this->objConexion = gcnew SqlConnection();
}
void TareaController::AbrirConexion() {
	/*La cadena de conexión está compuesto de: Servidor de BD, nombre BD, usuario BD, password BD*/
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20152005;User ID=a20152005;Password=WLt8qnYH;";
	this->objConexion->Open(); /*Ya establecí conexión con la BD*/
}
void TareaController::CerrarConexion() {
	this->objConexion->Close();
}

void TareaController::realizarTareaSensor(String^ IdSensor)
{
	SensoresController^ GestorSensores = gcnew SensoresController();
	MedicionController^ gestorMedicion = gcnew MedicionController();
	PersonalController^ gestorPersonal = gcnew PersonalController();
	//gestorPersonal->CargarPersonalDesdeArchivoBD();
	List<Personal^>^ listaPersonal = gestorPersonal->ObtenerlistaPersonaldesdeBD();
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
	
	int totalTareasPersonal = 0;
	for (int i = 0; i < listaPersonal->Count; i++) {
		Personal^ objPersonal = listaPersonal[i];
		totalTareasPersonal = totalTareasPersonal + objPersonal->listaTareas->Count;
	}

	//guardar en TareaxPersonal.txt
	array<String^>^ lineas = gcnew array<String^>(totalTareasPersonal);
	int l = 0;
	for (int i = 0; i < listaPersonal->Count; i++) {
		Personal^ objPersonal = listaPersonal[i];
		for (int j = 0; j < objPersonal->listaTareas->Count; j++) {
			Tarea^ objTarea = objPersonal->listaTareas[j];
			lineas[l] = objTarea->IDtarea + ";" + objPersonal->ID;
			l++;  //pasar a la siguiente linea -> arreglo
		}
	}
	File::WriteAllLines("TareaxPersonal.txt", lineas);

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
void TareaController::realizarTarea(String^ IdTarea)
{
	SensoresController^ GestorSensores = gcnew SensoresController();
	MedicionController^ gestorMedicion = gcnew MedicionController();
	PersonalController^ gestorPersonal = gcnew PersonalController();
	AdvertenciaController^ gestorAdvertencia = gcnew AdvertenciaController();
	GestorSensores->CargarSensores();
	List<Sensores^>^ listaSensores = GestorSensores->obtenerListaSensores();

	//Sensores^ objSensor = GestorSensores->buscarSensor(IdSensor);
	//Medicion^ ultimaMedicion = objSensor->listaMediciones[(objSensor->listaMediciones->Count) - 1];
	//String^ tipoSensor = objSensor->tipoSensor;
	int MedidaCorregida = 0;
	String^ IdSensor;
	//BUSCAR TAREA POR ADVERTENCIA -> BUSCAR ADVERTENCIA POR SENSOR
	
	List<Tarea^>^ listaTareacodigos = obtenerCodigosTarea();
	for (int i = 0; i < listaTareacodigos->Count; i++) {
		Tarea^ objTareaAnalizado = listaTareacodigos[i];
		if (objTareaAnalizado->IDtarea == IdTarea) {
			IdSensor = objTareaAnalizado->objSensor->ID; //idsensor
			break;
		}
	}
	//REMOVER TAREA
	/*for (int j = 0; j < listaPersonal->Count; j++) {
		Personal^ objPersonal = listaPersonal[j];
		for (int w = 0; w < objPersonal->listaTareas->Count; w++) {
			if (objPersonal->listaTareas[w]->IDtarea== IdTarea) {
				objPersonal->listaTareas->RemoveAt(w);
				break;
			}
		}	
	}*/

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
				MedidaCorregida = 15;
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
	//REMOVER TAREA
	List<Advertencia^>^ listaAdvertencias = gestorAdvertencia->generarReporteAdvertencias();

	//gestorPersonal->CargarPersonalDesdeArchivoBD();
	List<Personal^>^ listaPersonal = gestorPersonal->ObtenerlistaPersonaldesdeBD();
	int totalTareasPersonal = 0;
	for (int i = 0; i < listaPersonal->Count; i++) {
		Personal^ objPersonal = listaPersonal[i];
		totalTareasPersonal = totalTareasPersonal + objPersonal->listaTareas->Count;
	}
	
	//guardar en TareaxPersonal.txt
	array<String^>^ lineas = gcnew array<String^>(totalTareasPersonal);
	int l = 0;
	for (int i = 0; i < listaPersonal->Count; i++) {
		Personal^ objPersonal = listaPersonal[i];
		for (int j = 0; j < objPersonal->listaTareas->Count; j++) {
			Tarea^ objTarea = objPersonal->listaTareas[j];
			lineas[l] = objTarea->IDtarea + ";" + objPersonal->ID;
			l++;  //pasar a la siguiente linea -> arreglo
		}
	}
	File::WriteAllLines("TareaxPersonal.txt", lineas);
}
void TareaController::TareaPendiente(List<Advertencia^>^ listaAdvertencias) {
	CargarTareaDesdeArchivo();
	AreasDeAnimalesController^ objArea = gcnew AreasDeAnimalesController();
	array<String^>^ lineasArchivo = gcnew array<String^>(listaAdvertencias->Count);
	
	this->listaTarea->Clear();
	for (int i = 0; i < listaAdvertencias->Count; i++) {
		Sensores^ objSensor = listaAdvertencias[i]->objSensor;
		int cantMediciones = objSensor->listaMediciones->Count;
		String^ IDArea = objArea->AreaDeAnimalesxIDsensor(objSensor->ID);
		AreaDeAnimales^ objAreaAnimal = objArea->buscarAreaxID(IDArea);
		String^ IDtarea = i.ToString("D5");
		//String^ Lugar = "En Area de " + objAreaAnimal->tipo_animal + " " + objAreaAnimal->raza + " de sexo " + objAreaAnimal->sexo;
		String^ Fecha = objSensor->listaMediciones[(cantMediciones)-1]->registro_hora;
		//String^ Descripcion = "El sensor de " + objSensor->tipoSensor + " Detecto que el comedero de " + objAreaAnimal->tipo_animal + " esta vacio o tiene problemas";
		Boolean Estado = listaAdvertencias[i]->alarma;
		Tarea^ objTarea = gcnew Tarea(IDtarea, Fecha, objAreaAnimal, objSensor, Estado);
		this->listaTarea->Add(objTarea);
		//PARA GUARDAR TXT DE CODIGOS
		lineasArchivo[i] = objTarea->IDtarea + ";" + objTarea->fecha + ";" + objTarea->objArea->ID + ";" + objTarea->objSensor->ID + ";" + objTarea->Estado.ToString();
	}
	// GUARDAR Tarea por codigos:  IDTarea;IDarea;Fecha;IDSensor;
	File::WriteAllLines("Tarea.txt", lineasArchivo);

}

int TareaController::seEncuentraTareaEnLista(String^ ID)
{
	int existe = 0;
	/*AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from Tareas where ID='" + ID + "';";
	SqlDataReader^ objData = objQuery->ExecuteReader(); /*Cuando es un select, se utiliza ExecuteReader*/
	/*while (objData->Read()) {
		existe = 1;
	}
	objData->Close();
	CerrarConexion();
	return existe;*/
	CargarTareaDesdeArchivo();
	for (int i = 0; i < this->listaTarea->Count; i++) {
		Tarea^ objTarea = this->listaTarea[i];
		if (objTarea->IDtarea == ID) {
			existe = 1;
			break;
		}
	}
	return existe;
}


List <Tarea^>^ TareaController::RetornarListaTarea() {

	 return this->listaTarea;
}
void TareaController::GuardarListaEnTXT() {

array<String^>^ lineasArchivo = gcnew array<String^>(this->listaTarea->Count);
	for (int j = 0; j < this->listaTarea->Count; j++) {
		Tarea^ objTarea2 = this->listaTarea[j];
		lineasArchivo[j] = objTarea2->IDtarea + ";" + objTarea2->fecha + ";" + objTarea2->objArea->ID + ";" + objTarea2->objSensor->ID + ";" + objTarea2->Estado.ToString();

	}
	File::WriteAllLines("Tarea.txt", lineasArchivo);
}

void TareaController::CargarTareaDesdeArchivo() {

	this->listaTarea->Clear();
	array<String^>^ lineas = File::ReadAllLines("Tarea.txt");
	AreaDeAnimales^ Area;
	AreasDeAnimalesController^ gestorArea = gcnew AreasDeAnimalesController();
	Sensores^ Sensor;
	SensoresController^ gestorSensores = gcnew SensoresController();
	Boolean Estado;
	String^ separadores = ";";
	for each (String ^ lineaPersonal in lineas) {
		array<String^>^ palabras = lineaPersonal->Split(separadores->ToCharArray());
		String^ ID = palabras[0];
		String^ Fecha = palabras[1];
		String^ IDArea = palabras[2];
		String^ IDSensor = palabras[3];
		String^ EstadoST = palabras[4];
		Estado = EstadoST == "True";
		Area = gestorArea->buscarAreaxID(IDArea);
		Sensor = gestorSensores->buscarSensor(IDSensor);
		Tarea^ objTarea = gcnew Tarea(ID, Fecha, Area, Sensor, Estado);
		this->listaTarea->Add(objTarea);
	}
}

List<Tarea^>^ TareaController::obtenerCodigosTarea()
{
	List<Tarea^>^ listaCodigosTarea = gcnew List<Tarea^>();
	array<String^>^ lineas = File::ReadAllLines("Tarea.txt");
	String^ separadores = ";";
	AreaDeAnimales^ Area;
	AreasDeAnimalesController^ gestorArea = gcnew AreasDeAnimalesController();
	Sensores^ Sensor;
	SensoresController^ gestorSensores = gcnew SensoresController();
	Boolean Estado;
	for each (String ^ lineaPersonal in lineas) {
		array<String^>^ palabras = lineaPersonal->Split(separadores->ToCharArray());
		String^ ID = palabras[0];
		String^ Fecha = palabras[1];
		String^ IDArea = palabras[2];
		String^ IDSensor = palabras[3];
		String^ EstadoST = palabras[4];
		Estado = EstadoST == "True";
		Area = gestorArea->buscarAreaxID(IDArea);
		Sensor = gestorSensores->buscarSensor(IDSensor);
		Tarea^ objTarea = gcnew Tarea(ID, Fecha, Area, Sensor, Estado);
		listaCodigosTarea->Add(objTarea);
	}
	return listaCodigosTarea;
}

void TareaController::asignarTarea(String^ IDPersonal, String^ IDtarea)
{
	this->listaTarea->Clear();
	Tarea^ objTarea = buscarTareaxID(IDtarea);

	PersonalController^ gestorPersonal = gcnew PersonalController();
	Personal^ objPersonal = gestorPersonal->buscarPersonalxIDBD(IDPersonal);
	objPersonal->listaTareas->Add(objTarea);
}

List<Tarea^>^ TareaController::buscarTareaxPersonal(String^ IDPersonal)
{
	List<Tarea^>^ listaEncontrados = gcnew List<Tarea^>();
	array<String^>^ lineas = File::ReadAllLines("TareaxPersonal.txt");		//IDTarea,IDpersonal
	String^ separadores = ";";
	for each (String ^ line in lineas) {
		array<String^>^ palabras = line->Split(separadores->ToCharArray());
		String^ IDtarea = palabras[0];
		String^ IDpersonal = palabras[1];
		if (IDpersonal == IDPersonal) {
			Tarea^ objTarea = buscarTareaxID(IDtarea);
			listaEncontrados->Add(objTarea);
		}
	}
	return listaEncontrados;
}
Tarea^ TareaController::buscarTareaxID(String^ ID) {
	Tarea^ objEncontrado;
	array<String^>^ lineas = File::ReadAllLines("Tarea.txt");
	String^ separadores = ";";
	AreaDeAnimales^ Area;
	AreasDeAnimalesController^ gestorArea = gcnew AreasDeAnimalesController();
	Sensores^ Sensor;
	SensoresController^ gestorSensores = gcnew SensoresController();
	Boolean Estado;
	for each (String ^ line in lineas) {
		array<String^>^ palabras = line->Split(separadores->ToCharArray());
		String^ IDTarea = palabras[0];
		String^ Fecha = palabras[1];
		String^ IDArea = palabras[2];
		String^ IDSensor = palabras[3];
		String^ EstadoST = palabras[4];
		Estado = EstadoST == "True";
		Area = gestorArea->buscarAreaxID(IDArea);
		Sensor = gestorSensores->buscarSensor(IDSensor);
		if (IDTarea == ID) {
			objEncontrado = gcnew Tarea(ID, Fecha, Area, Sensor, Estado);
			break;
		}
	}
	return objEncontrado;
}

int TareaController::verificarSiTareaPertenecePersonal(String^ IDTareaAsignar)
{
	int pertenece = 0;
	array<String^>^ lineas = File::ReadAllLines("TareaxPersonal.txt");
	String^ separadores = ";";
	for each (String ^ line in lineas) {
		array<String^>^ palabras = line->Split(separadores->ToCharArray());
		String^ IDTarea = palabras[0];
		if (IDTarea == IDTareaAsignar) {
			pertenece = 1;
			break;
		}
	}
	return pertenece;
}
