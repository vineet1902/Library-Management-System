#include "StdAfx.h"
#include "issue_lib.h"
#include "home_lib.h"
#include "requests_lib.h"
#include "return_lib.h"
#include "add_book_lib.h"
#include "remove_book_lib.h"
#include "renew_lib.h"
#include "search_lib2.h"

System::Void lbms::search_lib::button11_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	home_lib^ frm1=gcnew home_lib();
	frm1->ShowDialog();

}
System::Void lbms::search_lib:: button9_Click(System::Object^  sender, System::EventArgs^  e){
	this->Hide();
	issue_lib^ frm1=gcnew issue_lib();
	frm1->ShowDialog();

}
System::Void lbms::search_lib:: button5_Click(System::Object^  sender, System::EventArgs^  e){
	this->Hide();
	return_lib^ frm1=gcnew return_lib();
	frm1->ShowDialog();

}
System::Void lbms::search_lib:: button7_Click(System::Object^  sender, System::EventArgs^  e)
{
	this->Hide();
	renew_lib^ frm1=gcnew renew_lib();
	frm1->ShowDialog();
}
System::Void lbms::search_lib::button6_Click(System::Object^  sender, System::EventArgs^  e){
	this->Hide();
	add_book_lib^ frm1=gcnew add_book_lib();
	frm1->ShowDialog();
}
System::Void lbms::search_lib::button4_Click(System::Object^  sender, System::EventArgs^  e){
	this->Hide();
	remove_book_lib^ frm1=gcnew remove_book_lib();
	frm1->ShowDialog();
}
System::Void lbms::search_lib::button10_Click(System::Object^  sender, System::EventArgs^  e){
	this->Hide();
	requests_lib^ frm1=gcnew requests_lib();
	frm1->ShowDialog();
}


