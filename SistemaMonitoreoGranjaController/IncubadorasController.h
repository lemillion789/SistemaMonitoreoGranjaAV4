#pragma once

namespace SistemaMonitoreoGranjaController {

	using namespace System::Collections::Generic;
	using namespace SistemaMonitoreoGranjaModel;
	using namespace System;

	public ref class IncubadorasController {
	private:
		List<Incubadoras^>^ listaIncubadoras;

	public:
		IncubadorasController();
		//Comederos^ buscarIncubadoras(String^ Nombre);
		List<Incubadoras^>^ obtenerListaIncubadoras();
		Incubadoras^ buscarIncubadoras(String^ TipoAnimal);
		Incubadoras^ buscarIncubadorasxID(String^ ID_area);
		void CargarIncubadorasDesdeArchivo();
		void EliminarIncubadora(String^ IDIncubadora);
		void GuardarEnArchivo(List<Incubadoras^>^ lista);
		int verificarIncubadora(String^ ID);
		/*List<Comederos^>^ buscarAlumnosxNivelxGradoxSeccion(String^ nivel, int grado, String^ seccion);
		int verificarSiAlumnoPertencePartidoPolitico(String^ codigoAlumno);
	*/
	};

}