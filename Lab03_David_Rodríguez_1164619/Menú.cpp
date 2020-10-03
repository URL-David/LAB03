#include "Menú.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	Lab03DavidRodríguez1164619::Menú mainForm;
	Application::Run(% mainForm);
	return 0;

}