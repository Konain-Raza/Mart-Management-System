#include "loading_page.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]

int main() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    MartBillingSystem::loading_page form;
    Application::Run(% form);
}
