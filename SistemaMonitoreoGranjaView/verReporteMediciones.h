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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(verReporteMediciones::typeid));
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			this->chart1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(78)));
			this->chart1->BackImageAlignment = System::Windows::Forms::DataVisualization::Charting::ChartImageAlignmentStyle::BottomLeft;
			this->chart1->BorderlineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(78)));
			this->chart1->BorderSkin->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)), static_cast<System::Int32>(static_cast<System::Byte>(78)));
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(195, 0);
			this->chart1->Margin = System::Windows::Forms::Padding(2);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Mediciones";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(677, 471);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 10000;
			this->timer1->Tick += gcnew System::EventHandler(this, &verReporteMediciones::timer1_Tick);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(199, 459);
			this->panel1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(78)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(40, 381);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 28);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Cerrar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &verReporteMediciones::button1_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Gadugi", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(78)));
			this->label1->Location = System::Drawing::Point(3, 175);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(187, 38);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Estadísticas";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->Location = System::Drawing::Point(12, 36);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(163, 126);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// verReporteMediciones
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(867, 459);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->chart1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"verReporteMediciones";
			this->Text = L"verReporteMediciones";
			this->Load += gcnew System::EventHandler(this, &verReporteMediciones::verReporteMediciones_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
