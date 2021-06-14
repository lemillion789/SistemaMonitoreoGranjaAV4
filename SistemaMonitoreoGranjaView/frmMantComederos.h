#pragma once
#include "frmNuevoComedero.h"
#include "frmEditarComedero.h"
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
	/// Resumen de frmMantComederos
	/// </summary>
	public ref class frmMantComederos : public System::Windows::Forms::Form
	{
	public:
		frmMantComederos(void)
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
		~frmMantComederos()
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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
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
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(46, 35);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(789, 146);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Buscar Comedero";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(160, 63);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(412, 22);
			this->textBox1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(649, 58);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 33);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMantComederos::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(74, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(230, 507);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 33);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Agregar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMantComederos::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(388, 507);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 33);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Editar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmMantComederos::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(543, 507);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 33);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Eliminar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmMantComederos::button4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6
			});
			this->dataGridView1->Location = System::Drawing::Point(46, 187);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(789, 294);
			this->dataGridView1->TabIndex = 4;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID";
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
			this->Column3->HeaderText = L"Capacidad de Agua";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Capacidad de Comida";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Capacidad de Proteinas";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Hora de llenado";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 125;
			// 
			// frmMantComederos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(882, 579);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmMantComederos";
			this->Text = L"Comederos";
			this->Load += gcnew System::EventHandler(this, &frmMantComederos::frmMantComederos_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		frmNuevoComedero^ ventana = gcnew frmNuevoComedero();
		ventana->ShowDialog();

		ComedoresController^ gestor = gcnew ComedoresController();
		gestor->CargarComederoDesdeArchivo();
		List<Comederos^>^ objLista = gestor->obtenerListaComederos();
		mostrarGrilla(objLista);

	}
private: void mostrarGrilla(List<Comederos^>^ listaComederos) {
	this->dataGridView1->Rows->Clear();
	for (int i = 0; i < listaComederos->Count; i++) {
		Comederos^ objComedero = listaComederos[i];
		array<String^>^ fila = gcnew array<String^>(6);
		fila[0] = objComedero->ID;
		//fila[0] = Convert::ToString(objPartido->codigo);
		fila[1] = objComedero->nombre;
		fila[2] = Convert::ToString(objComedero->capAgua);
		fila[3] = Convert::ToString(objComedero->capComida);
		fila[4] = Convert::ToString(objComedero->capProteinas);
		fila[5] = objComedero->horaLlenado;
		this->dataGridView1->Rows->Add(fila);  //agregar filas en la grilla
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//BUSCAR COMEDERO
	String^ nombreBuscar = this->textBox1->Text;
	List<Comederos^>^ listaComederos;
	ComedoresController^ objGestor = gcnew ComedoresController();  //todas las funciones las hace el gestor
	if (nombreBuscar == "") {	  //casilla vacia 	
		objGestor->CargarComederoDesdeArchivo();
		listaComederos = objGestor->obtenerListaComederos();
	}
	else {
		listaComederos = objGestor->buscarComederos(nombreBuscar);
	}
	mostrarGrilla(listaComederos);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	//EDITAR Comedero
	int posicionFilaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	String^ IDComederoEditar = (this->dataGridView1->Rows[posicionFilaSeleccionada]->Cells[0]->Value->ToString());
	frmEditarComedero^ ventanaEditar = gcnew frmEditarComedero(IDComederoEditar);
	ventanaEditar->ShowDialog();

	ComedoresController^ gestor = gcnew ComedoresController();
	gestor->CargarComederoDesdeArchivo();
	List<Comederos^>^ listaComederos = gestor->obtenerListaComederos();
	mostrarGrilla(listaComederos);
}
private: System::Void frmMantComederos_Load(System::Object^ sender, System::EventArgs^ e) {
	ComedoresController^ gestor = gcnew ComedoresController();
	gestor->CargarComederoDesdeArchivo();
	List<Comederos^>^ objLista = gestor->obtenerListaComederos();
	mostrarGrilla(objLista);	
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	//ELIMINAR COMEDERO
	int posicionFilaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	String^ IDComederEliminar = (this->dataGridView1->Rows[posicionFilaSeleccionada]->Cells[0]->Value->ToString());
	ComedoresController^ objGestor = gcnew ComedoresController();
	objGestor->eliminarComedero(IDComederEliminar);
	objGestor->CargarComederoDesdeArchivo();
	List<Comederos^>^ lista = objGestor->obtenerListaComederos();
	mostrarGrilla(lista);
}
};
}
