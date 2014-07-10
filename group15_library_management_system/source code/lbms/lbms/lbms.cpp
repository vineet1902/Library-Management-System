// lbms.cpp : main project file.

#include "StdAfx.h"
#include "issue_lib.h"
#include "home_lib.h"
#include "requests_lib.h"
#include "return_lib.h"
#include "add_book_lib.h"
#include "remove_book_lib.h"
#include "renew_lib.h"
#include "search_lib2.h"
#include "home.h"
using namespace lbms;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew Form1());
	return 0;
}
