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
	/// <summary>
	/// Resumen de frmEditarFarmaco
	/// </summary>
	public ref class frmEditarFarmaco : public System::Windows::Forms::Form
	{
	public:
		frmEditarFarmaco(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmEditarFarmaco(String^ IDeditar)
		{
			InitializeComponent();
			this->ID = IDeditar;
			
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmEditarFarmaco()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	protected:
	private: System::Windows::Forms::Button^ Cancelar;
	private: System::Windows::Forms::Button^ Aceptar;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: String^ ID;
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
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->Cancelar = (gcnew System::Windows::Forms::Button());
			this->Aceptar = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(56, 196);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(259, 22);
			this->dateTimePicker1->TabIndex = 21;
			// 
			// Cancelar
			// 
			this->Cancelar->Location = System::Drawing::Point(208, 369);
			this->Cancelar->Name = L"Cancelar";
			this->Cancelar->Size = System::Drawing::Size(75, 23);
			this->Cancelar->TabIndex = 20;
			this->Cancelar->Text = L"Cancelar";
			this->Cancelar->UseVisualStyleBackColor = true;
			this->Cancelar->Click += gcnew System::EventHandler(this, &frmEditarFarmaco::Cancelar_Click);
			// 
			// Aceptar
			// 
			this->Aceptar->Location = System::Drawing::Point(73, 369);
			this->Aceptar->Name = L"Aceptar";
			this->Aceptar->Size = System::Drawing::Size(75, 23);
			this->Aceptar->TabIndex = 19;
			this->Aceptar->Text = L"Aceptar";
			this->Aceptar->UseVisualStyleBackColor = true;
			this->Aceptar->Click += gcnew System::EventHandler(this, &frmEditarFarmaco::Aceptar_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(56, 261);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(259, 71);
			this->richTextBox1->TabIndex = 18;
			this->richTextBox1->Text = L"";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(56, 136);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(260, 22);
			this->textBox2->TabIndex = 17;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(56, 71);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(260, 22);
			this->textBox1->TabIndex = 16;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(53, 241);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(160, 17);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Descripcción (opcional):";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(53, 176);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(152, 17);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Fecha de Vencimiento:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(53, 116);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 17);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Cantidad:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(53, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 17);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Nombre:";
			// 
			// frmEditarFarmaco
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(370, 446);
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
			this->Name = L"frmEditarFarmaco";
			this->Text = L"frmEditarFarmaco";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Aceptar_Click(System::Object^ sender, System::EventArgs^ e) {
		FarmacoController^ objGestor = gcnew FarmacoController();
		objGestor->editarFarmaco(this->ID,this->textBox1->Text, Convert::ToInt32(this->textBox2->Text), this->dateTimePicker1->Text, this->richTextBox1->Text);
		MessageBox::Show("El farmaco ha sido editado con éxito !!!");
		this->Close();
	}
private: System::Void Cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
