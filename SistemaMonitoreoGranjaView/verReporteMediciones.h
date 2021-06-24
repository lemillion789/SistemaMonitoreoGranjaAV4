#pragma once

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
	/// Resumen de verReporteMediciones
	/// </summary>
	public ref class verReporteMediciones : public System::Windows::Forms::Form
	{
	public:
		verReporteMediciones(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		verReporteMediciones(String^ IDsensor)
		{
			InitializeComponent();
			this->IDsensor = IDsensor;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~verReporteMediciones()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: String^ IDsensor;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ button1;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(12, 12);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Mediciones";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(791, 433);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 10000;
			this->timer1->Tick += gcnew System::EventHandler(this, &verReporteMediciones::timer1_Tick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(902, 168);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 57);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &verReporteMediciones::button1_Click);
			// 
			// verReporteMediciones
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1106, 470);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart1);
			this->Name = L"verReporteMediciones";
			this->Text = L"verReporteMediciones";
			this->Load += gcnew System::EventHandler(this, &verReporteMediciones::verReporteMediciones_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void verReporteMediciones_Load(System::Object^ sender, System::EventArgs^ e) {
		SensoresController^ objGestorSensor = gcnew SensoresController();
		List<Medicion^>^ listaMedidas = objGestorSensor->buscarMedicionesxSensor(this->IDsensor);

		if (listaMedidas->Count > 5) {
			int cantidadMedidas = listaMedidas->Count;
			List<Medicion^>^ listaMostrar = gcnew List<Medicion^>();
			listaMostrar->Add(listaMedidas[cantidadMedidas - 5]);
			listaMostrar->Add(listaMedidas[cantidadMedidas - 4]);
			listaMostrar->Add(listaMedidas[cantidadMedidas - 3]);
			listaMostrar->Add(listaMedidas[cantidadMedidas - 2]);
			listaMostrar->Add(listaMedidas[cantidadMedidas - 1]);
			mostrarGrafica(listaMostrar);
		}
		else
		{
			mostrarGrafica(listaMedidas);
		}
	}
	private: void mostrarGrafica(List<Medicion^>^ listaMediciones) {
		this->chart1->Series["Mediciones"]->Points->Clear();
		for (int i = 0; i < listaMediciones->Count; i++) {
			this->chart1->Series["Mediciones"]->Points->Add(listaMediciones[i]->medida);
			this->chart1->Series["Mediciones"]->Points[i]->AxisLabel = listaMediciones[i]->registro_hora;
			this->chart1->Series["Mediciones"]->Points[i]->Label = Convert::ToString(listaMediciones[i]->registro_hora);
		}
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		SensoresController^ objGestorSensor = gcnew SensoresController();
		List<Medicion^>^ listaMedidas = objGestorSensor->buscarMedicionesxSensor(this->IDsensor);
		
		if (listaMedidas->Count > 5) {
			int cantidadMedidas = listaMedidas->Count;
			List<Medicion^>^ listaMostrar = gcnew List<Medicion^> ();
			listaMostrar->Add(listaMedidas[cantidadMedidas-5]);
			listaMostrar->Add(listaMedidas[cantidadMedidas-4]);
			listaMostrar->Add(listaMedidas[cantidadMedidas-3]);
			listaMostrar->Add(listaMedidas[cantidadMedidas-2]);
			listaMostrar->Add(listaMedidas[cantidadMedidas-1]);
			mostrarGrafica(listaMostrar);
		}
		else
		{
			mostrarGrafica(listaMedidas);
		}

		
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//Corregir medida
	TareaController^ gestorTarea = gcnew TareaController();
	gestorTarea->realizarTareaSensor(this->IDsensor);

}
};
}
