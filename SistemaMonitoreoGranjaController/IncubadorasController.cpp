#include "IncubadorasController.h"
#include "AreasDeAnimalesController.h"
#include "SensoresController.h"

using namespace SistemaMonitoreoGranjaController;
using namespace System;
using namespace System::IO;
IncubadorasController::IncubadorasController() {
	this->listaIncubadoras = gcnew List<Incubadoras^>();
}

List<Incubadoras^>^ IncubadorasController::obtenerListaIncubadoras() {
	return this->listaIncubadoras;
}

Incubadoras^ IncubadorasController::buscarIncubadoras(String^ TipoAnimal) {
	Incubadoras^ objIncubadoraEncontrada;
	//array<String^>^ lineas = File::ReadAllLines("Incubadoras.txt");
	//String^ separadores = ";";
	List<Incubadoras^>^ ListadeIncubadoras= obtenerListaIncubadoras();
	for (int i = 0; i < ListadeIncubadoras->Count; i++){
	//for each (String ^ Lista in ListadeIncubadoras) {
		Incubadoras^ objIncubadora= ListadeIncubadoras[i];
		String^ Tipo = objIncubadora->tipo_animal;
	
		if (Tipo == TipoAnimal) {
			objIncubadoraEncontrada = objIncubadora;
			break;
		}
	}
	return objIncubadoraEncontrada;
}

Incubadoras^ IncubadorasController::buscarIncubadorasxID(String^ ID_area) {
	Incubadoras^ objIncubadoraEncontrada= gcnew Incubadoras();
	//array<String^>^ lineas = File::ReadAllLines("Incubadoras.txt");
	//String^ separadores = ";";
	List<Incubadoras^>^ ListadeIncubadoras = obtenerListaIncubadoras();
	for (int i = 0; i < ListadeIncubadoras->Count; i++) {
		//for each (String ^ Lista in ListadeIncubadoras) {
		Incubadoras^ objIncubadora = ListadeIncubadoras[i];
		String^ ID_INCUBADORA = objIncubadora->ID;

		if (ID_INCUBADORA == ID_area) {
			objIncubadoraEncontrada = objIncubadora;
			break;
		}
	}
	return objIncubadoraEncontrada;



}
void IncubadorasController::CargarIncubadorasDesdeArchivo() {
	array<String^>^ lineas = File::ReadAllLines("Incubadoras.txt");
	String^ separadores = ";";
	AreasDeAnimalesController^ gestorArea = gcnew AreasDeAnimalesController();
	SensoresController^ gestorSensores = gcnew SensoresController();
	List<Sensores^>^ listaSensores = gcnew List<Sensores^>();
	for each (String ^ lineaIncubadoras in lineas) {
		array<String^>^ palabras = lineaIncubadoras->Split(separadores->ToCharArray());
		String^ ID_area = palabras[0];
		String^ ID_Temperatura = palabras[1];
		String^ ID_Humedad = palabras[2];
		AreaDeAnimales^ objArea = gestorArea->buscarAreaxID(ID_area);
		String^ razaInc = objArea->raza;
		String^ colorInc = objArea->color;
		String^ tipo_animalInc = objArea->tipo_animal;
		String^ sexoInc = objArea->sexo;
		String^ estado_saludInc = objArea->estado_salud;
		int pesoInc = objArea->peso;
		int edadInc = objArea->edad;
		int cantidadInc = objArea->cantidad;
		String^ IDInc = objArea->ID;;

		Sensores^ objTemperatura = gestorSensores->buscarSensor(ID_Temperatura);
		Sensores^ objHumedad = gestorSensores->buscarSensor(ID_Humedad);
		List<Sensores^>^ listaSensores = gcnew List<Sensores^>();
		listaSensores->Add(objTemperatura);
		listaSensores->Add(objHumedad);

		Incubadoras^ incubadora = gcnew Incubadoras(razaInc, colorInc, tipo_animalInc, sexoInc, estado_saludInc, pesoInc, edadInc, cantidadInc, IDInc, listaSensores);
		this->listaIncubadoras->Add(incubadora);
	}

}
