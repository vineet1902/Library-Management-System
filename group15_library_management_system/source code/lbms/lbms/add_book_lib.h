#pragma once

namespace lbms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;	//Included the MySql::Data::MySqlClient namespace

	/// <summary>
	/// Summary for add_book_lib
	/// </summary>
	public ref class add_book_lib : public System::Windows::Forms::Form
	{
	public:
		add_book_lib(void)
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
		~add_book_lib()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  Navigation;
	protected: 
	private: System::Windows::Forms::Button^  issue;
	private: System::Windows::Forms::Button^  home;
	private: System::Windows::Forms::Button^  removebook;
	private: System::Windows::Forms::Button^  addbook;
	private: System::Windows::Forms::Button^  requests;
	private: System::Windows::Forms::Button^  book_return;
	private: System::Windows::Forms::Button^  renew;
	private: System::Windows::Forms::Button^  logout;
	private: System::Windows::Forms::GroupBox^  book_detail;
	private: System::Windows::Forms::Button^  addbook_button;


	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  titleId;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  publisher;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  author;
	private: System::Windows::Forms::TextBox^  title;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  rackNo;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  accNo;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  stat;


////............System Generated Code for components and their corresponding functions......////////
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
			this->book_detail = (gcnew System::Windows::Forms::GroupBox());
			this->stat = (gcnew System::Windows::Forms::TextBox());
			this->addbook_button = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->titleId = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->publisher = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->author = (gcnew System::Windows::Forms::TextBox());
			this->title = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->rackNo = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->accNo = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Navigation->SuspendLayout();
			this->book_detail->SuspendLayout();
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
			this->button1->Location = System::Drawing::Point(200, 60);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(91, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Search";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &add_book_lib::button1_Click);
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
			this->removebook->ForeColor = System::Drawing::Color::Black;
			this->removebook->Location = System::Drawing::Point(505, 30);
			this->removebook->Name = L"removebook";
			this->removebook->Size = System::Drawing::Size(88, 23);
			this->removebook->TabIndex = 6;
			this->removebook->Text = L"Remove Books";
			this->removebook->UseVisualStyleBackColor = true;
			this->removebook->Click += gcnew System::EventHandler(this, &add_book_lib::removebook_Click);
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
			this->issue->Click += gcnew System::EventHandler(this, &add_book_lib::issue_Click);
			// 
			// addbook
			// 
			this->addbook->BackColor = System::Drawing::Color::Gray;
			this->addbook->ForeColor = System::Drawing::Color::Black;
			this->addbook->Location = System::Drawing::Point(405, 30);
			this->addbook->Name = L"addbook";
			this->addbook->Size = System::Drawing::Size(94, 23);
			this->addbook->TabIndex = 5;
			this->addbook->Text = L"Add Books";
			this->addbook->UseVisualStyleBackColor = false;
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
			this->renew->Click += gcnew System::EventHandler(this, &add_book_lib::renew_Click);
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
			this->requests->Click += gcnew System::EventHandler(this, &add_book_lib::requests_Click);
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
			this->book_return->Click += gcnew System::EventHandler(this, &add_book_lib::book_return_Click);
			// 
			// logout
			// 
			this->logout->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->logout->Location = System::Drawing::Point(540, 398);
			this->logout->Name = L"logout";
			this->logout->Size = System::Drawing::Size(75, 23);
			this->logout->TabIndex = 1;
			this->logout->Text = L"LogOut";
			this->logout->UseVisualStyleBackColor = true;
			this->logout->Click += gcnew System::EventHandler(this, &add_book_lib::logout_Click);
			// 
			// book_detail
			// 
			this->book_detail->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->book_detail->BackColor = System::Drawing::Color::Transparent;
			this->book_detail->Controls->Add(this->stat);
			this->book_detail->Controls->Add(this->addbook_button);
			this->book_detail->Controls->Add(this->label7);
			this->book_detail->Controls->Add(this->label6);
			this->book_detail->Controls->Add(this->titleId);
			this->book_detail->Controls->Add(this->label5);
			this->book_detail->Controls->Add(this->publisher);
			this->book_detail->Controls->Add(this->label4);
			this->book_detail->Controls->Add(this->author);
			this->book_detail->Controls->Add(this->title);
			this->book_detail->Controls->Add(this->label3);
			this->book_detail->Controls->Add(this->rackNo);
			this->book_detail->Controls->Add(this->label2);
			this->book_detail->Controls->Add(this->accNo);
			this->book_detail->Controls->Add(this->label1);
			this->book_detail->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->book_detail->Location = System::Drawing::Point(113, 120);
			this->book_detail->Name = L"book_detail";
			this->book_detail->Size = System::Drawing::Size(401, 306);
			this->book_detail->TabIndex = 2;
			this->book_detail->TabStop = false;
			this->book_detail->Text = L"Please fill the details to add books in library database.";
			// 
			// stat
			// 
			this->stat->Location = System::Drawing::Point(157, 255);
			this->stat->Name = L"stat";
			this->stat->Size = System::Drawing::Size(100, 20);
			this->stat->TabIndex = 16;
			// 
			// addbook_button
			// 
			this->addbook_button->ForeColor = System::Drawing::SystemColors::ControlText;
			this->addbook_button->Location = System::Drawing::Point(272, 255);
			this->addbook_button->Name = L"addbook_button";
			this->addbook_button->Size = System::Drawing::Size(75, 23);
			this->addbook_button->TabIndex = 15;
			this->addbook_button->Text = L"Add Book";
			this->addbook_button->UseVisualStyleBackColor = true;
			this->addbook_button->Click += gcnew System::EventHandler(this, &add_book_lib::addbook_button_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(108, 255);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(49, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Subject :";
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
			this->publisher->Size = System::Drawing::Size(163, 20);
			this->publisher->TabIndex = 8;
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
			this->author->Size = System::Drawing::Size(163, 20);
			this->author->TabIndex = 6;
			// 
			// title
			// 
			this->title->Location = System::Drawing::Point(157, 108);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(163, 20);
			this->title->TabIndex = 5;
			this->title->TextChanged += gcnew System::EventHandler(this, &add_book_lib::title_TextChanged);
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
			// rackNo
			// 
			this->rackNo->Location = System::Drawing::Point(157, 68);
			this->rackNo->Name = L"rackNo";
			this->rackNo->Size = System::Drawing::Size(163, 20);
			this->rackNo->TabIndex = 3;
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
			// accNo
			// 
			this->accNo->Location = System::Drawing::Point(157, 31);
			this->accNo->Name = L"accNo";
			this->accNo->ReadOnly = true;
			this->accNo->Size = System::Drawing::Size(163, 20);
			this->accNo->TabIndex = 1;
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
			// add_book_lib
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(627, 433);
			this->Controls->Add(this->book_detail);
			this->Controls->Add(this->logout);
			this->Controls->Add(this->Navigation);
			this->MinimumSize = System::Drawing::Size(643, 471);
			this->Name = L"add_book_lib";
			this->Text = L"Add Books - Librarian";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &add_book_lib::add_book_lib_FormClosing);
			this->Load += gcnew System::EventHandler(this, &add_book_lib::add_book_lib_Load);
			this->Navigation->ResumeLayout(false);
			this->book_detail->ResumeLayout(false);
			this->book_detail->PerformLayout();
			this->ResumeLayout(false);

		}

/////.................System Generated code for components and their corresponring functions.....//////////
#pragma endregion
	private: System::Void add_book_lib_Load(System::Object^  sender, System::EventArgs^  e) {	//The form OnLoad function
				String^ constring  = L"datasource=localhost;port=3306;username=root;password=root";	//defining Mysql account and password
				MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);	//Database Connection variable
				MySqlCommand^ cmd = gcnew MySqlCommand("select * from project.allbooks order by accNo desc limit 1;",conDataBase);	//The sql command to carry out on form load
				MySqlDataReader^ myReader;		// Datareader to read upon execution of sql query.
				try{							// The query must be executed in a try catch block to catch anny exception
					conDataBase->Open();		// Connection to Database Open
					myReader = cmd->ExecuteReader();	//Query executed
					while(myReader->Read()){	//	every return value of a query is read by myReader
					}
					
					int num = (myReader->GetInt32(0))+1;	//accNo (index 0 in the table) stored in a variable num after increment
					accNo->Text = Convert::ToString(num);	//value of num is converted in string and stored in the accNo textBox

				}catch(Exception^ e){
					MessageBox::Show(e->Message);		// Exception Message if any
				}
			 }
	private: System::Void logout_Click(System::Object^  sender, System::EventArgs^  e) {
				 Application::Restart();		//Logout button implemented with an application restart
			 }
private: System::Void home_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void issue_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void renew_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void book_return_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void requests_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void removebook_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void add_book_lib_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 Application::Exit();
		 }

		 //.....Function to Add a book in the database.....//

