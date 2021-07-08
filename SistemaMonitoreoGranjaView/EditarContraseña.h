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
	/// Resumen de EditarContrase�a
	/// </summary>
	public ref class EditarContrase�a : public System::Windows::Forms::Form
	{
	public:
		EditarContrase�a(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

		EditarContrase�a( String^ID)
		{
			InitializeComponent();
			this->ID = ID;
			
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~EditarContrase�a()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: String^ ID;
	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(128, 210);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 31);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Aceptar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &EditarContrase�a::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(128, 45);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(99, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(128, 111);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(99, 20);
			this->textBox2->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(73, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Usuario:";
			this->label1->Click += gcnew System::EventHandler(this, &EditarContrase�a::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(26, 118);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Contrase�a actual:";
			this->label2->Click += gcnew System::EventHandler(this, &EditarContrase�a::label2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(128, 161);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(98, 20);
			this->textBox3->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(28, 168);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Contrase�a nueva:";
			// 
			// EditarContrase�a
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(275, 274);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"EditarContrase�a";
			this->Text = L"EditarContrase�a";
			this->Load += gcnew System::EventHandler(this, &EditarContrase�a::EditarContrase�a_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		String^ ID = this->textBox1->Text;
		String^ Contrase�aNueva = this->textBox3->Text;
		UsuarioController^ objusuario = gcnew UsuarioController();
		objusuario->EditarContrase�a(ID, Contrase�aNueva);
		this->Close();
		MessageBox::Show("La contrase�a ha sido editada con �xito");
		
		

	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void EditarContrase�a_Load(System::Object^ sender, System::EventArgs^ e) {
	UsuarioController^ objusuario = gcnew UsuarioController();
	PersonalController^ objPersonalController = gcnew PersonalController();
	Personal^ objPersonal = objPersonalController->buscarPersonalxIDBD(this->ID);

	Usuario^ usuario = objusuario->buscarUsuarioxIDBD(this->ID);


	this->textBox1->Text = objPersonal->ID;
	this->textBox2->Text = usuario->contrase�a;

}
};
}
