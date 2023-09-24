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
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ ButtonGetLengthVector1;
	private: System::Windows::Forms::TextBox^ v1Point1textBox;
	private: System::Windows::Forms::TextBox^ v1Point2textBox;
	private: System::Windows::Forms::TextBox^ v1Point3textBox;
	protected:




	protected:






	private: System::Windows::Forms::Label^ Vector1Text;
	private: System::Windows::Forms::Label^ Length1Text;
	private: System::Windows::Forms::Label^ Normalized1Text;

	private: System::Windows::Forms::Button^ ButtonGetNormolizedVector1;
	private: System::Windows::Forms::Label^ Normalized2Text;


	private: System::Windows::Forms::Button^ ButtonGetNormolizedVector2;
	private: System::Windows::Forms::Label^ Length2Text;




	private: System::Windows::Forms::Label^ Vector2Text;
	private: System::Windows::Forms::TextBox^ v2Point3textBox;


	private: System::Windows::Forms::TextBox^ v2Point2textBox;

	private: System::Windows::Forms::TextBox^ v2Point1textBox;

	private: System::Windows::Forms::Button^ ButtonGetLengthVector2;
	private: System::Windows::Forms::TextBox^ Vector1LengthText;
	private: System::Windows::Forms::TextBox^ Vector1NormalizedText;

	private: System::Windows::Forms::TextBox^ Vector2NormalizedText;
	private: System::Windows::Forms::TextBox^ Vector2LengthText;
	private: System::Windows::Forms::Label^ ErrorText;







	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->ButtonGetLengthVector1 = (gcnew System::Windows::Forms::Button());
			this->v1Point1textBox = (gcnew System::Windows::Forms::TextBox());
			this->v1Point2textBox = (gcnew System::Windows::Forms::TextBox());
			this->v1Point3textBox = (gcnew System::Windows::Forms::TextBox());
			this->Vector1Text = (gcnew System::Windows::Forms::Label());
			this->Length1Text = (gcnew System::Windows::Forms::Label());
			this->Normalized1Text = (gcnew System::Windows::Forms::Label());
			this->ButtonGetNormolizedVector1 = (gcnew System::Windows::Forms::Button());
			this->Normalized2Text = (gcnew System::Windows::Forms::Label());
			this->ButtonGetNormolizedVector2 = (gcnew System::Windows::Forms::Button());
			this->Length2Text = (gcnew System::Windows::Forms::Label());
			this->Vector2Text = (gcnew System::Windows::Forms::Label());
			this->v2Point3textBox = (gcnew System::Windows::Forms::TextBox());
			this->v2Point2textBox = (gcnew System::Windows::Forms::TextBox());
			this->v2Point1textBox = (gcnew System::Windows::Forms::TextBox());
			this->ButtonGetLengthVector2 = (gcnew System::Windows::Forms::Button());
			this->Vector1LengthText = (gcnew System::Windows::Forms::TextBox());
			this->Vector1NormalizedText = (gcnew System::Windows::Forms::TextBox());
			this->Vector2NormalizedText = (gcnew System::Windows::Forms::TextBox());
			this->Vector2LengthText = (gcnew System::Windows::Forms::TextBox());
			this->ErrorText = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// ButtonGetLengthVector1
			// 
			this->ButtonGetLengthVector1->Location = System::Drawing::Point(79, 91);
			this->ButtonGetLengthVector1->Name = L"ButtonGetLengthVector1";
			this->ButtonGetLengthVector1->Size = System::Drawing::Size(49, 44);
			this->ButtonGetLengthVector1->TabIndex = 0;
			this->ButtonGetLengthVector1->Text = L"=";
			this->ButtonGetLengthVector1->UseVisualStyleBackColor = true;
			this->ButtonGetLengthVector1->Click += gcnew System::EventHandler(this, &MyForm::ButtonGetLengthVector1_Click);
			// 
			// v1Point1textBox
			// 
			this->v1Point1textBox->Location = System::Drawing::Point(60, 55);
			this->v1Point1textBox->Name = L"v1Point1textBox";
			this->v1Point1textBox->Size = System::Drawing::Size(31, 20);
			this->v1Point1textBox->TabIndex = 1;
			this->v1Point1textBox->TextChanged += gcnew System::EventHandler(this, &MyForm::v1Point1textBox_TextChanged);
			// 
			// v1Point2textBox
			// 
			this->v1Point2textBox->Location = System::Drawing::Point(97, 55);
			this->v1Point2textBox->Name = L"v1Point2textBox";
			this->v1Point2textBox->Size = System::Drawing::Size(31, 20);
			this->v1Point2textBox->TabIndex = 2;
			this->v1Point2textBox->TextChanged += gcnew System::EventHandler(this, &MyForm::v1Point2textBox_TextChanged);
			// 
			// v1Point3textBox
			// 
			this->v1Point3textBox->Location = System::Drawing::Point(134, 55);
			this->v1Point3textBox->Name = L"v1Point3textBox";
			this->v1Point3textBox->Size = System::Drawing::Size(31, 20);
			this->v1Point3textBox->TabIndex = 3;
			this->v1Point3textBox->TextChanged += gcnew System::EventHandler(this, &MyForm::v1Point3textBox_TextChanged);
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
			// Normalized1Text
			// 
			this->Normalized1Text->AutoSize = true;
			this->Normalized1Text->Location = System::Drawing::Point(31, 157);
			this->Normalized1Text->Name = L"Normalized1Text";
			this->Normalized1Text->Size = System::Drawing::Size(48, 13);
			this->Normalized1Text->TabIndex = 10;
			this->Normalized1Text->Text = L"norm(v1)";
			// 
			// ButtonGetNormolizedVector1
			// 
			this->ButtonGetNormolizedVector1->Location = System::Drawing::Point(79, 141);
			this->ButtonGetNormolizedVector1->Name = L"ButtonGetNormolizedVector1";
			this->ButtonGetNormolizedVector1->Size = System::Drawing::Size(49, 44);
			this->ButtonGetNormolizedVector1->TabIndex = 9;
			this->ButtonGetNormolizedVector1->Text = L"=";
			this->ButtonGetNormolizedVector1->UseVisualStyleBackColor = true;
			this->ButtonGetNormolizedVector1->Click += gcnew System::EventHandler(this, &MyForm::ButtonGetNormolizedVector1_Click);
			// 
			// Normalized2Text
			// 
			this->Normalized2Text->AutoSize = true;
			this->Normalized2Text->Location = System::Drawing::Point(487, 157);
			this->Normalized2Text->Name = L"Normalized2Text";
			this->Normalized2Text->Size = System::Drawing::Size(48, 13);
			this->Normalized2Text->TabIndex = 18;
			this->Normalized2Text->Text = L"norm(v2)";
			// 
			// ButtonGetNormolizedVector2
			// 
			this->ButtonGetNormolizedVector2->Location = System::Drawing::Point(535, 141);
			this->ButtonGetNormolizedVector2->Name = L"ButtonGetNormolizedVector2";
			this->ButtonGetNormolizedVector2->Size = System::Drawing::Size(49, 44);
			this->ButtonGetNormolizedVector2->TabIndex = 17;
			this->ButtonGetNormolizedVector2->Text = L"=";
			this->ButtonGetNormolizedVector2->UseVisualStyleBackColor = true;
			this->ButtonGetNormolizedVector2->Click += gcnew System::EventHandler(this, &MyForm::ButtonGetNormolizedVector2_Click);
			// 
			// Length2Text
			// 
			this->Length2Text->AutoSize = true;
			this->Length2Text->Location = System::Drawing::Point(506, 107);
			this->Length2Text->Name = L"Length2Text";
			this->Length2Text->Size = System::Drawing::Size(23, 13);
			this->Length2Text->TabIndex = 16;
			this->Length2Text->Text = L"|v2|";
			// 
			// Vector2Text
			// 
			this->Vector2Text->AutoSize = true;
			this->Vector2Text->Location = System::Drawing::Point(479, 55);
			this->Vector2Text->Name = L"Vector2Text";
			this->Vector2Text->Size = System::Drawing::Size(31, 13);
			this->Vector2Text->TabIndex = 15;
			this->Vector2Text->Text = L"v2 = ";
			// 
			// v2Point3textBox
			// 
			this->v2Point3textBox->Location = System::Drawing::Point(590, 55);
			this->v2Point3textBox->Name = L"v2Point3textBox";
			this->v2Point3textBox->Size = System::Drawing::Size(31, 20);
			this->v2Point3textBox->TabIndex = 14;
			this->v2Point3textBox->TextChanged += gcnew System::EventHandler(this, &MyForm::v2Point3textBox_TextChanged);
			// 
			// v2Point2textBox
			// 
			this->v2Point2textBox->Location = System::Drawing::Point(553, 55);
			this->v2Point2textBox->Name = L"v2Point2textBox";
			this->v2Point2textBox->Size = System::Drawing::Size(31, 20);
			this->v2Point2textBox->TabIndex = 13;
			this->v2Point2textBox->TextChanged += gcnew System::EventHandler(this, &MyForm::v2Point2textBox_TextChanged);
			// 
			// v2Point1textBox
			// 
			this->v2Point1textBox->Location = System::Drawing::Point(516, 55);
			this->v2Point1textBox->Name = L"v2Point1textBox";
			this->v2Point1textBox->Size = System::Drawing::Size(31, 20);
			this->v2Point1textBox->TabIndex = 12;
			this->v2Point1textBox->TextChanged += gcnew System::EventHandler(this, &MyForm::v2Point1textBox_TextChanged);
			// 
			// ButtonGetLengthVector2
			// 
			this->ButtonGetLengthVector2->Location = System::Drawing::Point(535, 91);
			this->ButtonGetLengthVector2->Name = L"ButtonGetLengthVector2";
			this->ButtonGetLengthVector2->Size = System::Drawing::Size(49, 44);
			this->ButtonGetLengthVector2->TabIndex = 11;
			this->ButtonGetLengthVector2->Text = L"=";
			this->ButtonGetLengthVector2->UseVisualStyleBackColor = true;
			this->ButtonGetLengthVector2->Click += gcnew System::EventHandler(this, &MyForm::ButtonGetLengthVector2_Click);
			// 
			// Vector1LengthText
			// 
			this->Vector1LengthText->Enabled = false;
			this->Vector1LengthText->Location = System::Drawing::Point(134, 104);
			this->Vector1LengthText->Name = L"Vector1LengthText";
			this->Vector1LengthText->ReadOnly = true;
			this->Vector1LengthText->Size = System::Drawing::Size(41, 20);
			this->Vector1LengthText->TabIndex = 19;
			this->Vector1LengthText->TabStop = false;
			// 
			// Vector1NormalizedText
			// 
			this->Vector1NormalizedText->Enabled = false;
			this->Vector1NormalizedText->Location = System::Drawing::Point(134, 154);
			this->Vector1NormalizedText->Name = L"Vector1NormalizedText";
			this->Vector1NormalizedText->ReadOnly = true;
			this->Vector1NormalizedText->Size = System::Drawing::Size(41, 20);
			this->Vector1NormalizedText->TabIndex = 20;
			this->Vector1NormalizedText->TabStop = false;
			// 
			// Vector2NormalizedText
			// 
			this->Vector2NormalizedText->Enabled = false;
			this->Vector2NormalizedText->Location = System::Drawing::Point(590, 154);
			this->Vector2NormalizedText->Name = L"Vector2NormalizedText";
			this->Vector2NormalizedText->ReadOnly = true;
			this->Vector2NormalizedText->Size = System::Drawing::Size(41, 20);
			this->Vector2NormalizedText->TabIndex = 22;
			this->Vector2NormalizedText->TabStop = false;
			// 
			// Vector2LengthText
			// 
			this->Vector2LengthText->Enabled = false;
			this->Vector2LengthText->Location = System::Drawing::Point(590, 104);
			this->Vector2LengthText->Name = L"Vector2LengthText";
			this->Vector2LengthText->ReadOnly = true;
			this->Vector2LengthText->Size = System::Drawing::Size(41, 20);
			this->Vector2LengthText->TabIndex = 21;
			this->Vector2LengthText->TabStop = false;
			// 
			// ErrorText
			// 
			this->ErrorText->AutoSize = true;
			this->ErrorText->ForeColor = System::Drawing::Color::Red;
			this->ErrorText->Location = System::Drawing::Point(23, 430);
			this->ErrorText->Name = L"ErrorText";
			this->ErrorText->Size = System::Drawing::Size(50, 13);
			this->ErrorText->TabIndex = 23;
			this->ErrorText->Text = L"ќшибки:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(681, 452);
			this->Controls->Add(this->ErrorText);
			this->Controls->Add(this->Vector2NormalizedText);
			this->Controls->Add(this->Vector2LengthText);
			this->Controls->Add(this->Vector1NormalizedText);
			this->Controls->Add(this->Vector1LengthText);
			this->Controls->Add(this->Normalized2Text);
			this->Controls->Add(this->ButtonGetNormolizedVector2);
			this->Controls->Add(this->Length2Text);
			this->Controls->Add(this->Vector2Text);
			this->Controls->Add(this->v2Point3textBox);
			this->Controls->Add(this->v2Point2textBox);
			this->Controls->Add(this->v2Point1textBox);
			this->Controls->Add(this->ButtonGetLengthVector2);
			this->Controls->Add(this->Normalized1Text);
			this->Controls->Add(this->ButtonGetNormolizedVector1);
			this->Controls->Add(this->Length1Text);
			this->Controls->Add(this->Vector1Text);
			this->Controls->Add(this->v1Point3textBox);
			this->Controls->Add(this->v1Point2textBox);
			this->Controls->Add(this->v1Point1textBox);
			this->Controls->Add(this->ButtonGetLengthVector1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		Vector3 *v1;
		Vector3 *v2;
#pragma region Input
		private: System::Void v1Point1textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			try {
				System::Double::Parse(v1Point1textBox->Text);
				if (v1Point2textBox->Text != nullptr && v1Point3textBox->Text != nullptr) {
					v1 = new Vector3(System::Double::Parse(v1Point1textBox->Text), System::Double::Parse(v1Point2textBox->Text), System::Double::Parse(v1Point3textBox->Text));
				}
			}
			catch (...) {

			}
		}
