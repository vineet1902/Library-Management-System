#include "StdAfx.h"
#include "issue_lib.h"
#include "home_lib.h"
#include "requests_lib.h"
#include "return_lib.h"
#include "add_book_lib.h"
#include "remove_book_lib.h"
#include "renew_lib.h"

System::Void lbms::requests_lib::button11_Click(System::Object^  sender, System::EventArgs^  e) {//Button11 is the button to go from requests_lib form to home_lib form
	this->Hide();
	this->Hide();
	home_lib^ frm1=gcnew home_lib();
	frm1->ShowDialog();
}
System::Void lbms::requests_lib::button9_Click(System::Object^  sender, System::EventArgs^  e) {//Button11 is the button to go from requests_lib form to issue_lib form
	this->Hide();
	issue_lib^ frm1=gcnew issue_lib();
	frm1->ShowDialog();
}
System::Void lbms::requests_lib::button5_Click(System::Object^  sender, System::EventArgs^  e) {//Button11 is the button to go from requests_lib form to return_lib form
	this->Hide();
	return_lib^ frm1=gcnew return_lib();
	frm1->ShowDialog();
}
System::Void lbms::requests_lib::button7_Click(System::Object^  sender, System::EventArgs^  e) {//Button11 is the button to go from requests_lib form to renew_lib form
	this->Hide();
	renew_lib^ frm1=gcnew renew_lib();
	frm1->ShowDialog();
}
System::Void lbms::requests_lib::button6_Click(System::Object^  sender, System::EventArgs^  e) {//Button11 is the button to go from requests_lib form to add_book_lib form
	this->Hide();
	add_book_lib^ frm1=gcnew add_book_lib();
	frm1->ShowDialog();
}
System::Void lbms::requests_lib::button4_Click(System::Object^  sender, System::EventArgs^  e) {//Button11 is the button to go from requests_lib form to remove_lib form
	this->Hide();
	remove_book_lib^ frm1=gcnew remove_book_lib();
	frm1->ShowDialog();
}
System::Void lbms::requests_lib::button3_Click(System::Object^  sender, System::EventArgs^  e)
{//Button11 is the button to go from requests_lib form to search_lib form
	this->Hide();
	search_lib^ frm1=gcnew search_lib();
	frm1->ShowDialog();
}