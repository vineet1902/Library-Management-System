#pragma once
///Included the header files to link the forms... For other forms this is done in their corresponding .cpp files..../////
#include "stdafx.h"
#include "add_book_lib.h"
//#include "home_lib.h"
#include "issue_lib.h"
#include "remove_book_lib.h"
#include "renew_lib.h"
#include "requests_lib.h"
//#include "resource.h"
#include "return_lib.h"
#include "search_lib2.h"

namespace lbms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for home_lib
	/// </summary>
	public ref class home_lib : public System::Windows::Forms::Form
	{
	public:
		home_lib(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}


	///............System Generated Files for components and their corresponding functions../////

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~home_lib()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  home;
	protected: 

	protected: 
	private: System::Windows::Forms::Button^  issue;
	private: System::Windows::Forms::Button^  renew;
	private: System::Windows::Forms::Button^  book_return;
	private: System::Windows::Forms::Button^  requests;
	private: System::Windows::Forms::Button^  addbook;
	private: System::Windows::Forms::Button^  removebook;
	private: System::Windows::Forms::GroupBox^  Navigation;
	private: System::Windows::Forms::Button^  logout;


	private: System::Windows::Forms::ComboBox^  category;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  rollNo;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  viewAcc;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::TextBox^  invisible;
	private: System::Windows::Forms::Button^  button1;


	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->home = (gcnew System::Windows::Forms::Button());
			this->issue = (gcnew System::Windows::Forms::Button());
			this->renew = (gcnew System::Windows::Forms::Button());
			this->book_return = (gcnew System::Windows::Forms::Button());
			this->requests = (gcnew System::Windows::Forms::Button());
			this->addbook = (gcnew System::Windows::Forms::Button());
			this->removebook = (gcnew System::Windows::Forms::Button());
			this->Navigation = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->logout = (gcnew System::Windows::Forms::Button());
			this->category = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->rollNo = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->viewAcc = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->invisible = (gcnew System::Windows::Forms::TextBox());
			this->Navigation->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// home
			// 
			this->home->BackColor = System::Drawing::Color::Gray;
			this->home->ForeColor = System::Drawing::Color::Black;
			this->home->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->home->Location = System::Drawing::Point(6, 30);
			this->home->Name = L"home";
			this->home->Size = System::Drawing::Size(90, 23);
			this->home->TabIndex = 0;
			this->home->Text = L"Home";
			this->home->UseVisualStyleBackColor = false;
			// 
			// issue
			// 
			this->issue->ForeColor = System::Drawing::Color::Black;
			this->issue->Location = System::Drawing::Point(102, 30);
			this->issue->Name = L"issue";
			this->issue->Size = System::Drawing::Size(92, 23);
			this->issue->TabIndex = 1;
			this->issue->Text = L"Books Issue";
			this->issue->UseVisualStyleBackColor = true;
			this->issue->Click += gcnew System::EventHandler(this, &home_lib::issue_Click);
			// 
			// renew
			// 
			this->renew->ForeColor = System::Drawing::Color::Black;
			this->renew->Location = System::Drawing::Point(200, 30);
			this->renew->Name = L"renew";
			this->renew->Size = System::Drawing::Size(91, 23);
			this->renew->TabIndex = 2;
			this->renew->Text = L"Books Renew";
			this->renew->UseVisualStyleBackColor = true;
			this->renew->Click += gcnew System::EventHandler(this, &home_lib::renew_Click);
			// 
			// book_return
			// 
			this->book_return->ForeColor = System::Drawing::Color::Black;
			this->book_return->Location = System::Drawing::Point(297, 30);
			this->book_return->Name = L"book_return";
			this->book_return->Size = System::Drawing::Size(102, 23);
			this->book_return->TabIndex = 3;
			this->book_return->Text = L"Books Return";
			this->book_return->UseVisualStyleBackColor = true;
			this->book_return->Click += gcnew System::EventHandler(this, &home_lib::book_return_Click);
			// 
			// requests
			// 
			this->requests->ForeColor = System::Drawing::Color::Black;
			this->requests->Location = System::Drawing::Point(297, 59);
			this->requests->Name = L"requests";
			this->requests->Size = System::Drawing::Size(102, 23);
			this->requests->TabIndex = 4;
			this->requests->Text = L"Requests";
			this->requests->UseVisualStyleBackColor = true;
			this->requests->Click += gcnew System::EventHandler(this, &home_lib::requests_Click);
			// 
			// addbook
			// 
			this->addbook->ForeColor = System::Drawing::Color::Black;
			this->addbook->Location = System::Drawing::Point(405, 30);
			this->addbook->Name = L"addbook";
			this->addbook->Size = System::Drawing::Size(94, 23);
			this->addbook->TabIndex = 5;
			this->addbook->Text = L"Add Books";
			this->addbook->UseVisualStyleBackColor = true;
			this->addbook->Click += gcnew System::EventHandler(this, &home_lib::addbook_Click);
			// 
			// removebook
			// 
			this->removebook->ForeColor = System::Drawing::Color::Black;
			this->removebook->Location = System::Drawing::Point(505, 30);
			this->removebook->Name = L"removebook";
			this->removebook->Size = System::Drawing::Size(88, 23);
			this->removebook->TabIndex = 6;
			this->removebook->Text = L"Remove Books";
			this->removebook->UseVisualStyleBackColor = true;
			this->removebook->Click += gcnew System::EventHandler(this, &home_lib::removebook_Click);
			// 
			// Navigation
			// 
			this->Navigation->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Navigation->BackColor = System::Drawing::Color::Transparent;
			this->Navigation->Controls->Add(this->button1);
			this->Navigation->Controls->Add(this->home);
			this->Navigation->Controls->Add(this->removebook);
			this->Navigation->Controls->Add(this->issue);
			this->Navigation->Controls->Add(this->addbook);
			this->Navigation->Controls->Add(this->renew);
			this->Navigation->Controls->Add(this->requests);
			this->Navigation->Controls->Add(this->book_return);
			this->Navigation->ForeColor = System::Drawing::Color::White;
			this->Navigation->Location = System::Drawing::Point(11, 12);
			this->Navigation->Name = L"Navigation";
			this->Navigation->Size = System::Drawing::Size(604, 102);
			this->Navigation->TabIndex = 7;
			this->Navigation->TabStop = false;
			this->Navigation->Text = L"Pages";
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(200, 58);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(91, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Search";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &home_lib::button1_Click);
			// 
			// logout
			// 
			this->logout->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->logout->Location = System::Drawing::Point(540, 398);
			this->logout->Name = L"logout";
			this->logout->Size = System::Drawing::Size(75, 23);
			this->logout->TabIndex = 8;
			this->logout->Text = L"LogOut";
			this->logout->UseVisualStyleBackColor = true;
			this->logout->Click += gcnew System::EventHandler(this, &home_lib::logout_Click);
			// 
			// category
			// 
			this->category->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->category->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->category->FormattingEnabled = true;
			this->category->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Faculty", L"Student"});
			this->category->Location = System::Drawing::Point(225, 149);
			this->category->Name = L"category";
			this->category->Size = System::Drawing::Size(121, 21);
			this->category->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Location = System::Drawing::Point(234, 117);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"View Account";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label2->Location = System::Drawing::Point(153, 149);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Category :";
			// 
			// rollNo
			// 
			this->rollNo->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->rollNo->Location = System::Drawing::Point(225, 176);
			this->rollNo->Name = L"rollNo";
			this->rollNo->Size = System::Drawing::Size(121, 20);
			this->rollNo->TabIndex = 12;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Location = System::Drawing::Point(157, 176);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 13);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Roll No. :";
			// 
			// viewAcc
			// 
			this->viewAcc->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->viewAcc->Location = System::Drawing::Point(361, 176);
			this->viewAcc->Name = L"viewAcc";
			this->viewAcc->Size = System::Drawing::Size(75, 23);
			this->viewAcc->TabIndex = 14;
			this->viewAcc->Text = L"View Acc";
			this->viewAcc->UseVisualStyleBackColor = true;
			this->viewAcc->Click += gcnew System::EventHandler(this, &home_lib::viewAcc_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(156, 216);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(279, 130);
			this->dataGridView1->TabIndex = 15;
			// 
			// invisible
			// 
			this->invisible->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->invisible->Location = System::Drawing::Point(3, 168);
			this->invisible->Name = L"invisible";
			this->invisible->Size = System::Drawing::Size(100, 20);
			this->invisible->TabIndex = 16;
			this->invisible->Visible = false;
			// 
			// home_lib
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(627, 433);
			this->Controls->Add(this->invisible);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->viewAcc);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->rollNo);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->category);
			this->Controls->Add(this->logout);
			this->Controls->Add(this->Navigation);
			this->MinimumSize = System::Drawing::Size(643, 471);
			this->Name = L"home_lib";
			this->Text = L"Home - Librarian";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &home_lib::home_lib_FormClosing);
			this->Navigation->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

