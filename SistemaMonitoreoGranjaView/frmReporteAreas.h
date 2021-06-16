#pragma once

#include "verReporteMediciones.h"
namespace SistemaMonitoreoGranjaView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SistemaMonitoreoGranjaModel;
	using namespace SistemaMonitoreoGranjaController;
	/// <summary>
	/// Resumen de frmReporteAreas
	/// </summary>
	public ref class frmReporteAreas : public System::Windows::Forms::Form
	{
	public:
		frmReporteAreas(void)
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
		~frmReporteAreas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: String^ IDSensorSeleccionado;
	private: String^ IDAreaSeleccionado;
	private: String^ IDComederoSeleccionado;
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
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(113, 27);
			this->chart1->Margin = System::Windows::Forms::Padding(4);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Areas";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(648, 226);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->comboBox3);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(35, 285);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(829, 161);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Estado";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(19, 95);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 48);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Ver Mediciones";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmReporteAreas::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(657, 18);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(68, 17);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Sensores";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(448, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Comederos";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(218, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(126, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Áreas de Animales";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(599, 39);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(190, 24);
			this->comboBox3->TabIndex = 3;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &frmReporteAreas::comboBox3_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(392, 39);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(190, 24);
			this->comboBox2->TabIndex = 2;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &frmReporteAreas::comboBox2_SelectedIndexChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(185, 39);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(190, 24);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &frmReporteAreas::comboBox1_SelectedIndexChanged_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 51);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Seleccione los \r\nparametros para \r\nver las mediciones:";
			// 
			// frmReporteAreas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(915, 486);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->chart1);
			this->Name = L"frmReporteAreas";
			this->Text = L"frmReporteAreas";
			this->Load += gcnew System::EventHandler(this, &frmReporteAreas::frmReporteAreas_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmReporteAreas_Load(System::Object^ sender, System::EventArgs^ e) {
		ReporteController^ objGestorReporte = gcnew ReporteController();
		List<ReporteAreas^>^ listaReporteArea = objGestorReporte->GenerarReporte();
		for (int i = 0; i < listaReporteArea->Count; i++) {
			this->chart1->Series["Areas"]->Points->Add(listaReporteArea[i]->cantComederos);
			this->chart1->Series["Areas"]->Points[i]->AxisLabel = listaReporteArea[i]->nombreArea;  //etiquetaX
			this->chart1->Series["Areas"]->Points[i]->LegendText = listaReporteArea[i]->nombreArea; //legenda
			this->chart1->Series["Areas"]->Points[i]->Label = Convert::ToString(listaReporteArea[i]->cantComederos);  //etiquetaY
		}

		this->comboBox1->Items->Clear();
		AreasDeAnimalesController^ objGestorAreaController = gcnew AreasDeAnimalesController();
		objGestorAreaController->CargarAreasDesdeArchivo();
		List<AreaDeAnimales^>^ listaAreasCombo = objGestorAreaController->obtenerListaAreas();
		for (int i = 0; i < listaAreasCombo->Count; i++) {
			AreaDeAnimales^ objArea = listaAreasCombo[i];
			String^ nombre = objArea->tipo_animal + " " + objArea->raza + " de sexo " + objArea->sexo;
			this->comboBox1->Items->Add(nombre);
		}
	}
	private: System::Void comboBox1_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
		AreasDeAnimalesController^ objGestorAreaController = gcnew AreasDeAnimalesController();
		objGestorAreaController->CargarAreasDesdeArchivo();
		AreaDeAnimales^ objArea = objGestorAreaController->ObtenerAreaLista(comboBox1->SelectedIndex);
		this->IDAreaSeleccionado = objArea->ID;
		List<Comederos^>^ listaComederos = objGestorAreaController->BuscarComederosArea(objArea->ID);
		this->comboBox2->Items->Clear();
		for (int i = 0; i < listaComederos->Count; i++) {
			Comederos^ objComedero = listaComederos[i];
			String^ nombre = objComedero->nombre;
			this->comboBox2->Items->Add(nombre);
		}
	}
private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	this->comboBox3->Items->Clear();
	AreasDeAnimalesController^ objGestorAreaController = gcnew AreasDeAnimalesController();
	objGestorAreaController->CargarAreasDesdeArchivo();
	AreaDeAnimales^ objArea = objGestorAreaController->ObtenerAreaLista(comboBox1->SelectedIndex);
	List<Comederos^>^ listaComederos = objGestorAreaController->BuscarComederosArea(objArea->ID);
	
	Comederos^ ComederoSeleccionado = listaComederos[comboBox2->SelectedIndex];
	
	ComedoresController^ objGestorComederoController = gcnew ComedoresController();
	List<Sensores^>^ listaSensores = objGestorComederoController->buscarSensoresComedero(ComederoSeleccionado->ID);
	this->IDComederoSeleccionado = ComederoSeleccionado->ID;
	for (int i = 0; i < listaSensores->Count; i++) {
		Sensores^ objSensor = listaSensores[i];
		String^ nombre = objSensor->Nombre + " " + objSensor->tipoSensor;
		this->comboBox3->Items->Add(nombre);
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->comboBox3->Text == "") {
		MessageBox::Show("Seleccione todos los parametros");
	}
	else{
		ComedoresController^ objGestorComederoController = gcnew ComedoresController();
		List<Sensores^>^ listaSensores = objGestorComederoController->buscarSensoresComedero(this->IDComederoSeleccionado);
		Sensores^ SensorSeleccionado = listaSensores[comboBox3->SelectedIndex];

		verReporteMediciones^ ventanaReporteMedicion = gcnew verReporteMediciones(SensorSeleccionado->ID);
		ventanaReporteMedicion->ShowDialog();
	}
	
}
};
}