private: System::Void addbook_button_Click(System::Object^  sender, System::EventArgs^  e) {	
			 if(rackNo->Text=="" || title->Text=="" || author->Text=="" || publisher->Text=="" || titleId->Text=="" || stat->Text==""){
				MessageBox::Show("Please fill the details correctly!");			//If the input textbox is not properly filled
			 }
			 else{
				 String^ constring= L"datasource=localhost;port=3306;username=root;password=root";
				 MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
				 MySqlCommand^ cmd = gcnew MySqlCommand("insert into project.allbooks (accNo,rackNo,title,author,publisher,titleId,status,subject) value ('"+Convert::ToInt32(this->accNo->Text)+"','"+Convert::ToInt32(this->rackNo->Text)+"','"+this->title->Text+"','"+this->author->Text+"','"+this->publisher->Text+"','"+Convert::ToInt32(this->titleId->Text)+"','Not Issued','"+this->stat->Text+"');",conDataBase);		//Command to insert a value in the table
				 MySqlDataReader^ myReader;
				 try{
					 conDataBase->Open();
					 //MessageBox::Show("Hello1");
					 myReader = cmd->ExecuteReader();
					 	//				 MessageBox::Show("Hello2");
					 while(myReader->Read()){}
					 MessageBox::Show("Book Added!");
					 accNo->Text = Convert::ToString(Convert::ToUInt32(accNo->Text)+1);	//Account number value incremented for next addition
					 rackNo->Text="";
					 title->Text="";
					 publisher->Text="";
					 author->Text="";
					 stat->Text="";
					 titleId->Text="";


				 }catch(Exception^ e){
					MessageBox::Show(e->Message);
				 }
			 }
		 }

		 //......Function to automatically assign the titleId if a book with the same title is present in the library else any random titleId is assigned to it...///