////...........System Generated files for components and their corresponding codes.../////
#pragma endregion

	//Implementing Logout button with application restart
	private: System::Void logout_Click(System::Object^  sender, System::EventArgs^  e) {
				 Application::Restart();
			 }

		//.......Managing Page Navigation...//
private: System::Void issue_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();		//Hiding the current form
			 issue_lib^ i = gcnew issue_lib();	//variable of the corresponding form is created
			 i->ShowDialog();		//The new form is opened.
		 }
private: System::Void renew_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 renew_lib^ i = gcnew renew_lib();
			 i->ShowDialog();
		 }
private: System::Void book_return_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 return_lib^ i	=	gcnew return_lib();
			 i->ShowDialog();
		 }
private: System::Void requests_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 requests_lib^ i = gcnew requests_lib();
			 i->ShowDialog();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e){
			 this->Hide();
			 search_lib^ i = gcnew search_lib();
			 i->ShowDialog();
		 }
private: System::Void addbook_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 add_book_lib^ i = gcnew add_book_lib();
			 i->ShowDialog();
		 }
private: System::Void removebook_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 remove_book_lib^ i = gcnew remove_book_lib();
			 i->ShowDialog();
		 }
	//....Handling Page Navigation....///
	//....Closing the form leads to application exit....///
private: System::Void home_lib_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 Application::Exit();
		 }

	//...Implementing view account feature...//
