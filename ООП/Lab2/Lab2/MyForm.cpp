#include "MyForm.h"

#include <Windows.h>
#include "CustomArray.h"
using namespace Lab2;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm);
    return 0;
}

CustomArray arr;

System::Void Lab2::MyForm::CreateMassiveButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    try 
    {
        arr.Scan(System::Int32::Parse(MassiveLengthTextBox->Text));
    }
    catch(...)
    {
        
    }
    OutputMassive1->Text = arr.Print();
}

System::Void Lab2::MyForm::AddElementButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    arr += System::Int32::Parse(AddElementTextBox->Text);
    OutputMassive2->Text = arr.Print();
}

System::Void Lab2::MyForm::DeleteElementButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    arr -= System::Int32::Parse(DeleteElementTextBox->Text);
    OutputMassive3->Text = arr.Print();
}

System::Void Lab2::MyForm::DeleteIndexButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    arr.DelPosEq(System::Int32::Parse(DeleteIndexTextBox->Text));
    OutputMassive4->Text = arr.Print();
}

System::Void Lab2::MyForm::SortMassiveButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    arr.Sorting();
    OutputMassive5->Text = arr.Print();
}
#pragma region Clear
    System::Void Lab2::MyForm::ClearButton_Click(System::Object^ sender, System::EventArgs^ e)
    {
        MassiveLengthTextBox->Clear();
        AddElementTextBox->Clear();
        DeleteElementTextBox->Clear();
        DeleteIndexTextBox->Clear();
        OutputMassive1->Clear();
        OutputMassive2->Clear();
        OutputMassive3->Clear();
        OutputMassive4->Clear();
        OutputMassive5->Clear();
    }
#pragma endregion


