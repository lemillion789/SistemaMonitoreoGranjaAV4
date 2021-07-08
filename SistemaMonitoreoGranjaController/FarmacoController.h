#pragma once
namespace SistemaMonitoreoGranjaController {

	using namespace System::Collections::Generic;
	using namespace SistemaMonitoreoGranjaModel;
	using namespace System;
	using namespace System::Data::SqlClient;

	public ref class FarmacoController {
	private:
		List<Farmacos^>^ listaFarmacos;
		SqlConnection^ objConexion;

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
		
		//SQL:
		void AbrirConexion();
		void CerrarConexion();
		void limpiarTabla();
		List<Farmacos^>^ leerDatos();
		void guardarDatos(List<Farmacos^>^);
		Farmacos^ buscarFarmacosCodigo(String^ codigo);
	};
}