#include "MainMenu1.h"
#include "form2.h"
#include "login.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main() {
	
	Windows::Forms::Application::EnableVisualStyles();
	Windows::Forms::Application::SetCompatibleTextRenderingDefault(false);
	Windows::Forms::Application::Run(gcnew TransportSystem::MainMenu1());
	Windows::Forms::Application::Run(gcnew TransportSystem::form2());
	Windows::Forms::Application::Run(gcnew TransportSystem::login());
	return 0;

}