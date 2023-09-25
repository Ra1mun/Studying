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
	private: System::Windows::Forms::Label^ Vector1Label;
	protected:
	private: System::Windows::Forms::Label^ Vector1LengthLabel;
	private: System::Windows::Forms::Label^ NormalizedVector1Label;
	private: System::Windows::Forms::TextBox^ Vector1Point1textBox;
	private: System::Windows::Forms::TextBox^ Vector1Point2textBox;
	private: System::Windows::Forms::TextBox^ Vector1Point3textBox;
	private: System::Windows::Forms::Button^ ButtonGetLengthVector1;
	private: System::Windows::Forms::Button^ ButtonGetNormalizedVector1;
	private: System::Windows::Forms::TextBox^ Vector1NormPoint3textBox;
	private: System::Windows::Forms::TextBox^ Vector1NormPoint2textBox;
	private: System::Windows::Forms::TextBox^ Vector1NormPoint1textBox;
	private: System::Windows::Forms::TextBox^ Vector1LengthTextBox;
	private: System::Windows::Forms::TextBox^ Vector2LengthtextBox;
	private: System::Windows::Forms::TextBox^ Vector2NormPoint3textBox;
	private: System::Windows::Forms::TextBox^ Vector2NormPoint2textBox;
	private: System::Windows::Forms::TextBox^ Vector2NormPoint1textBox;
	private: System::Windows::Forms::Button^ ButtonGetLNormalizedVector2;
	private: System::Windows::Forms::Button^ ButtonGetLengthVector2;
	private: System::Windows::Forms::TextBox^ Vector2Point3textBox;
	private: System::Windows::Forms::TextBox^ Vector2Point2textBox;
	private: System::Windows::Forms::TextBox^ Vector2Point1textBox;
	private: System::Windows::Forms::Label^ Vector2NormalizedLabel;
	private: System::Windows::Forms::Label^ Vector2LengthLabel;
	private: System::Windows::Forms::Label^ Vector2Label;







	private: System::Windows::Forms::Button^ SumVectorsButton;

	private: System::Windows::Forms::Label^ SumVectorslabel;
	private: System::Windows::Forms::TextBox^ SubPoint3textBox;

	private: System::Windows::Forms::TextBox^ SubPoint2textBox;

	private: System::Windows::Forms::TextBox^ SubPoint1textBox;


	private: System::Windows::Forms::Button^ RaznVectorsButton;

	private: System::Windows::Forms::Label^ SubstractionVectorsLabel;
	private: System::Windows::Forms::TextBox^ ProizPoint3textBox;

	private: System::Windows::Forms::TextBox^ ProizPoint2textBox;

	private: System::Windows::Forms::TextBox^ ProizPoint1textBox;

	private: System::Windows::Forms::Button^ ProizvodVectorbutton;

	private: System::Windows::Forms::Label^ ProizvodVectorLabel;
	private: System::Windows::Forms::TextBox^ ConsttextBox;
	private: System::Windows::Forms::TextBox^ SumPoint1textBox;
	private: System::Windows::Forms::TextBox^ SumPoint2textBox;
	private: System::Windows::Forms::TextBox^ SumPoint3textBox;
	private: System::Windows::Forms::TextBox^ ScalarVectorstextBox;
	private: System::Windows::Forms::Button^ ScalarVectorsButton;

	private: System::Windows::Forms::Label^ ScalarVectorsLabel;
	private: System::Windows::Forms::TextBox^ CrossPoint3textBox;
	private: System::Windows::Forms::TextBox^ CrossPoint2textBox;
	private: System::Windows::Forms::TextBox^ CrossPoint1textBox;
	private: System::Windows::Forms::Button^ CrossVectorsButton;
	private: System::Windows::Forms::Label^ CrossVectorsLabel;
	private: System::Windows::Forms::TextBox^ TripleTextBox;



	private: System::Windows::Forms::Button^ MixedVectorsButton;
	private: System::Windows::Forms::Label^ MixedVectorsLabel;
	private: System::Windows::Forms::TextBox^ Vector3Point3TextBox;
	private: System::Windows::Forms::TextBox^ Vector3Point2TextBox;
	private: System::Windows::Forms::TextBox^ Vector3Point1TextBox;





	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Vector1Label = (gcnew System::Windows::Forms::Label());
			this->Vector1LengthLabel = (gcnew System::Windows::Forms::Label());
			this->NormalizedVector1Label = (gcnew System::Windows::Forms::Label());
			this->Vector1Point1textBox = (gcnew System::Windows::Forms::TextBox());
			this->Vector1Point2textBox = (gcnew System::Windows::Forms::TextBox());
			this->Vector1Point3textBox = (gcnew System::Windows::Forms::TextBox());
			this->ButtonGetLengthVector1 = (gcnew System::Windows::Forms::Button());
			this->ButtonGetNormalizedVector1 = (gcnew System::Windows::Forms::Button());
			this->Vector1NormPoint3textBox = (gcnew System::Windows::Forms::TextBox());
			this->Vector1NormPoint2textBox = (gcnew System::Windows::Forms::TextBox());
			this->Vector1NormPoint1textBox = (gcnew System::Windows::Forms::TextBox());
			this->Vector1LengthTextBox = (gcnew System::Windows::Forms::TextBox());
			this->Vector2LengthtextBox = (gcnew System::Windows::Forms::TextBox());
			this->Vector2NormPoint3textBox = (gcnew System::Windows::Forms::TextBox());
			this->Vector2NormPoint2textBox = (gcnew System::Windows::Forms::TextBox());
			this->Vector2NormPoint1textBox = (gcnew System::Windows::Forms::TextBox());
			this->ButtonGetLNormalizedVector2 = (gcnew System::Windows::Forms::Button());
			this->ButtonGetLengthVector2 = (gcnew System::Windows::Forms::Button());
			this->Vector2Point3textBox = (gcnew System::Windows::Forms::TextBox());
			this->Vector2Point2textBox = (gcnew System::Windows::Forms::TextBox());
			this->Vector2Point1textBox = (gcnew System::Windows::Forms::TextBox());
			this->Vector2NormalizedLabel = (gcnew System::Windows::Forms::Label());
			this->Vector2LengthLabel = (gcnew System::Windows::Forms::Label());
			this->Vector2Label = (gcnew System::Windows::Forms::Label());
			this->SumVectorsButton = (gcnew System::Windows::Forms::Button());
			this->SumVectorslabel = (gcnew System::Windows::Forms::Label());
			this->SubPoint3textBox = (gcnew System::Windows::Forms::TextBox());
			this->SubPoint2textBox = (gcnew System::Windows::Forms::TextBox());
			this->SubPoint1textBox = (gcnew System::Windows::Forms::TextBox());
			this->RaznVectorsButton = (gcnew System::Windows::Forms::Button());
			this->SubstractionVectorsLabel = (gcnew System::Windows::Forms::Label());
			this->ProizPoint3textBox = (gcnew System::Windows::Forms::TextBox());
			this->ProizPoint2textBox = (gcnew System::Windows::Forms::TextBox());
			this->ProizPoint1textBox = (gcnew System::Windows::Forms::TextBox());
			this->ProizvodVectorbutton = (gcnew System::Windows::Forms::Button());
			this->ProizvodVectorLabel = (gcnew System::Windows::Forms::Label());
			this->ConsttextBox = (gcnew System::Windows::Forms::TextBox());
			this->SumPoint1textBox = (gcnew System::Windows::Forms::TextBox());
			this->SumPoint2textBox = (gcnew System::Windows::Forms::TextBox());
			this->SumPoint3textBox = (gcnew System::Windows::Forms::TextBox());
			this->ScalarVectorstextBox = (gcnew System::Windows::Forms::TextBox());
			this->ScalarVectorsButton = (gcnew System::Windows::Forms::Button());
			this->ScalarVectorsLabel = (gcnew System::Windows::Forms::Label());
			this->CrossPoint3textBox = (gcnew System::Windows::Forms::TextBox());
			this->CrossPoint2textBox = (gcnew System::Windows::Forms::TextBox());
			this->CrossPoint1textBox = (gcnew System::Windows::Forms::TextBox());
			this->CrossVectorsButton = (gcnew System::Windows::Forms::Button());
			this->CrossVectorsLabel = (gcnew System::Windows::Forms::Label());
			this->TripleTextBox = (gcnew System::Windows::Forms::TextBox());
			this->MixedVectorsButton = (gcnew System::Windows::Forms::Button());
			this->MixedVectorsLabel = (gcnew System::Windows::Forms::Label());
			this->Vector3Point3TextBox = (gcnew System::Windows::Forms::TextBox());
			this->Vector3Point2TextBox = (gcnew System::Windows::Forms::TextBox());
			this->Vector3Point1TextBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// Vector1Label
			// 
			this->Vector1Label->AutoSize = true;
			this->Vector1Label->Location = System::Drawing::Point(39, 52);
			this->Vector1Label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Vector1Label->Name = L"Vector1Label";
			this->Vector1Label->Size = System::Drawing::Size(42, 20);
			this->Vector1Label->TabIndex = 0;
			this->Vector1Label->Text = L"v1 = ";
			// 
			// Vector1LengthLabel
			// 
			this->Vector1LengthLabel->AutoSize = true;
			this->Vector1LengthLabel->Location = System::Drawing::Point(39, 143);
			this->Vector1LengthLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Vector1LengthLabel->Name = L"Vector1LengthLabel";
			this->Vector1LengthLabel->Size = System::Drawing::Size(35, 20);
			this->Vector1LengthLabel->TabIndex = 1;
			this->Vector1LengthLabel->Text = L"|v1|";
			// 
			// NormalizedVector1Label
			// 
			this->NormalizedVector1Label->AutoSize = true;
			this->NormalizedVector1Label->Location = System::Drawing::Point(39, 209);
			this->NormalizedVector1Label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->NormalizedVector1Label->Name = L"NormalizedVector1Label";
			this->NormalizedVector1Label->Size = System::Drawing::Size(32, 20);
			this->NormalizedVector1Label->TabIndex = 2;
			this->NormalizedVector1Label->Text = L"v1^";
			// 
			// Vector1Point1textBox
			// 
			this->Vector1Point1textBox->Location = System::Drawing::Point(81, 48);
			this->Vector1Point1textBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Vector1Point1textBox->Name = L"Vector1Point1textBox";
			this->Vector1Point1textBox->Size = System::Drawing::Size(46, 26);
			this->Vector1Point1textBox->TabIndex = 3;
			this->Vector1Point1textBox->TextChanged += gcnew System::EventHandler(this, &MyForm::Vector1Point1textBox_TextChanged);
			// 
			// Vector1Point2textBox
			// 
			this->Vector1Point2textBox->Location = System::Drawing::Point(138, 48);
			this->Vector1Point2textBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Vector1Point2textBox->Name = L"Vector1Point2textBox";
			this->Vector1Point2textBox->Size = System::Drawing::Size(46, 26);
			this->Vector1Point2textBox->TabIndex = 4;
			this->Vector1Point2textBox->TextChanged += gcnew System::EventHandler(this, &MyForm::Vector1Point2textBox_TextChanged);
			// 
			// Vector1Point3textBox
			// 
			this->Vector1Point3textBox->Location = System::Drawing::Point(195, 48);
			this->Vector1Point3textBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Vector1Point3textBox->Name = L"Vector1Point3textBox";
			this->Vector1Point3textBox->Size = System::Drawing::Size(46, 26);
			this->Vector1Point3textBox->TabIndex = 5;
			this->Vector1Point3textBox->TextChanged += gcnew System::EventHandler(this, &MyForm::Vector1Point3textBox_TextChanged);
			// 
			// ButtonGetLengthVector1
			// 
			this->ButtonGetLengthVector1->Location = System::Drawing::Point(81, 131);
			this->ButtonGetLengthVector1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->ButtonGetLengthVector1->Name = L"ButtonGetLengthVector1";
			this->ButtonGetLengthVector1->Size = System::Drawing::Size(62, 43);
			this->ButtonGetLengthVector1->TabIndex = 6;
			this->ButtonGetLengthVector1->Text = L"=";
			this->ButtonGetLengthVector1->UseVisualStyleBackColor = true;
			this->ButtonGetLengthVector1->Click += gcnew System::EventHandler(this, &MyForm::ButtonGetLengthVector1_Click);
			// 
			// ButtonGetNormalizedVector1
			// 
			this->ButtonGetNormalizedVector1->Location = System::Drawing::Point(81, 197);
			this->ButtonGetNormalizedVector1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->ButtonGetNormalizedVector1->Name = L"ButtonGetNormalizedVector1";
			this->ButtonGetNormalizedVector1->Size = System::Drawing::Size(62, 43);
			this->ButtonGetNormalizedVector1->TabIndex = 7;
			this->ButtonGetNormalizedVector1->Text = L"=";
			this->ButtonGetNormalizedVector1->UseVisualStyleBackColor = true;
			this->ButtonGetNormalizedVector1->Click += gcnew System::EventHandler(this, &MyForm::ButtonGetNormalizedVector1_Click);
			// 
			// Vector1NormPoint3textBox
			// 
			this->Vector1NormPoint3textBox->Location = System::Drawing::Point(266, 205);
			this->Vector1NormPoint3textBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Vector1NormPoint3textBox->Name = L"Vector1NormPoint3textBox";
			this->Vector1NormPoint3textBox->Size = System::Drawing::Size(46, 26);
			this->Vector1NormPoint3textBox->TabIndex = 10;
			// 
			// Vector1NormPoint2textBox
			// 
			this->Vector1NormPoint2textBox->Location = System::Drawing::Point(208, 205);
			this->Vector1NormPoint2textBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Vector1NormPoint2textBox->Name = L"Vector1NormPoint2textBox";
			this->Vector1NormPoint2textBox->Size = System::Drawing::Size(46, 26);
			this->Vector1NormPoint2textBox->TabIndex = 9;
			// 
			// Vector1NormPoint1textBox
			// 
			this->Vector1NormPoint1textBox->Location = System::Drawing::Point(152, 205);
			this->Vector1NormPoint1textBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Vector1NormPoint1textBox->Name = L"Vector1NormPoint1textBox";
			this->Vector1NormPoint1textBox->Size = System::Drawing::Size(46, 26);
			this->Vector1NormPoint1textBox->TabIndex = 8;
			// 
			// Vector1LengthTextBox
			// 
			this->Vector1LengthTextBox->Location = System::Drawing::Point(152, 138);
			this->Vector1LengthTextBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Vector1LengthTextBox->Name = L"Vector1LengthTextBox";
			this->Vector1LengthTextBox->Size = System::Drawing::Size(46, 26);
			this->Vector1LengthTextBox->TabIndex = 11;
			// 
			// Vector2LengthtextBox
			// 
			this->Vector2LengthtextBox->Location = System::Drawing::Point(801, 146);
			this->Vector2LengthtextBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Vector2LengthtextBox->Name = L"Vector2LengthtextBox";
			this->Vector2LengthtextBox->Size = System::Drawing::Size(46, 26);
			this->Vector2LengthtextBox->TabIndex = 23;
			// 
			// Vector2NormPoint3textBox
			// 
			this->Vector2NormPoint3textBox->Location = System::Drawing::Point(915, 212);
			this->Vector2NormPoint3textBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Vector2NormPoint3textBox->Name = L"Vector2NormPoint3textBox";
			this->Vector2NormPoint3textBox->Size = System::Drawing::Size(46, 26);
			this->Vector2NormPoint3textBox->TabIndex = 22;
			// 
			// Vector2NormPoint2textBox
			// 
			this->Vector2NormPoint2textBox->Location = System::Drawing::Point(858, 212);
			this->Vector2NormPoint2textBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Vector2NormPoint2textBox->Name = L"Vector2NormPoint2textBox";
			this->Vector2NormPoint2textBox->Size = System::Drawing::Size(46, 26);
			this->Vector2NormPoint2textBox->TabIndex = 21;
			// 
			// Vector2NormPoint1textBox
			// 
			this->Vector2NormPoint1textBox->Location = System::Drawing::Point(801, 212);
			this->Vector2NormPoint1textBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Vector2NormPoint1textBox->Name = L"Vector2NormPoint1textBox";
			this->Vector2NormPoint1textBox->Size = System::Drawing::Size(46, 26);
			this->Vector2NormPoint1textBox->TabIndex = 20;
			// 
			// ButtonGetLNormalizedVector2
			// 
			this->ButtonGetLNormalizedVector2->Location = System::Drawing::Point(730, 205);
			this->ButtonGetLNormalizedVector2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->ButtonGetLNormalizedVector2->Name = L"ButtonGetLNormalizedVector2";
			this->ButtonGetLNormalizedVector2->Size = System::Drawing::Size(62, 43);
			this->ButtonGetLNormalizedVector2->TabIndex = 19;
			this->ButtonGetLNormalizedVector2->Text = L"=";
			this->ButtonGetLNormalizedVector2->UseVisualStyleBackColor = true;
			this->ButtonGetLNormalizedVector2->Click += gcnew System::EventHandler(this, &MyForm::ButtonGetLNormalizedVector2_Click);
			// 
			// ButtonGetLengthVector2
			// 
			this->ButtonGetLengthVector2->Location = System::Drawing::Point(730, 138);
			this->ButtonGetLengthVector2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->ButtonGetLengthVector2->Name = L"ButtonGetLengthVector2";
			this->ButtonGetLengthVector2->Size = System::Drawing::Size(62, 43);
			this->ButtonGetLengthVector2->TabIndex = 18;
			this->ButtonGetLengthVector2->Text = L"=";
			this->ButtonGetLengthVector2->UseVisualStyleBackColor = true;
			this->ButtonGetLengthVector2->Click += gcnew System::EventHandler(this, &MyForm::ButtonGetLengthVector2_Click);
			// 
			// Vector2Point3textBox
			// 
			this->Vector2Point3textBox->Location = System::Drawing::Point(844, 55);
			this->Vector2Point3textBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Vector2Point3textBox->Name = L"Vector2Point3textBox";
			this->Vector2Point3textBox->Size = System::Drawing::Size(46, 26);
			this->Vector2Point3textBox->TabIndex = 17;
			this->Vector2Point3textBox->TextChanged += gcnew System::EventHandler(this, &MyForm::Vector2Point3textBox_TextChanged);
			// 
			// Vector2Point2textBox
			// 
			this->Vector2Point2textBox->Location = System::Drawing::Point(788, 55);
			this->Vector2Point2textBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Vector2Point2textBox->Name = L"Vector2Point2textBox";
			this->Vector2Point2textBox->Size = System::Drawing::Size(46, 26);
			this->Vector2Point2textBox->TabIndex = 16;
			this->Vector2Point2textBox->TextChanged += gcnew System::EventHandler(this, &MyForm::Vector2Point2textBox_TextChanged);
			// 
			// Vector2Point1textBox
			// 
			this->Vector2Point1textBox->Location = System::Drawing::Point(730, 55);
			this->Vector2Point1textBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Vector2Point1textBox->Name = L"Vector2Point1textBox";
			this->Vector2Point1textBox->Size = System::Drawing::Size(46, 26);
			this->Vector2Point1textBox->TabIndex = 15;
			this->Vector2Point1textBox->TextChanged += gcnew System::EventHandler(this, &MyForm::Vector2Point1textBox_TextChanged);
			// 
			// Vector2NormalizedLabel
			// 
			this->Vector2NormalizedLabel->AutoSize = true;
			this->Vector2NormalizedLabel->Location = System::Drawing::Point(688, 217);
			this->Vector2NormalizedLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Vector2NormalizedLabel->Name = L"Vector2NormalizedLabel";
			this->Vector2NormalizedLabel->Size = System::Drawing::Size(32, 20);
			this->Vector2NormalizedLabel->TabIndex = 14;
			this->Vector2NormalizedLabel->Text = L"v1^";
			// 
			// Vector2LengthLabel
			// 
			this->Vector2LengthLabel->AutoSize = true;
			this->Vector2LengthLabel->Location = System::Drawing::Point(688, 151);
			this->Vector2LengthLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Vector2LengthLabel->Name = L"Vector2LengthLabel";
			this->Vector2LengthLabel->Size = System::Drawing::Size(35, 20);
			this->Vector2LengthLabel->TabIndex = 13;
			this->Vector2LengthLabel->Text = L"|v2|";
			// 
			// Vector2Label
			// 
			this->Vector2Label->AutoSize = true;
			this->Vector2Label->Location = System::Drawing::Point(688, 60);
			this->Vector2Label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Vector2Label->Name = L"Vector2Label";
			this->Vector2Label->Size = System::Drawing::Size(42, 20);
			this->Vector2Label->TabIndex = 12;
			this->Vector2Label->Text = L"v2 = ";
			// 
			// SumVectorsButton
			// 
			this->SumVectorsButton->Location = System::Drawing::Point(400, 309);
			this->SumVectorsButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->SumVectorsButton->Name = L"SumVectorsButton";
			this->SumVectorsButton->Size = System::Drawing::Size(62, 43);
			this->SumVectorsButton->TabIndex = 25;
			this->SumVectorsButton->Text = L"=";
			this->SumVectorsButton->UseVisualStyleBackColor = true;
			this->SumVectorsButton->Click += gcnew System::EventHandler(this, &MyForm::SumVectorsButton_Click);
			// 
			// SumVectorslabel
			// 
			this->SumVectorslabel->AutoSize = true;
			this->SumVectorslabel->Location = System::Drawing::Point(336, 322);
			this->SumVectorslabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->SumVectorslabel->Name = L"SumVectorslabel";
			this->SumVectorslabel->Size = System::Drawing::Size(50, 20);
			this->SumVectorslabel->TabIndex = 24;
			this->SumVectorslabel->Text = L"v1+v2";
			// 
			// SubPoint3textBox
			// 
			this->SubPoint3textBox->Location = System::Drawing::Point(585, 369);
			this->SubPoint3textBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->SubPoint3textBox->Name = L"SubPoint3textBox";
			this->SubPoint3textBox->Size = System::Drawing::Size(46, 26);
			this->SubPoint3textBox->TabIndex = 33;
			// 
			// SubPoint2textBox
			// 
			this->SubPoint2textBox->Location = System::Drawing::Point(528, 369);
			this->SubPoint2textBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->SubPoint2textBox->Name = L"SubPoint2textBox";
			this->SubPoint2textBox->Size = System::Drawing::Size(46, 26);
			this->SubPoint2textBox->TabIndex = 32;
			// 
			// SubPoint1textBox
			// 
			this->SubPoint1textBox->Location = System::Drawing::Point(471, 369);
			this->SubPoint1textBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->SubPoint1textBox->Name = L"SubPoint1textBox";
			this->SubPoint1textBox->Size = System::Drawing::Size(46, 26);
			this->SubPoint1textBox->TabIndex = 31;
			// 
			// RaznVectorsButton
			// 
			this->RaznVectorsButton->Location = System::Drawing::Point(400, 362);
			this->RaznVectorsButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->RaznVectorsButton->Name = L"RaznVectorsButton";
			this->RaznVectorsButton->Size = System::Drawing::Size(62, 43);
			this->RaznVectorsButton->TabIndex = 30;
			this->RaznVectorsButton->Text = L"=";
			this->RaznVectorsButton->UseVisualStyleBackColor = true;
			this->RaznVectorsButton->Click += gcnew System::EventHandler(this, &MyForm::RaznVectorsButton_Click);
			// 
			// SubstractionVectorsLabel
			// 
			this->SubstractionVectorsLabel->AutoSize = true;
			this->SubstractionVectorsLabel->Location = System::Drawing::Point(336, 374);
			this->SubstractionVectorsLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->SubstractionVectorsLabel->Name = L"SubstractionVectorsLabel";
			this->SubstractionVectorsLabel->Size = System::Drawing::Size(50, 20);
			this->SubstractionVectorsLabel->TabIndex = 29;
			this->SubstractionVectorsLabel->Text = L"v1+v2";
			// 
			// ProizPoint3textBox
			// 
			this->ProizPoint3textBox->Location = System::Drawing::Point(585, 420);
			this->ProizPoint3textBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->ProizPoint3textBox->Name = L"ProizPoint3textBox";
			this->ProizPoint3textBox->Size = System::Drawing::Size(46, 26);
			this->ProizPoint3textBox->TabIndex = 38;
			// 
			// ProizPoint2textBox
			// 
			this->ProizPoint2textBox->Location = System::Drawing::Point(528, 420);
			this->ProizPoint2textBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->ProizPoint2textBox->Name = L"ProizPoint2textBox";
			this->ProizPoint2textBox->Size = System::Drawing::Size(46, 26);
			this->ProizPoint2textBox->TabIndex = 37;
			// 
			// ProizPoint1textBox
			// 
			this->ProizPoint1textBox->Location = System::Drawing::Point(471, 420);
			this->ProizPoint1textBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->ProizPoint1textBox->Name = L"ProizPoint1textBox";
			this->ProizPoint1textBox->Size = System::Drawing::Size(46, 26);
			this->ProizPoint1textBox->TabIndex = 36;
			// 
			// ProizvodVectorbutton
			// 
			this->ProizvodVectorbutton->Location = System::Drawing::Point(400, 412);
			this->ProizvodVectorbutton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->ProizvodVectorbutton->Name = L"ProizvodVectorbutton";
			this->ProizvodVectorbutton->Size = System::Drawing::Size(62, 43);
			this->ProizvodVectorbutton->TabIndex = 35;
			this->ProizvodVectorbutton->Text = L"=";
			this->ProizvodVectorbutton->UseVisualStyleBackColor = true;
			this->ProizvodVectorbutton->Click += gcnew System::EventHandler(this, &MyForm::ProizvodVectorbutton_Click);
			// 
			// ProizvodVectorLabel
			// 
			this->ProizvodVectorLabel->AutoSize = true;
			this->ProizvodVectorLabel->Location = System::Drawing::Point(322, 425);
			this->ProizvodVectorLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->ProizvodVectorLabel->Name = L"ProizvodVectorLabel";
			this->ProizvodVectorLabel->Size = System::Drawing::Size(39, 20);
			this->ProizvodVectorLabel->TabIndex = 34;
			this->ProizvodVectorLabel->Text = L"v1 * ";
			// 
			// ConsttextBox
			// 
			this->ConsttextBox->Location = System::Drawing::Point(358, 420);
			this->ConsttextBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->ConsttextBox->Name = L"ConsttextBox";
			this->ConsttextBox->Size = System::Drawing::Size(31, 26);
			this->ConsttextBox->TabIndex = 39;
			this->ConsttextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::ConsttextBox_TextChanged);
			// 
			// SumPoint1textBox
			// 
			this->SumPoint1textBox->Location = System::Drawing::Point(471, 317);
			this->SumPoint1textBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->SumPoint1textBox->Name = L"SumPoint1textBox";
			this->SumPoint1textBox->Size = System::Drawing::Size(46, 26);
			this->SumPoint1textBox->TabIndex = 26;
			// 
			// SumPoint2textBox
			// 
			this->SumPoint2textBox->Location = System::Drawing::Point(528, 317);
			this->SumPoint2textBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->SumPoint2textBox->Name = L"SumPoint2textBox";
			this->SumPoint2textBox->Size = System::Drawing::Size(46, 26);
			this->SumPoint2textBox->TabIndex = 27;
			// 
			// SumPoint3textBox
			// 
			this->SumPoint3textBox->Location = System::Drawing::Point(585, 317);
			this->SumPoint3textBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->SumPoint3textBox->Name = L"SumPoint3textBox";
			this->SumPoint3textBox->Size = System::Drawing::Size(46, 26);
			this->SumPoint3textBox->TabIndex = 28;
			// 
			// ScalarVectorstextBox
			// 
			this->ScalarVectorstextBox->Location = System::Drawing::Point(471, 472);
			this->ScalarVectorstextBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->ScalarVectorstextBox->Name = L"ScalarVectorstextBox";
			this->ScalarVectorstextBox->Size = System::Drawing::Size(64, 26);
			this->ScalarVectorstextBox->TabIndex = 42;
			// 
			// ScalarVectorsButton
			// 
			this->ScalarVectorsButton->Location = System::Drawing::Point(400, 465);
			this->ScalarVectorsButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->ScalarVectorsButton->Name = L"ScalarVectorsButton";
			this->ScalarVectorsButton->Size = System::Drawing::Size(62, 43);
			this->ScalarVectorsButton->TabIndex = 41;
			this->ScalarVectorsButton->Text = L"=";
			this->ScalarVectorsButton->UseVisualStyleBackColor = true;
			this->ScalarVectorsButton->Click += gcnew System::EventHandler(this, &MyForm::ScalarVectorsButton_Click);
			// 
			// ScalarVectorsLabel
			// 
			this->ScalarVectorsLabel->AutoSize = true;
			this->ScalarVectorsLabel->Location = System::Drawing::Point(336, 477);
			this->ScalarVectorsLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->ScalarVectorsLabel->Name = L"ScalarVectorsLabel";
			this->ScalarVectorsLabel->Size = System::Drawing::Size(48, 20);
			this->ScalarVectorsLabel->TabIndex = 40;
			this->ScalarVectorsLabel->Text = L"v1^v2";
			// 
			// CrossPoint3textBox
			// 
			this->CrossPoint3textBox->Location = System::Drawing::Point(585, 525);
			this->CrossPoint3textBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->CrossPoint3textBox->Name = L"CrossPoint3textBox";
			this->CrossPoint3textBox->Size = System::Drawing::Size(46, 26);
			this->CrossPoint3textBox->TabIndex = 47;
			// 
			// CrossPoint2textBox
			// 
			this->CrossPoint2textBox->Location = System::Drawing::Point(528, 525);
			this->CrossPoint2textBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->CrossPoint2textBox->Name = L"CrossPoint2textBox";
			this->CrossPoint2textBox->Size = System::Drawing::Size(46, 26);
			this->CrossPoint2textBox->TabIndex = 46;
			// 
			// CrossPoint1textBox
			// 
			this->CrossPoint1textBox->Location = System::Drawing::Point(471, 525);
			this->CrossPoint1textBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->CrossPoint1textBox->Name = L"CrossPoint1textBox";
			this->CrossPoint1textBox->Size = System::Drawing::Size(46, 26);
			this->CrossPoint1textBox->TabIndex = 45;
			// 
			// CrossVectorsButton
			// 
			this->CrossVectorsButton->Location = System::Drawing::Point(400, 517);
			this->CrossVectorsButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->CrossVectorsButton->Name = L"CrossVectorsButton";
			this->CrossVectorsButton->Size = System::Drawing::Size(62, 43);
			this->CrossVectorsButton->TabIndex = 44;
			this->CrossVectorsButton->Text = L"=";
			this->CrossVectorsButton->UseVisualStyleBackColor = true;
			this->CrossVectorsButton->Click += gcnew System::EventHandler(this, &MyForm::CrossVectorsButton_Click);
			// 
			// CrossVectorsLabel
			// 
			this->CrossVectorsLabel->AutoSize = true;
			this->CrossVectorsLabel->Location = System::Drawing::Point(336, 529);
			this->CrossVectorsLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->CrossVectorsLabel->Name = L"CrossVectorsLabel";
			this->CrossVectorsLabel->Size = System::Drawing::Size(56, 20);
			this->CrossVectorsLabel->TabIndex = 43;
			this->CrossVectorsLabel->Text = L"v1 x v2";
			// 
			// TripleTextBox
			// 
			this->TripleTextBox->Location = System::Drawing::Point(471, 577);
			this->TripleTextBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->TripleTextBox->Name = L"TripleTextBox";
			this->TripleTextBox->Size = System::Drawing::Size(46, 26);
			this->TripleTextBox->TabIndex = 50;
			// 
			// MixedVectorsButton
			// 
			this->MixedVectorsButton->Location = System::Drawing::Point(400, 569);
			this->MixedVectorsButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MixedVectorsButton->Name = L"MixedVectorsButton";
			this->MixedVectorsButton->Size = System::Drawing::Size(62, 43);
			this->MixedVectorsButton->TabIndex = 49;
			this->MixedVectorsButton->Text = L"=";
			this->MixedVectorsButton->UseVisualStyleBackColor = true;
			this->MixedVectorsButton->Click += gcnew System::EventHandler(this, &MyForm::MixedVectorsButton_Click);
			// 
			// MixedVectorsLabel
			// 
			this->MixedVectorsLabel->AutoSize = true;
			this->MixedVectorsLabel->Location = System::Drawing::Point(304, 582);
			this->MixedVectorsLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->MixedVectorsLabel->Name = L"MixedVectorsLabel";
			this->MixedVectorsLabel->Size = System::Drawing::Size(80, 20);
			this->MixedVectorsLabel->TabIndex = 48;
			this->MixedVectorsLabel->Text = L" * (v1 x v2)";
			// 
			// Vector3Point3TextBox
			// 
			this->Vector3Point3TextBox->Location = System::Drawing::Point(248, 577);
			this->Vector3Point3TextBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Vector3Point3TextBox->Name = L"Vector3Point3TextBox";
			this->Vector3Point3TextBox->Size = System::Drawing::Size(46, 26);
			this->Vector3Point3TextBox->TabIndex = 55;
			this->Vector3Point3TextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::Vector3Point3TextBox_TextChanged);
			// 
			// Vector3Point2TextBox
			// 
			this->Vector3Point2TextBox->Location = System::Drawing::Point(190, 577);
			this->Vector3Point2TextBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Vector3Point2TextBox->Name = L"Vector3Point2TextBox";
			this->Vector3Point2TextBox->Size = System::Drawing::Size(46, 26);
			this->Vector3Point2TextBox->TabIndex = 54;
			this->Vector3Point2TextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::Vector3Point2TextBox_TextChanged);
			// 
			// Vector3Point1TextBox
			// 
			this->Vector3Point1TextBox->Location = System::Drawing::Point(134, 577);
			this->Vector3Point1TextBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Vector3Point1TextBox->Name = L"Vector3Point1TextBox";
			this->Vector3Point1TextBox->Size = System::Drawing::Size(46, 26);
			this->Vector3Point1TextBox->TabIndex = 53;
			this->Vector3Point1TextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::Vector3Point1TextBox_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1016, 809);
			this->Controls->Add(this->Vector3Point3TextBox);
			this->Controls->Add(this->Vector3Point2TextBox);
			this->Controls->Add(this->Vector3Point1TextBox);
			this->Controls->Add(this->TripleTextBox);
			this->Controls->Add(this->MixedVectorsButton);
			this->Controls->Add(this->MixedVectorsLabel);
			this->Controls->Add(this->CrossPoint3textBox);
			this->Controls->Add(this->CrossPoint2textBox);
			this->Controls->Add(this->CrossPoint1textBox);
			this->Controls->Add(this->CrossVectorsButton);
			this->Controls->Add(this->CrossVectorsLabel);
			this->Controls->Add(this->ScalarVectorstextBox);
			this->Controls->Add(this->ScalarVectorsButton);
			this->Controls->Add(this->ScalarVectorsLabel);
			this->Controls->Add(this->ConsttextBox);
			this->Controls->Add(this->ProizPoint3textBox);
			this->Controls->Add(this->ProizPoint2textBox);
			this->Controls->Add(this->ProizPoint1textBox);
			this->Controls->Add(this->ProizvodVectorbutton);
			this->Controls->Add(this->ProizvodVectorLabel);
			this->Controls->Add(this->SubPoint3textBox);
			this->Controls->Add(this->SubPoint2textBox);
			this->Controls->Add(this->SubPoint1textBox);
			this->Controls->Add(this->RaznVectorsButton);
			this->Controls->Add(this->SubstractionVectorsLabel);
			this->Controls->Add(this->SumPoint3textBox);
			this->Controls->Add(this->SumPoint2textBox);
			this->Controls->Add(this->SumPoint1textBox);
			this->Controls->Add(this->SumVectorsButton);
			this->Controls->Add(this->SumVectorslabel);
			this->Controls->Add(this->Vector2LengthtextBox);
			this->Controls->Add(this->Vector2NormPoint3textBox);
			this->Controls->Add(this->Vector2NormPoint2textBox);
			this->Controls->Add(this->Vector2NormPoint1textBox);
			this->Controls->Add(this->ButtonGetLNormalizedVector2);
			this->Controls->Add(this->ButtonGetLengthVector2);
			this->Controls->Add(this->Vector2Point3textBox);
			this->Controls->Add(this->Vector2Point2textBox);
			this->Controls->Add(this->Vector2Point1textBox);
			this->Controls->Add(this->Vector2NormalizedLabel);
			this->Controls->Add(this->Vector2LengthLabel);
			this->Controls->Add(this->Vector2Label);
			this->Controls->Add(this->Vector1LengthTextBox);
			this->Controls->Add(this->Vector1NormPoint3textBox);
			this->Controls->Add(this->Vector1NormPoint2textBox);
			this->Controls->Add(this->Vector1NormPoint1textBox);
			this->Controls->Add(this->ButtonGetNormalizedVector1);
			this->Controls->Add(this->ButtonGetLengthVector1);
			this->Controls->Add(this->Vector1Point3textBox);
			this->Controls->Add(this->Vector1Point2textBox);
			this->Controls->Add(this->Vector1Point1textBox);
			this->Controls->Add(this->NormalizedVector1Label);
			this->Controls->Add(this->Vector1LengthLabel);
			this->Controls->Add(this->Vector1Label);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MyForm";
			this->Text = L"VectorForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		Vector3* v1;
		Vector3* v2;
		Vector3* v3;
		int k;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
