#include "MyForm.h"

#include <Windows.h>

using namespace имя_вашего_проекта;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew Form1);
    return 0;
}