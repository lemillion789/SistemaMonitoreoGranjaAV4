#pragma once
//#include "frmIniciarSesion.h"
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
#include "frmMisTareas.h"
#include "frmMisEstadisticas.h"




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
		frmPrincipal(String^ IDUsuario)
		{
			InitializeComponent();
			this->listaAlimentos = gcnew List<Alimentos^>();
			this->listaFarmacos = gcnew List<Farmacos^>();
			this->listaAlmacenes = gcnew List<Almacen^>();
			this->IDUsuario = IDUsuario;
			
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
	private: int user = 1;

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
	private: System::Windows::Forms::Panel^ panelMenú;

	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ToolStripMenuItem^ loginToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ iniciarSesiónToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cerrarSesiónToolStripMenuItem;












private: System::Windows::Forms::Panel^ PanelReportes;
private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Panel^ panel15;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Label^ label14;



private: System::Windows::Forms::Panel^ panel7;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Button^ BotonAlmacen;
private: System::Windows::Forms::Panel^ panel14;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Button^ botoncomederos;
private: System::Windows::Forms::Panel^ panel8;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Button^ Botonalimentos;
private: System::Windows::Forms::Panel^ panel13;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Button^ botonincubadoras;
private: System::Windows::Forms::Panel^ panel9;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Button^ botonfarmacos;
private: System::Windows::Forms::Panel^ panel12;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Button^ botonsensores;
private: System::Windows::Forms::Panel^ panel10;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Button^ botonpersonal;
private: System::Windows::Forms::Panel^ panel11;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Button^ botonareas;
private: System::Windows::Forms::Panel^ panelMantenimientos;

	private: List<Almacen^>^ listaAlmacenes;
private: System::Windows::Forms::Panel^ panel1;
	private: String^ IDUsuario;


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
			this->panelMenú = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->iniciarSesiónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cerrarSesiónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->loginToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->PanelReportes = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->BotonAlmacen = (gcnew System::Windows::Forms::Button());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->botoncomederos = (gcnew System::Windows::Forms::Button());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Botonalimentos = (gcnew System::Windows::Forms::Button());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->botonincubadoras = (gcnew System::Windows::Forms::Button());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->botonfarmacos = (gcnew System::Windows::Forms::Button());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->botonsensores = (gcnew System::Windows::Forms::Button());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->botonpersonal = (gcnew System::Windows::Forms::Button());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->botonareas = (gcnew System::Windows::Forms::Button());
			this->panelMantenimientos = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Menu->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panelMenú->SuspendLayout();
			this->PanelReportes->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel15->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel14->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel13->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panelMantenimientos->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(-2, 34);
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
			this->button2->Location = System::Drawing::Point(-2, 37);
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
			this->button3->Location = System::Drawing::Point(2, 38);
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
			this->timer1->Interval = 10000;
			this->timer1->Tick += gcnew System::EventHandler(this, &frmPrincipal::timer1_Tick);
			// 
			// Menu
			// 
			this->Menu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->Menu->Controls->Add(this->panel5);
			this->Menu->Controls->Add(this->panel4);
			this->Menu->Controls->Add(this->panel3);
			this->Menu->Location = System::Drawing::Point(200, 21);
			this->Menu->Name = L"Menu";
			this->Menu->Size = System::Drawing::Size(683, 477);
			this->Menu->TabIndex = 6;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->button3);
			this->panel5->Controls->Add(this->label3);
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
			this->panel4->Controls->Add(this->button1);
			this->panel4->Controls->Add(this->label2);
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
			this->panel3->Controls->Add(this->button2);
			this->panel3->Controls->Add(this->label1);
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
			this->pictureBox1->Location = System::Drawing::Point(608, 9);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(18, 18);
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &frmPrincipal::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(632, 9);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(18, 18);
			this->pictureBox2->TabIndex = 11;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox3->Location = System::Drawing::Point(656, 9);
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
			// panelMenú
			// 
			this->panelMenú->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(78)));
			this->panelMenú->Controls->Add(this->pictureBox4);
			this->panelMenú->Controls->Add(this->label4);
			this->panelMenú->Controls->Add(this->button7);
			this->panelMenú->Controls->Add(this->button8);
			this->panelMenú->Controls->Add(this->button5);
			this->panelMenú->Controls->Add(this->button4);
			this->panelMenú->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelMenú->Location = System::Drawing::Point(0, 0);
			this->panelMenú->Name = L"panelMenú";
			this->panelMenú->Size = System::Drawing::Size(200, 498);
			this->panelMenú->TabIndex = 5;
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
			this->button7->Click += gcnew System::EventHandler(this, &frmPrincipal::button7_Click);
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
			this->button4->Text = L"      Inicio";
			this->button4->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmPrincipal::button4_Click);
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
			// PanelReportes
			// 
			this->PanelReportes->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->PanelReportes->Controls->Add(this->panel6);
			this->PanelReportes->Controls->Add(this->panel15);
			this->PanelReportes->Location = System::Drawing::Point(200, 21);
			this->PanelReportes->Name = L"PanelReportes";
			this->PanelReportes->Size = System::Drawing::Size(683, 471);
			this->PanelReportes->TabIndex = 7;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->button6);
			this->panel6->Controls->Add(this->label13);
			this->panel6->Location = System::Drawing::Point(92, 78);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(174, 174);
			this->panel6->TabIndex = 6;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(2, 42);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(174, 138);
			this->button6->TabIndex = 3;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &frmPrincipal::button6_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(78)));
			this->label13->Location = System::Drawing::Point(23, 17);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(115, 19);
			this->label13->TabIndex = 4;
			this->label13->Text = L"Reporte Áreas";
			// 
			// panel15
			// 
			this->panel15->Controls->Add(this->button9);
			this->panel15->Controls->Add(this->label14);
			this->panel15->Location = System::Drawing::Point(391, 77);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(174, 174);
			this->panel15->TabIndex = 5;
			// 
			// button9
			// 
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.Image")));
			this->button9->Location = System::Drawing::Point(-2, 34);
			this->button9->Margin = System::Windows::Forms::Padding(2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(176, 138);
			this->button9->TabIndex = 2;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &frmPrincipal::button9_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(78)));
			this->label14->Location = System::Drawing::Point(24, 10);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(123, 19);
			this->label14->TabIndex = 4;
			this->label14->Text = L"Mis Resultados";
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->label5);
			this->panel7->Controls->Add(this->BotonAlmacen);
			this->panel7->Location = System::Drawing::Point(35, 73);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(131, 108);
			this->panel7->TabIndex = 0;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Gadugi", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(78)));
			this->label5->Location = System::Drawing::Point(32, 5);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 23);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Almacén";
			// 
			// BotonAlmacen
			// 
			this->BotonAlmacen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BotonAlmacen.BackgroundImage")));
			this->BotonAlmacen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->BotonAlmacen->FlatAppearance->BorderSize = 0;
			this->BotonAlmacen->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BotonAlmacen->Location = System::Drawing::Point(0, 32);
			this->BotonAlmacen->Name = L"BotonAlmacen";
			this->BotonAlmacen->Size = System::Drawing::Size(131, 76);
			this->BotonAlmacen->TabIndex = 0;
			this->BotonAlmacen->UseVisualStyleBackColor = true;
			this->BotonAlmacen->Click += gcnew System::EventHandler(this, &frmPrincipal::BotonAlmacen_Click);
			// 
			// panel14
			// 
			this->panel14->Controls->Add(this->label12);
			this->panel14->Controls->Add(this->botoncomederos);
			this->panel14->Location = System::Drawing::Point(36, 225);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(131, 108);
			this->panel14->TabIndex = 5;
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Gadugi", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(78)));
			this->label12->Location = System::Drawing::Point(32, 5);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(100, 23);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Comederos";
			// 
			// botoncomederos
			// 
			this->botoncomederos->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"botoncomederos.BackgroundImage")));
			this->botoncomederos->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->botoncomederos->FlatAppearance->BorderSize = 0;
			this->botoncomederos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->botoncomederos->Location = System::Drawing::Point(0, 32);
			this->botoncomederos->Name = L"botoncomederos";
			this->botoncomederos->Size = System::Drawing::Size(131, 76);
			this->botoncomederos->TabIndex = 0;
			this->botoncomederos->UseVisualStyleBackColor = true;
			this->botoncomederos->Click += gcnew System::EventHandler(this, &frmPrincipal::botoncomederos_Click);
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->label6);
			this->panel8->Controls->Add(this->Botonalimentos);
			this->panel8->Location = System::Drawing::Point(196, 73);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(131, 108);
			this->panel8->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Gadugi", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(78)));
			this->label6->Location = System::Drawing::Point(32, 5);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 23);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Alimentos";
			// 
			// Botonalimentos
			// 
			this->Botonalimentos->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Botonalimentos.BackgroundImage")));
			this->Botonalimentos->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Botonalimentos->FlatAppearance->BorderSize = 0;
			this->Botonalimentos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Botonalimentos->Location = System::Drawing::Point(0, 32);
			this->Botonalimentos->Name = L"Botonalimentos";
			this->Botonalimentos->Size = System::Drawing::Size(131, 76);
			this->Botonalimentos->TabIndex = 0;
			this->Botonalimentos->UseVisualStyleBackColor = true;
			this->Botonalimentos->Click += gcnew System::EventHandler(this, &frmPrincipal::Botonalimentos_Click);
			// 
			// panel13
			// 
			this->panel13->Controls->Add(this->label11);
			this->panel13->Controls->Add(this->botonincubadoras);
			this->panel13->Location = System::Drawing::Point(197, 225);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(131, 108);
			this->panel13->TabIndex = 6;
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Gadugi", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(78)));
			this->label11->Location = System::Drawing::Point(32, 5);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(100, 23);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Incubadoras";
			// 
			// botonincubadoras
			// 
			this->botonincubadoras->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"botonincubadoras.BackgroundImage")));
			this->botonincubadoras->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->botonincubadoras->FlatAppearance->BorderSize = 0;
			this->botonincubadoras->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->botonincubadoras->Location = System::Drawing::Point(0, 32);
			this->botonincubadoras->Name = L"botonincubadoras";
			this->botonincubadoras->Size = System::Drawing::Size(131, 76);
			this->botonincubadoras->TabIndex = 0;
			this->botonincubadoras->UseVisualStyleBackColor = true;
			this->botonincubadoras->Click += gcnew System::EventHandler(this, &frmPrincipal::botonincubadoras_Click);
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->label7);
			this->panel9->Controls->Add(this->botonfarmacos);
			this->panel9->Location = System::Drawing::Point(356, 73);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(131, 108);
			this->panel9->TabIndex = 3;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Gadugi", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(78)));
			this->label7->Location = System::Drawing::Point(32, 5);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(100, 23);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Fármacos";
			// 
			// botonfarmacos
			// 
			this->botonfarmacos->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"botonfarmacos.BackgroundImage")));
			this->botonfarmacos->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->botonfarmacos->FlatAppearance->BorderSize = 0;
			this->botonfarmacos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->botonfarmacos->Location = System::Drawing::Point(0, 32);
			this->botonfarmacos->Name = L"botonfarmacos";
			this->botonfarmacos->Size = System::Drawing::Size(131, 76);
			this->botonfarmacos->TabIndex = 0;
			this->botonfarmacos->UseVisualStyleBackColor = true;
			this->botonfarmacos->Click += gcnew System::EventHandler(this, &frmPrincipal::botonfarmacos_Click);
			// 
			// panel12
			// 
			this->panel12->Controls->Add(this->label10);
			this->panel12->Controls->Add(this->botonsensores);
			this->panel12->Location = System::Drawing::Point(357, 225);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(131, 108);
			this->panel12->TabIndex = 7;
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Gadugi", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(78)));
			this->label10->Location = System::Drawing::Point(32, 5);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(100, 23);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Sensores";
			// 
			// botonsensores
			// 
			this->botonsensores->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"botonsensores.BackgroundImage")));
			this->botonsensores->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->botonsensores->FlatAppearance->BorderSize = 0;
			this->botonsensores->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->botonsensores->Location = System::Drawing::Point(0, 32);
			this->botonsensores->Name = L"botonsensores";
			this->botonsensores->Size = System::Drawing::Size(131, 76);
			this->botonsensores->TabIndex = 0;
			this->botonsensores->UseVisualStyleBackColor = true;
			this->botonsensores->Click += gcnew System::EventHandler(this, &frmPrincipal::botonsensores_Click);
			// 
			// panel10
			// 
			this->panel10->Controls->Add(this->label8);
			this->panel10->Controls->Add(this->botonpersonal);
			this->panel10->Location = System::Drawing::Point(504, 73);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(131, 108);
			this->panel10->TabIndex = 4;
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Gadugi", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(78)));
			this->label8->Location = System::Drawing::Point(32, 5);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(100, 23);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Personal";
			// 
			// botonpersonal
			// 
			this->botonpersonal->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"botonpersonal.BackgroundImage")));
			this->botonpersonal->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->botonpersonal->FlatAppearance->BorderSize = 0;
			this->botonpersonal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->botonpersonal->Location = System::Drawing::Point(0, 32);
			this->botonpersonal->Name = L"botonpersonal";
			this->botonpersonal->Size = System::Drawing::Size(131, 76);
			this->botonpersonal->TabIndex = 0;
			this->botonpersonal->UseVisualStyleBackColor = true;
			this->botonpersonal->Click += gcnew System::EventHandler(this, &frmPrincipal::botonpersonal_Click);
			// 
			// panel11
			// 
			this->panel11->Controls->Add(this->label9);
			this->panel11->Controls->Add(this->botonareas);
			this->panel11->Location = System::Drawing::Point(505, 225);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(131, 108);
			this->panel11->TabIndex = 8;
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Gadugi", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(78)));
			this->label9->Location = System::Drawing::Point(32, 5);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(100, 23);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Áreas";
			// 
			// botonareas
			// 
			this->botonareas->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"botonareas.BackgroundImage")));
			this->botonareas->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->botonareas->FlatAppearance->BorderSize = 0;
			this->botonareas->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->botonareas->Location = System::Drawing::Point(0, 32);
			this->botonareas->Name = L"botonareas";
			this->botonareas->Size = System::Drawing::Size(131, 76);
			this->botonareas->TabIndex = 0;
			this->botonareas->UseVisualStyleBackColor = true;
			this->botonareas->Click += gcnew System::EventHandler(this, &frmPrincipal::botonareas_Click);
			// 
			// panelMantenimientos
			// 
			this->panelMantenimientos->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->panelMantenimientos->Controls->Add(this->panel11);
			this->panelMantenimientos->Controls->Add(this->panel10);
			this->panelMantenimientos->Controls->Add(this->panel12);
			this->panelMantenimientos->Controls->Add(this->panel9);
			this->panelMantenimientos->Controls->Add(this->panel13);
			this->panelMantenimientos->Controls->Add(this->panel8);
			this->panelMantenimientos->Controls->Add(this->panel14);
			this->panelMantenimientos->Controls->Add(this->panel7);
			this->panelMantenimientos->Location = System::Drawing::Point(200, 21);
			this->panelMantenimientos->Name = L"panelMantenimientos";
			this->panelMantenimientos->Size = System::Drawing::Size(683, 477);
			this->panelMantenimientos->TabIndex = 9;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(202)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(200, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(683, 30);
			this->panel1->TabIndex = 10;
			// 
			// frmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(883, 498);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->PanelReportes);
			this->Controls->Add(this->Menu);
			this->Controls->Add(this->panelMenú);
			this->Controls->Add(this->panelMantenimientos);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"frmPrincipal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L" ";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmPrincipal::frmPrincipal_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmPrincipal::frmPrincipal_Load);
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
			this->panelMenú->ResumeLayout(false);
			this->panelMenú->PerformLayout();
			this->PanelReportes->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel14->ResumeLayout(false);
			this->panel8->ResumeLayout(false);
			this->panel13->ResumeLayout(false);
			this->panel9->ResumeLayout(false);
			this->panel12->ResumeLayout(false);
			this->panel10->ResumeLayout(false);
			this->panel11->ResumeLayout(false);
			this->panelMantenimientos->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void iniciarSesiónToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//	frmIniciarSesion^ ventana = gcnew frmIniciarSesion();
		//ventana->ShowDialog();
		//UserController que da acceso vuelve a user = 1
	//	UsuarioController^ verificar = gcnew UsuarioController();

		
		//user = 1;
	}
	private: System::Void cerrarSesiónToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Sesión cerrada correctamente.");
		user = 1;
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
	Menu->Visible = true;
	panelMantenimientos->Visible = false;
	PanelReportes->Visible = false;
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
	Menu->Visible = false;
	panelMantenimientos->Visible = true;
	PanelReportes->Visible = false;
	//frmMantenimientosBotones^ ventanaReporte = gcnew frmMantenimientosBotones();
	//ventanaReporte->ShowDialog();


}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Menu->Visible = true;
	panelMantenimientos->Visible = false;
	PanelReportes->Visible = false;
	//frmIniciarSesion^ ventana = gcnew frmIniciarSesion();
	//ventana->ShowDialog();
	//UserController que da acceso vuelve a user = 1

	//user = 1;
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	Menu->Visible = false;
	panelMantenimientos->Visible = false;
	PanelReportes->Visible = true;



}
private: System::Void frmPrincipal_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	Application::Exit();
}
private: System::Void BotonAlmacen_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user) {
		frmMantAlmacen^ ventana = gcnew frmMantAlmacen(listaAlmacenes);
		ventana->ShowDialog();
	}
	else {
		MessageBox::Show("Debe iniciar sesión");
	}


}
private: System::Void Botonalimentos_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user) {
		frmMantAlimentos^ ventana = gcnew frmMantAlimentos(listaAlimentos);
		ventana->ShowDialog();
	}
	else {
		MessageBox::Show("Debe iniciar sesión");



	}
}
private: System::Void botonfarmacos_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user) {
		frmMantFarmacos^ ventana = gcnew frmMantFarmacos(listaFarmacos);
		ventana->ShowDialog();
	}
	else {
		MessageBox::Show("Debe iniciar sesión");
	}
}
private: System::Void botonpersonal_Click(System::Object^ sender, System::EventArgs^ e) {

	if (user) {
		frmMantPersonal^ ventana = gcnew frmMantPersonal();
		ventana->ShowDialog();
	}
	else {
		MessageBox::Show("Debe iniciar sesión");
	}
}
private: System::Void botoncomederos_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user) {
		frmMantComederos^ ventana = gcnew frmMantComederos();
		ventana->ShowDialog();
	}
	else {
		MessageBox::Show("Debe iniciar sesión");
	}
}
private: System::Void botonincubadoras_Click(System::Object^ sender, System::EventArgs^ e) {

	if (user) {
		frmMantIncubadoras^ ventana = gcnew frmMantIncubadoras();
		ventana->ShowDialog();
	}
	else {
		MessageBox::Show("Debe iniciar sesión");
	}
}
private: System::Void botonsensores_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user) {
		frmMantSensores^ ventana = gcnew frmMantSensores();
		ventana->ShowDialog();
	}
	else {
		MessageBox::Show("Debe iniciar sesión");
	}
}
private: System::Void botonareas_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user) {
		frmAdministrarAnimales^ ventana = gcnew frmAdministrarAnimales();
		ventana->ShowDialog();
	}
	else {
		MessageBox::Show("Debe iniciar sesión");
	}
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {


}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	frmReporteAreas^ ventanaReporte = gcnew frmReporteAreas();
	ventanaReporte->ShowDialog();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMisTareas^ ventanaReporte = gcnew frmMisTareas(IDUsuario);
	ventanaReporte->ShowDialog();

}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMisEstadisticas^ ventanaReporte = gcnew frmMisEstadisticas(IDUsuario);
	ventanaReporte->ShowDialog();
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();

}
};
}