#pragma region Input
	private: System::Void Vector1Point1textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try {
			Double::Parse(Vector1Point1textBox->Text);
			if (Vector1Point2textBox->Text != nullptr && Vector1Point3textBox->Text != nullptr) {
				v1 = new Vector3(Double::Parse(Vector1Point1textBox->Text), Double::Parse(Vector1Point2textBox->Text), Double::Parse(Vector1Point3textBox->Text));
			}
		}
		catch (...) {

		}
	}
	private: System::Void Vector1Point2textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try {
			Double::Parse(Vector1Point2textBox->Text);
			if (Vector1Point1textBox->Text != nullptr && Vector1Point3textBox->Text != nullptr) {
				v1 = new Vector3(Double::Parse(Vector1Point1textBox->Text), Double::Parse(Vector1Point2textBox->Text), Double::Parse(Vector1Point3textBox->Text));
			}
		}
		catch (...) {

		}
	}
	private: System::Void Vector1Point3textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try {
			Double::Parse(Vector1Point3textBox->Text);
			if (Vector1Point2textBox->Text != nullptr && Vector1Point1textBox->Text != nullptr) {
				v1 = new Vector3(Double::Parse(Vector1Point1textBox->Text), Double::Parse(Vector1Point2textBox->Text), Double::Parse(Vector1Point3textBox->Text));
			}
		}
		catch (...) {

		}
	}
	private: System::Void Vector2Point1textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try {
			Double::Parse(Vector2Point1textBox->Text);
			if (Vector2Point2textBox->Text != nullptr && Vector2Point3textBox->Text != nullptr) {
				v2 = new Vector3(Double::Parse(Vector2Point1textBox->Text), Double::Parse(Vector2Point2textBox->Text), Double::Parse(Vector2Point3textBox->Text));
			}
		}
		catch (...) {

		}
	}
	private: System::Void Vector2Point2textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try {
			Double::Parse(Vector2Point2textBox->Text);
			if (Vector2Point1textBox->Text != nullptr && Vector2Point3textBox->Text != nullptr) {
				v2 = new Vector3(Double::Parse(Vector2Point1textBox->Text), Double::Parse(Vector2Point2textBox->Text), Double::Parse(Vector2Point3textBox->Text));
			}
		}
		catch (...) {

		}
	}
	private: System::Void Vector2Point3textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try {
			Double::Parse(Vector2Point3textBox->Text);
			if (Vector2Point2textBox->Text != nullptr && Vector2Point1textBox->Text != nullptr) {
				v2 = new Vector3(Double::Parse(Vector2Point1textBox->Text), Double::Parse(Vector2Point2textBox->Text), Double::Parse(Vector2Point3textBox->Text));
			}
		}
		catch (...) {

		}
	}
	private: System::Void Vector3Point1TextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try {
			Double::Parse(Vector3Point1TextBox->Text);
			if (Vector3Point2TextBox->Text != nullptr && Vector3Point3TextBox->Text != nullptr) {
				v3 = new Vector3(Double::Parse(Vector3Point1TextBox->Text), Double::Parse(Vector3Point2TextBox->Text), Double::Parse(Vector3Point3TextBox->Text));
			}
		}
		catch (...) {

		}
	}
	private: System::Void Vector3Point2TextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try {
			Double::Parse(Vector3Point2TextBox->Text);
			if (Vector3Point1TextBox->Text != nullptr && Vector3Point3TextBox->Text != nullptr) {
				v3 = new Vector3(Double::Parse(Vector3Point1TextBox->Text), Double::Parse(Vector3Point2TextBox->Text), Double::Parse(Vector3Point3TextBox->Text));
			}
		}
		catch (...) {

		}
	}
	private: System::Void Vector3Point3TextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try {
			Double::Parse(Vector3Point3TextBox->Text);
			if (Vector3Point2TextBox->Text != nullptr && Vector3Point1TextBox->Text != nullptr) {
				v3 = new Vector3(Double::Parse(Vector3Point1TextBox->Text), Double::Parse(Vector3Point2TextBox->Text), Double::Parse(Vector3Point3TextBox->Text));
			}
		}
		catch (...) {

		}
	}
	private: System::Void ConsttextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try {
			k = Int32::Parse(ConsttextBox->Text);
		}
		catch (...) {

		}
	}
	
