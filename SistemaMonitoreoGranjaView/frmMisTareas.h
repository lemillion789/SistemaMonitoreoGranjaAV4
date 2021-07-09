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
	/// Resumen de frmMisTareas
	/// </summary>
	public ref class frmMisTareas : public System::Windows::Forms::Form
	{
	public:
		frmMisTareas(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmMisTareas(String^ IDPersonal)
		{
			InitializeComponent();
			this->IDPersonal = IDPersonal;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmMisTareas()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::Button^ button1;
	private: String^ IDPersonal;
	private: List<Tarea^>^ listaTareas;

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
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column4,
					this->Column1, this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(9, 40);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(802, 284);
			this->dataGridView1->TabIndex = 10;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"ID Tarea";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Lugar";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 300;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Fecha";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Descripcion";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 400;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(78)));
			this->button1->Location = System::Drawing::Point(832, 154);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 63);
			this->button1->TabIndex = 11;
			this->button1->Text = L"RESOLVER TAREA";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &frmMisTareas::button1_Click);
			// 
			// frmMisTareas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(78)));
			this->ClientSize = System::Drawing::Size(982, 363);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"frmMisTareas";
			this->Text = L"frmMisTareas";
			this->Load += gcnew System::EventHandler(this, &frmMisTareas::frmMisTareas_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//Corregir medida
	int posicionFilaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	String^ IDTareaResolver = (this->dataGridView1->Rows[posicionFilaSeleccionada]->Cells[0]->Value->ToString());
	TareaController^ gestor = gcnew TareaController();
	//gestor->asignarTarea(IDpersonalSeleccionado, IDTareaAsignar);;
	gestor->realizarTarea(IDTareaResolver);
	//TareaController^ gestorTarea = gcnew TareaController();
//	gestorTarea->realizarTareaSensor(this->IDsensor);
	this->listaTareas = gestor->buscarTareaxPersonal(IDPersonal);
	List<Tarea^>^ listaTareasGrilla = gcnew List<Tarea^>();
	for (int i = 0; i < this->listaTareas->Count; i++) {
		if(this->listaTareas[i]->Estado==true)
		listaTareasGrilla->Add(this->listaTareas[i]);
	}
	
	mostrarGrilla(listaTareasGrilla);
	}
private: void mostrarGrilla(List<Tarea^>^ listaTarea) {
	this->dataGridView1->Rows->Clear();
	AreasDeAnimalesController^ gestorArea = gcnew AreasDeAnimalesController();
	ComedoresController^ gestorComedero = gcnew ComedoresController();
	SensoresController^ gestorSensor = gcnew SensoresController();
	for (int i = 0; i < listaTarea->Count; i++) {
		Tarea^ objTarea = listaTarea[i];
		array<String^>^ fila = gcnew array<String^>(4);
		fila[0] = objTarea->IDtarea;
		fila[1] = "En Area de " + objTarea->objArea->tipo_animal + " " + objTarea->objArea->raza + " de sexo " + objTarea->objArea->sexo;
		fila[2] = objTarea->fecha;
		fila[3] = "El sensor de " + objTarea->objSensor->tipoSensor + " detectó que el comedero está vacio o tiene problemas";
		this->dataGridView1->Rows->Add(fila);
	}
}
private: System::Void frmMisTareas_Load(System::Object^ sender, System::EventArgs^ e) {
	TareaController^ GestorTareaController = gcnew TareaController();
	this->listaTareas = GestorTareaController->buscarTareaxPersonal(IDPersonal);
	List<Tarea^>^ listaTareasGrilla = gcnew List<Tarea^>();
	for (int i = 0; i < this->listaTareas->Count; i++) {
		if (this->listaTareas[i]->Estado == true)
			listaTareasGrilla->Add(this->listaTareas[i]);
	}
	mostrarGrilla(listaTareasGrilla);
}

};
}
