#pragma once

namespace SistemaMonitoreoGranjaModel {
	using namespace System;

	public ref class Usuario {
	public:

		String^ ID;
		String^ contraseña;



	public:
		Usuario();
		Usuario(String^ ID, String^ contraseña);
	};
}