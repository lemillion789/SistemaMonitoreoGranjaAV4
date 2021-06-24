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
	public ref class frmEditarIncubadora : public System::Windows::Forms::Form
	{
	public:
		frmEditarIncubadora(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmEditarIncubadora(Incubadoras^ objIncubadora)
		{
			InitializeComponent();
			this->objIncubadora = objIncubadora;
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
		~frmEditarIncubadora()
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
	private: Incubadoras^ objIncubadora;
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

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
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
			this->label1->Click += gcnew System::EventHandler(this, &frmEditarIncubadora::label1_Click);
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
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(56, 19);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Aceptar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmEditarIncubadora::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(327, 464);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(64, 19);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmEditarIncubadora::button2_Click);
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
			// button3
			// 
			this->button3->Location = System::Drawing::Point(642, 189);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(112, 53);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Seleccionar Sensor";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmEditarIncubadora::button3_Click_1);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(642, 358);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(112, 53);
			this->button4->TabIndex = 16;
			this->button4->Text = L"Seleccionar Sensor";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmEditarIncubadora::button4_Click_1);
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(86, 76);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(159, 20);
			this->textBox1->TabIndex = 17;
			// 
			// frmEditarIncubadora
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(766, 531);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"frmEditarIncubadora";
			this->Text = L"frmAgregarIncubadora";
			this->Load += gcnew System::EventHandler(this, &frmEditarIncubadora::frmAgregarIncubadora_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Close();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void frmAgregarIncubadora_Load(System::Object^ sender, System::EventArgs^ e) {


		AreasDeAnimalesController^ gestorAreaAnimales = gcnew AreasDeAnimalesController(); //Instanciamos al controlador
		gestorAreaAnimales->CargarAreasDesdeArchivo();
		List<AreaDeAnimales^>^ listaAnimales = gestorAreaAnimales->obtenerListaAreas();
		//this->objArea = 
		
		String^ tipo_Animalito = this->objIncubadora->tipo_animal;
		this->textBox1->Text = tipo_Animalito;
		



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
				this->dataGridView1->Rows->Add(fila);
			}
			else if (objSensor->tipoSensor == "Humedad") {
				this->dataGridView2->Rows->Add(fila);

			}

		}


	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		/*
		int posicionFilaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; // posición de la primera fila seleccionada
		String^ IDSensor = (this->dataGridView1->Rows[posicionFilaSeleccionada]->Cells[0]->Value->ToString());
		SensoresController^ gestorSensor = gcnew SensoresController();
		Sensores^ objSensor = gestorSensor->buscarSensor(IDSensor);
		this->objSensorT = objSensor;
		//MessageBox::Show("Sensor Agregado");

		/*
		frmEditarSensor^ ventanaEditarSensor = gcnew frmEditarSensor(objSensor);

		ventanaEditarSensor->ShowDialog();
		SensoresController^ gestorSensores = gcnew SensoresController(); //Instanciamos al controlador


		gestorSensores->CargarSensores();
		List<Sensores^>^ listasensores = gestorSensores->obtenerListaSensores();
		mostrarGrilla(listasensores);
		MessageBox::Show("Sensor Editado");
		*/

	}



	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		/*
		int posicionFilaSeleccionada = this->dataGridView2->SelectedRows[0]->Index; // posición de la primera fila seleccionada
		String^ IDSensor = (this->dataGridView2->Rows[posicionFilaSeleccionada]->Cells[0]->Value->ToString());
		SensoresController^ gestorSensor = gcnew SensoresController();
		Sensores^ objSensor = gestorSensor->buscarSensor(IDSensor);
		this->objSensorH = objSensor;
		//MessageBox::Show("Sensor Agregado");
		*/
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
//Sensor Temperatura

		int posicionFilaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; // posición de la primera fila seleccionada
		String^ IDSensor = (this->dataGridView1->Rows[posicionFilaSeleccionada]->Cells[0]->Value->ToString());
		SensoresController^ gestorSensor = gcnew SensoresController();
		Sensores^ objSensor = gestorSensor->buscarSensor(IDSensor);
		
		this->objIncubadora->List_Sensores[0] = objSensor;
		

	}

private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {

	int posicionFilaSeleccionada = this->dataGridView2->SelectedRows[0]->Index; // posición de la primera fila seleccionada
	String^ IDSensor = (this->dataGridView2->Rows[posicionFilaSeleccionada]->Cells[0]->Value->ToString());
	SensoresController^ gestorSensor = gcnew SensoresController();
	Sensores^ objSensor = gestorSensor->buscarSensor(IDSensor);
	
	this->objIncubadora->List_Sensores[1] = objSensor;

}
};
}
