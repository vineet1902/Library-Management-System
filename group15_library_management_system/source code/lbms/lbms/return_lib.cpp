#include "StdAfx.h"
#include "issue_lib.h"
#include "home_lib.h"
#include "requests_lib.h"
#include "return_lib.h"
#include "add_book_lib.h"
#include "remove_book_lib.h"
#include "renew_lib.h"
#include "search_lib2.h"

System::Void lbms::return_lib::button11_Click(System::Object^  sender, System::EventArgs^  e) {//Button11 is the button to go from return_lib form to home_lib form
	this->Hide();
	home_lib^ frm1=gcnew home_lib();
	frm1->ShowDialog();
}
System::Void lbms::return_lib::button9_Click(System::Object^  sender, System::EventArgs^  e) {//Button11 is the button to go from return_lib form to issue_lib form
	this->Hide();
	issue_lib^ frm1=gcnew issue_lib();
	frm1->ShowDialog();
}
System::Void lbms::return_lib::button7_Click(System::Object^  sender, System::EventArgs^  e) {//Button11 is the button to go from return_lib form to renew_lib form
	this->Hide();
	renew_lib^ frm1=gcnew renew_lib();
	frm1->ShowDialog();
}
System::Void lbms::return_lib::button6_Click(System::Object^  sender, System::EventArgs^  e) {//Button11 is the button to go from return_lib form to add_book_lib form
	this->Hide();
	add_book_lib^ frm1=gcnew add_book_lib();
	frm1->ShowDialog();
}
System::Void lbms::return_lib::button4_Click(System::Object^  sender, System::EventArgs^  e) {//Button11 is the button to go from return_lib form to remove_book_lib form
	this->Hide();
	remove_book_lib^ frm1=gcnew remove_book_lib();
	frm1->ShowDialog();
}
System::Void lbms::return_lib::button10_Click(System::Object^  sender, System::EventArgs^  e) {//Button11 is the button to go from return_lib form to requests_lib form
	this->Hide();
	requests_lib^ frm1=gcnew requests_lib();
	frm1->ShowDialog();
}
System::Void lbms::return_lib::button2_Click(System::Object^  sender, System::EventArgs^  e) {//Button11 is the button to go from return_lib form to search_lib form
	this->Hide();
	search_lib^ frm1=gcnew search_lib();
	frm1->ShowDialog();
}
