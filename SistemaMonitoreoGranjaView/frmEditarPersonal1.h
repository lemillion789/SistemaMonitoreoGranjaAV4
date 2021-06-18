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
	/// Resumen de frmEditarPersonal
	/// </summary>
	public ref class frmEditarPersonal : public System::Windows::Forms::Form
	{
	public:
		frmEditarPersonal(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmEditarPersonal(String^ IDPersonalEditar) {


		this->IDPersonalEditar = IDPersonalEditar;



		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmEditarPersonal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox5;
	protected:
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: String^ IDPersonalEditar;
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
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			this->textBox5->Location = System::Drawing::Point(44, 32);
			this->textBox5->Margin = System::Windows::Forms::Padding(2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(224, 20);
			this->textBox5->TabIndex = 35;
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(41, 15);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(21, 13);
			this->label8->TabIndex = 34;
			this->label8->Text = L"ID:";
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Asistio", L"Ausente" });
			this->comboBox2->Location = System::Drawing::Point(44, 367);
			this->comboBox2->Margin = System::Windows::Forms::Padding(2);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(224, 21);
			this->comboBox2->TabIndex = 33;
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(41, 351);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(58, 13);
			this->label7->TabIndex = 32;
			this->label7->Text = L"Asistencia:";
			this->textBox4->Location = System::Drawing::Point(44, 323);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(225, 20);
			this->textBox4->TabIndex = 31;
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(43, 307);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(38, 13);
			this->label6->TabIndex = 30;
			this->label6->Text = L"Tarea:";
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(43, 253);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 13);
			this->label5->TabIndex = 29;
			this->label5->Text = L"Horario:";
			this->dateTimePicker1->Location = System::Drawing::Point(45, 269);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(224, 20);
			this->dateTimePicker1->TabIndex = 28;
			this->button2->Location = System::Drawing::Point(190, 410);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(56, 19);
			this->button2->TabIndex = 27;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button1->Location = System::Drawing::Point(73, 410);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(56, 19);
			this->button1->TabIndex = 26;
			this->button1->Text = L"Aceptar";
			this->button1->UseVisualStyleBackColor = true;
			this->textBox3->Location = System::Drawing::Point(46, 172);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(224, 20);
			this->textBox3->TabIndex = 24;
			this->textBox2->Location = System::Drawing::Point(45, 122);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(224, 20);
			this->textBox2->TabIndex = 23;
			this->textBox1->Location = System::Drawing::Point(45, 71);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(224, 20);
			this->textBox1->TabIndex = 22;
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(42, 203);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 13);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Función:";
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(42, 156);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 13);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Apellido Materno:";
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(42, 106);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 13);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Apellido Paterno:";
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(42, 54);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 13);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Nombre:";
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Administrador", L"Granjero", L"Tecnico", L"Veterinario" });
			this->comboBox1->Location = System::Drawing::Point(45, 219);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(224, 21);
			this->comboBox1->TabIndex = 25;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(321, 463);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Name = L"frmEditarPersonal";
			this->Text = L"frmEditarPersonal";
			this->Load += gcnew System::EventHandler(this, &frmEditarPersonal::frmEditarPersonal_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmEditarPersonal_Load(System::Object^ sender, System::EventArgs^ e) {
		PersonalController^ objPersonalController = gcnew PersonalController();
		//Personal^ objPersonal = objPersonalController->buscarPersonalxCodigo(this->IDPersonalEditar);
		//this->textBox5->Text = objPersonal->ID;
		//this->textBox1->Text = objPersonal->nombre;
		//this->textBox2->Text = objPersonal->ApPaterno;
		//this->textBox3->Text = objPersonal->ApMaterno;
		//this->comboBox1->Text = objPersonal->funcion;
		//this->dateTimePicker1->Text = objPersonal->horario;
		//this->textBox4->Text = objPersonal->tareas;
		//this->comboBox2->Text = objPersonal->asistencia;

	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {



}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