private: System::Void v1Point2textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	try {
		System::Double::Parse(v1Point2textBox->Text);
		if (v1Point1textBox->Text != nullptr && v1Point3textBox->Text != nullptr) {
			v1 = new Vector3(System::Double::Parse(v1Point1textBox->Text), System::Double::Parse(v1Point2textBox->Text), System::Double::Parse(v1Point3textBox->Text));
		}
	}
	catch (...) {

	}
}
private: System::Void v1Point3textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	try {
		System::Double::Parse(v1Point3textBox->Text);
		if (v1Point2textBox->Text != nullptr && v1Point1textBox->Text != nullptr) {
			v1 = new Vector3(System::Double::Parse(v1Point1textBox->Text), System::Double::Parse(v1Point2textBox->Text), System::Double::Parse(v1Point3textBox->Text));
		}
	}
	catch (...) {

	}
}
private: System::Void v2Point1textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	try {
		System::Double::Parse(v1Point1textBox->Text);
		if (v1Point2textBox->Text != nullptr && v1Point3textBox->Text != nullptr) {
			v2 = new Vector3(System::Double::Parse(v1Point1textBox->Text), System::Double::Parse(v1Point2textBox->Text), System::Double::Parse(v1Point3textBox->Text));
		}
	}
	catch (...) {

	}
}
private: System::Void v2Point2textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	try {
		System::Double::Parse(v1Point2textBox->Text);
		if (v1Point1textBox->Text != nullptr && v1Point3textBox->Text != nullptr) {
			v2 = new Vector3(System::Double::Parse(v1Point1textBox->Text), System::Double::Parse(v1Point2textBox->Text), System::Double::Parse(v1Point3textBox->Text));
		}
	}
	catch (...) {

	}
}
private: System::Void v2Point3textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	try {
		System::Double::Parse(v1Point3textBox->Text);
		if (v1Point2textBox->Text != nullptr && v1Point1textBox->Text != nullptr) {
			v2 = new Vector3(System::Double::Parse(v1Point1textBox->Text), System::Double::Parse(v1Point2textBox->Text), System::Double::Parse(v1Point3textBox->Text));
		}
	}
	catch (...) {

	}
}
#pragma endregion
#pragma region Function
private: System::Void ButtonGetLengthVector1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (v1 == nullptr)
		return;

	Vector1LengthText->Text = v1->GetLength().ToString();
}
private: System::Void ButtonGetNormolizedVector1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (v1 == nullptr)
		return;

	Vector1NormalizedText->Text = v1->GetNormolized().ToString();
}
private: System::Void ButtonGetLengthVector2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (v1 == nullptr)
		return;


	Vector2LengthText->Text = v2->GetLength().ToString();
}
private: System::Void ButtonGetNormolizedVector2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (v1 == nullptr)
		return;

	Vector2NormalizedText->Text = v1->GetNormolized().ToString();
}
#pragma endregion



};
