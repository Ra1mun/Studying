#pragma once
#include "Vector3.h"
namespace Lab1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ ButtonGetLength;
	private: System::Windows::Forms::TextBox^ Point1textBox;
	private: System::Windows::Forms::TextBox^ Point2textBox;
	private: System::Windows::Forms::TextBox^ Point3textBox;
	protected:





	private: System::Windows::Forms::Label^ DebugText;
	private: System::Windows::Forms::Label^ Vector1Text;
	private: System::Windows::Forms::Label^ Length1Text;
	private: System::Windows::Forms::Label^ NormalizedVector1Text;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button3;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->ButtonGetLength = (gcnew System::Windows::Forms::Button());
			this->Point1textBox = (gcnew System::Windows::Forms::TextBox());
			this->Point2textBox = (gcnew System::Windows::Forms::TextBox());
			this->Point3textBox = (gcnew System::Windows::Forms::TextBox());
			this->DebugText = (gcnew System::Windows::Forms::Label());
			this->Vector1Text = (gcnew System::Windows::Forms::Label());
			this->Length1Text = (gcnew System::Windows::Forms::Label());
			this->NormalizedVector1Text = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// ButtonGetLength
			// 
			this->ButtonGetLength->Location = System::Drawing::Point(79, 91);
			this->ButtonGetLength->Name = L"ButtonGetLength";
			this->ButtonGetLength->Size = System::Drawing::Size(49, 44);
			this->ButtonGetLength->TabIndex = 0;
			this->ButtonGetLength->Text = L"=";
			this->ButtonGetLength->UseVisualStyleBackColor = true;
			this->ButtonGetLength->Click += gcnew System::EventHandler(this, &MyForm::ButtonGetLength_Click);
			// 
			// Point1textBox
			// 
			this->Point1textBox->Location = System::Drawing::Point(60, 55);
			this->Point1textBox->Name = L"Point1textBox";
			this->Point1textBox->Size = System::Drawing::Size(31, 20);
			this->Point1textBox->TabIndex = 1;
			this->Point1textBox->TextChanged += gcnew System::EventHandler(this, &MyForm::Point1textBox_TextChanged);
			// 
			// Point2textBox
			// 
			this->Point2textBox->Location = System::Drawing::Point(97, 55);
			this->Point2textBox->Name = L"Point2textBox";
			this->Point2textBox->Size = System::Drawing::Size(31, 20);
			this->Point2textBox->TabIndex = 2;
			this->Point2textBox->TextChanged += gcnew System::EventHandler(this, &MyForm::Point2textBox_TextChanged);
			// 
			// Point3textBox
			// 
			this->Point3textBox->Location = System::Drawing::Point(134, 55);
			this->Point3textBox->Name = L"Point3textBox";
			this->Point3textBox->Size = System::Drawing::Size(31, 20);
			this->Point3textBox->TabIndex = 3;
			this->Point3textBox->TextChanged += gcnew System::EventHandler(this, &MyForm::Point3textBox_TextChanged);
			// 
			// DebugText
			// 
			this->DebugText->AutoSize = true;
			this->DebugText->Location = System::Drawing::Point(12, 535);
			this->DebugText->Name = L"DebugText";
			this->DebugText->Size = System::Drawing::Size(43, 13);
			this->DebugText->TabIndex = 6;
			this->DebugText->Text = L"Точки: ";
			// 
			// Vector1Text
			// 
			this->Vector1Text->AutoSize = true;
			this->Vector1Text->Location = System::Drawing::Point(23, 55);
			this->Vector1Text->Name = L"Vector1Text";
			this->Vector1Text->Size = System::Drawing::Size(31, 13);
			this->Vector1Text->TabIndex = 7;
			this->Vector1Text->Text = L"v1 = ";
			// 
			// Length1Text
			// 
			this->Length1Text->AutoSize = true;
			this->Length1Text->Location = System::Drawing::Point(50, 107);
			this->Length1Text->Name = L"Length1Text";
			this->Length1Text->Size = System::Drawing::Size(23, 13);
			this->Length1Text->TabIndex = 8;
			this->Length1Text->Text = L"|v1|";
			// 
			// NormalizedVector1Text
			// 
			this->NormalizedVector1Text->AutoSize = true;
			this->NormalizedVector1Text->Location = System::Drawing::Point(31, 157);
			this->NormalizedVector1Text->Name = L"NormalizedVector1Text";
			this->NormalizedVector1Text->Size = System::Drawing::Size(48, 13);
			this->NormalizedVector1Text->TabIndex = 10;
			this->NormalizedVector1Text->Text = L"norm(v1)";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(79, 141);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(49, 44);
			this->button1->TabIndex = 9;
			this->button1->Text = L"=";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(487, 157);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 13);
			this->label1->TabIndex = 18;
			this->label1->Text = L"norm(v1)";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(535, 141);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(49, 44);
			this->button2->TabIndex = 17;
			this->button2->Text = L"=";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(506, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(23, 13);
			this->label2->TabIndex = 16;
			this->label2->Text = L"|v1|";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(479, 55);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 13);
			this->label3->TabIndex = 15;
			this->label3->Text = L"v1 = ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(590, 55);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(31, 20);
			this->textBox1->TabIndex = 14;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(553, 55);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(31, 20);
			this->textBox2->TabIndex = 13;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(516, 55);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(31, 20);
			this->textBox3->TabIndex = 12;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(535, 91);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(49, 44);
			this->button3->TabIndex = 11;
			this->button3->Text = L"=";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(675, 557);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->NormalizedVector1Text);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Length1Text);
			this->Controls->Add(this->Vector1Text);
			this->Controls->Add(this->DebugText);
			this->Controls->Add(this->Point3textBox);
			this->Controls->Add(this->Point2textBox);
			this->Controls->Add(this->Point1textBox);
			this->Controls->Add(this->ButtonGetLength);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		double point1 = 0;
		double point2 = 0;
		double point3 = 0;
	private: System::Void Point1textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try {
			point1 = System::Double::Parse(Point1textBox->Text);
		}
		catch(...){
			ErrorText->Text = "Ошибка вводимого числа";
		}
	}
	private: System::Void Point2textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try {
			point2 = System::Double::Parse(Point2textBox->Text);
		}
		catch (...) {
			ErrorText->Text = "Ошибка вводимого числа";
		}
	}
	private: System::Void Point3textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try {
			point3 = System::Double::Parse(Point3textBox->Text);
		}
		catch (...) {
			ErrorText->Text = "Ошибка вводимого числа";
		}
	}
	private: System::Void ButtonGetLength_Click(System::Object^ sender, System::EventArgs^ e) {
		Vector3 vector3{ point1, point2, point3 };
		LengthText->Text = "Длина: " + vector3.GetLength().ToString();
		
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
};
}
