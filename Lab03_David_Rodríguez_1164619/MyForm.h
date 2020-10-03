#pragma once
#include <conio.h>
#include "List.h"
#include <cmath>
#include <ctime>
#include <iostream>
#include <cstdlib>



namespace Lab03DavidRodríguez1164619 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		List* miList;
		MyForm(void)
		{
			InitializeComponent();
			miList = new List();
			miList->count = 0;
			miList->start = nullptr;
			miList->end = nullptr;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblCB;
	protected:

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ btncerrar;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Button^ btnmover;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ btnDe;
	private: System::Windows::Forms::Button^ btnA;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblm;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lblER;
	public: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::TextBox^ txtGuardar;
	private:








































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->lblCB = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btncerrar = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->btnmover = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->btnDe = (gcnew System::Windows::Forms::Button());
			this->btnA = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblm = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblER = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtGuardar = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// lblCB
			// 
			this->lblCB->AutoSize = true;
			this->lblCB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCB->Location = System::Drawing::Point(385, 289);
			this->lblCB->Name = L"lblCB";
			this->lblCB->Size = System::Drawing::Size(0, 20);
			this->lblCB->TabIndex = 0;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->Column8,
					this->Column1, this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column9, this->Column11,
					this->Column10
			});
			this->dataGridView1->Location = System::Drawing::Point(80, 84);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(531, 202);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::dataGridView1_KeyDown);
			// 
			// Column8
			// 
			this->Column8->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->Column8->Frozen = true;
			this->Column8->HeaderText = L" ";
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			this->Column8->Width = 35;
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->Column1->Frozen = true;
			this->Column1->HeaderText = L"G1";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 46;
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->Column2->Frozen = true;
			this->Column2->HeaderText = L"G2";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 46;
			// 
			// Column3
			// 
			this->Column3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->Column3->Frozen = true;
			this->Column3->HeaderText = L"G3";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 46;
			// 
			// Column4
			// 
			this->Column4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->Column4->Frozen = true;
			this->Column4->HeaderText = L"G4";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 46;
			// 
			// Column5
			// 
			this->Column5->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->Column5->Frozen = true;
			this->Column5->HeaderText = L"G5";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 46;
			// 
			// Column6
			// 
			this->Column6->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->Column6->Frozen = true;
			this->Column6->HeaderText = L"G6";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 46;
			// 
			// Column7
			// 
			this->Column7->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->Column7->Frozen = true;
			this->Column7->HeaderText = L"G7";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->Width = 46;
			// 
			// Column9
			// 
			this->Column9->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->Column9->Frozen = true;
			this->Column9->HeaderText = L" ";
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			this->Column9->Width = 35;
			// 
			// Column11
			// 
			this->Column11->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->Column11->Frozen = true;
			this->Column11->HeaderText = L"Baraja";
			this->Column11->Name = L"Column11";
			this->Column11->ReadOnly = true;
			this->Column11->Width = 62;
			// 
			// Column10
			// 
			this->Column10->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->Column10->Frozen = true;
			this->Column10->HeaderText = L"  ";
			this->Column10->Name = L"Column10";
			this->Column10->ReadOnly = true;
			this->Column10->Width = 36;
			// 
			// btncerrar
			// 
			this->btncerrar->Location = System::Drawing::Point(281, 453);
			this->btncerrar->Name = L"btncerrar";
			this->btncerrar->Size = System::Drawing::Size(113, 23);
			this->btncerrar->TabIndex = 2;
			this->btncerrar->Text = L"Cerrar";
			this->btncerrar->UseVisualStyleBackColor = true;
			this->btncerrar->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// btnmover
			// 
			this->btnmover->Location = System::Drawing::Point(298, 354);
			this->btnmover->Name = L"btnmover";
			this->btnmover->Size = System::Drawing::Size(75, 23);
			this->btnmover->TabIndex = 3;
			this->btnmover->Text = L"Mover";
			this->btnmover->UseVisualStyleBackColor = true;
			this->btnmover->Click += gcnew System::EventHandler(this, &MyForm::btncomenzar_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(246, 402);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(188, 45);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Repartir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(655, 184);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Guardar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(149, 354);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(433, 356);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 8;
			// 
			// btnDe
			// 
			this->btnDe->Location = System::Drawing::Point(149, 325);
			this->btnDe->Name = L"btnDe";
			this->btnDe->Size = System::Drawing::Size(75, 23);
			this->btnDe->TabIndex = 11;
			this->btnDe->Text = L"De:";
			this->btnDe->UseVisualStyleBackColor = true;
			this->btnDe->Click += gcnew System::EventHandler(this, &MyForm::btnDe_Click);
			// 
			// btnA
			// 
			this->btnA->Location = System::Drawing::Point(433, 324);
			this->btnA->Name = L"btnA";
			this->btnA->Size = System::Drawing::Size(75, 23);
			this->btnA->TabIndex = 12;
			this->btnA->Text = L"A :";
			this->btnA->UseVisualStyleBackColor = true;
			this->btnA->Click += gcnew System::EventHandler(this, &MyForm::btnA_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(80, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 13);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Movimientos:";
			// 
			// lblm
			// 
			this->lblm->AutoSize = true;
			this->lblm->Location = System::Drawing::Point(156, 65);
			this->lblm->Name = L"lblm";
			this->lblm->Size = System::Drawing::Size(0, 13);
			this->lblm->TabIndex = 14;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(433, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 13);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Errores: ";
			// 
			// lblER
			// 
			this->lblER->AutoSize = true;
			this->lblER->Location = System::Drawing::Point(483, 65);
			this->lblER->Name = L"lblER";
			this->lblER->Size = System::Drawing::Size(0, 13);
			this->lblER->TabIndex = 16;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(634, 142);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(152, 13);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Ingrese el nombre de la partida";
			// 
			// txtGuardar
			// 
			this->txtGuardar->Location = System::Drawing::Point(655, 158);
			this->txtGuardar->Name = L"txtGuardar";
			this->txtGuardar->Size = System::Drawing::Size(100, 20);
			this->txtGuardar->TabIndex = 18;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(874, 541);
			this->Controls->Add(this->txtGuardar);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lblER);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lblm);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnA);
			this->Controls->Add(this->btnDe);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnmover);
			this->Controls->Add(this->btncerrar);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->lblCB);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->RowCount = 10;
		
		
		if (label3 -> Text == "Ingrese el nombre de la partida")
		{
			
			for (int R = 0; R <= 9; R++)
			{
				for (int C = 0; C <= 9; C++)
				{
					dataGridView1->Rows[R]->Cells[C]->Value = " ";
				}
			}
			ListaCartas();
			Baraja();
		}
		if (label3->Text == "Partida")
		{

		
		
			String^ NombreP = txtGuardar->Text;
			StreamReader^ Leer = gcnew StreamReader(NombreP + ".txt");
			Errores = Convert::ToInt32(Leer->ReadLine());
			Movimientos = Convert::ToInt32(Leer->ReadLine());
			lblER->Text = Convert::ToString(Errores);
			lblm->Text = Convert::ToString(Movimientos);

			for (int R = 0; R <= 9; R++)
			{
				for (int C = 0; C <= 9; C++)
				{
					dataGridView1->Rows[R]->Cells[C]->Value = Leer->ReadLine();
				}
			}
			CGAN = Convert::ToInt32(Leer->ReadLine());
			ERRORSELCT = Convert::ToBoolean(Leer->ReadLine());
			repartir = Convert::ToInt32(Leer->ReadLine());
			while (!Leer->EndOfStream)
			{
				miList->InsertAtEnd(Convert::ToInt32(Leer->ReadLine()));
			}
		
			
				

			
			

			





		}


		
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();


	}

		   int contadorLeer = 0;
		   int contador = 0;
		   int C1 = 0;
		   int C2 = 0;
		   int C3 = 0;
		   int C4 = 0;
		   int C5 = 0;
		   int C6 = 0;
		   int C7 = 0;
		   int C8 = 0;
		   int C9 = 0;
		   int C10 = 0;
		   int C11 = 0;
		   int C12 = 0;
		   int C13 = 0;
		   int CB;
		   int C1N = 0;
		   int C2N = 0;
		   int C3N = 0;
		   int C4N = 0;
		   int C5N = 0;
		   int C6N = 0;
		   int C7N = 0;
		   int C8N = 0;
		   int C9N = 0;
		   int C10N = 0;
		   int C11N = 0;
		   int C12N = 0;
		   int C13N = 0;
		   int CBN = 0;
		   int C1R = 0;
		   int C2R = 0;
		   int C3R = 0;
		   int C4R = 0;
		   int C5R = 0;
		   int C6R = 0;
		   int C7R = 0;
		   int C8R = 0;
		   int C9R = 0;
		   int C10R = 0;
		   int C11R = 0;
		   int C12R = 0;
		   int C13R = 0;
		   int CBR = 0;
		   int CT = 0;
		   String^ Carta;
		   int repartir = 0;
		   int Col1 = 0;
		   int Col2 = 0;
		   int Fil1 = 0;
		   int Fil2 = 0;
		


