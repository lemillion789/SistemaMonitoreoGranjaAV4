#pragma once
namespace SistemaMonitoreoGranjaController {

	using namespace System::Collections::Generic;
	using namespace SistemaMonitoreoGranjaModel;
	using namespace System;

	public ref class FarmacoController {
	private:
		List<Farmacos^>^ listaFarmacos;


	public:
		FarmacoController();
		//NOTA:  suponiendo que solo hay un area por raza

		void CargarFarmacosDesdeArchivo();
		int ObtenerCantidadFarmacos();
		Farmacos^ ObtenerFarmacoLista(int indice);
		List<Farmacos^>^ obtenerListaFarmacos();

		void GuardarFarmacoEnArchivo(Farmacos^ objFarmaco);

		List<Farmacos^>^ buscarFarmacos(String^ nombreFarmaco);

		void eliminarFarmaco(String^ ID);

		Farmacos^ buscarFarmacoxID(String^ ID);
		void editarFarmaco(String^ ID, String^ nombre, int cantidad, String^ fecha, String^ descripcion);
	};
}