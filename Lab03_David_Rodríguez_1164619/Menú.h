#pragma once
#include "MyForm.h"
#include "Instrucciones.h"
#include "Cargar.h"


namespace Lab03DavidRodríguez1164619 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Menú
	/// </summary>
	public ref class Menú : public System::Windows::Forms::Form
	{
	public:
		Menú(void)
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
		~Menú()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Menú::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(71, 113);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(207, 68);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Nuevo juego";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Menú::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(304, 113);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(207, 68);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Cargar partida";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Menú::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(533, 113);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(207, 68);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Instrucciones";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Menú::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(706, 229);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Cerrar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Menú::button4_Click);
			// 
			// Menú
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(843, 277);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Menú";
			this->Text = L"Menú";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm^ Mi_form = gcnew MyForm();
		this->Hide();
		Mi_form->ShowDialog();
		this->Show();
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Instrucciones^ Mi_form2 = gcnew Instrucciones();
	this->Hide();
	Mi_form2->ShowDialog();
	this->Show();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Cargar^ Mi_form3 = gcnew Cargar();
	this->Hide();
	Mi_form3->ShowDialog();
	this->Show();
}
};
}
