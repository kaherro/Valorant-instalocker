#pragma comment(lib, "User32.lib")

#include "MyForm.h"

#include <Windows.h>



using namespace System; 
using namespace System::Windows::Forms; 
[STAThread]

int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 
	instalocker::MyForm form;
	Application::Run(% form); 
}