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
	/// Resumen de frmMisEstadisticas
	/// </summary>
	public ref class frmMisEstadisticas : public System::Windows::Forms::Form
	{
	public:
		frmMisEstadisticas(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmMisEstadisticas(String^ IDPersonal)
		{
			InitializeComponent();
			this->IDPersonal = IDPersonal;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmMisEstadisticas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView2;




	private: System::Windows::Forms::Label^ label3;
	private: String^ IDPersonal;
	private: List<Tarea^>^ listaTareas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;




	protected:

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(12, 98);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::SeaGreen;
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Lista1";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Lista2";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(515, 420);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column4,
					this->Column1, this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(564, 50);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(832, 240);
			this->dataGridView1->TabIndex = 11;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmMisEstadisticas::dataGridView1_CellContentClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(561, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 17);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Tareas Pendientes";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(561, 301);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(157, 17);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Tareas Completadas";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4
			});
			this->dataGridView2->Location = System::Drawing::Point(564, 330);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView2->Size = System::Drawing::Size(832, 240);
			this->dataGridView2->TabIndex = 13;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(113, 43);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(208, 52);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Grafica de Tareas \r\ndel usuario";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"ID Tarea";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 70;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Lugar";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Width = 200;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Fecha";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->Width = 125;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Descripcion";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->Width = 400;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"ID Tarea";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 70;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Lugar";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 200;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Fecha";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Descripcion";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 400;
			// 
			// frmMisEstadisticas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1408, 592);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->chart1);
			this->Name = L"frmMisEstadisticas";
			this->Text = L"frmMisEstadisticas";
			this->Load += gcnew System::EventHandler(this, &frmMisEstadisticas::frmMisEstadisticas_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
private: System::Void frmMisEstadisticas_Load(System::Object^ sender, System::EventArgs^ e) {
	TareaController^ GestorTareaController = gcnew TareaController();
	this->listaTareas = GestorTareaController->buscarTareaxPersonal(IDPersonal);
	List<Tarea^>^ listaTareasGrilla1 = gcnew List<Tarea^>();
	List<Tarea^>^ listaTareasGrilla2 = gcnew List<Tarea^>();
	for (int i = 0; i < this->listaTareas->Count; i++) {
		if (this->listaTareas[i]->Estado == true)
			listaTareasGrilla1->Add(this->listaTareas[i]);
	}
	mostrarGrilla1(listaTareasGrilla1);
	for (int i = 0; i < this->listaTareas->Count; i++) {
		if (this->listaTareas[i]->Estado == false)
			listaTareasGrilla2->Add(this->listaTareas[i]);
	}
	mostrarGrilla2(listaTareasGrilla2);
	this->chart1->Series["Lista1"]->Points->Add(listaTareasGrilla1->Count);
	this->chart1->Series["Lista1"]->Points[0]->AxisLabel = "Tareas pendientes";  //etiquetaX
	this->chart1->Series["Lista1"]->Points[0]->LegendText = "Tareas pendientes"; //legenda
	this->chart1->Series["Lista1"]->Points[0]->Label = Convert::ToString(listaTareasGrilla1->Count);  //etiquetaY
	this->chart1->Series["Lista2"]->Points->Add(listaTareasGrilla2->Count);
	this->chart1->Series["Lista2"]->Points[0]->AxisLabel = "Tareas completadas";  //etiquetaX
	this->chart1->Series["Lista2"]->Points[0]->LegendText = "Tareas completadas"; //legenda
	this->chart1->Series["Lista2"]->Points[0]->Label = Convert::ToString(listaTareasGrilla2->Count);  //etiquetaY
}
private: void mostrarGrilla1(List<Tarea^>^ listaTarea) {
	this->dataGridView1->Rows->Clear();
	AreasDeAnimalesController^ gestorArea = gcnew AreasDeAnimalesController();
	ComedoresController^ gestorComedero = gcnew ComedoresController();
	SensoresController^ gestorSensor = gcnew SensoresController();
	for (int i = 0; i < listaTarea->Count; i++) {
		Tarea^ objTarea = listaTarea[i];
		array<String^>^ fila = gcnew array<String^>(4);
		fila[0] = objTarea->IDtarea;
		fila[1] = "En Area de " + objTarea->objArea->tipo_animal + " " + objTarea->objArea->raza + " de sexo " + objTarea->objArea->sexo;
		fila[2] = objTarea->fecha;
		fila[3] = "El sensor de " + objTarea->objSensor->tipoSensor + " detectó que el comedero está vacio o tiene problemas";
		this->dataGridView1->Rows->Add(fila);
	}
}
private: void mostrarGrilla2(List<Tarea^>^ listaTarea) {
	this->dataGridView2->Rows->Clear();
	AreasDeAnimalesController^ gestorArea = gcnew AreasDeAnimalesController();
	ComedoresController^ gestorComedero = gcnew ComedoresController();
	SensoresController^ gestorSensor = gcnew SensoresController();
	for (int i = 0; i < listaTarea->Count; i++) {
		Tarea^ objTarea = listaTarea[i];
		array<String^>^ fila = gcnew array<String^>(4);
		fila[0] = objTarea->IDtarea;
		fila[1] = "En Area de " + objTarea->objArea->tipo_animal + " " + objTarea->objArea->raza + " de sexo " + objTarea->objArea->sexo;
		fila[2] = objTarea->fecha;
		fila[3] = "El sensor de " + objTarea->objSensor->tipoSensor + " detectó que el comedero está vacio o tiene problemas";
		this->dataGridView2->Rows->Add(fila);
	}
}
};
}