private: System::Void title_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(!title->Focus()){}	//This ensures a real time query execution
			 else{
				 int id1;
				 String^ constring = L"datasource=localhost;port=3306;username=root;password=root";		
				 MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);	//Establishing databse connection.
				 MySqlCommand^ cmd = gcnew MySqlCommand("select * from project.allbooks where title='" + this->title->Text + "' limit 1 ;",conDataBase);	//query to assign the titleId when a copy of the book beign added is already present in the database.
				 MySqlCommand^ cmd2 = gcnew MySqlCommand("select * from project.allbooks order by titleId desc limit 1;",conDataBase);		//query to assign any random titleId to the book being added
				 MySqlDataReader^ myReader;
				 MySqlDataReader^ myReader2;
				 try{
					 conDataBase->Open();
					 myReader = cmd2->ExecuteReader();
					 while(myReader->Read()){}
					 id1 = myReader->GetInt32("titleId")+1;
					 titleId->Text = Convert::ToString(id1);	//A random titleId is assigned to the textBox
					 myReader->Close();
					 myReader2 = cmd->ExecuteReader();
					 if(myReader2->Read()){						//If the query1 returns a value upon execution then the corresponding value of titleId is assigned to the textBox.
						 int id = myReader2->GetInt32("titleId");
						 titleId->Text = Convert::ToString(id);
					 }
					 
				 }catch(Exception^ e){
					 MessageBox::Show(e->Message);
				 }
			 }
		 }


};
}
