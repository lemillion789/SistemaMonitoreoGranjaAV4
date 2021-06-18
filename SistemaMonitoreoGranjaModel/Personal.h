#pragma once
#include "Usuario.h"
#include "Tarea.h"
namespace SistemaMonitoreoGranjaModel {
	using namespace System;

	public ref class Personal {
	public:

		String^ ID;
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
		
		Personal(String^ ID, String^ nombre, String^ ApPaterno, String^ ApMaterno, String^ funcion, String^ horario, String^ tareas , String^ asistencia );


	};
}