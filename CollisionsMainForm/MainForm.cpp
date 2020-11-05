#include "MainForm.h"

using namespace std;
using namespace System;
using namespace System::Windows::Forms;

int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CollisionsMainForm::MainForm mainForm;
	Application::Run(%mainForm);
}
