#include "SignIn.h"
#include"Admin_Panel.h"
#include"Passenger.h"
#include"Pilot_Panel.h"
#include"Staff_Panel.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]


int main(array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew AIRLINES::SignIn());
}


