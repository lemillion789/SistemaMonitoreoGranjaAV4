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
//#include "frmAdministrarAlmacen.h"
#include "frmHistorialAlmacen.h"
#include "frmAdministrarAnimales.h"
#include "frmAdministrarPersonal.h"
/*Reportes*/
#include "frmReporteAreas.h"
/*Personal*/
#include "frmMisTareas.h"
#include "frmMisEstadisticas.h"

#include "frmMantenimientosBotones.h"

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
			this->listaAlimentos = gcnew List<Alimentos^>();
			this->listaFarmacos = gcnew List<Farmacos^>();
			this->listaAlmacenes = gcnew List<Almacen^>();

			//
			//TODO: agregar código de constructor aquí
			//
			

		}
		 
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
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










	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;


	private: System::Windows::Forms::Timer^ timer1;





	private: System::ComponentModel::IContainer^ components;
	private: List<Alimentos^>^ listaAlimentos;
	private: List<Farmacos^>^ listaFarmacos;
	private: System::Windows::Forms::Panel^ Menu;






	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ToolStripMenuItem^ loginToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ iniciarSesiónToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cerrarSesiónToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ almacenToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ alimentosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ farmacosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ personalToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ comederosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ incubadorasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sensoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ areaDeAnimalesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reportesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ areasDeAnimalesToolStripMenuItem;









































	private: System::Windows::Forms::ToolStripMenuItem^ misTareasToolStripMenuItem;
	private: List<Almacen^>^ listaAlmacenes;
	private: System::Windows::Forms::ToolStripMenuItem^ misTareasToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ misEstadisticasToolStripMenuItem;
	private: Personal^ objPersonal;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmPrincipal::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->loginToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->iniciarSesiónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cerrarSesiónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->misTareasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->misTareasToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->misEstadisticasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->Menu = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->iniciarSesiónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cerrarSesiónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->loginToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->areasDeAnimalesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->almacenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->alimentosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->farmacosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->personalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->comederosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->incubadorasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sensoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->areaDeAnimalesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->Menu->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(202)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->loginToolStripMenuItem,
					this->mantenimientosToolStripMenuItem, this->reportesToolStripMenuItem, this->misTareasToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(200, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(667, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &frmPrincipal::menuStrip1_ItemClicked);
			// 
			// loginToolStripMenuItem
			// 
			this->loginToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->iniciarSesiónToolStripMenuItem,
					this->cerrarSesiónToolStripMenuItem
			});
			this->loginToolStripMenuItem->Name = L"loginToolStripMenuItem";
			this->loginToolStripMenuItem->Size = System::Drawing::Size(49, 20);
			this->loginToolStripMenuItem->Text = L"Login";
			// 
			// iniciarSesiónToolStripMenuItem
			// 
			this->iniciarSesiónToolStripMenuItem->Name = L"iniciarSesiónToolStripMenuItem";
			this->iniciarSesiónToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->iniciarSesiónToolStripMenuItem->Text = L"Iniciar Sesión ";
			this->iniciarSesiónToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::iniciarSesiónToolStripMenuItem_Click);
			// 
			// cerrarSesiónToolStripMenuItem
			// 
			this->cerrarSesiónToolStripMenuItem->Name = L"cerrarSesiónToolStripMenuItem";
			this->cerrarSesiónToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->cerrarSesiónToolStripMenuItem->Text = L"Cerrar Sesión";
			this->cerrarSesiónToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::cerrarSesiónToolStripMenuItem_Click);
			// 
			// mantenimientosToolStripMenuItem
			// 
			this->mantenimientosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->almacenToolStripMenuItem,
					this->alimentosToolStripMenuItem, this->farmacosToolStripMenuItem, this->personalToolStripMenuItem, this->comederosToolStripMenuItem,
					this->incubadorasToolStripMenuItem, this->sensoresToolStripMenuItem, this->areaDeAnimalesToolStripMenuItem
			});
			this->mantenimientosToolStripMenuItem->Name = L"mantenimientosToolStripMenuItem";
			this->mantenimientosToolStripMenuItem->Size = System::Drawing::Size(106, 20);
			this->mantenimientosToolStripMenuItem->Text = L"Mantenimientos";
			this->mantenimientosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::mantenimientosToolStripMenuItem_Click);
			// 
			// almacenToolStripMenuItem
			// 
			this->almacenToolStripMenuItem->Name = L"almacenToolStripMenuItem";
			this->almacenToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->almacenToolStripMenuItem->Text = L"Almacen";
			this->almacenToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::almacenToolStripMenuItem_Click);
			// 
			// alimentosToolStripMenuItem
			// 
			this->alimentosToolStripMenuItem->Name = L"alimentosToolStripMenuItem";
			this->alimentosToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->alimentosToolStripMenuItem->Text = L"Alimentos";
			this->alimentosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::alimentosToolStripMenuItem_Click);
			// 
			// farmacosToolStripMenuItem
			// 
			this->farmacosToolStripMenuItem->Name = L"farmacosToolStripMenuItem";
			this->farmacosToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->farmacosToolStripMenuItem->Text = L"Farmacos";
			this->farmacosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::farmacosToolStripMenuItem_Click);
			// 
			// personalToolStripMenuItem
			// 
			this->personalToolStripMenuItem->Name = L"personalToolStripMenuItem";
			this->personalToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->personalToolStripMenuItem->Text = L"Personal";
			this->personalToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::personalToolStripMenuItem_Click);
			// 
			// comederosToolStripMenuItem
			// 
			this->comederosToolStripMenuItem->Name = L"comederosToolStripMenuItem";
			this->comederosToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->comederosToolStripMenuItem->Text = L"Comederos";
			this->comederosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::comederosToolStripMenuItem_Click);
			// 
			// incubadorasToolStripMenuItem
			// 
			this->incubadorasToolStripMenuItem->Name = L"incubadorasToolStripMenuItem";
			this->incubadorasToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->incubadorasToolStripMenuItem->Text = L"Incubadoras";
			this->incubadorasToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::incubadorasToolStripMenuItem_Click);
			// 
			// sensoresToolStripMenuItem
			// 
			this->sensoresToolStripMenuItem->Name = L"sensoresToolStripMenuItem";
			this->sensoresToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->sensoresToolStripMenuItem->Text = L"Sensores";
			this->sensoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::sensoresToolStripMenuItem_Click);
			// 
			// areaDeAnimalesToolStripMenuItem
			// 
			this->areaDeAnimalesToolStripMenuItem->Name = L"areaDeAnimalesToolStripMenuItem";
			this->areaDeAnimalesToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->areaDeAnimalesToolStripMenuItem->Text = L"Area de Animales";
			this->areaDeAnimalesToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::areaDeAnimalesToolStripMenuItem_Click);
			// 
			// reportesToolStripMenuItem
			// 
			this->reportesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->areasDeAnimalesToolStripMenuItem });
			this->reportesToolStripMenuItem->Name = L"reportesToolStripMenuItem";
			this->reportesToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->reportesToolStripMenuItem->Text = L"Reportes";
			// 
			// areasDeAnimalesToolStripMenuItem
			// 
			this->areasDeAnimalesToolStripMenuItem->Name = L"areasDeAnimalesToolStripMenuItem";
			this->areasDeAnimalesToolStripMenuItem->Size = System::Drawing::Size(171, 22);
			this->areasDeAnimalesToolStripMenuItem->Text = L"Areas de Animales";
			this->areasDeAnimalesToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::areasDeAnimalesToolStripMenuItem_Click);
			// 
			// misTareasToolStripMenuItem
			// 
			this->misTareasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->misTareasToolStripMenuItem1,
					this->misEstadisticasToolStripMenuItem
			});
			this->misTareasToolStripMenuItem->Name = L"misTareasToolStripMenuItem";
			this->misTareasToolStripMenuItem->Size = System::Drawing::Size(78, 24);
			this->misTareasToolStripMenuItem->Text = L"Personal";
			this->misTareasToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::misTareasToolStripMenuItem_Click);
			// 
			// misTareasToolStripMenuItem1
			// 
			this->misTareasToolStripMenuItem1->Name = L"misTareasToolStripMenuItem1";
			this->misTareasToolStripMenuItem1->Size = System::Drawing::Size(224, 26);
			this->misTareasToolStripMenuItem1->Text = L"Mis Tareas";
			this->misTareasToolStripMenuItem1->Click += gcnew System::EventHandler(this, &frmPrincipal::misTareasToolStripMenuItem1_Click);
			// 
			// misEstadisticasToolStripMenuItem
			// 
			this->misEstadisticasToolStripMenuItem->Name = L"misEstadisticasToolStripMenuItem";
			this->misEstadisticasToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->misEstadisticasToolStripMenuItem->Text = L"Mis Estadisticas";
			this->misEstadisticasToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::misEstadisticasToolStripMenuItem_Click);
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(0, 36);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(176, 138);
			this->button1->TabIndex = 2;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmPrincipal::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(0, 36);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(174, 138);
			this->button2->TabIndex = 3;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &frmPrincipal::button2_Click);
			// 
			// button3
			// 
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(0, 38);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(174, 136);
			this->button3->TabIndex = 4;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmPrincipal::button3_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 20000;
			this->timer1->Tick += gcnew System::EventHandler(this, &frmPrincipal::timer1_Tick);
			// 
			// Menu
			// 
			this->Menu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->Menu->Controls->Add(this->panel5);
			this->Menu->Controls->Add(this->panel4);
			this->Menu->Controls->Add(this->panel3);
			this->Menu->Location = System::Drawing::Point(200, 12);
			this->Menu->Name = L"Menu";
			this->Menu->Size = System::Drawing::Size(667, 447);
			this->Menu->TabIndex = 6;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->label3);
			this->panel5->Controls->Add(this->button3);
			this->panel5->Location = System::Drawing::Point(95, 257);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(174, 174);
			this->panel5->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(78)));
			this->label3->Location = System::Drawing::Point(50, 17);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 19);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Personal";
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->label2);
			this->panel4->Controls->Add(this->button1);
			this->panel4->Location = System::Drawing::Point(374, 77);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(174, 174);
			this->panel4->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(78)));
			this->label2->Location = System::Drawing::Point(54, 10);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 19);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Almacén";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->button2);
			this->panel3->Location = System::Drawing::Point(95, 77);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(174, 174);
			this->panel3->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(78)));
			this->label1->Location = System::Drawing::Point(63, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 19);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Áreas";
			this->label1->Click += gcnew System::EventHandler(this, &frmPrincipal::label1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Gadugi", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(65, 53);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(104, 25);
			this->label4->TabIndex = 9;
			this->label4->Text = L"La Granja";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(18, 18);
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(36, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(18, 18);
			this->pictureBox2->TabIndex = 11;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox3->Location = System::Drawing::Point(60, 12);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(18, 18);
			this->pictureBox3->TabIndex = 12;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox4->Location = System::Drawing::Point(26, 44);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(43, 34);
			this->pictureBox4->TabIndex = 13;
			this->pictureBox4->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(78)));
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 459);
			this->panel1->TabIndex = 5;
			// 
			// button7
			// 
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->Location = System::Drawing::Point(0, 327);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(200, 53);
			this->button7->TabIndex = 8;
			this->button7->Text = L"      Tareas";
			this->button7->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.Image")));
			this->button8->Location = System::Drawing::Point(0, 251);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(200, 53);
			this->button8->TabIndex = 7;
			this->button8->Text = L"      Reportes";
			this->button8->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &frmPrincipal::button8_Click);
			// 
			// button5
			// 
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(0, 175);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(200, 53);
			this->button5->TabIndex = 6;
			this->button5->Text = L"      Mant.";
			this->button5->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &frmPrincipal::button5_Click);
			// 
			// button4
			// 
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(0, 99);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(200, 53);
			this->button4->TabIndex = 0;
			this->button4->Text = L"      LogIn";
			this->button4->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmPrincipal::button4_Click);
			// 
			// iniciarSesiónToolStripMenuItem
			// 
			this->iniciarSesiónToolStripMenuItem->Name = L"iniciarSesiónToolStripMenuItem";
			this->iniciarSesiónToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->iniciarSesiónToolStripMenuItem->Text = L"Iniciar Sesión ";
			this->iniciarSesiónToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::iniciarSesiónToolStripMenuItem_Click);
			// 
			// cerrarSesiónToolStripMenuItem
			// 
			this->cerrarSesiónToolStripMenuItem->Name = L"cerrarSesiónToolStripMenuItem";
			this->cerrarSesiónToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->cerrarSesiónToolStripMenuItem->Text = L"Cerrar Sesión";
			this->cerrarSesiónToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::cerrarSesiónToolStripMenuItem_Click);
			// 
			// loginToolStripMenuItem
			// 
			this->loginToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->iniciarSesiónToolStripMenuItem,
					this->cerrarSesiónToolStripMenuItem
			});
			this->loginToolStripMenuItem->Name = L"loginToolStripMenuItem";
			this->loginToolStripMenuItem->Size = System::Drawing::Size(49, 20);
			this->loginToolStripMenuItem->Text = L"Login";
			// 
			// areasDeAnimalesToolStripMenuItem
			// 
			this->areasDeAnimalesToolStripMenuItem->Name = L"areasDeAnimalesToolStripMenuItem";
			this->areasDeAnimalesToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->areasDeAnimalesToolStripMenuItem->Text = L"Areas de Animales";
			this->areasDeAnimalesToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::areasDeAnimalesToolStripMenuItem_Click);
			// 
			// reportesToolStripMenuItem
			// 
			this->reportesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->areasDeAnimalesToolStripMenuItem });
			this->reportesToolStripMenuItem->Name = L"reportesToolStripMenuItem";
			this->reportesToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->reportesToolStripMenuItem->Text = L"Reportes";
			// 
			// almacenToolStripMenuItem
			// 
			this->almacenToolStripMenuItem->Name = L"almacenToolStripMenuItem";
			this->almacenToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->almacenToolStripMenuItem->Text = L"Almacen";
			this->almacenToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::almacenToolStripMenuItem_Click);
			// 
			// alimentosToolStripMenuItem
			// 
			this->alimentosToolStripMenuItem->Name = L"alimentosToolStripMenuItem";
			this->alimentosToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->alimentosToolStripMenuItem->Text = L"Alimentos";
			this->alimentosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::alimentosToolStripMenuItem_Click);
			// 
			// farmacosToolStripMenuItem
			// 
			this->farmacosToolStripMenuItem->Name = L"farmacosToolStripMenuItem";
			this->farmacosToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->farmacosToolStripMenuItem->Text = L"Farmacos";
			this->farmacosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::farmacosToolStripMenuItem_Click);
			// 
			// personalToolStripMenuItem
			// 
			this->personalToolStripMenuItem->Name = L"personalToolStripMenuItem";
			this->personalToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->personalToolStripMenuItem->Text = L"Personal";
			this->personalToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::personalToolStripMenuItem_Click);
			// 
			// comederosToolStripMenuItem
			// 
			this->comederosToolStripMenuItem->Name = L"comederosToolStripMenuItem";
			this->comederosToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->comederosToolStripMenuItem->Text = L"Comederos";
			this->comederosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::comederosToolStripMenuItem_Click);
			// 
			// incubadorasToolStripMenuItem
			// 
			this->incubadorasToolStripMenuItem->Name = L"incubadorasToolStripMenuItem";
			this->incubadorasToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->incubadorasToolStripMenuItem->Text = L"Incubadoras";
			this->incubadorasToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::incubadorasToolStripMenuItem_Click);
			// 
			// sensoresToolStripMenuItem
			// 
			this->sensoresToolStripMenuItem->Name = L"sensoresToolStripMenuItem";
			this->sensoresToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->sensoresToolStripMenuItem->Text = L"Sensores";
			this->sensoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::sensoresToolStripMenuItem_Click);
			// 
			// areaDeAnimalesToolStripMenuItem
			// 
			this->areaDeAnimalesToolStripMenuItem->Name = L"areaDeAnimalesToolStripMenuItem";
			this->areaDeAnimalesToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->areaDeAnimalesToolStripMenuItem->Text = L"Area de Animales";
			this->areaDeAnimalesToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::areaDeAnimalesToolStripMenuItem_Click);
			// 
			// mantenimientosToolStripMenuItem
			// 
			this->mantenimientosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->almacenToolStripMenuItem,
					this->alimentosToolStripMenuItem, this->farmacosToolStripMenuItem, this->personalToolStripMenuItem, this->comederosToolStripMenuItem,
					this->incubadorasToolStripMenuItem, this->sensoresToolStripMenuItem, this->areaDeAnimalesToolStripMenuItem
			});
			this->mantenimientosToolStripMenuItem->Name = L"mantenimientosToolStripMenuItem";
			this->mantenimientosToolStripMenuItem->Size = System::Drawing::Size(106, 20);
			this->mantenimientosToolStripMenuItem->Text = L"Mantenimientos";
			this->mantenimientosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::mantenimientosToolStripMenuItem_Click);
			// 
			// frmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(867, 459);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->Menu);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"frmPrincipal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L" ";
			this->Load += gcnew System::EventHandler(this, &frmPrincipal::frmPrincipal_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->Menu->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void iniciarSesiónToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmIniciarSesion^ ventana = gcnew frmIniciarSesion();
		ventana->ShowDialog();
		//UserController que da acceso vuelve a user = 1
		
		user = 1;
	}
	private: System::Void cerrarSesiónToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Sesión cerrada correctamente.");
		user = 0;
	}
