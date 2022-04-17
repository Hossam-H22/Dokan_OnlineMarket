#include "HomeGUI.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(array<String^>^ args)
{

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	DokanOnlineMarket::HomeGUI form;
	Application::Run(% form);

}