#pragma endregion
#pragma region Function
	private: System::Void ButtonGetLengthVector1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (v1 == nullptr)
			return;

		Vector1LengthTextBox->Text = v1->GetLength().ToString();
	}
	private: System::Void ButtonGetNormalizedVector1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (v1 == nullptr)
			return;

		Vector3 normalized = v1->GetNormolized();
		Vector1NormPoint1textBox->Text = normalized.GetPoint1().ToString();
		Vector1NormPoint2textBox->Text = normalized.GetPoint2().ToString();
		Vector1NormPoint3textBox->Text = normalized.GetPoint3().ToString();
	}
	private: System::Void ButtonGetLengthVector2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (v2 == nullptr)
			return;

		Vector2LengthtextBox->Text = v2->GetLength().ToString();
	}
	private: System::Void ButtonGetLNormalizedVector2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (v2 == nullptr)
			return;

		Vector3 normalized = v2->GetNormolized();
		Vector2NormPoint1textBox->Text = normalized.GetPoint1().ToString();
		Vector2NormPoint2textBox->Text = normalized.GetPoint2().ToString();
		Vector2NormPoint3textBox->Text = normalized.GetPoint3().ToString();
	}
	private: System::Void SumVectorsButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (v1 == nullptr && v2 == nullptr)
			return;

		Vector3 c;
		Vector3 vector1(v1->GetPoint1(), v1->GetPoint2(), v1->GetPoint3());
		Vector3 vector2(v2->GetPoint1(), v2->GetPoint2(), v2->GetPoint3());
		c = vector1 + vector2;

		SumPoint1textBox->Text = c.GetPoint1().ToString();
		SumPoint2textBox->Text = c.GetPoint2().ToString();
		SumPoint3textBox->Text = c.GetPoint3().ToString();
	}
	private: System::Void RaznVectorsButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (v1 == nullptr && v2 == nullptr)
			return;

		Vector3 c;
		Vector3 vector1(v1->GetPoint1(), v1->GetPoint2(), v1->GetPoint3());
		Vector3 vector2(v2->GetPoint1(), v2->GetPoint2(), v2->GetPoint3());
		c = vector1 - vector2;

		SubPoint1textBox->Text = c.GetPoint1().ToString();
		SubPoint2textBox->Text = c.GetPoint2().ToString();
		SubPoint3textBox->Text = c.GetPoint3().ToString();
	}
	private: System::Void ProizvodVectorbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (v1 == nullptr)
			return;

		Vector3 c;
		Vector3 vector1(v1->GetPoint1(), v1->GetPoint2(), v1->GetPoint3());
		c = vector1 * k;

		ProizPoint1textBox->Text = c.GetPoint1().ToString();
		ProizPoint2textBox->Text = c.GetPoint2().ToString();
		ProizPoint3textBox->Text = c.GetPoint3().ToString();
	}
	private: System::Void ScalarVectorsButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (v1 == nullptr && v2 == nullptr)
			return;

		double c;
		Vector3 vector1(v1->GetPoint1(), v1->GetPoint2(), v1->GetPoint3());
		Vector3 vector2(v2->GetPoint1(), v2->GetPoint2(), v2->GetPoint3());
		c = vector1 ^ vector2;

		ScalarVectorstextBox->Text = c.ToString();
	}
	private: System::Void CrossVectorsButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (v1 == nullptr && v2 == nullptr)
			return;

		Vector3 c;
		Vector3 vector1(v1->GetPoint1(), v1->GetPoint2(), v1->GetPoint3());
		Vector3 vector2(v2->GetPoint1(), v2->GetPoint2(), v2->GetPoint3());
		c = c.GetCross(vector1, vector2);

		CrossPoint1textBox->Text = c.GetPoint1().ToString();
		CrossPoint2textBox->Text = c.GetPoint2().ToString();
		CrossPoint3textBox->Text = c.GetPoint3().ToString();
	}
	private: System::Void MixedVectorsButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (v1 == nullptr && v2 == nullptr && v3 == nullptr)
			return;

		Vector3 c;
		Vector3 vector1(v1->GetPoint1(), v1->GetPoint2(), v1->GetPoint3());
		Vector3 vector2(v2->GetPoint1(), v2->GetPoint2(), v2->GetPoint3());
		Vector3 vector3(v3->GetPoint1(), v3->GetPoint2(), v3->GetPoint3());
		c = c.GetCross(vector1, vector2);
		double k = vector3 ^ c;

		TripleTextBox->Text = k.ToString();
	}
#pragma endregion
#pragma region Clear
#pragma endregion


};
}
