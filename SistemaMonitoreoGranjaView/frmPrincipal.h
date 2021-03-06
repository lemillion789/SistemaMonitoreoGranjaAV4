#pragma once
#include "frmIniciarSesion.h"
/*Mantenimientos*/
#include "frmMantAlimentos.h"
#include "frmMantAlmacen.h"
#include "frmMantComederos.h"
#include "frmMantFarmacos.h"
#include "frmMantIncubadoras.h"
#include "frmMantPersonal.h"
#include "frmMantSensores.h"
#include "frmMantAreaDeAnimales.h"
/*Administracion:*/
#include "frmAdministrarAlmacen.h"
#include "frmAdministrarAnimales.h"
#include "frmAdministrarPersonal.h"
/*Reportes*/
#include "frmReporteAreas.h"

namespace SistemaMonitoreoGranjaView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SistemaMonitoreoGranjaController;
	using namespace SistemaMonitoreoGranjaModel;
	/// <summary>
	/// Resumen de frmPrincipal
	/// </summary>
	public ref class frmPrincipal : public System::Windows::Forms::Form
	{
	public:
		frmPrincipal(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c?digo de constructor aqu?
			//
			

		}
		 
	protected:
		/// <summary>
		/// Limpiar los recursos que se est?n usando.
		/// </summary>
		~frmPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: int user = 0;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ loginToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ almacenToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ alimentosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ farmacosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ personalToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ comederosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ incubadorasToolStripMenuItem;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ToolStripMenuItem^ sensoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ areaDeAnimalesToolStripMenuItem;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::ToolStripMenuItem^ reportesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ areasDeAnimalesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ iniciarSesi?nToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cerrarSesi?nToolStripMenuItem;

	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Variable del dise?ador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M?todo necesario para admitir el Dise?ador. No se puede modificar
		/// el contenido de este m?todo con el editor de c?digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->loginToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->iniciarSesi?nToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cerrarSesi?nToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->almacenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->alimentosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->farmacosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->personalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->comederosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->incubadorasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sensoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->areaDeAnimalesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->areasDeAnimalesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->loginToolStripMenuItem,
					this->mantenimientosToolStripMenuItem, this->reportesToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(781, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &frmPrincipal::menuStrip1_ItemClicked);
			// 
			// loginToolStripMenuItem
			// 
			this->loginToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->iniciarSesi?nToolStripMenuItem,
					this->cerrarSesi?nToolStripMenuItem
			});
			this->loginToolStripMenuItem->Name = L"loginToolStripMenuItem";
			this->loginToolStripMenuItem->Size = System::Drawing::Size(60, 24);
			this->loginToolStripMenuItem->Text = L"Login";
			// 
			// iniciarSesi?nToolStripMenuItem
			// 
			this->iniciarSesi?nToolStripMenuItem->Name = L"iniciarSesi?nToolStripMenuItem";
			this->iniciarSesi?nToolStripMenuItem->Size = System::Drawing::Size(183, 26);
			this->iniciarSesi?nToolStripMenuItem->Text = L"Iniciar Sesi?n ";
			this->iniciarSesi?nToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::iniciarSesi?nToolStripMenuItem_Click);
			// 
			// cerrarSesi?nToolStripMenuItem
			// 
			this->cerrarSesi?nToolStripMenuItem->Name = L"cerrarSesi?nToolStripMenuItem";
			this->cerrarSesi?nToolStripMenuItem->Size = System::Drawing::Size(183, 26);
			this->cerrarSesi?nToolStripMenuItem->Text = L"Cerrar Sesi?n";
			this->cerrarSesi?nToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::cerrarSesi?nToolStripMenuItem_Click);
			// 
			// mantenimientosToolStripMenuItem
			// 
			this->mantenimientosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->almacenToolStripMenuItem,
					this->alimentosToolStripMenuItem, this->farmacosToolStripMenuItem, this->personalToolStripMenuItem, this->comederosToolStripMenuItem,
					this->incubadorasToolStripMenuItem, this->sensoresToolStripMenuItem, this->areaDeAnimalesToolStripMenuItem
			});
			this->mantenimientosToolStripMenuItem->Name = L"mantenimientosToolStripMenuItem";
			this->mantenimientosToolStripMenuItem->Size = System::Drawing::Size(130, 24);
			this->mantenimientosToolStripMenuItem->Text = L"Mantenimientos";
			this->mantenimientosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::mantenimientosToolStripMenuItem_Click);
			// 
			// almacenToolStripMenuItem
			// 
			this->almacenToolStripMenuItem->Name = L"almacenToolStripMenuItem";
			this->almacenToolStripMenuItem->Size = System::Drawing::Size(209, 26);
			this->almacenToolStripMenuItem->Text = L"Almacen";
			this->almacenToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::almacenToolStripMenuItem_Click);
			// 
			// alimentosToolStripMenuItem
			// 
			this->alimentosToolStripMenuItem->Name = L"alimentosToolStripMenuItem";
			this->alimentosToolStripMenuItem->Size = System::Drawing::Size(209, 26);
			this->alimentosToolStripMenuItem->Text = L"Alimentos";
			this->alimentosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::alimentosToolStripMenuItem_Click);
			// 
			// farmacosToolStripMenuItem
			// 
			this->farmacosToolStripMenuItem->Name = L"farmacosToolStripMenuItem";
			this->farmacosToolStripMenuItem->Size = System::Drawing::Size(209, 26);
			this->farmacosToolStripMenuItem->Text = L"Farmacos";
			this->farmacosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::farmacosToolStripMenuItem_Click);
			// 
			// personalToolStripMenuItem
			// 
			this->personalToolStripMenuItem->Name = L"personalToolStripMenuItem";
			this->personalToolStripMenuItem->Size = System::Drawing::Size(209, 26);
			this->personalToolStripMenuItem->Text = L"Personal";
			this->personalToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::personalToolStripMenuItem_Click);
			// 
			// comederosToolStripMenuItem
			// 
			this->comederosToolStripMenuItem->Name = L"comederosToolStripMenuItem";
			this->comederosToolStripMenuItem->Size = System::Drawing::Size(209, 26);
			this->comederosToolStripMenuItem->Text = L"Comederos";
			this->comederosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::comederosToolStripMenuItem_Click);
			// 
			// incubadorasToolStripMenuItem
			// 
			this->incubadorasToolStripMenuItem->Name = L"incubadorasToolStripMenuItem";
			this->incubadorasToolStripMenuItem->Size = System::Drawing::Size(209, 26);
			this->incubadorasToolStripMenuItem->Text = L"Incubadoras";
			this->incubadorasToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::incubadorasToolStripMenuItem_Click);
			// 
			// sensoresToolStripMenuItem
			// 
			this->sensoresToolStripMenuItem->Name = L"sensoresToolStripMenuItem";
			this->sensoresToolStripMenuItem->Size = System::Drawing::Size(209, 26);
			this->sensoresToolStripMenuItem->Text = L"Sensores";
			this->sensoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::sensoresToolStripMenuItem_Click);
			// 
			// areaDeAnimalesToolStripMenuItem
			// 
			this->areaDeAnimalesToolStripMenuItem->Name = L"areaDeAnimalesToolStripMenuItem";
			this->areaDeAnimalesToolStripMenuItem->Size = System::Drawing::Size(209, 26);
			this->areaDeAnimalesToolStripMenuItem->Text = L"Area de Animales";
			this->areaDeAnimalesToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::areaDeAnimalesToolStripMenuItem_Click);
			// 
			// reportesToolStripMenuItem
			// 
			this->reportesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->areasDeAnimalesToolStripMenuItem });
			this->reportesToolStripMenuItem->Name = L"reportesToolStripMenuItem";
			this->reportesToolStripMenuItem->Size = System::Drawing::Size(82, 24);
			this->reportesToolStripMenuItem->Text = L"Reportes";
			// 
			// areasDeAnimalesToolStripMenuItem
			// 
			this->areasDeAnimalesToolStripMenuItem->Name = L"areasDeAnimalesToolStripMenuItem";
			this->areasDeAnimalesToolStripMenuItem->Size = System::Drawing::Size(215, 26);
			this->areasDeAnimalesToolStripMenuItem->Text = L"Areas de Animales";
			this->areasDeAnimalesToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::areasDeAnimalesToolStripMenuItem_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(217, 213);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(365, 74);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Administrar Almacen";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmPrincipal::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(217, 89);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(365, 74);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Administar Area de Aniales";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmPrincipal::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(217, 342);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(365, 74);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Administrar Personal";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmPrincipal::button3_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 100000;
			this->timer1->Tick += gcnew System::EventHandler(this, &frmPrincipal::timer1_Tick);
			// 
			// frmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(781, 553);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"frmPrincipal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L" ";
			this->Load += gcnew System::EventHandler(this, &frmPrincipal::frmPrincipal_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void iniciarSesi?nToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmIniciarSesion^ ventana = gcnew frmIniciarSesion();
		ventana->ShowDialog();
		//UserController que da acceso vuelve a user = 1
		
		user = 1;
	}
	private: System::Void cerrarSesi?nToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Sesi?n cerrada correctamente.");
		user = 0;
	}
