#pragma once

namespace SistemaMonitoreoGranjaController {

	using namespace System::Collections::Generic;
	using namespace SistemaMonitoreoGranjaModel;
	using namespace System;

	public ref class ComedoresController {
	private:
		List<Comederos^>^ listaComederos;

	public:
		ComedoresController();
		Comederos^ buscarComedero(String^ ID);
		/*List<Comederos^>^ buscarAlumnosxNivelxGradoxSeccion(String^ nivel, int grado, String^ seccion);
		int verificarSiAlumnoPertencePartidoPolitico(String^ codigoAlumno);

		//Sensores^ buscarAlumno(String^ codigoAlumno);
		/*List<Sensores^>^ buscarAlumnosxNivelxGradoxSeccion(String^ nivel, int grado, String^ seccion);
		int verificarSiAlumnoPertencePartidoPolitico(String^ codigoAlumno);*/

		void CargarComederoDesdeArchivo();
		List<Sensores^>^ buscarSensoresComedero(String^ IDcomedero);
		int ObtenerCantidadComederos();
		Comederos^ ObtenerComederoLista(int indice);
		List<Comederos^>^ obtenerListaComederos();
		//void GuardarComederoEnArchivo(Comederos^ objSensor);
		//List<Sensores^>^ buscarSensores(String^ nombreBuscar);  //buscar Sensor por nombre
		//void eliminarComederor(String^ IDSensorEliminar);   //elimninar Sensor seleccionado
		//Sensores^ buscarSensorxCodigo(int sensor);   // buscar partido politico por codigo
		//void editarComedero(String^ IDSensorEditar, List<Medicion^>^ listaMediciones);

	};
}