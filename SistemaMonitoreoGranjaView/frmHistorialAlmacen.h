#pragma once
#include "frmAdministrarAlmacen.h"
#include "frmVerAlmacen.h"

namespace SistemaMonitoreoGranjaView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmHistorialAlmacen
	/// </summary>
	public ref class frmHistorialAlmacen : public System::Windows::Forms::Form
	{
	public:
		frmHistorialAlmacen(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmHistorialAlmacen(List<Alimentos^>^ listaAlimentos, List<Farmacos^>^ listaFarmacos, List<Almacen^>^ listaAlmacenes)
		{
			InitializeComponent();
			
			this->listaAlimentos = listaAlimentos;
			this->listaFarmacos = listaFarmacos;
			this->listaAlmacenes = listaAlmacenes;
			this->listaMovimientos = gcnew List<Movimiento^>();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmHistorialAlmacen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;






	private: List<Alimentos^>^ listaAlimentos;
	private: List<Farmacos^>^ listaFarmacos;
	private: List<Almacen^>^ listaAlmacenes;
	private: List<Movimiento^>^ listaMovimientos;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;

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
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column2,
					this->Column3, this->Column4, this->Column5, this->Column6, this->Column1
			});
			this->dataGridView1->Location = System::Drawing::Point(45, 70);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(788, 394);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Tipo de movimiento";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Origen";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Destino";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Elemento";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Cantidad";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 125;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Fecha";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(208, 470);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(166, 55);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Realizar Movimiento";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmHistorialAlmacen::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(466, 470);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(166, 55);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Ver Estado de Almacen";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmHistorialAlmacen::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(42, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(165, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Historial de Movimientos:";
			// 
			// frmHistorialAlmacen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(882, 553);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"frmHistorialAlmacen";
			this->Text = L"frmHistorialAlmacen";
			this->Load += gcnew System::EventHandler(this, &frmHistorialAlmacen::frmHistorialAlmacen_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		frmVerAlmacen^ ventana = gcnew frmVerAlmacen(listaAlmacenes);
		ventana->ShowDialog();
		mostrarGrillaMovimientos(listaMovimientos);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		frmAdministrarAlmacen^ ventana = gcnew frmAdministrarAlmacen(listaAlimentos, listaFarmacos, listaAlmacenes, listaMovimientos);
		ventana->ShowDialog();
		mostrarGrillaMovimientos(listaMovimientos);
	}
	private: void mostrarGrillaMovimientos(List<Movimiento^>^ listaMovimientos) {
		this->dataGridView1->Rows->Clear();
		for (int i = listaMovimientos->Count; i > 0; i--) {
			Movimiento^ objMovimiento = listaMovimientos[i-1];
			array<String^>^ fila = gcnew array<String^>(6);
			fila[0] = objMovimiento->tipoMovimiento;
			fila[1] = objMovimiento->origen;
			fila[2] = objMovimiento->destino;
			fila[3] = objMovimiento->elementos;
			fila[4] = Convert::ToString(objMovimiento->cantidad);
			fila[5] = objMovimiento->fecha;
			this->dataGridView1->Rows->Add(fila);
		}
	}
private: System::Void frmHistorialAlmacen_Load(System::Object^ sender, System::EventArgs^ e) {
	mostrarGrillaMovimientos(listaMovimientos);
}
};
}
