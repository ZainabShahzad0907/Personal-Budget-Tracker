#include <Windows.h>
#include <string>
#include <iostream>
#include <msclr\marshal_cppstd.h>
#include "MainPage.h"
//#include "LoginForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
//int main(array<System::String ^ > ^ args)
int main()
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    PBTProject::MainPage form;
    Application::Run(% form);
    return 0;
}
