#pragma once
#include "Usuario.h"
#include "Tarea.h"
namespace SistemaMonitoreoGranjaModel {
	using namespace System;

	public ref class Personal {
	private:

		String^ nombre;
		String^ ApPaterno;
		String^ ApMaterno;
		String^ funcion;
		String^ horario;
		String^ tareas;
		String^ asistencia;
		Tarea^ objTarea;
		Usuario^ objUsuario;
	public:
		Personal();
		Personal(String^ nombre, String^ ApPaterno, String^ ApMaterno, String^ horario, String^ tarea, String^ funcion, String^ asistencia,  Usuario^ objUsuario, Tarea^ objTarea);


	};
}