private: System::Void viewAcc_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(category->Text==""||rollNo->Text==""){
				MessageBox::Show("Please provide a valid input.");	//confirming non empty inputs
			 }
			 else{
				 int roll = int::Parse(rollNo->Text);	//Parsing the textBox value to validate its input.
				 String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
				 MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);	//Making database connection.
				 MySqlCommand^ cmd;		//MySqlCommand variable declared. It is defined later.
				 if(category->SelectedIndex==1){
					/*If selected user is student*/ 
					cmd = gcnew MySqlCommand("select * from project.studenttable where rollNo='"+roll+"';",conDataBase);
				 }
				 else{
					/*If selected user is faculty*/ 
					cmd = gcnew MySqlCommand("select * from project.facultytable where rollNo='"+roll+"';",conDataBase);
				 }
				 MySqlDataReader^ myReader;
				 
				 try{
					 conDataBase->Open();
					 myReader = cmd->ExecuteReader();
					 while(myReader->Read()){}
					 invisible->Text = myReader->GetString("mailId");	//Fetching the mail id corresponding to the input roll number.
					 myReader->Close();
					 if(invisible->Text!=""){
						 //If the mailid is present in the database.i.e. if the roll number is valid then all the books from the issuedbooks table is fetched and presented
						 MySqlCommand^ cmd2 = gcnew MySqlCommand("select accNo,issueDate from project.issuedbooks where mailId='"+this->invisible->Text+"';",conDataBase);
						 MySqlDataReader^ myReader2;

						 //.....Fill the data grid view with the Database values...///
						 MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
						 sda->SelectCommand = cmd2;
						 DataTable^ dbdataset = gcnew DataTable();
						 sda->Fill(dbdataset);
						 BindingSource^ bSource = gcnew BindingSource();

						 bSource->DataSource = dbdataset;
						 dataGridView1->DataSource = bSource;
						 sda->Update(dbdataset);
					 }

				 }catch(Exception^ e){
					 MessageBox::Show("Invalid Roll Number.");	//For catching the exception..//
				 }
			 }
		 }

};
}

