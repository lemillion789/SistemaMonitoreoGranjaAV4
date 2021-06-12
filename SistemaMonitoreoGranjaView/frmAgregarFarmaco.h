#pragma once
#include<stdlib.h>
#include<time.h>

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
	/// Resumen de frmAgregarFarmaco
	/// </summary>
	public ref class frmAgregarFarmaco : public System::Windows::Forms::Form
	{
	public:
		frmAgregarFarmaco(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmAgregarFarmaco(List<Farmacos^>^ listaFarmacos)
		{
			InitializeComponent();
			this->listaFarmacos = listaFarmacos;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmAgregarFarmaco()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ Aceptar;
	private: System::Windows::Forms::Button^ Cancelar;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: int nCodigo;
	private: Farmacos^ objFarmaco;
	private: List<Farmacos^>^ listaFarmacos;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->Aceptar = (gcnew System::Windows::Forms::Button());
			this->Cancelar = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(97, 73);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(97, 138);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Cantidad:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(97, 198);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(152, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Fecha de Vencimiento:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(97, 263);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(160, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Descripcción (opcional):";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(100, 93);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(260, 22);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(100, 158);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(260, 22);
			this->textBox2->TabIndex = 5;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(100, 283);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(259, 71);
			this->richTextBox1->TabIndex = 8;
			this->richTextBox1->Text = L"";
			// 
			// Aceptar
			// 
			this->Aceptar->Location = System::Drawing::Point(117, 391);
			this->Aceptar->Name = L"Aceptar";
			this->Aceptar->Size = System::Drawing::Size(75, 23);
			this->Aceptar->TabIndex = 9;
			this->Aceptar->Text = L"Aceptar";
			this->Aceptar->UseVisualStyleBackColor = true;
			this->Aceptar->Click += gcnew System::EventHandler(this, &frmAgregarFarmaco::Aceptar_Click);
			// 
			// Cancelar
			// 
			this->Cancelar->Location = System::Drawing::Point(252, 391);
			this->Cancelar->Name = L"Cancelar";
			this->Cancelar->Size = System::Drawing::Size(75, 23);
			this->Cancelar->TabIndex = 10;
			this->Cancelar->Text = L"Cancelar";
			this->Cancelar->UseVisualStyleBackColor = true;
			this->Cancelar->Click += gcnew System::EventHandler(this, &frmAgregarFarmaco::Cancelar_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(100, 218);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(259, 22);
			this->dateTimePicker1->TabIndex = 11;
			// 
			// frmAgregarFarmaco
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(482, 453);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->Cancelar);
			this->Controls->Add(this->Aceptar);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"frmAgregarFarmaco";
			this->Text = L"frmAgregarFarmaco";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Aceptar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nombre = this->textBox1->Text;
		int cantidad = Convert::ToInt32(this->textBox2->Text);
		String^ fecha = this->dateTimePicker1->Text;
		String^ descripcion = this->richTextBox1->Text;
		srand(time(NULL));
		nCodigo = rand() % 9000 + 1000;
		String^ codigo = "FRMC" + Convert::ToString(nCodigo);
		objFarmaco = gcnew Farmacos(codigo, nombre,cantidad, descripcion, fecha);
		this->listaFarmacos->Add(objFarmaco);
		MessageBox::Show("Se ha agregado el objeto a la lista.");
		this->Close();
	}
private: System::Void Cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
