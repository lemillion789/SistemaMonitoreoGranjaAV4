#pragma once

namespace SistemaMonitoreoGranjaView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SistemaMonitoreoGranjaModel;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de frmVerAlmacen
	/// </summary>
	public ref class frmVerAlmacen : public System::Windows::Forms::Form
	{
	public:
		frmVerAlmacen(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmVerAlmacen(List<Almacen^>^ listaAlmacenes)
		{
			InitializeComponent();
			//
			this->listaAlmacenes = listaAlmacenes;
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmVerAlmacen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox2;



	private: System::Windows::Forms::Button^ button1;





	private: List<Almacen^>^ listaAlmacenes;
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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->groupBox1->Location = System::Drawing::Point(43, 21);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(797, 124);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Buscar Elemento";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(638, 63);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(79, 31);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmVerAlmacen::button1_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(388, 67);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(136, 24);
			this->comboBox2->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(315, 70);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Insumo:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(46, 33);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Filtrar por:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(46, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Almacen:";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(118, 67);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(138, 24);
			this->comboBox1->TabIndex = 0;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(43, 180);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(797, 353);
			this->dataGridView1->TabIndex = 1;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Código";
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
			this->Column3->HeaderText = L"Tipo de Insumo";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Fecha";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Descripccion";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// frmVerAlmacen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(882, 553);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmVerAlmacen";
			this->Text = L"frmVerAlmacen";
			this->Load += gcnew System::EventHandler(this, &frmVerAlmacen::frmVerAlmacen_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmVerAlmacen_Load(System::Object^ sender, System::EventArgs^ e) {
		this->comboBox2->Items->Clear();
		this->comboBox2->Items->Add("Farmaco");
		this->comboBox2->Items->Add("Alimento");
		this->comboBox1->Items->Clear();
		for (int i = 0; i < listaAlmacenes->Count; i++) {
			Almacen^ objAlmacen = listaAlmacenes[i];
			this->comboBox1->Items->Add(objAlmacen->nombre);
		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Almacen^ objAlmacen;
	String^ nombreSelec;
	String^ elementoSelec;
	nombreSelec = this->comboBox1->Text;
	elementoSelec = this->comboBox2->Text;
	for (int i = 0; i < listaAlmacenes->Count; i++) {
		Almacen^ almacen = listaAlmacenes[i];
		if (nombreSelec == almacen->nombre) {
			objAlmacen = almacen;
			break;
		}
	}
	if (elementoSelec == "Farmaco") {
		mostrarGrillaFarmaco(objAlmacen->List_Farmacos);
	}
	else {
		mostrarGrillaAlimento(objAlmacen->List_Alimentos);
	}
}
		private: void mostrarGrillaAlimento(List<Alimentos^>^ listaAlimentos) {
			this->dataGridView1->Rows->Clear();
			for (int i = 0; i < listaAlimentos->Count; i++) {
				Alimentos^ objAlimento = listaAlimentos[i];
				array<String^>^ fila = gcnew array<String^>(5);
				fila[0] = objAlimento->codigo;
				fila[1] = objAlimento->nombre;
				fila[2] = "Alimento";
				fila[3] = objAlimento->fechaVencimiento;
				fila[4] = objAlimento->descripcion;
				this->dataGridView1->Rows->Add(fila);
			}
		}
	private: void mostrarGrillaFarmaco(List<Farmacos^>^ listaFarmacos) {
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < listaFarmacos->Count; i++) {
			Farmacos^ objFarmaco = listaFarmacos[i];
			array<String^>^ fila = gcnew array<String^>(5);
			fila[0] = objFarmaco->ID;
			fila[1] = objFarmaco->nombre;
			fila[2] = "Farmaco";
			fila[3] = objFarmaco->fechaVencimiento;
			fila[4] = objFarmaco->descripcion;
			this->dataGridView1->Rows->Add(fila);
		}
	}
};
}
