#pragma once

namespace SistemaMonitoreoGranjaModel {
	using namespace System;

	public ref class Usuario {
	public:

		String^ ID;
		String^ contraseņa;



	public:
		Usuario();
		Usuario(String^ ID, String^ contraseņa);
	};
}