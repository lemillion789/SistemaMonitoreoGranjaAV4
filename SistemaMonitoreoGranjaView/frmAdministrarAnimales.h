#pragma once
#include "frmAdministrarComederosDeArea.h"
#include "frmAdministrarComederoySensorIncubadora.h"
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

	/// <summary>
	/// Resumen de frmAdministrarAnimales
	/// </summary>
	public ref class frmAdministrarAnimales : public System::Windows::Forms::Form
	{
	public:
		frmAdministrarAnimales(void)
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
		~frmAdministrarAnimales()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button2;

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
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::CheckBox^ CheckBox;




































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
			this->button2 = (gcnew System::Windows::Forms::Button());
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
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->CheckBox = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(566, 152);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(86, 35);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Ver Area";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmAdministrarAnimales::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9
			});
			this->dataGridView1->Location = System::Drawing::Point(9, 105);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(541, 269);
			this->dataGridView1->TabIndex = 11;
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
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->CheckBox);
			this->groupBox2->Controls->Add(this->comboBox1);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Location = System::Drawing::Point(10, 17);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(642, 82);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Criterios de Búsqueda";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Bovino", L"Cuy", L"Alpaca" });
			this->comboBox1->Location = System::Drawing::Point(142, 38);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(208, 21);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &frmAdministrarAnimales::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(61, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Animal :";
			// 
			// CheckBox
			// 
			this->CheckBox->AutoSize = true;
			this->CheckBox->Location = System::Drawing::Point(408, 42);
			this->CheckBox->Name = L"CheckBox";
			this->CheckBox->Size = System::Drawing::Size(147, 17);
			this->CheckBox->TabIndex = 4;
			this->CheckBox->Text = L"Mostrar Solo Incubadoras";
			this->CheckBox->UseVisualStyleBackColor = true;
			this->CheckBox->CheckedChanged += gcnew System::EventHandler(this, &frmAdministrarAnimales::Incubadoras_CheckedChanged);
			// 
			// frmAdministrarAnimales
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(667, 407);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button2);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"frmAdministrarAnimales";
			this->Text = L"frmAdministrarAnimales";
			this->Load += gcnew System::EventHandler(this, &frmAdministrarAnimales::frmAdministrarAnimales_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//MOSTRAR INCUBADORA
		int posicionFilaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;  //posicion de fila seleccionada
		String^ IDareaSeleccionada = this->dataGridView1->Rows[posicionFilaSeleccionada]->Cells[0]->Value->ToString(); //cells columna		
		//AlumnoController^ objGestorAlumno = gcnew AlumnoController();
		//int pertenecePartido = objGestorAlumno->verificarSiAlumnoPertencePartidoPolitico(codigoAlumnoSeleccionado);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//MOSTRAR COMEDEROS
		int posicionFilaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;  //posicion de fila seleccionada
		String^ IDareaSeleccionada = this->dataGridView1->Rows[posicionFilaSeleccionada]->Cells[0]->Value->ToString(); //cells columna


		if (this->CheckBox->Checked == true) {
			frmAdministrarComederoySensorIncubadora^ ventanaAdminComederoArea = gcnew frmAdministrarComederoySensorIncubadora(IDareaSeleccionada);
			ventanaAdminComederoArea->ShowDialog();
		}
		else {
			frmAdministrarComederosDeArea^ ventanaAdminComederoArea = gcnew frmAdministrarComederosDeArea(IDareaSeleccionada);
			ventanaAdminComederoArea->ShowDialog();

		}
		//frmAdministrarComederoySensorIncubadora
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		//MOSTRAR ALIMENTO
		int posicionFilaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;  //posicion de fila seleccionada
		String^ IDareaSeleccionada = this->dataGridView1->Rows[posicionFilaSeleccionada]->Cells[0]->Value->ToString(); //cells columna	
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
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

	private: System::Void frmAdministrarAnimales_Load(System::Object^ sender, System::EventArgs^ e) {
		AreasDeAnimalesController^ gestor = gcnew AreasDeAnimalesController(); //nota: agregar using namespace Siste..Controller
		gestor->CargarAreasDesdeArchivo();
		List<AreaDeAnimales^>^ objLista = gestor->obtenerListaAreas();
		mostrarGrilla(objLista);
	}
	
	private: System::Void Incubadoras_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->CheckBox->Checked == true) {

			List<AreaDeAnimales^>^ listaAreas;
			List<AreaDeAnimales^>^ listaAreasbebe = gcnew List<AreaDeAnimales^>();
			AreasDeAnimalesController^ objGestor = gcnew AreasDeAnimalesController();  //todas las funciones las hace el gestor
			IncubadorasController^ gestorIncubadoras = gcnew IncubadorasController();
			gestorIncubadoras->CargarIncubadorasDesdeArchivo();
			List<Incubadoras^>^ listaIncubadoras = gestorIncubadoras->obtenerListaIncubadoras();

			//frmAgregarIncubadora^ ventana = gcnew frmAgregarIncubadora(listaIncubadoras);

			//List<Incubadoras^>^ listaIncubadoras = ventana->listaIncubadoras;
			String^ animalBuscar = this->comboBox1->Text;
			//List<AreaDeAnimales^>^ listaAreas;

			if (animalBuscar == "") {	  //casilla vacia 	
				objGestor->CargarAreasDesdeArchivo();
				//listaAreas = objGestor->obtenerListaAreas();
				for (int i = 0; i < listaIncubadoras->Count; i++) {
					Incubadoras^ objIncubadora = listaIncubadoras[i];
					AreaDeAnimales^ objArea = objGestor->buscarAreaxID(objIncubadora->ID);
						listaAreasbebe->Add(objArea);

					}
				}
			else {
				listaAreas = objGestor->buscarAreas(animalBuscar);
				for (int i = 0; i < listaAreas->Count; i++) {
					AreaDeAnimales^ objArea = listaAreas[i];
					int verificado = gestorIncubadoras->verificarIncubadora(objArea->ID);
					if (verificado== 1 ) {
						listaAreasbebe->Add(objArea);

					}
				}
			}
			mostrarGrilla(listaAreasbebe);


		}
		else {

			AreasDeAnimalesController^ gestor = gcnew AreasDeAnimalesController(); //nota: agregar using namespace Siste..Controller
			gestor->CargarAreasDesdeArchivo();
			List<AreaDeAnimales^>^ objLista = gestor->obtenerListaAreas();
			mostrarGrilla(objLista);




		}
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			//BUSCAR AREA
		String^ animalBuscar = this->comboBox1->Text;
		List<AreaDeAnimales^>^ listaAreas;
		AreasDeAnimalesController^ objGestor = gcnew AreasDeAnimalesController();  //todas las funciones las hace el gestor
		if (animalBuscar == "") {	  //casilla vacia 	
			objGestor->CargarAreasDesdeArchivo();
			listaAreas = objGestor->obtenerListaAreas();
		}
		else {
			listaAreas = objGestor->buscarAreas(animalBuscar);
		}
		mostrarGrilla(listaAreas);
	}
	
};
	}