#pragma once
#include <iomanip>

namespace SistemaMonitoreoGranjaView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SistemaMonitoreoGranjaModel;
	using namespace System::Collections::Generic;
	using namespace SistemaMonitoreoGranjaController;
	using namespace SistemaMonitoreoGranjaModel;

	/// <summary>
	/// Resumen de frmMovimientoAlmacen
	/// </summary>
	public ref class frmMovimientoAlmacen : public System::Windows::Forms::Form
	{
	public:
		frmMovimientoAlmacen(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmMovimientoAlmacen(String^ tipoTrans, String^ origen, String^ destino, String^ elemento, List<Alimentos^>^ listaAlimentos, List<Farmacos^>^ listaFarmacos, List<Almacen^>^ listaAlmacenes, List<Movimiento^>^ listaMovimientos)
		{
			InitializeComponent();
			this->tipoTrans = tipoTrans;
			this->origen = origen;
			this->destino = destino;
			this->elemento = elemento;
			this->listaAlimentos = listaAlimentos;
			this->listaFarmacos = listaFarmacos;
			this->listaAlmacenes = listaAlmacenes;
			this->listaMovimientos = listaMovimientos;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmMovimientoAlmacen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: String^ tipoTrans;
	private: String^ origen;
	private: String^ destino;
	private: String^ elemento;
	private: List<Alimentos^>^ listaAlimentos;
	private: List<Farmacos^>^ listaFarmacos;
	private: List<Almacen^>^ listaAlmacenes;
	private: List<Movimiento^>^ listaMovimientos;
	private: List<Alimentos^>^ listaAlimentosAlmacen;
	private: List<Farmacos^>^ listaFarmacosAlmacen;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(243, 60);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(52, 39);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(775, 122);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ingrese cantidad a transferir";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(169, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Cantidad:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(459, 46);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(131, 50);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Realizar Transferencia";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMovimientoAlmacen::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(52, 199);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(774, 332);
			this->dataGridView1->TabIndex = 2;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Codigo";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombre";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Presentación";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Fecha de vencimiento";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(63, 179);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(213, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Seleccione Elemento a transferir";
			// 
			// frmMovimientoAlmacen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(882, 553);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmMovimientoAlmacen";
			this->Text = L"frmMovimientoAlmacen";
			this->Load += gcnew System::EventHandler(this, &frmMovimientoAlmacen::frmMovimientoAlmacen_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int i = 0;
		String^ nombreAlmacen;
		String^ codigoAlmacen;
		String^ codigoElemento;
		if (tipoTrans == "Nueva adquicsición") {
			if (elemento == "Farmaco") {
				int posicion = this->dataGridView1->SelectedRows[0]->Index;
				Farmacos^ objFarmaco = listaFarmacos[posicion];
				codigoElemento = objFarmaco->ID;
				nombreAlmacen = " ";
				i = 0;
				while (nombreAlmacen!=destino) {
					Almacen^ almacen = listaAlmacenes[i];
					nombreAlmacen = almacen->nombre;
					codigoAlmacen = almacen->codigo;
					i++;
				}
				Almacen^ objAlmacen = listaAlmacenes[i-1];
				objAlmacen->List_Farmacos->Add(objFarmaco);
				listaAlmacenes[i-1] = objAlmacen;
				MessageBox::Show("Se ha agregado el objeto al almacen");
			}
			else {
				int posicion = this->dataGridView1->SelectedRows[0]->Index;
				Alimentos^ objAlimento = listaAlimentos[posicion];
				codigoElemento = objAlimento->codigo;
				nombreAlmacen = " ";
				i = 0;
				while (nombreAlmacen != destino) {
					Almacen^ almacen = listaAlmacenes[i];
					nombreAlmacen = almacen->nombre;
					codigoAlmacen = almacen->codigo;
					i++;
				}
				Almacen^ objAlmacen = listaAlmacenes[i-1];
				objAlmacen->List_Alimentos->Add(objAlimento);
				listaAlmacenes[i-1] = objAlmacen;
				MessageBox::Show("Se ha agregado el objeto al almacen");			
			}
			int cantidad = Convert::ToInt32(this->textBox1->Text);
			AlmacenController^ objGestorAlmacen = gcnew AlmacenController();
			objGestorAlmacen->guardarElementoAlmacen(codigoAlmacen, codigoElemento, elemento, cantidad);
		}
		else if (tipoTrans == "Abastecimiento") {
			if (elemento == "Farmaco") {
				MessageBox::Show("Se ha hecho el abastecimiento saisfactoriamente");
			}
			else {
				MessageBox::Show("Se ha hecho el abastecimiento saisfactoriamente");
			}

		}
		else {
			if (elemento == "Farmaco") {
				int posicion = this->dataGridView1->SelectedRows[0]->Index;
				Farmacos^ objFarmaco = listaFarmacosAlmacen[posicion];
				codigoElemento = objFarmaco->ID;
				nombreAlmacen = " ";
				i = 0;
				while (nombreAlmacen != destino) {
					Almacen^ almacen = listaAlmacenes[i];
					nombreAlmacen = almacen->nombre;
					codigoAlmacen = almacen->codigo;
					i++;
				}
				Almacen^ objAlmacen = listaAlmacenes[i - 1];
				objAlmacen->List_Farmacos->Add(objFarmaco);
				listaAlmacenes[i - 1] = objAlmacen;
				MessageBox::Show("Se ha transferido el objeto al almacen");

			}
			else {
				int posicion = this->dataGridView1->SelectedRows[0]->Index;
				Alimentos^ objAlimento = listaAlimentosAlmacen[posicion];
				codigoElemento = objAlimento->codigo;
				nombreAlmacen = " ";
				i = 0;
				while (nombreAlmacen != destino) {
					Almacen^ almacen = listaAlmacenes[i];
					nombreAlmacen = almacen->nombre;
					codigoAlmacen = almacen->codigo;
					i++;
				}
				Almacen^ objAlmacen = listaAlmacenes[i - 1];
				objAlmacen->List_Alimentos->Add(objAlimento);
				listaAlmacenes[i - 1] = objAlmacen;
				MessageBox::Show("Se ha transferido el objeto al almacen");

			}
			int cantidad = Convert::ToInt32(this->textBox1->Text);
			AlmacenController^ objGestorAlmacen = gcnew AlmacenController();
			objGestorAlmacen->guardarElementoAlmacen(codigoAlmacen, codigoElemento, elemento, cantidad);
		}
		MovimientoController^ objGestor = gcnew MovimientoController();
		String^ tipoMovimiento = this->tipoTrans;
		String^ origen = this->origen;
		String^ destino = this->destino;
		String^ elementos = this->elemento;
		int cantidad = Convert::ToInt32(this->textBox1->Text);
		String^ fecha = "8/07/21";
		Movimiento^ objMovimiento;
		objMovimiento = gcnew Movimiento(cantidad, tipoMovimiento, elementos, fecha, origen, destino);
		listaMovimientos=objGestor->leerDatos();
		listaMovimientos->Add(objMovimiento);
		objGestor->guardarDatos(listaMovimientos);
		this->Close();
	}
	private: void mostrarGrillaFarmaco(List<Farmacos^>^ listaFarmacos) {
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < listaFarmacos->Count; i++) {
			Farmacos^ objFarmaco = listaFarmacos[i];
			array<String^>^ fila = gcnew array<String^>(4);
			fila[0] = objFarmaco->ID;
			fila[1] = objFarmaco->nombre;
			fila[3] = objFarmaco->fechaVencimiento;
			fila[2] = Convert::ToString(objFarmaco->cantidad);
			this->dataGridView1->Rows->Add(fila);
		}
	}
		private: void mostrarGrillaAlimento(List<Alimentos^>^ listaAlimentos) {
			this->dataGridView1->Rows->Clear();
			for (int i = 0; i < listaAlimentos->Count; i++) {
				Alimentos^ objAlimento = listaAlimentos[i];
				array<String^>^ fila = gcnew array<String^>(4);
				fila[0] = objAlimento->codigo;
				fila[1] = objAlimento->nombre;
				fila[3] = objAlimento->fechaVencimiento;
				fila[2] = Convert::ToString(objAlimento->presentacion) + " " + objAlimento->unidadMedida;
				this->dataGridView1->Rows->Add(fila);
			}
		}
private: System::Void frmMovimientoAlmacen_Load(System::Object^ sender, System::EventArgs^ e) {
	Almacen^ objAlmacen;
	String^ nombreAlmacen;
	String^ codigoAlmacen;
	int i;
	AlmacenController^ objGestorAlmacen = gcnew AlmacenController();
	if (tipoTrans == "Nueva adquicsición") {
		if (elemento == "Farmaco") {
			FarmacoController^ objControllerF = gcnew FarmacoController();
			listaFarmacos = objControllerF->leerDatos();
			mostrarGrillaFarmaco(listaFarmacos);
		}
		else {
			AlimentosController^ objControllerA = gcnew AlimentosController();
			listaAlimentos = objControllerA->leerDatos();
			mostrarGrillaAlimento(listaAlimentos);
		}
	}
	else if (tipoTrans == "Abastecimiento") {
		String^ codigoAlmacen;
		i = 0;
		nombreAlmacen = " ";
		while (nombreAlmacen != origen) {
			Almacen^ almacen = listaAlmacenes[i];
			nombreAlmacen = almacen->nombre;
			i++;
		}
		objAlmacen = listaAlmacenes[i-1];
		codigoAlmacen = objAlmacen->codigo;
		if (elemento == "Farmaco") {
			listaFarmacosAlmacen = objGestorAlmacen->obtenerFarmacosAlmacen(codigoAlmacen);
			mostrarGrillaFarmaco(listaFarmacosAlmacen);
		}
		else {
			listaAlimentosAlmacen =objGestorAlmacen->obtenerAlimentosAlmacen(codigoAlmacen);
			mostrarGrillaAlimento(listaAlimentosAlmacen);
		}
	}
	else {
		i = 0;
		nombreAlmacen = " ";
		while (nombreAlmacen != origen) {
			Almacen^ almacen = listaAlmacenes[i];
			nombreAlmacen = almacen->nombre;
			i++;
		}
		objAlmacen = listaAlmacenes[i - 1];
		codigoAlmacen = objAlmacen->codigo;
		if (elemento == "Farmaco") {
			listaFarmacosAlmacen = objGestorAlmacen->obtenerFarmacosAlmacen(codigoAlmacen);
			mostrarGrillaFarmaco(listaFarmacosAlmacen);
		}
		else {
			listaAlimentosAlmacen = objGestorAlmacen->obtenerAlimentosAlmacen(codigoAlmacen);
			mostrarGrillaAlimento(listaAlimentosAlmacen);
		}
	}
}
};
}