private: System::Void almacenToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user) {
		frmMantAlmacen^ ventana = gcnew frmMantAlmacen(listaAlmacenes);
		ventana-> ShowDialog();
	}
	else {
		MessageBox::Show("Debe iniciar sesión");
	}
}
private: System::Void alimentosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user) {
		frmMantAlimentos^ ventana = gcnew frmMantAlimentos(listaAlimentos);
		ventana->ShowDialog();
	}
	else {
		MessageBox::Show("Debe iniciar sesión");
	}
}
private: System::Void farmacosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user) {
		frmMantFarmacos^ ventana = gcnew frmMantFarmacos(listaFarmacos);
		ventana->ShowDialog();
	}
	else {
		MessageBox::Show("Debe iniciar sesión");
	}
}
private: System::Void personalToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user) {
		frmMantPersonal^ ventana = gcnew frmMantPersonal();
		ventana->ShowDialog();
	}
	else {
		MessageBox::Show("Debe iniciar sesión");
	}
}
private: System::Void comederosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user) {
		frmMantComederos^ ventana = gcnew frmMantComederos();
		ventana->ShowDialog();
	}
	else {
		MessageBox::Show("Debe iniciar sesión");
	}
}
private: System::Void incubadorasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user) {
		frmMantIncubadoras^ ventana = gcnew frmMantIncubadoras();
		ventana->ShowDialog();
	}
	else {
		MessageBox::Show("Debe iniciar sesión");
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user) {
		frmAdministrarPersonal^ ventana = gcnew frmAdministrarPersonal();
		ventana->ShowDialog();
	}
	else {
		MessageBox::Show("Debe iniciar sesión");
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
		MessageBox::Show("Debe iniciar sesión");
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user) {
		frmHistorialAlmacen^ ventana = gcnew frmHistorialAlmacen(listaAlimentos, listaFarmacos, listaAlmacenes);
		ventana->ShowDialog();
	}
	else {
		MessageBox::Show("Debe iniciar sesión");
	}
}
private: System::Void sensoresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	if (user) {
		frmMantSensores^ ventana = gcnew frmMantSensores();
		ventana->ShowDialog();
	}
	else {
		MessageBox::Show("Debe iniciar sesión");
	}
}
private: System::Void areaDeAnimalesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user) {
		frmMantAreaDeAnimales^ ventana = gcnew frmMantAreaDeAnimales();
		ventana->ShowDialog();
	}
	else {
		MessageBox::Show("Debe iniciar sesión");
	}
}
private: System::Void frmPrincipal_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	//GENERAR MEDICIONES DESDE QUE EMPIEZA EL PROGRAMA
	SensoresController^ objGestor = gcnew SensoresController();
	objGestor->CrearMedicionesNuevas();
	TareaController^ objTareacontroller = gcnew TareaController();
	AdvertenciaController^ GestorAdvertencia = gcnew AdvertenciaController();
	List<Advertencia^>^ listaAdvertencias = GestorAdvertencia->generarReporteAdvertencias();
	List<Advertencia^>^ listaAdvertenciasControladas = GestorAdvertencia->obtenerListaTXT();
	objTareacontroller->TareaPendiente(listaAdvertenciasControladas);
}
private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
private: System::Void areasDeAnimalesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmReporteAreas^ ventanaReporte = gcnew frmReporteAreas();
	ventanaReporte->ShowDialog();
}
private: System::Void comederosToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMantenimientosBotones^ ventanaReporte = gcnew frmMantenimientosBotones();
	ventanaReporte->ShowDialog();


}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	frmIniciarSesion^ ventana = gcnew frmIniciarSesion();
	ventana->ShowDialog();
	//UserController que da acceso vuelve a user = 1

	user = 1;
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	frmReporteAreas^ ventanaReporte = gcnew frmReporteAreas();
	ventanaReporte->ShowDialog();

}
private: System::Void misTareasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void misTareasToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user) {
		frmMisTareas^ ventana = gcnew frmMisTareas("20152005");
		ventana->ShowDialog();
	}
	else {
		MessageBox::Show("Debe iniciar sesión");
	}
}
private: System::Void misEstadisticasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user) {
		frmMisEstadisticas^ ventana = gcnew frmMisEstadisticas("20152005");
		ventana->ShowDialog();
	}
	else {
		MessageBox::Show("Debe iniciar sesión");
	}
}
};
}
