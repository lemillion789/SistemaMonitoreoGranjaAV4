#pragma once
#include "frmAgregarIncubadora.h"
#include "frmEditarIncubadora.h"

namespace SistemaMonitoreoGranjaView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SistemaMonitoreoGranjaController;
	using namespace SistemaMonitoreoGranjaModel;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de frmMantIncubadoras
	/// </summary>
	public ref class frmMantIncubadoras : public System::Windows::Forms::Form
	{
	public:
		frmMantIncubadoras(void)
		{
			InitializeComponent();
			this->listaIncubadoras = gcnew List<Incubadoras^>();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmMantIncubadoras()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;




	private: List<Incubadoras^>^ listaIncubadoras;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;



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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->groupBox1->Location = System::Drawing::Point(34, 28);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(592, 119);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Buscar";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &frmMantIncubadoras::groupBox1_Enter);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(120, 51);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(310, 20);
			this->textBox1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(472, 51);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(56, 19);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMantIncubadoras::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(27, 54);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Tipo de Animal";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(172, 160);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(56, 19);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Agregar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMantIncubadoras::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(291, 160);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(56, 19);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Editar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmMantIncubadoras::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(407, 160);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(56, 19);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Eliminar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmMantIncubadoras::button4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column4,
					this->Column1, this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(34, 193);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(592, 239);
			this->dataGridView1->TabIndex = 4;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"ID";
			this->Column4->Name = L"Column4";
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Tipo_Animal";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Sensor Temperatura";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Sensor Humedad";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// frmMantIncubadoras
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(662, 449);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"frmMantIncubadoras";
			this->Text = L"Incubadoras";
			this->Load += gcnew System::EventHandler(this, &frmMantIncubadoras::frmMantIncubadoras_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		frmAgregarIncubadora^ ventana = gcnew frmAgregarIncubadora(this->listaIncubadoras);
		ventana->ShowDialog();
		/*
		mostrarGrilla(listaIncubadoras);
		*/
		//List<Incubadoras^>^ listaIncubadoras = ventana->listaIncubadoras;
		mostrarGrilla(this->listaIncubadoras);
	}
		 
	private: void mostrarGrilla(List<Incubadoras^>^ lista_incubadoras) {
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < lista_incubadoras->Count; i++) {
			Incubadoras^ objIncubadora = lista_incubadoras[i];
			List<Sensores^>^ listadesensores = objIncubadora->List_Sensores;
			//int sensores = listadesensores->Count;
			Sensores^ objTemperatura = listadesensores[0];
			Sensores^ objHumedad = listadesensores[1];
			
			array<String^>^ fila = gcnew array<String^>(5);
			fila[0] = objIncubadora->ID;
			fila[1] = objIncubadora->tipo_animal;
			fila[2] = objTemperatura->Nombre;
			fila[3] = objHumedad->Nombre;
			
			this->dataGridView1->Rows->Add(fila);
		}
	}
	
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	/*int posicion = this->dataGridView1->SelectedRows[0]->Index;
	this->listaIncubadoras->RemoveAt(posicion);
	mostrarGrilla(this->listaIncubadoras);
	*/
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	int posicionFilaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; // posición de la primera fila seleccionada
	String^ IDincubadora= (this->dataGridView1->Rows[posicionFilaSeleccionada]->Cells[0]->Value->ToString());
	IncubadorasController^ gestorIncubadora = gcnew IncubadorasController();
	gestorIncubadora->CargarIncubadorasDesdeArchivo();
	Incubadoras^ objIncubadora = gestorIncubadora->buscarIncubadorasxID(IDincubadora);

	frmEditarIncubadora^ ventanaEditarIncubadora = gcnew frmEditarIncubadora(objIncubadora);
	
	ventanaEditarIncubadora->ShowDialog();
	//SensoresController^ gestorSensores = gcnew SensoresController(); //Instanciamos al controlador

	//gestorIncubadora->CargarIncubadorasDesdeArchivo();
	List<Incubadoras^>^ listaIncubadoras = gestorIncubadora->obtenerListaIncubadoras();
	mostrarGrilla(listaIncubadoras);
	MessageBox::Show("Incubadora Editada");


	/*
	int posicion = this->dataGridView1->SelectedRows[0]->Index;
	this->listaIncubadoras->RemoveAt(posicion);
	frmAgregarIncubadora^ ventana = gcnew frmAgregarIncubadora(listaIncubadoras);
	ventana->ShowDialog();
	mostrarGrilla(this->listaIncubadoras);
	*/
}
private: System::Void frmMantIncubadoras_Load(System::Object^ sender, System::EventArgs^ e) {
	IncubadorasController^ gestorIncubadoras = gcnew IncubadorasController();
	gestorIncubadoras->CargarIncubadorasDesdeArchivo();
	this->listaIncubadoras = gestorIncubadoras->obtenerListaIncubadoras();
	//frmAgregarIncubadora^ ventana = gcnew frmAgregarIncubadora(listaIncubadoras);

	//List<Incubadoras^>^ listaIncubadoras = ventana->listaIncubadoras;
	mostrarGrilla(this->listaIncubadoras);
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ tipo_animalito = this->textBox1->Text;
	List<Incubadoras^>^ ListaSeleccionada = gcnew List<Incubadoras^>();
	IncubadorasController^ gestorIncubadora = gcnew IncubadorasController();
	gestorIncubadora->CargarIncubadorasDesdeArchivo();
	this->listaIncubadoras = gestorIncubadora->obtenerListaIncubadoras();
	for (int i = 0; i < listaIncubadoras->Count; i++) {
		Incubadoras^ Incubadora = listaIncubadoras[i];
		if (tipo_animalito == Incubadora->tipo_animal) {

			ListaSeleccionada->Add(Incubadora);
		}
		else if (tipo_animalito == "") {
			ListaSeleccionada = listaIncubadoras;
		}
	}
	mostrarGrilla(ListaSeleccionada);
}
};
}
