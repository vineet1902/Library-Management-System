#pragma once

namespace lbms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for remove_book_lib
	/// </summary>
	public ref class remove_book_lib : public System::Windows::Forms::Form
	{
	public:
		remove_book_lib(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~remove_book_lib()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  Navigation;
	protected: 
	private: System::Windows::Forms::Button^  removebook;
	private: System::Windows::Forms::Button^  addbook;
	private: System::Windows::Forms::Button^  requests;
	private: System::Windows::Forms::Button^  book_return;
	private: System::Windows::Forms::Button^  renew;
	private: System::Windows::Forms::Button^  issue;
	private: System::Windows::Forms::Button^  home;
	private: System::Windows::Forms::Button^  logout;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  accNo;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  rackNo;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  title;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  author;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  publisher;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  titleId;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  del_book;
	private: System::Windows::Forms::Button^  button1;











	///.....System generated code for components and their corresponding functions...///




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
			this->Navigation = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->home = (gcnew System::Windows::Forms::Button());
			this->removebook = (gcnew System::Windows::Forms::Button());
			this->issue = (gcnew System::Windows::Forms::Button());
			this->addbook = (gcnew System::Windows::Forms::Button());
			this->renew = (gcnew System::Windows::Forms::Button());
			this->requests = (gcnew System::Windows::Forms::Button());
			this->book_return = (gcnew System::Windows::Forms::Button());
			this->logout = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->accNo = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->rackNo = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->title = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->author = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->publisher = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->titleId = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->del_book = (gcnew System::Windows::Forms::Button());
			this->Navigation->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
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
			this->button1->Location = System::Drawing::Point(200, 59);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(91, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Search";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &remove_book_lib::button1_Click);
			// 
			// home
			// 
			this->home->BackColor = System::Drawing::Color::Transparent;
			this->home->ForeColor = System::Drawing::Color::Black;
			this->home->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->home->Location = System::Drawing::Point(6, 30);
			this->home->Name = L"home";
			this->home->Size = System::Drawing::Size(90, 23);
			this->home->TabIndex = 0;
			this->home->Text = L"Home";
			this->home->UseVisualStyleBackColor = false;
			// 
			// removebook
			// 
			this->removebook->BackColor = System::Drawing::Color::Gray;
			this->removebook->ForeColor = System::Drawing::Color::Black;
			this->removebook->Location = System::Drawing::Point(505, 30);
			this->removebook->Name = L"removebook";
			this->removebook->Size = System::Drawing::Size(88, 23);
			this->removebook->TabIndex = 6;
			this->removebook->Text = L"Remove Books";
			this->removebook->UseVisualStyleBackColor = false;
			// 
			// issue
			// 
			this->issue->ForeColor = System::Drawing::Color::Black;
			this->issue->Location = System::Drawing::Point(102, 30);
			this->issue->Name = L"issue";
			this->issue->Size = System::Drawing::Size(92, 23);
			this->issue->TabIndex = 1;
			this->issue->Text = L"Issue Books";
			this->issue->UseVisualStyleBackColor = true;
			this->issue->Click += gcnew System::EventHandler(this, &remove_book_lib::issue_Click);
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
			this->addbook->Click += gcnew System::EventHandler(this, &remove_book_lib::addbook_Click);
			// 
			// renew
			// 
			this->renew->ForeColor = System::Drawing::Color::Black;
			this->renew->Location = System::Drawing::Point(200, 30);
			this->renew->Name = L"renew";
			this->renew->Size = System::Drawing::Size(91, 23);
			this->renew->TabIndex = 2;
			this->renew->Text = L"Renew Books";
			this->renew->UseVisualStyleBackColor = true;
			this->renew->Click += gcnew System::EventHandler(this, &remove_book_lib::renew_Click);
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
			this->requests->Click += gcnew System::EventHandler(this, &remove_book_lib::requests_Click);
			// 
			// book_return
			// 
			this->book_return->ForeColor = System::Drawing::Color::Black;
			this->book_return->Location = System::Drawing::Point(297, 30);
			this->book_return->Name = L"book_return";
			this->book_return->Size = System::Drawing::Size(102, 23);
			this->book_return->TabIndex = 3;
			this->book_return->Text = L"Return Books";
			this->book_return->UseVisualStyleBackColor = true;
			this->book_return->Click += gcnew System::EventHandler(this, &remove_book_lib::book_return_Click);
			// 
			// logout
			// 
			this->logout->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->logout->Location = System::Drawing::Point(540, 396);
			this->logout->Name = L"logout";
			this->logout->Size = System::Drawing::Size(75, 23);
			this->logout->TabIndex = 1;
			this->logout->Text = L"LogOut";
			this->logout->UseVisualStyleBackColor = true;
			this->logout->Click += gcnew System::EventHandler(this, &remove_book_lib::logout_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(57, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Account Number :";
			// 
			// accNo
			// 
			this->accNo->Location = System::Drawing::Point(157, 31);
			this->accNo->Name = L"accNo";
			this->accNo->Size = System::Drawing::Size(163, 20);
			this->accNo->TabIndex = 1;
			this->accNo->TextChanged += gcnew System::EventHandler(this, &remove_book_lib::accNo_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(71, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Rack Number :";
			// 
			// rackNo
			// 
			this->rackNo->Location = System::Drawing::Point(157, 68);
			this->rackNo->Name = L"rackNo";
			this->rackNo->ReadOnly = true;
			this->rackNo->Size = System::Drawing::Size(163, 20);
			this->rackNo->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(117, 108);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Title :";
			// 
			// title
			// 
			this->title->Location = System::Drawing::Point(157, 108);
			this->title->Name = L"title";
			this->title->ReadOnly = true;
			this->title->Size = System::Drawing::Size(163, 20);
			this->title->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(106, 146);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Author :";
			// 
			// author
			// 
			this->author->Location = System::Drawing::Point(157, 146);
			this->author->Name = L"author";
			this->author->ReadOnly = true;
			this->author->Size = System::Drawing::Size(163, 20);
			this->author->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(95, 183);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Publisher :";
			// 
			// publisher
			// 
			this->publisher->Location = System::Drawing::Point(157, 183);
			this->publisher->Name = L"publisher";
			this->publisher->ReadOnly = true;
			this->publisher->Size = System::Drawing::Size(163, 20);
			this->publisher->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(105, 220);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(45, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Title Id :";
			// 
			// titleId
			// 
			this->titleId->Location = System::Drawing::Point(157, 220);
			this->titleId->Name = L"titleId";
			this->titleId->ReadOnly = true;
			this->titleId->Size = System::Drawing::Size(163, 20);
			this->titleId->TabIndex = 10;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->del_book);
			this->groupBox1->Controls->Add(this->titleId);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->publisher);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->author);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->title);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->rackNo);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->accNo);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->groupBox1->Location = System::Drawing::Point(113, 120);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(401, 306);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Please fill a valid account number to get the information  of the book";
			// 
			// del_book
			// 
			this->del_book->ForeColor = System::Drawing::SystemColors::ControlText;
			this->del_book->Location = System::Drawing::Point(245, 256);
			this->del_book->Name = L"del_book";
			this->del_book->Size = System::Drawing::Size(75, 23);
			this->del_book->TabIndex = 12;
			this->del_book->Text = L"Delete Book";
			this->del_book->UseVisualStyleBackColor = true;
			this->del_book->Click += gcnew System::EventHandler(this, &remove_book_lib::del_book_Click);
			// 
			// remove_book_lib
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(627, 433);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->logout);
			this->Controls->Add(this->Navigation);
			this->MinimumSize = System::Drawing::Size(643, 471);
			this->Name = L"remove_book_lib";
			this->Text = L"Remove Books - Librarian";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &remove_book_lib::remove_book_lib_FormClosing);
			this->Navigation->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
	////.........System generated code for components and their corresponding functions...////
