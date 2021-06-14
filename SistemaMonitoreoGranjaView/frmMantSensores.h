#pragma once

#include "frmNuevoSensor.h"
#include "frmEditarSensor.h"
namespace SistemaMonitoreoGranjaView {
	using namespace SistemaMonitoreoGranjaModel;
	using namespace SistemaMonitoreoGranjaController;
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmMantSensores
	/// </summary>
	public ref class frmMantSensores : public System::Windows::Forms::Form
	{
	public:
		frmMantSensores(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->listadeSensores = gcnew List<Sensores^>();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmMantSensores()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:



	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	
	private: List<Sensores^>^ listadeSensores;



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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(32, 187);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(704, 199);
			this->dataGridView1->TabIndex = 0;
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
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(63, 28);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(645, 130);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Buscar sensor";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(59, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Codigo del sensor:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(189, 55);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(245, 22);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(480, 55);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(233, 400);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Nuevo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMantSensores::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(499, 400);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(364, 400);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Editar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmMantSensores::button4_Click);
			// 
			// frmMantSensores
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(791, 434);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"frmMantSensores";
			this->Text = L"frmMantSensores";
			this->Load += gcnew System::EventHandler(this, &frmMantSensores::frmMantSensores_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		frmNuevoSensor^ ventanaNuevoSensor = gcnew frmNuevoSensor();

		ventanaNuevoSensor->ShowDialog();
		SensoresController^ gestorSensores = gcnew SensoresController(); //Instanciamos al controlador


		gestorSensores->CargarSensores();
		List<Sensores^>^ listasensores = gestorSensores->obtenerListaSensores();
		mostrarGrilla(listasensores);
		MessageBox::Show("Sensor Creado");
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {


		int posicionFilaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; // posición de la primera fila seleccionada
		String^ IDSensor = (this->dataGridView1->Rows[posicionFilaSeleccionada]->Cells[0]->Value->ToString());
		SensoresController^ gestorSensor = gcnew SensoresController();
		Sensores^ objSensor = gestorSensor->buscarSensor(IDSensor);

		//this->listadeSensores->Add(objSensor);
		//this->Close();

	
		frmEditarSensor^ ventanaEditarSensor = gcnew frmEditarSensor(objSensor);

		ventanaEditarSensor->ShowDialog();
		SensoresController^ gestorSensores = gcnew SensoresController(); //Instanciamos al controlador
		

		gestorSensores->CargarSensores();
		List<Sensores^>^ listasensores = gestorSensores->obtenerListaSensores();
		mostrarGrilla(listasensores);
		MessageBox::Show("Sensor Editado");
	}
	private: System::Void frmMantSensores_Load(System::Object^ sender, System::EventArgs^ e) {

		SensoresController^ gestorSensores = gcnew SensoresController(); //Instanciamos al controlador


		gestorSensores->CargarSensores();
		List<Sensores^>^ listasensores = gestorSensores->obtenerListaSensores();
		mostrarGrilla(listasensores);


	}
	private: void mostrarGrilla(List<Sensores^>^ listaSensores) {

		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < listaSensores->Count; i++) {

			Sensores^ objSensor = listaSensores[i];
			array<String^>^ fila = gcnew array<String^>(5);
			fila[0] = objSensor->ID;
			fila[1] = objSensor->Nombre;
			fila[2] = objSensor->marca;
			fila[3] = objSensor->tipoSensor;
			fila[4] = Convert::ToString(objSensor->unidades);

			this->dataGridView1->Rows->Add(fila);
		}
	}

	};

}

