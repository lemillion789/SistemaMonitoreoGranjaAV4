#pragma once
#include "frmEditarSensor.h"
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
	/// Resumen de frmNuevoComedero
	/// </summary>
	public ref class frmNuevoComedero : public System::Windows::Forms::Form
	{
	public:
		frmNuevoComedero(void)
		{
			InitializeComponent();
			this->listaSensores = gcnew List<Sensores^>();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmNuevoComedero()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;





	private: System::Windows::Forms::GroupBox^ groupBox1;
















	private: System::Windows::Forms::GroupBox^ groupBox2;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: List<Sensores^>^ listaSensores;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox7;















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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(767, 39);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 58);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Agregar Sensor";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmNuevoComedero::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(42, 39);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(685, 126);
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
			this->Column2->HeaderText = L"Capacidad de Comida";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Capacidad de agua";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Capacidad de proteinas";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Hora de llenado";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(24, 40);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(874, 193);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Nuevo Comedero";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &frmNuevoComedero::groupBox1_Enter);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(195, 132);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(12, 17);
			this->label7->TabIndex = 8;
			this->label7->Text = L":";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(213, 131);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(45, 22);
			this->textBox7->TabIndex = 30;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &frmNuevoComedero::textBox7_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(144, 131);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(45, 22);
			this->textBox6->TabIndex = 29;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(25, 136);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(109, 17);
			this->label6->TabIndex = 28;
			this->label6->Text = L"Hora de llenado";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(723, 133);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(120, 22);
			this->textBox5->TabIndex = 27;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(144, 41);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(113, 22);
			this->textBox1->TabIndex = 22;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(479, 133);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(231, 17);
			this->label5->TabIndex = 26;
			this->label5->Text = L"Capacidad de Proteinas (raciones):";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(26, 41);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(25, 17);
			this->label4->TabIndex = 21;
			this->label4->Text = L"ID:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(723, 86);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(120, 22);
			this->textBox4->TabIndex = 25;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(144, 82);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(278, 22);
			this->textBox2->TabIndex = 23;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(723, 41);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(120, 22);
			this->textBox3->TabIndex = 24;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(477, 86);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(179, 17);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Capacidad de agua (litros):";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(25, 85);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 17);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Nombre:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(479, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(177, 17);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Capacidad de comida (kg):";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->dataGridView1);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Location = System::Drawing::Point(24, 252);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(874, 200);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Agregar Sensores";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(767, 117);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 58);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Eliminar Sensores";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmNuevoComedero::button3_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(405, 469);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmNuevoComedero::button1_Click_1);
			// 
			// frmNuevoComedero
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(985, 526);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmNuevoComedero";
			this->Text = L"frmNuevoComedero";
			this->Load += gcnew System::EventHandler(this, &frmNuevoComedero::frmNuevoComedero_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void frmNuevoComedero_Load(System::Object^ sender, System::EventArgs^ e) {
		AreasDeAnimalesController^ gestorArea = gcnew AreasDeAnimalesController();
		gestorArea->CargarAreasDesdeArchivo();
		int Cantidad = gestorArea->ObtenerCantidadAreas();
		String^ nuevoID = Cantidad.ToString("D5");
		this->textBox1->Text = nuevoID;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		frmEditarSensor^ ventanaEditarSensores = gcnew frmEditarSensor();
		ventanaEditarSensores->ShowDialog();
		mostrarGrilla(this->listaSensores);
		
	}
	private: void mostrarGrilla(List<Sensores^>^ listaSens) {
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < listaSens->Count; i++) {
			Sensores^ objSensor = listaSens[i];
			array<String^>^ fila = gcnew array<String^>(5);
			fila[0] = objSensor->ID;
			fila[1] = objSensor->Nombre;
			fila[2] = objSensor->marca;
			fila[3] = objSensor->tipoSensor;
			fila[4] = Convert::ToString(objSensor->unidades);
			this->dataGridView1->Rows->Add(fila);
		}
		
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
	//int codigoPartido = Convert::ToInt32(this->textBox1->Text);
	String^ ID = this->textBox1->Text;
	String^ nombre = this->textBox2->Text;
	int capAgua = Convert::ToInt32(this->textBox3->Text);
	int capComida = Convert::ToInt32(this->textBox4->Text);
	int capProteinas = Convert::ToInt32(this->textBox5->Text);
	String^ Hora = this->textBox6->Text+";"+ this->textBox7->Text; //Hora:Min

	Comederos^ objComedero = gcnew Comederos(capComida,capAgua,capProteinas,Hora,nombre,ID);
	objComedero->listaSensores = this->listaSensores;
	ComedoresController^ objGestor = gcnew ComedoresController();
	
	objGestor->GuardarComederoEnArchivo(objComedero);
	MessageBox::Show("El Comedero ha sido guardado con éxito");
	this->Close();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void maskedTextBox1_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	e->Handled = !(e->KeyChar.IsNumber(e->KeyChar));
	if (!(e->KeyChar.IsNumber(e->KeyChar))) {
		MessageBox::Show("Solo puede digitar numeros");
	}

	//fuente:https://www.youtube.com/watch?v=1ZZKJpp2Ciw
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void textBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	e->Handled = !(e->KeyChar.IsNumber(e->KeyChar));
	if (!(e->KeyChar.IsNumber(e->KeyChar))) {
		MessageBox::Show("Solo puede digitar numeros");
	}

}
private: System::Void textBox5_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	e->Handled = !(e->KeyChar.IsNumber(e->KeyChar));
	if (!(e->KeyChar.IsNumber(e->KeyChar))) {
		MessageBox::Show("Solo puede digitar numeros");
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int posicionFilaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	String^ IDsensorSeleccionado = this->dataGridView1->Rows[posicionFilaSeleccionada]->Cells[0]->Value->ToString();
	for (int i = 0; this->listaSensores->Count; i++) {
		Sensores^ obj = this->listaSensores[i];
		if (obj->ID == IDsensorSeleccionado) {
			this->listaSensores->RemoveAt(i);
			break;
		}
	}
	mostrarGrilla(this->listaSensores);
}
};
}
