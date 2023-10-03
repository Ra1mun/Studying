#include "MyForm.h"

#include <Windows.h>

using namespace Lab2;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm);
    return 0;
}

System::Void Lab2::MyForm::CreateMassiveButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    
}

System::Void Lab2::MyForm::DeleteElementButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void Lab2::MyForm::DeleteIndexButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void Lab2::MyForm::SortMassiveButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
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


