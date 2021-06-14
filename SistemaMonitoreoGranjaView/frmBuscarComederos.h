#pragma once

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
	/// Resumen de frmBuscarComederos
	/// </summary>
	public ref class frmBuscarComederos : public System::Windows::Forms::Form
	{
	public:
		frmBuscarComederos(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmBuscarComederos(List<Comederos^>^ listaComederos)
		{
			InitializeComponent();
			this->listaComederos = listaComederos;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmBuscarComederos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:





	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private: List<Comederos^>^ listaComederos;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->dataGridView1->Location = System::Drawing::Point(138, 175);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(805, 207);
			this->dataGridView1->TabIndex = 9;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(527, 402);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Seleccionar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmBuscarComederos::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(29, 46);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(1033, 123);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterios de Búsqueda";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(718, 44);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(128, 22);
			this->textBox3->TabIndex = 9;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(388, 44);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(128, 22);
			this->textBox2->TabIndex = 8;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(109, 44);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(128, 22);
			this->textBox1->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(925, 44);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmBuscarComederos::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(577, 30);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(134, 51);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Capacidad \r\nminima de \r\nProteinas [raciones]\r\n";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(281, 30);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 51);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Capacidad \r\nminima de \r\nComida [Kg]\r\n";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 30);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 51);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Capacidad \r\nminima de \r\nAgua [litros]";
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID de Comedero";
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
			this->Column3->HeaderText = L"Capacidad de Agua [litros]";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Capacidad de Comida [Kg]";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Capacidad de Proteinas [raciones]";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// frmBuscarComederos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1086, 484);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmBuscarComederos";
			this->Text = L"frmBuscarComederos";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//BUSCAR COMEDEROS
		int capminAgua = Convert::ToInt32(this->textBox1->Text);
		int capminComida = Convert::ToInt32(this->textBox2->Text);
		int capminProteinas = Convert::ToInt32(this->textBox3->Text);

		ComedoresController^ objGestor = gcnew ComedoresController();
		List<Comederos^>^ listaComed = objGestor->buscarComederoxCapacidadMinima(capminAgua, capminProteinas, capminComida);
		mostrarGrilla(listaComed);
	}
	private: void mostrarGrilla(List<Comederos^>^ listaComed) {
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < listaComed->Count; i++) {
			Comederos^ objComedero = listaComed[i];
			array<String^>^ fila = gcnew array<String^>(6);
			fila[0] = objComedero->ID;
			fila[1] = objComedero->nombre;
			fila[2] = Convert::ToString(objComedero->capAgua);
			fila[3] = Convert::ToString(objComedero->capComida);
			fila[4] = Convert::ToString(objComedero->capProteinas);
			fila[5] = objComedero->horaLlenado;
			this->dataGridView1->Rows->Add(fila);
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int posicionFilaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;  //posicion de fila seleccionada
	String^ IDComederoSeleccionado = this->dataGridView1->Rows[posicionFilaSeleccionada]->Cells[0]->Value->ToString(); //cells columna		
	ComedoresController^ objGestorComedero = gcnew ComedoresController();
	int perteneeceArea = objGestorComedero->verificarSiComederoPerteneceArea(IDComederoSeleccionado);
	if (!perteneeceArea) {
		/*Aquí voy a ver si no esta repetido*/
		int esta_repetido = 0;
		for (int i = 0; i < this->listaComederos->Count; i++) {
			Comederos^ objComedero= this->listaComederos[i];
			if (objComedero->ID == IDComederoSeleccionado) {
				esta_repetido = 1;
				break;
			}
		}
		if (!esta_repetido) {
			Comederos^ objComederoNuevo = objGestorComedero->buscarComederoxID(IDComederoSeleccionado);
			this->listaComederos->Add(objComederoNuevo);
			this->Close();
		}
		else {
			MessageBox::Show("El comedero ya se encuentra dentro del Area de animales");
		}
	}
	else {
		MessageBox::Show("El comedero ya pertenece a otra Area");
	}
}
};
}
