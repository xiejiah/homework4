#include "MyForm.h"
using namespace SoftProject4;


int Main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MyForm^ form = gcnew MyForm;
	Application::Run(form);
	return 0;
}
