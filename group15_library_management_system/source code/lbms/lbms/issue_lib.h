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
	/// Summary for issue_lib
	/// </summary>
	public ref class issue_lib : public System::Windows::Forms::Form
	{
	public:
		issue_lib(void)
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
		~issue_lib()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  category;
	protected: 

	private: System::Windows::Forms::TextBox^  book_title;
	protected: 

	private: System::Windows::Forms::TextBox^  book_id;
	private: System::Windows::Forms::TextBox^  mail_id;


	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button9;

	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  date_issue;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  category_txt;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::GroupBox^  groupBox1;

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
			this->category = (gcnew System::Windows::Forms::ComboBox());
			this->book_title = (gcnew System::Windows::Forms::TextBox());
			this->book_id = (gcnew System::Windows::Forms::TextBox());
			this->mail_id = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->date_issue = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->category_txt = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// category
			// 
			this->category->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->category->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->category->FormattingEnabled = true;
			this->category->Location = System::Drawing::Point(177, 230);
			this->category->Name = L"category";
			this->category->Size = System::Drawing::Size(180, 21);
			this->category->TabIndex = 0;
			// 
			// book_title
			// 
			this->book_title->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->book_title->Location = System::Drawing::Point(177, 179);
			this->book_title->Name = L"book_title";
			this->book_title->Size = System::Drawing::Size(180, 20);
			this->book_title->TabIndex = 1;
			this->book_title->TextChanged += gcnew System::EventHandler(this, &issue_lib::book_title_TextChanged);
			// 
			// book_id
			// 
			this->book_id->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->book_id->Location = System::Drawing::Point(177, 153);
			this->book_id->Name = L"book_id";
			this->book_id->Size = System::Drawing::Size(180, 20);
			this->book_id->TabIndex = 2;
			this->book_id->SizeChanged += gcnew System::EventHandler(this, &issue_lib::book_id_SizeChanged);
			this->book_id->TextChanged += gcnew System::EventHandler(this, &issue_lib::textBox2_TextChanged);
			// 
			// mail_id
			// 
			this->mail_id->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->mail_id->Location = System::Drawing::Point(177, 205);
			this->mail_id->Name = L"mail_id";
			this->mail_id->Size = System::Drawing::Size(180, 20);
			this->mail_id->TabIndex = 3;
			this->mail_id->TextChanged += gcnew System::EventHandler(this, &issue_lib::textBox3_TextChanged);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->Location = System::Drawing::Point(177, 304);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Issue";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &issue_lib::button1_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->Location = System::Drawing::Point(505, 385);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(90, 25);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Logout";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &issue_lib::button3_Click);
			// 
			// button9
			// 
			this->button9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button9->BackColor = System::Drawing::Color::Gray;
			this->button9->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button9->Location = System::Drawing::Point(118, 18);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(90, 25);
			this->button9->TabIndex = 16;
			this->button9->Text = L"Issue Books";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &issue_lib::button9_Click);
			// 
			// button7
			// 
			this->button7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button7->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button7->Location = System::Drawing::Point(214, 18);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(90, 25);
			this->button7->TabIndex = 14;
			this->button7->Text = L"Renew Books";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &issue_lib::button7_Click);
			// 
			// button6
			// 
			this->button6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button6->Location = System::Drawing::Point(406, 18);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(90, 25);
			this->button6->TabIndex = 13;
			this->button6->Text = L"Add Books";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &issue_lib::button6_Click);
			// 
			// button5
			// 
			this->button5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button5->Location = System::Drawing::Point(310, 18);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(90, 25);
			this->button5->TabIndex = 12;
			this->button5->Text = L"Return Books";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &issue_lib::button5_Click);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button4->Location = System::Drawing::Point(502, 18);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(90, 25);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Remove Book";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &issue_lib::button4_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Location = System::Drawing::Point(218, 49);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 25);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Search";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &issue_lib::button2_Click_1);
			// 
			// button10
			// 
			this->button10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button10->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button10->Location = System::Drawing::Point(314, 49);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(90, 25);
			this->button10->TabIndex = 9;
			this->button10->Text = L"Requests";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &issue_lib::button10_Click);
			// 
			// button11
			// 
			this->button11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button11->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button11->Location = System::Drawing::Point(26, 18);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(90, 25);
			this->button11->TabIndex = 17;
			this->button11->Text = L"Home";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &issue_lib::button11_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Location = System::Drawing::Point(102, 153);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 13);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Account No";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label2->Location = System::Drawing::Point(102, 179);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 13);
			this->label2->TabIndex = 19;
			this->label2->Text = L" Book Title";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Location = System::Drawing::Point(102, 205);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 13);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Webmail ID";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label4->Location = System::Drawing::Point(111, 231);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 13);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Category";
			// 
			// date_issue
			// 
			this->date_issue->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->date_issue->Location = System::Drawing::Point(177, 257);
			this->date_issue->Name = L"date_issue";
			this->date_issue->Size = System::Drawing::Size(180, 20);
			this->date_issue->TabIndex = 22;
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label5->Location = System::Drawing::Point(90, 257);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(70, 13);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Date of Issue";
			// 
			// category_txt
			// 
			this->category_txt->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->category_txt->Location = System::Drawing::Point(177, 231);
			this->category_txt->Name = L"category_txt";
			this->category_txt->Size = System::Drawing::Size(180, 20);
			this->category_txt->TabIndex = 24;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dateTimePicker1->CustomFormat = L"dd mm yyyy";
			this->dateTimePicker1->Location = System::Drawing::Point(177, 257);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 25;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label6->Location = System::Drawing::Point(258, 294);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(369, 33);
			this->label6->TabIndex = 26;
			this->label6->Text = L"This book is already issued";
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->Location = System::Drawing::Point(390, 192);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(180, 20);
			this->textBox1->TabIndex = 27;
			this->textBox1->Visible = false;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button10);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->Controls->Add(this->button11);
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(603, 85);
			this->groupBox1->TabIndex = 28;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Pages";
			// 
			// issue_lib
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(627, 432);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->category_txt);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->date_issue);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->mail_id);
			this->Controls->Add(this->book_id);
			this->Controls->Add(this->book_title);
			this->Controls->Add(this->category);
			this->MaximumSize = System::Drawing::Size(643, 471);
			this->Name = L"issue_lib";
			this->Text = L"Issue Books - Librarian";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &issue_lib::issue_lib_FormClosing);
			this->Load += gcnew System::EventHandler(this, &issue_lib::issue_lib_Load);
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void issue_lib_Load(System::Object^  sender, System::EventArgs^  e) {//Onload the comboBox would be filled with student and facuty values. Label denoting already issued book would be hidden
				 category->Items->Add("Student");
				 category->Items->Add("Faculty");
				 category_txt->Hide();
				 date_issue->Hide();
				 label6->Hide();
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				Application::Restart();
			 }

	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) ;

	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) ;
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) ;

	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) ;

	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) ;

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) ;

	private: System::Void issue_lib_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
				Application::Exit();
			 }

	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 //On text change of the book Id the other data of the book such as title displays in textbox in real time. If the corresponding book is already issued book .It will hide the issue button   
				 book_title->Text="";
				 label6->Hide();
				 button1->Show();
				 String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
				 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase0 =gcnew MySqlCommand("select  * from project.issuedbooks where accNo='"+book_id->Text+"';",conDataBase);
				 MySqlCommand^ cmdDataBase =gcnew MySqlCommand("select * from project.allbooks where accNo='"+book_id->Text+"';",conDataBase);		
				 MySqlDataReader^ myReader;
				 MySqlDataReader^ myReader0;
				 try{
					 conDataBase->Open();
					 myReader0=cmdDataBase0->ExecuteReader();
					 if(myReader0->Read())
					 {
						 button1->Hide();
						 label6->Show();
						 myReader0->Close();
					 }

					 myReader0->Close();
					 myReader=cmdDataBase->ExecuteReader();
					 if(myReader->Read()){
						 String^ AllinOne=myReader->GetString("title"); 
						 book_title->Text=AllinOne;
					 }



				 }
				 catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }

			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {// It will issue the book if the corresponding user has not exceeded limit of issuing books as well as if it is not  already issued book
				 int count=0;
				 category_txt->Text=category->Text;
				 int book_limit;
				 ///MessageBox::Show("11");
				 String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
				 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase =gcnew MySqlCommand("insert into project.issuedbooks(accNo,mailId,issueDate,Category,Book_title,issueMonth,issueYear) values('"+this->book_id->Text+"','"+this->mail_id->Text+"','"+this->dateTimePicker1->Value.Day+"','"+this->category_txt->Text+"','"+this->book_title->Text+"','"+this->dateTimePicker1->Value.Month+"','"+this->dateTimePicker1->Value.Year+"');",conDataBase);
				 MySqlCommand^ cmdDataBase2= gcnew MySqlCommand("Update project.allbooks set status='Issued' where accNo='"+this->book_id->Text+"';",conDataBase);		
				 MySqlCommand^ cmdDataBase4= gcnew MySqlCommand("Select * from project.limit",conDataBase);
				 MySqlCommand^ cmdDataBase50;
				 MySqlDataReader^ myReader;
				 MySqlDataReader^ myReader2;
				 MySqlDataReader^ myReader4;
				 MySqlDataReader^ myReader3;
				 MySqlDataReader^ myReader5;
				 MySqlDataReader^ myReader50;
				 MySqlCommand^ cmdDataBase5;
				 try{
					// MessageBox::Show("10");
					 
					 conDataBase->Open();
					 myReader4=cmdDataBase4->ExecuteReader();
			//		 MessageBox::Show("9");
					 
					 if(myReader4->Read())
					 {
						 if(category_txt->Text=="Student")
						 {
				//			 MessageBox::Show("8");
							 
							 book_limit=myReader4->GetInt32("book_student");
							 MySqlCommand^ cmdDataBase3= gcnew MySqlCommand("Select * from project.studenttable where mailId='"+this->mail_id->Text+"';",conDataBase);
							 myReader4->Close();
							 myReader3=cmdDataBase3->ExecuteReader();
							 if(myReader3->Read())
							 {
								 count=myReader3->GetInt32("issuedbooks");
							 }
					//		 MessageBox::Show("7");

						 }
						 else
						 {
						//	  MessageBox::Show("7.1");
							 book_limit=myReader4->GetInt32("book_faculty");
							 MySqlCommand^ cmdDataBase3= gcnew MySqlCommand("Select * from project.facultytable where mailId='"+this->mail_id->Text+"';",conDataBase);
							 myReader4->Close();
							 myReader3=cmdDataBase3->ExecuteReader();
							 if(myReader3->Read())
							 {
								 count=myReader3->GetInt32("issuedbooks");
							 }
							// MessageBox::Show("6");

						 }
					 }
					 myReader3->Close();
					 if(count >= book_limit)
					 {

						 MessageBox::Show("Sorry you have reached max book issue limit. New book cannot be issued");
						// MessageBox::Show("5");
						
					 }
					 else
					 {
						 myReader=cmdDataBase->ExecuteReader();
						 myReader->Close();
						 myReader2=cmdDataBase2->ExecuteReader();
						 myReader2->Close();
						 MessageBox::Show("Entries Saved Successfully");
						// MessageBox::Show("4");

						 if(category_txt->Text=="Faculty")
						 {
							 count=count+1;
							 cmdDataBase50 =gcnew MySqlCommand("Update project.facultytable set issuedbooks='"+(count)+"' where mailId='"+this->mail_id->Text+"';",conDataBase);
							 myReader50=cmdDataBase50->ExecuteReader();
							 myReader50->Close();
					//		 MessageBox::Show("3");

						 }
						 else if(category_txt->Text=="Student")
						 {
							 count=count+1;
							 cmdDataBase50 =gcnew MySqlCommand("Update project.studenttable set issuedbooks='"+(count)+"' where mailId='"+this->mail_id->Text+"';",conDataBase);
							 myReader50=cmdDataBase50->ExecuteReader();
							 myReader50->Close();
						//	 MessageBox::Show("2");

						 }

						 book_id->Text="";
						 book_title->Text="";
						 mail_id->Text="";
						 category_txt->Text="";
						 category->Text="";
						 date_issue->Text="";
					//	 MessageBox::Show("1");

					 }
				 }
				 catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }
			 }
	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {//go  to issue books
			 }
	private: System::Void book_id_SizeChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void book_title_TextChanged(System::Object^  sender, System::EventArgs^  e) {

			 }
	private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) ;

	};
}
