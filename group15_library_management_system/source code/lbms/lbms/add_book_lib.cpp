#include "StdAfx.h"
#include "add_book_lib.h"
#include "home_lib.h"
#include "requests_lib.h"
#include "return_lib.h"
#include "issue_lib.h"
#include "remove_book_lib.h"
#include "renew_lib.h"
#include "search_lib2.h"


System::Void lbms::add_book_lib::home_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	home_lib^ frm1=gcnew home_lib();
	frm1->ShowDialog();
}
System::Void lbms::add_book_lib::removebook_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	remove_book_lib^ frm1=gcnew remove_book_lib();
	frm1->ShowDialog();
}
System::Void lbms::add_book_lib::issue_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	issue_lib^ frm1=gcnew issue_lib();
	frm1->ShowDialog();
}
System::Void lbms::add_book_lib::renew_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	renew_lib^ frm1=gcnew renew_lib();
	frm1->ShowDialog();
}
System::Void lbms::add_book_lib::book_return_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	return_lib^ frm1=gcnew return_lib();
	frm1->ShowDialog();
}
System::Void lbms::add_book_lib::requests_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	requests_lib^ frm1=gcnew requests_lib();
	frm1->ShowDialog();
}

System::Void lbms::add_book_lib::button1_Click(System::Object^  sender, System::EventArgs^  e){
	this->Hide();
	search_lib^ frm1=gcnew search_lib();
	frm1->ShowDialog();
}