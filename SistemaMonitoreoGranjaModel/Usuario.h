#pragma once

namespace SistemaMonitoreoGranjaModel {
	using namespace System;

	public ref class Usuario {
	public:

		String^ ID;
		String^ contrase�a;



	public:
		Usuario();
		Usuario(String^ ID, String^ contrase�a);
	};
}