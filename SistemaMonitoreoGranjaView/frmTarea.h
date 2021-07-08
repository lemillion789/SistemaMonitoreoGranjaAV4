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
	/// Resumen de frmTarea
	/// </summary>
	public ref class frmTarea : public System::Windows::Forms::Form
	{
	public:
		frmTarea(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmTarea(String^ IDpersonal)
		{
			InitializeComponent();
			this->IDpersonalSeleccionado = IDpersonal;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmTarea()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;





	private: System::Windows::Forms::Label^ label1;






	private: System::Windows::Forms::Label^ label2;






	private: List<Tarea^>^ listaTareas;
	private: String^ IDpersonalSeleccionado;









	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;









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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1110, 348);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 31);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Asignar Tarea";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmTarea::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column4,
					this->Column1, this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(15, 274);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(1070, 231);
			this->dataGridView1->TabIndex = 9;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmTarea::dataGridView1_CellContentClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 256);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(124, 17);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Tarea pendientes:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(11, 44);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(120, 17);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Tarea Asignadas:";
			this->label2->Click += gcnew System::EventHandler(this, &frmTarea::label2_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(625, 522);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(136, 31);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Grabar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmTarea::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1110, 116);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(136, 31);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Quitar Tarea";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmTarea::button3_Click);
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
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4
			});
			this->dataGridView2->Location = System::Drawing::Point(12, 63);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView2->Size = System::Drawing::Size(1070, 174);
			this->dataGridView2->TabIndex = 16;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"ID Tarea";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 125;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Lugar";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Width = 300;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Fecha";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->Width = 125;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Descripcion";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->Width = 400;
			// 
			// frmTarea
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1274, 577);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"frmTarea";
			this->Text = L"frmTarea";
			this->Load += gcnew System::EventHandler(this, &frmTarea::frmTarea_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {



}
private: System::Void frmTarea_Load(System::Object^ sender, System::EventArgs^ e) {
	
	TareaController^ GestorTareaController = gcnew TareaController();
	GestorTareaController->CargarTareaDesdeArchivo();
	List<Tarea^>^ listaCompleta = GestorTareaController->RetornarListaTarea();
	this->listaTareas = GestorTareaController->buscarTareaxPersonal(IDpersonalSeleccionado);
	List<Tarea^>^ listaTareasGrilla1 = gcnew List<Tarea^>();
	for (int i = 0; i < listaCompleta->Count; i++) {
		if (listaCompleta[i]->Estado == true)
			listaTareasGrilla1->Add(listaCompleta[i]);
	}
	mostrarGrilla(listaTareasGrilla1);
	List<Tarea^>^ listaTareasGrilla2 = gcnew List<Tarea^>();
	for (int i = 0; i < this->listaTareas->Count; i++) {
		if (this->listaTareas[i]->Estado == true)
			listaTareasGrilla2->Add(this->listaTareas[i]);
	}
	mostrarGrilla2(listaTareasGrilla2);

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
private: void mostrarGrilla2(List<Tarea^>^ listaTarea) {
	this->dataGridView2->Rows->Clear();
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
		this->dataGridView2->Rows->Add(fila);
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//ASIGNAR TAREA
	int posicionFilaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	String^ IDTareaAsignar = (this->dataGridView1->Rows[posicionFilaSeleccionada]->Cells[0]->Value->ToString());
	TareaController^ gestor = gcnew TareaController();
	//gestor->asignarTarea(IDpersonalSeleccionado, IDTareaAsignar);
	PersonalController^ gestorPersonal = gcnew PersonalController();

	
	//List<Tarea^>^ listaTareas = gestor->buscarTareaxPersonal(IDpersonalSeleccionado);
	//List<Tarea^>^ listaTareas = gestorPersonal->buscarPersonalxCodigo(IDpersonalSeleccionado)->listaTareas;
	//EN PRUEBA
	Personal^ objPersonal = gestorPersonal->buscarPersonalxIDBD(IDpersonalSeleccionado);
	//List<Tarea^>^ listaTareas = objPersonal->listaTareas;
	//this->listaTareas = listaTareas;
	int pertenecePartido = gestor->verificarSiTareaPertenecePersonal(IDTareaAsignar);
	if (!pertenecePartido) {
		/*Aquí voy a ver si no esta repetido*/
		int esta_repetido = 0;
		for (int i = 0; i < this->listaTareas->Count; i++) {
			Tarea^ objTarea = this->listaTareas[i];
			if (objTarea->IDtarea == IDTareaAsignar) {
				esta_repetido = 1;
				break;
			}
		}
		if (!esta_repetido) {
			Tarea^ objTarea = gestor->buscarTareaxID(IDTareaAsignar);
			this->listaTareas->Add(objTarea);
			List<Tarea^>^ listaTareasGrilla2 = gcnew List<Tarea^>();
			for (int i = 0; i < this->listaTareas->Count; i++) {
				if (this->listaTareas[i]->Estado == true)
					listaTareasGrilla2->Add(this->listaTareas[i]);
			}
			mostrarGrilla2(listaTareasGrilla2);
			
		}
		else {
			MessageBox::Show("La tarea ya se encuentra dentro de la lista de tareas asignadas");
		}
	}
	else {
		MessageBox::Show("La tarea ya fue asignada a otro personal");
	}

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	PersonalController^ objGestor = gcnew PersonalController();
	objGestor->asignarTarea(this->IDpersonalSeleccionado, this->listaTareas);
	MessageBox::Show("La tarea ha sido asignada con éxito !!!");
	this->Close();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	
	int posicionFilaSeleccionada = this->dataGridView2->SelectedRows[0]->Index;
	String^ IDtareaSeleccionada = this->dataGridView2->Rows[posicionFilaSeleccionada]->Cells[0]->Value->ToString();
	for (int i = 0; this->listaTareas->Count; i++) {
		Tarea^ objTarea = this->listaTareas[i];
		if (objTarea->IDtarea == IDtareaSeleccionada) {
			this->listaTareas->RemoveAt(i);
			break;
		}
	}
	List<Tarea^>^ listaTareasGrilla2 = gcnew List<Tarea^>();
	for (int i = 0; i < this->listaTareas->Count; i++) {
		if (this->listaTareas[i]->Estado == true)
			listaTareasGrilla2->Add(this->listaTareas[i]);
	}
	mostrarGrilla2(listaTareasGrilla2);
}
};
}