#pragma endregion

		///..implementing logout using application restart...///
	private: System::Void logout_Click(System::Object^  sender, System::EventArgs^  e) {
				 Application::Restart();
			 }
private: System::Void home_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void issue_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void renew_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void book_return_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void requests_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void addbook_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e);
		///...Closing the form leads to application exit....////
private: System::Void remove_book_lib_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
		Application::Exit();
		 }

		///....automatic filling of the form for a given account number....////
private: System::Void accNo_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(!accNo->Focus()){}
			 //This ensures real time query execution..
			 else{
				 if(accNo->Text==""){
					 rackNo->Text="";title->Text="";author->Text="";publisher->Text="";titleId->Text="";
				 }
				 else{
				 int acc = int::Parse(accNo->Text);
				 rackNo->Text="";title->Text="";author->Text="";publisher->Text="";titleId->Text="";
				 String^ constring = L"datasource=localhost;port=3306;username=root;password=root";		
				 MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);		//Connection Established.
				 MySqlCommand^ cmd = gcnew MySqlCommand("select * from project.allbooks where accNo = '"+Convert::ToString(acc)+"';",conDataBase);	//command to fetch the row corresponding to the given Account Number.
				 MySqlDataReader^ myReader;
				 try{
					 conDataBase->Open();
					 myReader = cmd->ExecuteReader();		//Query Executed
					 if(myReader->Read()){
						rackNo->Text = myReader->GetString("rackNo");
						title->Text = myReader->GetString("title");
						author->Text = myReader->GetString("author");
						publisher->Text = myReader->GetString("publisher");
						titleId->Text = myReader->GetString("titleId");

					 }
				 }catch(Exception^ e){
					MessageBox::Show(e->Message);
				 }
				 }
			 }
		 }
		/*
private: System::Void title_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(!title->Focus()){}
			 else{
				 titleId->Text="";
				 String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
				 MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
				 MySqlCommand^ cmd = gcnew MySqlCommand("select * from project.allbooks where title='" + this->title->Text + "' limit 1 ;",conDataBase);
				 MySqlDataReader^ myReader2;
				 try{
					 conDataBase->Open();
					 myReader2 = cmd->ExecuteReader();
					 if(myReader2->Read()){
						 int id = myReader2->GetInt32(6);
						 titleId->Text = Convert::ToString(id);
					 }

				 }catch(Exception^ e){
					 MessageBox::Show(e->Message);
				 }
			 }
		 }*/
