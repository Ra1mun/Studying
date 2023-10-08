#pragma once

namespace Lab2 {
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
	private: System::Windows::Forms::Button^ CreateMassiveButton;
	private: System::Windows::Forms::Button^ AddElementButton;
	private: System::Windows::Forms::Button^ DeleteElementButton;
	private: System::Windows::Forms::Button^ DeleteIndexButton;
	private: System::Windows::Forms::Button^ SortMassiveButton;

	protected:

	protected:




	private: System::Windows::Forms::Label^ HeaderLabel;
	private: System::Windows::Forms::TextBox^ MassiveLengthTextBox;
	private: System::Windows::Forms::Label^ MassiveLengthLabel;
	private: System::Windows::Forms::Label^ AddElementLabel;
	private: System::Windows::Forms::TextBox^ AddElementTextBox;
	private: System::Windows::Forms::Label^ DeleteElementLabel;



	private: System::Windows::Forms::TextBox^ DeleteElementTextBox;
	private: System::Windows::Forms::TextBox^ OutputMassive1;


	private: System::Windows::Forms::Button^ ClearButton;
	private: System::Windows::Forms::Label^ DeleteIndexLabel;

	private: System::Windows::Forms::TextBox^ DeleteIndexTextBox;
	private: System::Windows::Forms::TextBox^ OutputMassive2;