private: System::Void almacenToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user) {
		frmMantAlmacen^ ventana = gcnew frmMantAlmacen();
		ventana-> ShowDialog();
	}
	else {
		MessageBox::Show("Debe iniciar sesi?n");
	}
}
private: System::Void alimentosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user) {
		frmMantAlimentos^ ventana = gcnew frmMantAlimentos();
		ventana->ShowDialog();
	}
	else {
		MessageBox::Show("Debe iniciar sesi?n");
	}
}
private: System::Void farmacosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user) {
		frmMantFarmacos^ ventana = gcnew frmMantFarmacos();
		ventana->ShowDialog();
	}
	else {
		MessageBox::Show("Debe iniciar sesi?n");
	}
}
private: System::Void personalToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user) {
		frmMantPersonal^ ventana = gcnew frmMantPersonal();
		ventana->ShowDialog();
	}
	else {
		MessageBox::Show("Debe iniciar sesi?n");
	}
}
private: System::Void comederosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user) {
		frmMantComederos^ ventana = gcnew frmMantComederos();
		ventana->ShowDialog();
	}
	else {
		MessageBox::Show("Debe iniciar sesi?n");
	}
}
private: System::Void incubadorasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user) {
		frmMantIncubadoras^ ventana = gcnew frmMantIncubadoras();
		ventana->ShowDialog();
	}
	else {
		MessageBox::Show("Debe iniciar sesi?n");
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user) {
		frmAdministrarPersonal^ ventana = gcnew frmAdministrarPersonal();
		ventana->ShowDialog();
	}
	else {
		MessageBox::Show("Debe iniciar sesi?n");
	}
}
private: System::Void mantenimientosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user) {
		frmAdministrarAnimales^ ventana = gcnew frmAdministrarAnimales();
		ventana->ShowDialog();
	}
	else {
		MessageBox::Show("Debe iniciar sesi?n");
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user) {
		frmAdministrarAlmacen^ ventana = gcnew frmAdministrarAlmacen();
		ventana->ShowDialog();
	}
	else {
		MessageBox::Show("Debe iniciar sesi?n");
	}
}
private: System::Void sensoresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	if (user) {
		frmMantSensores^ ventana = gcnew frmMantSensores();
		ventana->ShowDialog();
	}
	else {
		MessageBox::Show("Debe iniciar sesi?n");
	}
}
private: System::Void areaDeAnimalesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user) {
		frmMantAreaDeAnimales^ ventana = gcnew frmMantAreaDeAnimales();
		ventana->ShowDialog();
	}
	else {
		MessageBox::Show("Debe iniciar sesi?n");
	}
}
private: System::Void frmPrincipal_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	//GENERAR MEDICIONES DESDE QUE EMPIEZA EL PROGRAMA
	SensoresController^ objGestor = gcnew SensoresController();
	objGestor->CrearMedicionesNuevas();
	
}
private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
private: System::Void areasDeAnimalesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmReporteAreas^ ventanaReporte = gcnew frmReporteAreas();
	ventanaReporte->ShowDialog();
}
private: System::Void comederosToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
