#include "MainWindow.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main(){

	System::IO::StreamReader^ location;
	FreeConsole();
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	PMTProject::MainWindow form;
	Application::Run(%form);
}