private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

}

private: System::Void MyForm_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
}
	  
	   String^ Mov0 = " ";
	   String^ Mov1 = "";
	   String^ Mov2 = "";
	   String^ Color1 = " ";
	   String^ Color2 = " ";
	   int Num1 = 0;
	   int Num2 = 0;
	   int IC1=0;
	   int IC2 = 0;
	   int IF1 = 0;
	   int IF2 = 0;
	   int Movimientos = 0;
	   int Errores = 0;
	   int CGAN = 0;
	   int contadorList = 0;
	   String^ CGan1 = " ";
	   Boolean ERRORSELCT = false;
	   
	   
	private: System::Void btncomenzar_Click(System::Object^ sender, System::EventArgs^ e) {
		
		
		if (ERRORSELCT == false) {
			lblCB->Text = "";
			
			Mov1 = textBox1->Text;
			Mov2 = textBox2->Text;

			if (Mov2 != " ") {
				Color1 = Mov1->Substring(Mov1->Length - 1);
				Color2 = Mov2->Substring(Mov2->Length - 1);
				Num1 = Convert::ToInt32(Mov1->Substring(0, Mov1->Length - 1));
				Num2 = Convert::ToInt32(Mov2->Substring(0, Mov2->Length - 1));
			}
			else {
				Color1 = Mov1->Substring(Mov1->Length - 1);
				Num1 = Convert::ToInt32(Mov1->Substring(0, Mov1->Length - 1));
				Num2 = 0;
			}


			if (Num2 == 0)
			{
				if (dataGridView1->Rows[1]->Cells[9]->Value != dataGridView1->Rows[IF1]->Cells[IC1]->Value)
				{
					dataGridView1->Rows[IF1]->Cells[IC1]->Value = Mov0;
					dataGridView1->Rows[(IF2)]->Cells[IC2]->Value = Mov1;
					Movimientos++;
					lblm->Text = Convert::ToString(Movimientos);
				}
				else
				{
					dataGridView1->Rows[IF1]->Cells[IC1]->Value = Mov0;
					dataGridView1->Rows[(IF2) ]->Cells[IC2]->Value = Mov1;
					Movimientos++;
					lblm->Text = Convert::ToString(Movimientos);
					Baraja();
				}
				for (int RC = 1; RC <= 7; RC++)
				{
					for (int RF = 0; RF <= 8; RF++)
					{
						if (dataGridView1->Rows[RF]->Cells[RC]->Value == dataGridView1->Rows[(RF + 1)]->Cells[RC]->Value)
						{
							CGAN++;
						}
					}

				}
				if (CGAN == 5)
				{
					lblCB->Text = "USTED HA GANADO";
					button1->Text = "Repartir";
					repartir = 0;
					for (int R = 0; R <= 9; R++)
					{
						for (int C = 0; C <= 9; C++)
						{
							dataGridView1->Rows[R]->Cells[C]->Value = " ";
						}
					}
					ListaCartas();
					Baraja();

				}
			}
			if (Num1+1 == Num2)
			{
				if (Color1 != Color2)
				{
					if (dataGridView1->Rows[1]->Cells[9]->Value != dataGridView1->Rows[IF1]->Cells[IC1]->Value)
					{
						dataGridView1->Rows[IF1]->Cells[IC1]->Value = Mov0;
						dataGridView1->Rows[(IF2 + 1)]->Cells[IC2]->Value = Mov1;
						Movimientos++;
						lblm->Text = Convert::ToString(Movimientos);
					}
					else
					{
						dataGridView1->Rows[IF1]->Cells[IC1]->Value = Mov0;
						dataGridView1->Rows[(IF2 + 1)]->Cells[IC2]->Value = Mov1;
						Movimientos++;
						lblm->Text = Convert::ToString(Movimientos);
						Baraja();
					}
					for (int RC = 1; RC <= 7; RC++)
					{
						for (int RF = 0; RF <= 8; RF++)
						{
							if (dataGridView1->Rows[RF]->Cells[RC]->Value == dataGridView1->Rows[(RF + 1)]->Cells[RC]->Value)
							{
								CGAN++;
							}
						}

					}
					if (CGAN == 5)
					{
						lblCB->Text = "USTED HA GANADO";
						button1->Text = "Repartir";
						repartir = 0;
						for (int R = 0; R <= 9; R++)
						{
							for (int C = 0; C <= 9; C++)
							{
								dataGridView1->Rows[R]->Cells[C]->Value = " ";
							}
						}
						ListaCartas();
						Baraja();

					}


				}
				else
				{
					lblCB->Text = "ERROR";
					Errores++;
					lblER->Text = Convert::ToString(Errores);
				}

			}
	

		}
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (repartir < 1)
	{
		button1->Text = "Reiniciar";
		repartir++;
		dataGridView1->Rows[1]->Cells[1]->Value = dataGridView1->Rows[1]->Cells[9]->Value;
		Baraja();
		dataGridView1->Rows[1]->Cells[2]->Value = dataGridView1->Rows[1]->Cells[9]->Value;
		Baraja();
		dataGridView1->Rows[2]->Cells[2]->Value = dataGridView1->Rows[1]->Cells[9]->Value;
		Baraja();
		dataGridView1->Rows[1]->Cells[3]->Value = dataGridView1->Rows[1]->Cells[9]->Value;
		Baraja();
		dataGridView1->Rows[1]->Cells[4]->Value = dataGridView1->Rows[1]->Cells[9]->Value;
		Baraja();
		dataGridView1->Rows[2]->Cells[4]->Value = dataGridView1->Rows[1]->Cells[9]->Value;
		Baraja();
		dataGridView1->Rows[1]->Cells[5]->Value = dataGridView1->Rows[1]->Cells[9]->Value;
		Baraja();
		dataGridView1->Rows[1]->Cells[6]->Value = dataGridView1->Rows[1]->Cells[9]->Value;
		Baraja();
		dataGridView1->Rows[2]->Cells[6]->Value = dataGridView1->Rows[1]->Cells[9]->Value;
		Baraja();
		dataGridView1->Rows[1]->Cells[7]->Value = dataGridView1->Rows[1]->Cells[9]->Value;
		Baraja();
	}
	else
	{
		button1->Text = "Repartir";
		repartir = 0;
		for (int R = 0; R <= 9; R++)
		{
			for (int C = 0; C <= 9; C++)
			{
				dataGridView1->Rows[R]->Cells[C]->Value = " ";
			}
		}
		contador = 0;
		C1 = 0;
		 C2 = 0;
		 C3 = 0;
		 C4 = 0;
		 C5 = 0;
		 C6 = 0;
		 C7 = 0;
		 C8 = 0;
		 C9 = 0;
		 C10 = 0;
		 C11 = 0;
		 C12 = 0;
		C13 = 0;
		CB = 0;
		C1N = 0;
		C2N = 0;
		C3N = 0;
		C4N = 0;
		C5N = 0;
		C6N = 0;
		C7N = 0;
		C8N = 0;
		C9N = 0;
		C10N = 0;
		C11N = 0;
		C12N = 0;
		C13N = 0;
		CBN = 0;
		C1R = 0;
		C2R = 0;
		C3R = 0;
		C4R = 0;
		C5R = 0;
		C6R = 0;
		C7R = 0;
		C8R = 0;
		C9R = 0;
		C10R = 0;
		 C11R = 0;
		C12R = 0;
		 C13R = 0;
		CBR = 0;
		 CT = 0;
		 Movimientos = 0;
		 Errores = 0;
		 CGAN = 0;

		ListaCartas();
		Baraja();
		
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	String^ NombreP = txtGuardar->Text;
	StreamWriter^ Escribir = gcnew StreamWriter(NombreP + ".txt");

	Escribir->WriteLine(Convert::ToString(Errores));
	Escribir->WriteLine(Convert::ToString(Movimientos));
	for (int R1 = 0; R1 <= 9; R1++)
	{
		for (int CR1 = 0; CR1 <= 9; CR1++)
		{
			Escribir->WriteLine(dataGridView1->Rows[R1]->Cells[CR1]->Value);
		}
	}
	Escribir->WriteLine(Convert::ToString(CGAN));
	Escribir->WriteLine(Convert::ToString(ERRORSELCT));
	Escribir->WriteLine(Convert::ToString(repartir));
	
	Node* temp = miList->ExtractAtPosition(0);
	while (temp != nullptr) {
		Escribir->WriteLine(Convert::ToString(temp->value));
		temp = temp->next;
			}

	Escribir->Close();
	
}
	   void Baraja() {
		   int Cc = 0;
		   String^ Ccarta = "";
		   Node* temp = miList->ExtractAtPosition(0);
		   if (temp)
		   {		   
			   if (temp->value == 1)
			   {
				   Cc = 1 + rand() % (2);
				   if (Cc == 1)
				   {
					   Ccarta = "N";
					   
					   if (C1N < 2)
					   {
						   C1N++;
					   }
					   else
					   {
						   Ccarta = "R";
					   }
				   }
				   if (Cc == 2)
				   {
					   Ccarta = "R";
					   if (C1R < 2)
					   {
						   C1R++;
					   }
					   else
					   {
						   Ccarta = "N";
					   }
				   }

					   }
			   if (temp->value == 2)
			   {
				   Cc = 1 + rand() % (2);
				   if (Cc == 1)
				   {
					   Ccarta = "N";

					   if (C2N < 2)
					   {
						   C2N++;
					   }
					   else
					   {
						   Ccarta = "R";
					   }
				   }
				   if (Cc == 2)
				   {
					   Ccarta = "R";
					   if (C2R < 2)
					   {
						   C2R++;
					   }
					   else
					   {
						   Ccarta = "N";
					   }
				   }

			   }
			   if (temp->value == 3)
			   {
				   Cc = 1 + rand() % (2);
				   if (Cc == 1)
				   {
					   Ccarta = "N";

					   if (C3N < 2)
					   {
						   C3N++;
					   }
					   else
					   {
						   Ccarta = "R";
					   }
				   }
				   if (Cc == 2)
				   {
					   Ccarta = "R";
					   if (C3R < 2)
					   {
						   C3R++;
					   }
					   else
					   {
						   Ccarta = "N";
					   }
				   }

			   }
			   if (temp->value == 4)
			   {
				   Cc = 1 + rand() % (2);
				   if (Cc == 1)
				   {
					   Ccarta = "N";

					   if (C4N < 2)
					   {
						   C4N++;
					   }
					   else
					   {
						   Ccarta = "R";
					   }
				   }
				   if (Cc == 2)
				   {
					   Ccarta = "R";
					   if (C4R < 2)
					   {
						   C4R++;
					   }
					   else
					   {
						   Ccarta = "N";
					   }
				   }

			   }
			   if (temp->value == 5)
			   {
				   Cc = 1 + rand() % (2);
				   if (Cc == 1)
				   {
					   Ccarta = "N";

					   if (C5N < 2)
					   {
						   C5N++;
					   }
					   else
					   {
						   Ccarta = "R";
					   }
				   }
				   if (Cc == 2)
				   {
					   Ccarta = "R";
					   if (C5R < 2)
					   {
						   C5R++;
					   }
					   else
					   {
						   Ccarta = "N";
					   }
				   }

			   }
			   if (temp->value == 6)
			   {
				   Cc = 1 + rand() % (2);
				   if (Cc == 1)
				   {
					   Ccarta = "N";

					   if (C6N < 2)
					   {
						   C6N++;
					   }
					   else
					   {
						   Ccarta = "R";
					   }
				   }
				   if (Cc == 2)
				   {
					   Ccarta = "R";
					   if (C6R < 2)
					   {
						   C6R++;
					   }
					   else
					   {
						   Ccarta = "N";
					   }
				   }

			   }
			   if (temp->value == 7)
			   {
				   Cc = 1 + rand() % (2);
				   if (Cc == 1)
				   {
					   Ccarta = "N";

					   if (C7N < 2)
					   {
						   C7N++;
					   }
					   else
					   {
						   Ccarta = "R";
					   }
				   }
				   if (Cc == 2)
				   {
					   Ccarta = "R";
					   if (C7R < 2)
					   {
						   C7R++;
					   }
					   else
					   {
						   Ccarta = "N";
					   }
				   }

			   }
			   if (temp->value == 8)
			   {
				   Cc = 1 + rand() % (2);
				   if (Cc == 1)
				   {
					   Ccarta = "N";

					   if (C8N < 2)
					   {
						   C8N++;
					   }
					   else
					   {
						   Ccarta = "R";
					   }
				   }
				   if (Cc == 2)
				   {
					   Ccarta = "R";
					   if (C8R < 2)
					   {
						   C8R++;
					   }
					   else
					   {
						   Ccarta = "N";
					   }
				   }

			   }
			   if (temp->value == 9)
			   {
				   Cc = 1 + rand() % (2);
				   if (Cc == 1)
				   {
					   Ccarta = "N";

					   if (C9N < 2)
					   {
						   C9N++;
					   }
					   else
					   {
						   Ccarta = "R";
					   }
				   }
				   if (Cc == 2)
				   {
					   Ccarta = "R";
					   if (C9R < 2)
					   {
						   C9R++;
					   }
					   else
					   {
						   Ccarta = "N";
					   }
				   }

			   }
			   if (temp->value == 10)
			   {
				   Cc = 1 + rand() % (2);
				   if (Cc == 1)
				   {
					   Ccarta = "N";

					   if (C10N < 2)
					   {
						   C10N++;
					   }
					   else
					   {
						   Ccarta = "R";
					   }
				   }
				   if (Cc == 2)
				   {
					   Ccarta = "R";
					   if (C10R < 2)
					   {
						   C10R++;
					   }
					   else
					   {
						   Ccarta = "N";
					   }
				   }

			   }
			   if (temp->value == 11)
			   {
				   Cc = 1 + rand() % (2);
				   if (Cc == 1)
				   {
					   Ccarta = "N";

					   if (C11N < 2)
					   {
						   C11N++;
					   }
					   else
					   {
						   Ccarta = "R";
					   }
				   }
				   if (Cc == 2)
				   {
					   Ccarta = "R";
					   if (C11R < 2)
					   {
						   C11R++;
					   }
					   else
					   {
						   Ccarta = "N";
					   }
				   }

			   }
			   if (temp->value == 12)
			   {
				   Cc = 1 + rand() % (2);
				   if (Cc == 1)
				   {
					   Ccarta = "N";

					   if (C12N < 2)
					   {
						   C12N++;
					   }
					   else
					   {
						   Ccarta = "R";
					   }
				   }
				   if (Cc == 2)
				   {
					   Ccarta = "R";
					   if (C12R < 2)
					   {
						   C12R++;
					   }
					   else
					   {
						   Ccarta = "N";
					   }
				   }

			   }
			   if (temp->value == 13)
			   {
				   Cc = 1 + rand() % (2);
				   if (Cc == 1)
				   {
					   Ccarta = "N";

					   if (C13N < 2)
					   {
						   C13N++;
					   }
					   else
					   {
						   Ccarta = "R";
					   }
				   }
				   if (Cc == 2)
				   {
					   Ccarta = "R";
					   if (C13R < 2)
					   {
						   C13R++;
					   }
					   else
					   {
						   Ccarta = "N";
					   }
				   }

			   }
			   
			   
			   dataGridView1->Rows[1]->Cells[9]->Value = temp->value + Ccarta;

		   }
		   else
		   {
			   lblCB->Text = "Ya no quedan cartas en la baraja";
			   button1->Text = "Repartir";
			   repartir = 0;
			   for (int R = 0; R <= 9; R++)
			   {
				   for (int C = 0; C <= 9; C++)
				   {
					   dataGridView1->Rows[R]->Cells[C]->Value = " ";
				   }
			   }
			   contador = 0;
			   C1 = 0;
			   C2 = 0;
			   C3 = 0;
			   C4 = 0;
			   C5 = 0;
			   C6 = 0;
			   C7 = 0;
			   C8 = 0;
			   C9 = 0;
			   C10 = 0;
			   C11 = 0;
			   C12 = 0;
			   C13 = 0;
			   CB = 0;
			   C1N = 0;
			   C2N = 0;
			   C3N = 0;
			   C4N = 0;
			   C5N = 0;
			   C6N = 0;
			   C7N = 0;
			   C8N = 0;
			   C9N = 0;
			   C10N = 0;
			   C11N = 0;
			   C12N = 0;
			   C13N = 0;
			   CBN = 0;
			   C1R = 0;
			   C2R = 0;
			   C3R = 0;
			   C4R = 0;
			   C5R = 0;
			   C6R = 0;
			   C7R = 0;
			   C8R = 0;
			   C9R = 0;
			   C10R = 0;
			   C11R = 0;
			   C12R = 0;
			   C13R = 0;
			   CBR = 0;
			   CT = 0;
			   Movimientos = 0;
			   Errores = 0;
			   CGAN = 0;
			   ListaCartas();
			   Baraja();
		   }

	   }
	   void ListaCartas()
	   {
		   int value = 0;
		   CB = 0;
		   do {

			   value = 1 + rand() % (13);
			   

			   if (value == 1) {
				   if (C1 < 4) {
					   miList->InsertAtStart(value);
					   C1++;
				   }
				   else{
					   CB++;
				   }
				   

			   }
			   if (value == 2) {
				   if (C2 < 4) {
					   miList->InsertAtStart(value);
					   C2++;
				   }
				   else {
					   CB++;
				   }
				  

			   }
			   if (value == 3) {
				   if (C3 < 4) {
					   miList->InsertAtStart(value);
					   C3++;
				   }
				   else {
					   CB++;
				   }
				   

			   }
			   if (value == 4) {
				   if (C4 < 4) {
					   miList->InsertAtStart(value);
					   C4++;
				   }
				   else {
					   CB++;
				   }
				   

			   }
			   if (value == 5) {
				   if (C5 < 4) {
					   miList->InsertAtStart(value);
					   C5++;
				   }
				   else {
					   CB++;
				   }
				  

			   }
			   if (value == 6) {
				   if (C6 < 4) {
					   miList->InsertAtStart(value);
					   C6++;
				   }
				   else {
					   CB++;
				   }
				   

			   }
			   if (value == 7) {
				   if (C7 < 4) {
					   miList->InsertAtStart(value);
					   C7++;
				   }
				   else {
					   CB++;
				   }
				  

			   }
			   if (value == 8) {
				   if (C8 < 4) {
					   miList->InsertAtStart(value);
					   C8++;
				   }
				   else {
					   CB++;
				   }
				  

			   }
			   if (value == 9) {
				   if (C9 < 4) {
					   miList->InsertAtStart(value);
					   C9++;
				   }
				   else {
					   CB++;
				   }
				   

			   }
			   if (value == 10) {
				   if (C10 < 4) {
					   miList->InsertAtStart(value);
					   C10++;
				   }
				   else {
					   CB++;
				   }
				   

			   }
			   if (value == 11) {
				   if (C11 < 4) {
					   miList->InsertAtStart(value);
					   C11++;
				   }
				   else {
					   CB++;
				   }
				   

			   }
			   if (value == 12) {
				   if (C12 < 4) {
					   miList->InsertAtStart(value);
					   C12++;
				   }
				   else {
					   CB++;
				   }
				   

			   }
			   if (value == 13) {
				   if (C13 < 4) {
					   miList->InsertAtStart(value);
					   C13++;
				   }
				   else {
					   CB++;
				   }
				  

			   }
			   CT = C1 + C2 + C3 + C4 + C5 + C6 + C7 + C8 + C9 + C10 + C11 + C12 + C13;
			  
			   
		   } while (CT != 52);


	   }

private: System::Void btnDe_Click(System::Object^ sender, System::EventArgs^ e) {
	
	ERRORSELCT = false;
	lblCB->Text = " ";
	Col1 = this->dataGridView1->CurrentCell->ColumnIndex;
	Fil1 = this->dataGridView1->CurrentCell->RowIndex;
	IC1 = Col1;
	IF1 = Fil1;
	

		if (dataGridView1->Rows[(IF1 + 1)]->Cells[IC1]->Value->ToString() == " ")
		{

			textBox1->Text = this->dataGridView1->CurrentCell->Value->ToString();

		}
		else
		{
			lblCB->Text = "ERROR";
			Errores++;
			lblER->Text = Convert::ToString(Errores);
			ERRORSELCT = true;
		}

	
}
private: System::Void btnA_Click(System::Object^ sender, System::EventArgs^ e) {
	ERRORSELCT = false;
	if (dataGridView1->Rows[1]->Cells[9]->Value != this->dataGridView1->CurrentCell->Value)

	{
		
		lblCB->Text = "";
		Col2 = this->dataGridView1->CurrentCell->ColumnIndex;
		Fil2 = this->dataGridView1->CurrentCell->RowIndex;
		IC2 = Col2;
		IF2 = Fil2;
	
				if (dataGridView1->Rows[(IF2 + 1)]->Cells[IC2]->Value->ToString() == " ")
				{

					textBox2->Text = this->dataGridView1->CurrentCell->Value->ToString();

				}
				else
				{
					lblCB->Text = "ERROR";
					Errores++;
					lblER->Text = Convert::ToString(Errores);
					ERRORSELCT = true;
				}
			}
			else
			{
				lblCB->Text = "ERROR";
				Errores++;
				lblER->Text = Convert::ToString(Errores);
				ERRORSELCT = true;
			}

}


private: System::Void dataGridView1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (repartir < 1)
	{
		button1->Text = "Reiniciar";
		repartir++;
		dataGridView1->Rows[1]->Cells[1]->Value = dataGridView1->Rows[1]->Cells[9]->Value;
		Baraja();
		dataGridView1->Rows[1]->Cells[2]->Value = dataGridView1->Rows[1]->Cells[9]->Value;
		Baraja();
		dataGridView1->Rows[2]->Cells[2]->Value = dataGridView1->Rows[1]->Cells[9]->Value;
		Baraja();
		dataGridView1->Rows[1]->Cells[3]->Value = dataGridView1->Rows[1]->Cells[9]->Value;
		Baraja();
		dataGridView1->Rows[1]->Cells[4]->Value = dataGridView1->Rows[1]->Cells[9]->Value;
		Baraja();
		dataGridView1->Rows[2]->Cells[4]->Value = dataGridView1->Rows[1]->Cells[9]->Value;
		Baraja();
		dataGridView1->Rows[1]->Cells[5]->Value = dataGridView1->Rows[1]->Cells[9]->Value;
		Baraja();
		dataGridView1->Rows[1]->Cells[6]->Value = dataGridView1->Rows[1]->Cells[9]->Value;
		Baraja();
		dataGridView1->Rows[2]->Cells[6]->Value = dataGridView1->Rows[1]->Cells[9]->Value;
		Baraja();
		dataGridView1->Rows[1]->Cells[7]->Value = dataGridView1->Rows[1]->Cells[9]->Value;
		Baraja();
	}
	else
	{
		button1->Text = "Repartir";
		repartir = 0;
		for (int R = 0; R <= 9; R++)
		{
			for (int C = 0; C <= 9; C++)
			{
				dataGridView1->Rows[R]->Cells[C]->Value = " ";
			}
		}
		contador = 0;
		C1 = 0;
		C2 = 0;
		C3 = 0;
		C4 = 0;
		C5 = 0;
		C6 = 0;
		C7 = 0;
		C8 = 0;
		C9 = 0;
		C10 = 0;
		C11 = 0;
		C12 = 0;
		C13 = 0;
		CB = 0;
		C1N = 0;
		C2N = 0;
		C3N = 0;
		C4N = 0;
		C5N = 0;
		C6N = 0;
		C7N = 0;
		C8N = 0;
		C9N = 0;
		C10N = 0;
		C11N = 0;
		C12N = 0;
		C13N = 0;
		CBN = 0;
		C1R = 0;
		C2R = 0;
		C3R = 0;
		C4R = 0;
		C5R = 0;
		C6R = 0;
		C7R = 0;
		C8R = 0;
		C9R = 0;
		C10R = 0;
		C11R = 0;
		C12R = 0;
		C13R = 0;
		CBR = 0;
		CT = 0;
		Movimientos = 0;
		Errores = 0;
		CGAN = 0;

		ListaCartas();
		Baraja();

	}
}
};
}