	private: System::Windows::Forms::TextBox^ OutputMassive3;
	private: System::Windows::Forms::TextBox^ OutputMassive4;
	private: System::Windows::Forms::TextBox^ OutputMassive5;








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
			this->CreateMassiveButton = (gcnew System::Windows::Forms::Button());
			this->AddElementButton = (gcnew System::Windows::Forms::Button());
			this->DeleteElementButton = (gcnew System::Windows::Forms::Button());
			this->DeleteIndexButton = (gcnew System::Windows::Forms::Button());
			this->SortMassiveButton = (gcnew System::Windows::Forms::Button());
			this->HeaderLabel = (gcnew System::Windows::Forms::Label());
			this->MassiveLengthTextBox = (gcnew System::Windows::Forms::TextBox());
			this->MassiveLengthLabel = (gcnew System::Windows::Forms::Label());
			this->AddElementLabel = (gcnew System::Windows::Forms::Label());
			this->AddElementTextBox = (gcnew System::Windows::Forms::TextBox());
			this->DeleteElementLabel = (gcnew System::Windows::Forms::Label());
			this->DeleteElementTextBox = (gcnew System::Windows::Forms::TextBox());
			this->OutputMassive1 = (gcnew System::Windows::Forms::TextBox());
			this->ClearButton = (gcnew System::Windows::Forms::Button());
			this->DeleteIndexLabel = (gcnew System::Windows::Forms::Label());
			this->DeleteIndexTextBox = (gcnew System::Windows::Forms::TextBox());
			this->OutputMassive2 = (gcnew System::Windows::Forms::TextBox());
			this->OutputMassive3 = (gcnew System::Windows::Forms::TextBox());
			this->OutputMassive4 = (gcnew System::Windows::Forms::TextBox());
			this->OutputMassive5 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// CreateMassiveButton
			// 
			this->CreateMassiveButton->Location = System::Drawing::Point(231, 68);
			this->CreateMassiveButton->Name = L"CreateMassiveButton";
			this->CreateMassiveButton->Size = System::Drawing::Size(124, 52);
			this->CreateMassiveButton->TabIndex = 0;
			this->CreateMassiveButton->Text = L"—оздать";
			this->CreateMassiveButton->UseVisualStyleBackColor = true;
			this->CreateMassiveButton->Click += gcnew System::EventHandler(this, &MyForm::CreateMassiveButton_Click);
			// 
			// AddElementButton
			// 
			this->AddElementButton->Location = System::Drawing::Point(231, 126);
			this->AddElementButton->Name = L"AddElementButton";
			this->AddElementButton->Size = System::Drawing::Size(124, 52);
			this->AddElementButton->TabIndex = 1;
			this->AddElementButton->Text = L"результат";
			this->AddElementButton->UseVisualStyleBackColor = true;
			this->AddElementButton->Click += gcnew System::EventHandler(this, &MyForm::AddElementButton_Click);
			// 
			// DeleteElementButton
			// 
			this->DeleteElementButton->Location = System::Drawing::Point(231, 184);
			this->DeleteElementButton->Name = L"DeleteElementButton";
			this->DeleteElementButton->Size = System::Drawing::Size(124, 52);
			this->DeleteElementButton->TabIndex = 2;
			this->DeleteElementButton->Text = L"результат";
			this->DeleteElementButton->UseVisualStyleBackColor = true;
			this->DeleteElementButton->Click += gcnew System::EventHandler(this, &MyForm::DeleteElementButton_Click);
			// 
			// DeleteIndexButton
			// 
			this->DeleteIndexButton->Location = System::Drawing::Point(231, 242);
			this->DeleteIndexButton->Name = L"DeleteIndexButton";
			this->DeleteIndexButton->Size = System::Drawing::Size(124, 52);
			this->DeleteIndexButton->TabIndex = 3;
			this->DeleteIndexButton->Text = L"результат";
			this->DeleteIndexButton->UseVisualStyleBackColor = true;
			this->DeleteIndexButton->Click += gcnew System::EventHandler(this, &MyForm::DeleteIndexButton_Click);
			// 
			// SortMassiveButton
			// 
			this->SortMassiveButton->Location = System::Drawing::Point(231, 300);
			this->SortMassiveButton->Name = L"SortMassiveButton";
			this->SortMassiveButton->Size = System::Drawing::Size(124, 52);
			this->SortMassiveButton->TabIndex = 4;
			this->SortMassiveButton->Text = L"сортировать";
			this->SortMassiveButton->UseVisualStyleBackColor = true;
			this->SortMassiveButton->Click += gcnew System::EventHandler(this, &MyForm::SortMassiveButton_Click);
			// 
			// HeaderLabel
			// 
			this->HeaderLabel->AutoSize = true;
			this->HeaderLabel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->HeaderLabel->ForeColor = System::Drawing::SystemColors::Highlight;
			this->HeaderLabel->Location = System::Drawing::Point(106, 19);
			this->HeaderLabel->Name = L"HeaderLabel";
			this->HeaderLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->HeaderLabel->Size = System::Drawing::Size(416, 46);
			this->HeaderLabel->TabIndex = 5;
			this->HeaderLabel->Text = L"ƒействи€ с массивом";
			// 
			// MassiveLengthTextBox
			// 
			this->MassiveLengthTextBox->Location = System::Drawing::Point(160, 85);
			this->MassiveLengthTextBox->Name = L"MassiveLengthTextBox";
			this->MassiveLengthTextBox->Size = System::Drawing::Size(65, 20);
			this->MassiveLengthTextBox->TabIndex = 6;
			// 
			// MassiveLengthLabel
			// 
			this->MassiveLengthLabel->AutoSize = true;
			this->MassiveLengthLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MassiveLengthLabel->Location = System::Drawing::Point(17, 86);
			this->MassiveLengthLabel->Name = L"MassiveLengthLabel";
			this->MassiveLengthLabel->Size = System::Drawing::Size(137, 16);
			this->MassiveLengthLabel->TabIndex = 7;
			this->MassiveLengthLabel->Text = L"число элементов";
			// 
			// AddElementLabel
			// 
			this->AddElementLabel->AutoSize = true;
			this->AddElementLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AddElementLabel->Location = System::Drawing::Point(9, 143);
			this->AddElementLabel->Name = L"AddElementLabel";
			this->AddElementLabel->Size = System::Drawing::Size(145, 16);
			this->AddElementLabel->TabIndex = 9;
			this->AddElementLabel->Text = L"добавить элемент";
			// 
			// AddElementTextBox
			// 
			this->AddElementTextBox->Location = System::Drawing::Point(160, 143);
			this->AddElementTextBox->Name = L"AddElementTextBox";
			this->AddElementTextBox->Size = System::Drawing::Size(65, 20);
			this->AddElementTextBox->TabIndex = 8;
			// 
			// DeleteElementLabel
			// 
			this->DeleteElementLabel->AutoSize = true;
			this->DeleteElementLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DeleteElementLabel->Location = System::Drawing::Point(18, 201);
			this->DeleteElementLabel->Name = L"DeleteElementLabel";
			this->DeleteElementLabel->Size = System::Drawing::Size(136, 16);
			this->DeleteElementLabel->TabIndex = 11;
			this->DeleteElementLabel->Text = L"удалить элемент";
			// 
			// DeleteElementTextBox
			// 
			this->DeleteElementTextBox->Location = System::Drawing::Point(160, 201);
			this->DeleteElementTextBox->Name = L"DeleteElementTextBox";
			this->DeleteElementTextBox->Size = System::Drawing::Size(65, 20);
			this->DeleteElementTextBox->TabIndex = 10;
			// 
			// OutputMassive1
			// 
			this->OutputMassive1->Location = System::Drawing::Point(358, 69);
			this->OutputMassive1->Name = L"OutputMassive1";
			this->OutputMassive1->Size = System::Drawing::Size(352, 20);
			this->OutputMassive1->TabIndex = 12;
			// 
			// ClearButton
			// 
			this->ClearButton->Location = System::Drawing::Point(231, 358);
			this->ClearButton->Name = L"ClearButton";
			this->ClearButton->Size = System::Drawing::Size(124, 52);
			this->ClearButton->TabIndex = 13;
			this->ClearButton->Text = L"ќчистить";
			this->ClearButton->UseVisualStyleBackColor = true;
			this->ClearButton->Click += gcnew System::EventHandler(this, &MyForm::ClearButton_Click);
			// 
			// DeleteIndexLabel
			// 
			this->DeleteIndexLabel->AutoSize = true;
			this->DeleteIndexLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DeleteIndexLabel->Location = System::Drawing::Point(16, 260);
			this->DeleteIndexLabel->Name = L"DeleteIndexLabel";
			this->DeleteIndexLabel->Size = System::Drawing::Size(138, 16);
			this->DeleteIndexLabel->TabIndex = 15;
			this->DeleteIndexLabel->Text = L"удалить позицию";
			// 
			// DeleteIndexTextBox
			// 
			this->DeleteIndexTextBox->Location = System::Drawing::Point(160, 259);
			this->DeleteIndexTextBox->Name = L"DeleteIndexTextBox";
			this->DeleteIndexTextBox->Size = System::Drawing::Size(65, 20);
			this->DeleteIndexTextBox->TabIndex = 14;
			// 
			// OutputMassive2
			// 
			this->OutputMassive2->Location = System::Drawing::Point(358, 126);
			this->OutputMassive2->Name = L"OutputMassive2";
			this->OutputMassive2->Size = System::Drawing::Size(352, 20);
			this->OutputMassive2->TabIndex = 16;
			// 
			// OutputMassive3
			// 
			this->OutputMassive3->Location = System::Drawing::Point(358, 184);
			this->OutputMassive3->Name = L"OutputMassive3";
			this->OutputMassive3->Size = System::Drawing::Size(352, 20);
			this->OutputMassive3->TabIndex = 17;
			// 
			// OutputMassive4
			// 
			this->OutputMassive4->Location = System::Drawing::Point(358, 242);
			this->OutputMassive4->Name = L"OutputMassive4";
			this->OutputMassive4->Size = System::Drawing::Size(352, 20);
			this->OutputMassive4->TabIndex = 18;
			// 
			// OutputMassive5
			// 
			this->OutputMassive5->Location = System::Drawing::Point(358, 300);
			this->OutputMassive5->Name = L"OutputMassive5";
			this->OutputMassive5->Size = System::Drawing::Size(352, 20);
			this->OutputMassive5->TabIndex = 19;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(748, 451);
			this->Controls->Add(this->OutputMassive5);
			this->Controls->Add(this->OutputMassive4);
			this->Controls->Add(this->OutputMassive3);
			this->Controls->Add(this->OutputMassive2);
			this->Controls->Add(this->DeleteIndexLabel);
			this->Controls->Add(this->DeleteIndexTextBox);
			this->Controls->Add(this->ClearButton);
			this->Controls->Add(this->OutputMassive1);
			this->Controls->Add(this->DeleteElementLabel);
			this->Controls->Add(this->DeleteElementTextBox);
			this->Controls->Add(this->AddElementLabel);
			this->Controls->Add(this->AddElementTextBox);
			this->Controls->Add(this->MassiveLengthLabel);
			this->Controls->Add(this->MassiveLengthTextBox);
			this->Controls->Add(this->HeaderLabel);
			this->Controls->Add(this->SortMassiveButton);
			this->Controls->Add(this->DeleteIndexButton);
			this->Controls->Add(this->DeleteElementButton);
			this->Controls->Add(this->AddElementButton);
			this->Controls->Add(this->CreateMassiveButton);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	/*private:
		CustomArray* array;*/
#pragma region ButtonActions
	private: System::Void CreateMassiveButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void AddElementButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void DeleteElementButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void DeleteIndexButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void SortMassiveButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ClearButton_Click(System::Object^ sender, System::EventArgs^ e);
#pragma endregion
};
}
