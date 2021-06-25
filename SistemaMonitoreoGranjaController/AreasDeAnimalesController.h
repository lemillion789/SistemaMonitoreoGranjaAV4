#pragma once
namespace SistemaMonitoreoGranjaController {

	using namespace System::Collections::Generic;
	using namespace SistemaMonitoreoGranjaModel;
	using namespace System;

	public ref class AreasDeAnimalesController {
	private:
		List<AreaDeAnimales^>^ listaAreaDeAnimales;


	public:
		AreasDeAnimalesController();
		//NOTA:  suponiendo que solo hay un area por raza

		void CargarAreasDesdeArchivo();
		List<Comederos^>^ BuscarComederosArea(String^ ID); //String^ tipo_animal, String^ raza_animal
		int ObtenerCantidadAreas();
		AreaDeAnimales^ ObtenerAreaLista(int indice);
		List<AreaDeAnimales^>^ obtenerListaAreas();

		void GuardarAreaEnArchivo(AreaDeAnimales^ objArea);

		List<AreaDeAnimales^>^ buscarAreas(String^ tipoAnimal);

		void eliminarArea(String^ ID);//String^ tipoAnimal, String^ raza
		//List<AreaDeAnimales^>^ buscarAreaxanimal(String^ tipoAnimal);
		AreaDeAnimales^ buscarAreaxID(String^ ID);
		void editarArea(String^ ID, List<Comederos^>^ listaComedereos);
		String^ AreaDeAnimalesxIDsensor(String^ ID);
		String^ AnimalxIDAreaAnimales(String^ IDArea);
	};
}