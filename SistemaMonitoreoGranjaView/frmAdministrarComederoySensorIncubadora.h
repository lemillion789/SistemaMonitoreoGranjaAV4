#pragma once
#include "frmAdministrarSensoresDeComedero.h"

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
	/// Resumen de frmAdministrarComederosDeArea
	/// </summary>
	public ref class frmAdministrarComederoySensorIncubadora : public System::Windows::Forms::Form
	{
	public:
		frmAdministrarComederoySensorIncubadora(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmAdministrarComederoySensorIncubadora(String^ IDAreaSeleccionada)
		{
			InitializeComponent();

			this->IDAreaSeleccionada = IDAreaSeleccionada;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmAdministrarComederoySensorIncubadora()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;

	private: String^ IDAreaSeleccionada;
	private: List<Comederos^>^ listaComederos;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox10;



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
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->dataGridView1);
			this->groupBox2->Location = System::Drawing::Point(328, 22);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(402, 242);
			this->groupBox2->TabIndex = 11;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Lista de Comederos";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Nombre, this->Column5, this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(6, 19);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(386, 203);
			this->dataGridView1->TabIndex = 11;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->MinimumWidth = 6;
			this->Nombre->Name = L"Nombre";
			this->Nombre->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Hora de llenado";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
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
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->textBox9);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(10, 11);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(305, 254);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos del area";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(64, 48);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(24, 13);
			this->label9->TabIndex = 20;
			this->label9->Text = L"ID: ";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(113, 46);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(144, 20);
			this->textBox9->TabIndex = 19;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(54, 200);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(78, 20);
			this->textBox4->TabIndex = 18;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(149, 201);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 13);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Cantidad :";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(212, 198);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(69, 20);
			this->textBox5->TabIndex = 16;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(3, 191);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 26);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Edad\r\npromedio:";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(212, 162);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(69, 20);
			this->textBox6->TabIndex = 14;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(212, 126);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(69, 20);
			this->textBox7->TabIndex = 13;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(212, 90);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(69, 20);
			this->textBox8->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(150, 154);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(53, 26);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Peso\r\npromedio:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(150, 128);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 13);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Color :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(150, 90);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(38, 13);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Raza :";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(54, 162);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(78, 20);
			this->textBox3->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(54, 125);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(78, 20);
			this->textBox2->TabIndex = 5;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(54, 90);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(78, 20);
			this->textBox1->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 154);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 26);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Estado \r\nde salud:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 126);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Sexo :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 80);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Tipo de \r\nanimal :";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(735, 119);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(74, 53);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Sensores";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmAdministrarComederoySensorIncubadora::button1_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(735, 77);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(72, 26);
			this->label10->TabIndex = 13;
			this->label10->Text = L"Seleccione \r\nun comedero:";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Controls->Add(this->textBox11);
			this->groupBox3->Controls->Add(this->textBox13);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->textBox12);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->textBox10);
			this->groupBox3->Location = System::Drawing::Point(328, 303);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(402, 168);
			this->groupBox3->TabIndex = 14;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Ambiente";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(124, 56);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(78, 20);
			this->textBox10->TabIndex = 0;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(18, 59);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(81, 13);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Temperatura °C";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(224, 59);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(57, 13);
			this->label13->TabIndex = 4;
			this->label13->Text = L"ID_Sensor";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(299, 56);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(78, 20);
			this->textBox12->TabIndex = 3;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(224, 110);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(57, 13);
			this->label14->TabIndex = 10;
			this->label14->Text = L"ID_Sensor";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(124, 107);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(78, 20);
			this->textBox11->TabIndex = 7;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(299, 107);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(78, 20);
			this->textBox13->TabIndex = 9;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(18, 107);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(64, 13);
			this->label12->TabIndex = 8;
			this->label12->Text = L"Humedad %";
			// 
			// frmAdministrarComederoySensorIncubadora
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(828, 503);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"frmAdministrarComederoySensorIncubadora";
			this->Text = L"frmAdministrarComederoySensorIncubadora";
			this->Load += gcnew System::EventHandler(this, &frmAdministrarComederoySensorIncubadora::frmAdministrarComederosDeArea_Load);
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmAdministrarComederosDeArea_Load(System::Object^ sender, System::EventArgs^ e) {
		AreasDeAnimalesController^ gestorArea = gcnew AreasDeAnimalesController();
		AreaDeAnimales^ objArea = gestorArea->buscarAreaxID(this->IDAreaSeleccionada);

		this->textBox1->Text = objArea->tipo_animal; //tipo
		this->textBox2->Text = objArea->sexo;	//sexo
		this->textBox3->Text = objArea->estado_salud;	//estado
		this->textBox4->Text = Convert::ToString(objArea->edad);	//edad, cantidad, peso color raza
		this->textBox5->Text = Convert::ToString(objArea->cantidad);
		this->textBox6->Text = Convert::ToString(objArea->peso);
		this->textBox7->Text = objArea->color;
		this->textBox8->Text = objArea->raza;
		this->textBox9->Text = objArea->ID;
		this->listaComederos = objArea->listaComederos;
		mostrarGrilla(this->listaComederos);
		/*
		IncubadorasController^ gestorIncubadora = gcnew IncubadorasController();
		Incubadoras^ incubadorabebe = gestorIncubadora->buscarIncubadoras(IDAreaSeleccionada);
		List<Sensores^>^ listSensoresbebe = incubadorabebe->List_Sensores;
		String^ SensorT_ID = listSensoresbebe[0]->ID;
		String^ SensorH_ID = listSensoresbebe[1]->ID;
		SensoresController^ gestorSensores = gcnew SensoresController();
		List<Medicion^>^ listaMedicionesT = gestorSensores->buscarMedicionesxSensor(SensorT_ID);
		int ultimamedidaT = listaMedicionesT->Count;
		this->textBox11->Text = Convert::ToString(listaMedicionesT[ultimamedidaT]->medida);
		List<Medicion^>^ listaMedicionesH = gestorSensores->buscarMedicionesxSensor(SensorH_ID);
		int ultimamedidaH = listaMedicionesH->Count;
		this->textBox11->Text = Convert::ToString(listaMedicionesT[ultimamedidaT]->medida);

		*/

		
		
		
		

	
	
	
	
	}
	private: void mostrarGrilla(List<Comederos^>^ lista) {
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < lista->Count; i++) {
			Comederos^ obj = lista[i];
			array<String^>^ fila = gcnew array<String^>(6);
			fila[0] = obj->ID;
			fila[1] = obj->nombre;
			fila[2] = obj->horaLlenado;
			fila[3] = Convert::ToString(obj->capComida);
			fila[4] = Convert::ToString(obj->capAgua);
			fila[5] = Convert::ToString(obj->capProteinas);
			this->dataGridView1->Rows->Add(fila);
		}

	
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//MOSTRAR SENSORES
		int posicionFilaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;  //posicion de fila seleccionada
		String^ IDComederoSeleccionado = this->dataGridView1->Rows[posicionFilaSeleccionada]->Cells[0]->Value->ToString(); //cells columna
		frmAdministrarSensoresDeComedero^ ventanaSensoresComedero = gcnew frmAdministrarSensoresDeComedero(IDComederoSeleccionado);
		ventanaSensoresComedero->ShowDialog();
	}
	};
}
