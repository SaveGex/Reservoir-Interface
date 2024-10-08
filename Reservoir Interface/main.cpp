#include "MyForm.h"
#include <sstream>
#include "Windows.h"
#include <string>


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	ReservoirInterface::MyForm form;
	Application::Run(% form);
}