private: System::Void del_book_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(accNo->Text==""||rackNo->Text==""||title->Text==""||author->Text==""||publisher->Text==""||titleId->Text==""){
				MessageBox::Show("Please fill the details properly.");		///// To ensure a non Empty input.
			 }
			 else{
				 String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
				 MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);		//Connection Established.
				 //Command to delete the book from allbooks table.
				 MySqlCommand^ cmd = gcnew MySqlCommand("delete from project.allbooks where accNo='"+this->accNo->Text+"';"/* and rackNo='"+this->rackNo->Text+"' and title='"+this->title->Text+"' and author='"+this->author->Text+"' and publisher='"+this->publisher->Text+"' and titleId='"+this->titleId->Text+"';"*/,conDatabase);
				 MySqlDataReader^ myReader;
				 //Command to delete the book from issuedbooks table.
				 MySqlCommand^ cmd2 = gcnew MySqlCommand("delete from project.issuedbooks where accNo='"+this->accNo->Text+"'",conDatabase);
				 MySqlDataReader^ myReader2;
				 try{
				//	 int c=0;
					 conDatabase->Open();
					 myReader = cmd->ExecuteReader();	//command 1 executed
					 while(myReader->Read()){
					 }
					 myReader->Close();
					 myReader2=cmd2->ExecuteReader();	//command 2 executed
					 while(myReader2->Read()){}
					// MessageBox::Show("Book Deleted!");
					 rackNo->Text="";title->Text="";author->Text="";publisher->Text="";title->Text="";
				 }catch(Exception^ e){
					MessageBox::Show(e->Message);		//Exception catched if any.
				 }

			 }
		 }

};
}
