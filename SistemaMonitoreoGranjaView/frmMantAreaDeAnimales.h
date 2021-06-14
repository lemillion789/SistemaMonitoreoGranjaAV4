#pragma once
#include "frmNuevaArea.h"
#include "frmEditarArea.h"

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
	/// Resumen de frmMantAreaDeAnimales
	/// </summary>
	public ref class frmMantAreaDeAnimales : public System::Windows::Forms::Form
	{
	public:
		frmMantAreaDeAnimales(void)
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
		~frmMantAreaDeAnimales()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:








	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;

	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;









	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;








































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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(512, 448);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 58);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Editar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMantAreaDeAnimales::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(649, 448);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 58);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmMantAreaDeAnimales::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(369, 448);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 58);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Agregar Area";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMantAreaDeAnimales::button2_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->comboBox1);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Location = System::Drawing::Point(237, 13);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(628, 123);
			this->groupBox2->TabIndex = 8;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Criterios de Búsqueda";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Bovino", L"Cuy", L"Alpaca" });
			this->comboBox1->Location = System::Drawing::Point(196, 50);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(276, 24);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &frmMantAreaDeAnimales::comboBox1_SelectedIndexChanged);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(503, 50);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 28);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Buscar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmMantAreaDeAnimales::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(88, 53);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Animal :";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9
			});
			this->dataGridView1->Location = System::Drawing::Point(47, 143);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(1016, 280);
			this->dataGridView1->TabIndex = 9;
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
			this->Column2->HeaderText = L"Tipo de animal";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Raza";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Color";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Sexo";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Estado de salud";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 125;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Peso promedio";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 125;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Edad promedio";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->Width = 125;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Cantidad";
			this->Column9->MinimumWidth = 6;
			this->Column9->Name = L"Column9";
			this->Column9->Width = 125;
			// 
			// frmMantAreaDeAnimales
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1091, 548);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Name = L"frmMantAreaDeAnimales";
			this->Text = L"frmMantAreaDeAnimales";
			this->Load += gcnew System::EventHandler(this, &frmMantAreaDeAnimales::frmMantAreaDeAnimales_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void frmMantAreaDeAnimales_Load(System::Object^ sender, System::EventArgs^ e) {
		AreasDeAnimalesController^ gestor = gcnew AreasDeAnimalesController(); //nota: agregar using namespace Siste..Controller
		gestor->CargarAreasDesdeArchivo();
		List<AreaDeAnimales^>^ objLista = gestor->obtenerListaAreas();
		mostrarGrilla(objLista);
	}
	private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {

	}
	private: void mostrarGrilla(List<AreaDeAnimales^>^ listaAreas) {
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < listaAreas->Count; i++) {
			AreaDeAnimales^ objArea = listaAreas[i];
			array<String^>^ fila = gcnew array<String^>(9);
			fila[0] = objArea->ID;
			fila[1] = objArea->tipo_animal;
			fila[2] = objArea->raza;
			fila[3] = objArea->color;
			fila[4] = objArea->sexo;
			fila[5] = objArea->estado_salud;
			fila[6] = Convert::ToString(objArea->peso);
			fila[7] = Convert::ToString(objArea->edad);
			fila[8] = Convert::ToString(objArea->cantidad);
			this->dataGridView1->Rows->Add(fila);
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		frmNuevaArea^ ventanaNuevaArea = gcnew frmNuevaArea();
		ventanaNuevaArea->ShowDialog();
		//ya se termino de agregar uno nuevo
		AreasDeAnimalesController^ gestor = gcnew AreasDeAnimalesController();
		gestor->CargarAreasDesdeArchivo();
		List<AreaDeAnimales^>^ objLista = gestor->obtenerListaAreas();
		mostrarGrilla(objLista);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//EDITAR Area
		int posicionFilaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		String^ IDAreaEditar = (this->dataGridView1->Rows[posicionFilaSeleccionada]->Cells[0]->Value->ToString());
		frmEditarArea^ ventanaEditarArea = gcnew frmEditarArea(IDAreaEditar);
		ventanaEditarArea->ShowDialog();

		AreasDeAnimalesController^ gestor = gcnew AreasDeAnimalesController();
		gestor->CargarAreasDesdeArchivo();
		List<AreaDeAnimales^>^ listaAreas = gestor->obtenerListaAreas();
		mostrarGrilla(listaAreas);
	
		
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		//ELIMINAR Area
		int posicionFilaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		String^ IDAreaEditar = (this->dataGridView1->Rows[posicionFilaSeleccionada]->Cells[0]->Value->ToString());
		AreasDeAnimalesController^ gestor = gcnew AreasDeAnimalesController();
		gestor->eliminarArea(IDAreaEditar);
		gestor->CargarAreasDesdeArchivo();
		List<AreaDeAnimales^>^ listaAraes = gestor->obtenerListaAreas();
		mostrarGrilla(listaAraes);
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		//BUSCAR AREA
		String^ animalBuscar = this->comboBox1->Text;
		List<AreaDeAnimales^>^ listaPartidos;
		AreasDeAnimalesController^ objGestor = gcnew AreasDeAnimalesController();  //todas las funciones las hace el gestor
		if (animalBuscar == "") {	  //casilla vacia 	
			objGestor->CargarAreasDesdeArchivo();
			listaPartidos = objGestor->obtenerListaAreas();
		}
		else {
			listaPartidos = objGestor->buscarAreas(animalBuscar);
		}
		mostrarGrilla(listaPartidos);
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick_2(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}

