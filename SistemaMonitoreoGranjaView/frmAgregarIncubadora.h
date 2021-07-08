#pragma once
#include<stdlib.h>
#include<time.h>

namespace SistemaMonitoreoGranjaView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SistemaMonitoreoGranjaController;
	using namespace SistemaMonitoreoGranjaModel;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de frmAgregarIncubadora
	/// </summary>
	public ref class frmAgregarIncubadora : public System::Windows::Forms::Form
	{
	public:
		frmAgregarIncubadora(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmAgregarIncubadora(List<Incubadoras^>^ listaIncubadoras)
		{
			InitializeComponent();
			this->listaIncubadoras = listaIncubadoras;
			//this->objSensorH = gcnew Sensores();
			//this->objSensorT = gcnew Sensores();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmAgregarIncubadora()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;




	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	public: List<Incubadoras^>^ listaIncubadoras;
	private: int nCodigo;
	//private: Incubadoras^ objIncubadora;
	private: Sensores^ objSensorH;
	private: Sensores^ objSensorT;
	private: AreaDeAnimales^ objArea;

	private: System::Windows::Forms::DataGridView^ dataGridView1;



	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(83, 125);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(118, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Sensor de Temperatura";
			this->label1->Click += gcnew System::EventHandler(this, &frmAgregarIncubadora::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(83, 299);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Sensor de Humedad";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(223, 464);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(56, 19);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Aceptar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmAgregarIncubadora::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(327, 464);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(64, 19);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmAgregarIncubadora::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(86, 168);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(517, 111);
			this->dataGridView1->TabIndex = 8;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID_Sensor";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombre";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Tipo_Sensor";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Marca";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Unidades";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5
			});
			this->dataGridView2->Location = System::Drawing::Point(86, 330);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView2->Size = System::Drawing::Size(517, 111);
			this->dataGridView2->TabIndex = 12;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"ID_Sensor";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 125;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Nombre";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Width = 125;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Tipo_Sensor";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->Width = 125;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Marca";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->Width = 125;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Unidades";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->Width = 125;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(83, 43);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 13);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Tipo Animal";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(86, 77);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(188, 21);
			this->comboBox1->TabIndex = 14;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &frmAgregarIncubadora::comboBox1_SelectedIndexChanged);
			// 
			// frmAgregarIncubadora
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(766, 531);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"frmAgregarIncubadora";
			this->Text = L"frmAgregarIncubadora";
			this->Load += gcnew System::EventHandler(this, &frmAgregarIncubadora::frmAgregarIncubadora_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//this->listaIncubadoras->Clear();
		IncubadorasController^ gestorIncubadoras = gcnew IncubadorasController();
		gestorIncubadoras->obtenerListaIncubadoras();

		String^ Tipo_Area = this->comboBox1->Text;
		AreasDeAnimalesController^ gestorAreaAnimales = gcnew AreasDeAnimalesController(); //Instanciamos al controlador
		gestorAreaAnimales->CargarAreasDesdeArchivo();
		List<AreaDeAnimales^>^ listaAnimales = gestorAreaAnimales->buscarAreas(Tipo_Area);

		for (int i = 0; i < listaAnimales->Count; i++) {

			AreaDeAnimales^ objAnimalito = listaAnimales[i];
			if (objAnimalito->edad < 2) {


				this->objArea = objAnimalito;

			}
		}

		int posicionFilaSeleccionada1 = this->dataGridView1->SelectedRows[0]->Index; // posición de la primera fila seleccionada
		String^ IDSensor1 = (this->dataGridView1->Rows[posicionFilaSeleccionada1]->Cells[0]->Value->ToString());
		SensoresController^ gestorSensor = gcnew SensoresController();
		Sensores^ objSensor1 = gestorSensor->buscarSensor(IDSensor1);
		this->objSensorT = objSensor1;

		int posicionFilaSeleccionada2 = this->dataGridView2->SelectedRows[0]->Index; // posición de la primera fila seleccionada
		String^ IDSensor2 = (this->dataGridView2->Rows[posicionFilaSeleccionada2]->Cells[0]->Value->ToString());
		//SensoresController^ gestorSensor = gcnew SensoresController();
		Sensores^ objSensor2 = gestorSensor->buscarSensor(IDSensor2);
		this->objSensorH = objSensor2;

		//String^ marquita = objSensorH->marca;


		List<Sensores^>^ listaSensores = gcnew List<Sensores^>();
		listaSensores->Add(this->objSensorT);
		listaSensores->Add(this->objSensorH);
		//String^ Tipo_Animal = Convert::ToString("NuevoAnimal");
		String^ ID_Area = objArea->ID;
		String^ Tipo_Animal = objArea->tipo_animal;
		String^ Raza = objArea->raza;
		String^ Color_animal = objArea->color;
		String^ Sexo = objArea->sexo;
		String^ Salud = objArea->estado_salud;
		int Peso = objArea->peso;
		int Edad = objArea->edad;
		int Cantidad= objArea->cantidad;

		Incubadoras^ objIncubadora = gcnew Incubadoras(Raza, Color_animal, Tipo_Animal, Sexo, Salud, Peso, Edad, Cantidad, ID_Area,  listaSensores);

		this->listaIncubadoras->Add(objIncubadora);

		this->Close();
	
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void frmAgregarIncubadora_Load(System::Object^ sender, System::EventArgs^ e) {

	IncubadorasController^ gestorIncubadoras = gcnew IncubadorasController();
	gestorIncubadoras->CargarIncubadorasDesdeArchivo();
	//
	AreasDeAnimalesController^ gestorAreaAnimales = gcnew AreasDeAnimalesController(); //Instanciamos al controlador
	gestorAreaAnimales->CargarAreasDesdeArchivo();
	List<AreaDeAnimales^>^ listaAnimales = gestorAreaAnimales->obtenerListaAreas();
	//this->objArea = 
	this->comboBox1->Items->Clear();
	//int cuenta = 0;
	for (int i = 0; i < listaAnimales->Count; i++) {

		AreaDeAnimales^ objAnimalito = listaAnimales[i];
		int habido = gestorIncubadoras->verificarIncubadora(objAnimalito->ID);
		if (!(habido == 1)) {
			//cuenta++;
			if (objAnimalito->edad < 2) {
				this->comboBox1->Items->Add(objAnimalito->tipo_animal);
			}
			/*if (cuenta == (listaAnimales->Count)) {
				MessageBox::Show("No hay Áreas disponibles para crear una Incubadora");
				this->Close();
			}
		}
		else
		{
			if (objAnimalito->edad < 2) {
				this->comboBox1->Items->Add(objAnimalito->tipo_animal);


			}

		}*/
		}



		this->dataGridView1->Rows->Clear();
		this->dataGridView2->Rows->Clear();

		SensoresController^ gestorSensores = gcnew SensoresController();
		gestorSensores->CargarSensores();
		List<Sensores^>^ listaSensores = gestorSensores->obtenerListaSensores();


		for (int i = 0; i < listaSensores->Count; i++) {

			Sensores^ objSensor = listaSensores[i];
			array<String^>^ fila = gcnew array<String^>(5);
			fila[0] = objSensor->ID;
			fila[1] = objSensor->Nombre;
			fila[2] = objSensor->marca;
			fila[3] = objSensor->tipoSensor;
			fila[4] = Convert::ToString(objSensor->unidades);
			if (objSensor->tipoSensor == "Temperatura") {
				int trabajando2 = gestorSensores->verificarSensorIncubadora(objSensor->ID);
				if (trabajando2 == 1)
				{
					this->dataGridView1->Rows->Add(fila);
				}

			}
			else if (objSensor->tipoSensor == "Humedad") {
				int trabajando1 = gestorSensores->verificarSensorIncubadora(objSensor->ID);
				if (trabajando1 == 1)
				{
					this->dataGridView2->Rows->Add(fila);
				}

			}

		}


	}
	if (this->comboBox1->Items->Count == 0 ) {
		MessageBox::Show("No hay Áreas disponibles para crear una Incubadora");
		this->Close();
	}
	else if ((this->dataGridView1->Rows->Count == 0) || (this->dataGridView2->Rows->Count == 0)) {
		MessageBox::Show("No hay Sensores para crear una Incubadora");
		this->Close();
	}
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {	
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
