#pragma once
#include "frmMovimientoAlmacen.h"

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
	/// Resumen de frmAdministrarAlmacen
	/// </summary>
	public ref class frmAdministrarAlmacen : public System::Windows::Forms::Form
	{
	public:
		frmAdministrarAlmacen(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmAdministrarAlmacen(List<Alimentos^>^ listaAlimentos, List<Farmacos^>^ listaFarmacos, List<Almacen^>^ listaAlmacenes, List<Movimiento^>^ listaMovimientos)
		{
			InitializeComponent();
			this->listaAlimentos = listaAlimentos;
			this->listaFarmacos = listaFarmacos;
			this->listaAlmacenes = listaAlmacenes;
			this->listaMovimientos = listaMovimientos;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmAdministrarAlmacen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ComboBox^ comboBox8;
	private: System::Windows::Forms::ComboBox^ comboBox7;
	private: System::Windows::Forms::ComboBox^ comboBox6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: String^ tipoTrans;
	private: String^ origen;
	private: String^ destino;
	private: String^ elemento;
	private: List<Alimentos^>^ listaAlimentos;
	private: List<Farmacos^>^ listaFarmacos;
	private: List<Almacen^>^ listaAlmacenes;
	private: List<Movimiento^>^ listaMovimientos;

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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(66, 35);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(846, 144);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Nueva Adquisicion";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(684, 49);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 52);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Realizar Transacción";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmAdministrarAlmacen::button1_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(506, 57);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 24);
			this->comboBox2->TabIndex = 3;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(200, 57);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(391, 60);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(109, 17);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Tipo de insumo:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(56, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(138, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Almacen de Destino:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->comboBox5);
			this->groupBox2->Controls->Add(this->comboBox4);
			this->groupBox2->Controls->Add(this->comboBox3);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Location = System::Drawing::Point(66, 207);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(846, 142);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Abastecimiento";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(684, 56);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(113, 52);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Realizar Transacción";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmAdministrarAlmacen::button2_Click);
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(304, 71);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(96, 24);
			this->comboBox5->TabIndex = 5;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(531, 71);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(96, 24);
			this->comboBox4->TabIndex = 4;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(117, 71);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(96, 24);
			this->comboBox3->TabIndex = 3;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(416, 74);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(109, 17);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Tipo de insumo:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(238, 74);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(60, 17);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Destino:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(56, 74);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 17);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Origen:";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button3);
			this->groupBox3->Controls->Add(this->comboBox8);
			this->groupBox3->Controls->Add(this->comboBox7);
			this->groupBox3->Controls->Add(this->comboBox6);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Location = System::Drawing::Point(66, 377);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(846, 141);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Translado interno";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(684, 52);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(113, 52);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Realizar Transacción";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmAdministrarAlmacen::button3_Click);
			// 
			// comboBox8
			// 
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->Location = System::Drawing::Point(531, 67);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(96, 24);
			this->comboBox8->TabIndex = 5;
			// 
			// comboBox7
			// 
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Location = System::Drawing::Point(304, 67);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(96, 24);
			this->comboBox7->TabIndex = 4;
			// 
			// comboBox6
			// 
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Location = System::Drawing::Point(117, 71);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(96, 24);
			this->comboBox6->TabIndex = 3;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(416, 71);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(109, 17);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Tipo de insumo:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(238, 71);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 17);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Destino:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(56, 71);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 17);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Origen";
			// 
			// frmAdministrarAlmacen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(982, 553);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmAdministrarAlmacen";
			this->Text = L"frmAdministrarAlmacen";
			this->Load += gcnew System::EventHandler(this, &frmAdministrarAlmacen::frmAdministrarAlmacen_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmAdministrarAlmacen_Load(System::Object^ sender, System::EventArgs^ e) {
		this->comboBox1->Items->Clear();
		for (int i = 0; i < listaAlmacenes->Count; i++) {
			Almacen^ objAlmacen = listaAlmacenes[i];
			this->comboBox1->Items->Add(objAlmacen->nombre);
		}

		this->comboBox2->Items->Clear();
		this->comboBox2->Items->Add("Farmaco");
		this->comboBox2->Items->Add("Alimento");

		this->comboBox3->Items->Clear();
		for (int i = 0; i < listaAlmacenes->Count; i++) {
			Almacen^ objAlmacen = listaAlmacenes[i];
			this->comboBox3->Items->Add(objAlmacen->nombre);
		}

		this->comboBox4->Items->Clear();
		this->comboBox4->Items->Add("Farmaco");
		this->comboBox4->Items->Add("Alimento");

		this->comboBox5->Items->Clear();
		this->comboBox5->Items->Add("Area de animales");
		this->comboBox5->Items->Add("Area de incubacion");

		this->comboBox6->Items->Clear();
		for (int i = 0; i < listaAlmacenes->Count; i++) {
			Almacen^ objAlmacen = listaAlmacenes[i];
			this->comboBox6->Items->Add(objAlmacen->nombre);
		}

		this->comboBox7->Items->Clear();
		for (int i = 0; i < listaAlmacenes->Count; i++) {
			Almacen^ objAlmacen = listaAlmacenes[i];
			this->comboBox7->Items->Add(objAlmacen->nombre);
		}

		this->comboBox8->Items->Clear();
		this->comboBox8->Items->Add("Farmaco");
		this->comboBox8->Items->Add("Alimento");

	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	tipoTrans = "Nueva adquicsición";
	origen = "Compra";
	destino = this->comboBox1->Text;
	elemento = this->comboBox2->Text;
	frmMovimientoAlmacen^ ventana = gcnew frmMovimientoAlmacen(tipoTrans, origen, destino, elemento, listaAlimentos, listaFarmacos, listaAlmacenes, listaMovimientos);
	ventana->ShowDialog();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	tipoTrans = "Abastecimiento";
	origen = this->comboBox3->Text;
	destino = this->comboBox5->Text;
	elemento = this->comboBox4->Text;
	frmMovimientoAlmacen^ ventana = gcnew frmMovimientoAlmacen(tipoTrans, origen, destino, elemento, listaAlimentos, listaFarmacos, listaAlmacenes, listaMovimientos);
	ventana->ShowDialog();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	tipoTrans = "Transferencia interna";
	origen = this->comboBox6->Text;
	destino = this->comboBox7->Text;
	elemento = this->comboBox8->Text;
	frmMovimientoAlmacen^ ventana = gcnew frmMovimientoAlmacen(tipoTrans, origen, destino, elemento, listaAlimentos, listaFarmacos, listaAlmacenes, listaMovimientos);
	ventana->ShowDialog();
}
};
}