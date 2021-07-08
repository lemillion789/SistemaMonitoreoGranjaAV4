#pragma once

namespace SistemaMonitoreoGranjaView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmMantenimientosBotones
	/// </summary>
	public ref class frmMantenimientosBotones : public System::Windows::Forms::Form
	{
	public:
		frmMantenimientosBotones(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmMantenimientosBotones()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelMantenimientos;
	protected:
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ botonareas;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ botonpersonal;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ botonsensores;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ botonfarmacos;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ botonincubadoras;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ Botonalimentos;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ botoncomederos;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ BotonAlmacen;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;

	protected:

























	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmMantenimientosBotones::typeid));
			this->panelMantenimientos = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->botonareas = (gcnew System::Windows::Forms::Button());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->botonpersonal = (gcnew System::Windows::Forms::Button());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->botonsensores = (gcnew System::Windows::Forms::Button());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->botonfarmacos = (gcnew System::Windows::Forms::Button());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->botonincubadoras = (gcnew System::Windows::Forms::Button());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Botonalimentos = (gcnew System::Windows::Forms::Button());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->botoncomederos = (gcnew System::Windows::Forms::Button());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->BotonAlmacen = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panelMantenimientos->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel13->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel14->SuspendLayout();
			this->panel7->SuspendLayout();
			this->SuspendLayout();
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
			this->panelMantenimientos->Location = System::Drawing::Point(204, 16);
			this->panelMantenimientos->Name = L"panelMantenimientos";
			this->panelMantenimientos->Size = System::Drawing::Size(666, 443);
			this->panelMantenimientos->TabIndex = 8;
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
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(78)));
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(204, 459);
			this->panel1->TabIndex = 9;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(202)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(204, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(663, 17);
			this->panel2->TabIndex = 10;
			// 
			// frmMantenimientosBotones
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(867, 459);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panelMantenimientos);
			this->Name = L"frmMantenimientosBotones";
			this->Text = L"frmMantenimientosBotones";
			this->panelMantenimientos->ResumeLayout(false);
			this->panel11->ResumeLayout(false);
			this->panel10->ResumeLayout(false);
			this->panel12->ResumeLayout(false);
			this->panel9->ResumeLayout(false);
			this->panel13->ResumeLayout(false);
			this->panel8->ResumeLayout(false);
			this->panel14->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
