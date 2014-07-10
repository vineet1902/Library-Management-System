#pragma once
#include<stdlib.h>
namespace lbms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	//using namespace System::DateTime;

	/// <summary>
	/// Summary for renew_lib
	/// </summary>
	public ref class renew_lib : public System::Windows::Forms::Form
	{
	public:
		renew_lib(void)
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
		~renew_lib()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 



	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button9;

	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::TextBox^  category_txt;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  date_issue;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  mail_id;
	private: System::Windows::Forms::TextBox^  book_id;
	private: System::Windows::Forms::TextBox^  book_title;
	private: System::Windows::Forms::ComboBox^  category;
	private: System::Windows::Forms::TextBox^  date_renew;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;


	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::GroupBox^  groupBox1;




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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->category_txt = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->date_issue = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->mail_id = (gcnew System::Windows::Forms::TextBox());
			this->book_id = (gcnew System::Windows::Forms::TextBox());
			this->book_title = (gcnew System::Windows::Forms::TextBox());
			this->category = (gcnew System::Windows::Forms::ComboBox());
			this->date_renew = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->Location = System::Drawing::Point(240, 320);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Renew";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &renew_lib::button1_Click);
			// 
			// button11
			// 
			this->button11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button11->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button11->Location = System::Drawing::Point(2, 12);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(90, 25);
			this->button11->TabIndex = 27;
			this->button11->Text = L"Home";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &renew_lib::button11_Click);
			// 
			// button9
			// 
			this->button9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button9->BackColor = System::Drawing::SystemColors::Control;
			this->button9->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button9->Location = System::Drawing::Point(98, 12);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(90, 25);
			this->button9->TabIndex = 26;
			this->button9->Text = L"Issue Books";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &renew_lib::button9_Click);
			// 
			// button7
			// 
			this->button7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button7->BackColor = System::Drawing::Color::Gray;
			this->button7->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button7->Location = System::Drawing::Point(194, 12);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(90, 25);
			this->button7->TabIndex = 24;
			this->button7->Text = L"Renew Books";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &renew_lib::button7_Click);
			// 
			// button6
			// 
			this->button6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button6->Location = System::Drawing::Point(386, 12);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(90, 25);
			this->button6->TabIndex = 23;
			this->button6->Text = L"Add Books";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &renew_lib::button6_Click);
			// 
			// button5
			// 
			this->button5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button5->Location = System::Drawing::Point(290, 12);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(90, 25);
			this->button5->TabIndex = 22;
			this->button5->Text = L"Return Books";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &renew_lib::button5_Click);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button4->Location = System::Drawing::Point(482, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(90, 25);
			this->button4->TabIndex = 21;
			this->button4->Text = L"Remove Book";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &renew_lib::button4_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button3->Location = System::Drawing::Point(194, 43);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(90, 25);
			this->button3->TabIndex = 20;
			this->button3->Text = L"Search";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &renew_lib::button3_Click);
			// 
			// button10
			// 
			this->button10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button10->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button10->Location = System::Drawing::Point(290, 43);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(90, 25);
			this->button10->TabIndex = 19;
			this->button10->Text = L"Requests";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &renew_lib::button10_Click);
			// 
			// button12
			// 
			this->button12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button12->Enabled = false;
			this->button12->Location = System::Drawing::Point(516, 395);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(90, 25);
			this->button12->TabIndex = 18;
			this->button12->Text = L"Logout";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &renew_lib::button12_Click);
			// 
			// category_txt
			// 
			this->category_txt->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->category_txt->Location = System::Drawing::Point(240, 210);
			this->category_txt->Name = L"category_txt";
			this->category_txt->Size = System::Drawing::Size(180, 20);
			this->category_txt->TabIndex = 50;
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label5->Location = System::Drawing::Point(159, 242);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(70, 13);
			this->label5->TabIndex = 49;
			this->label5->Text = L"Date of Issue";
			// 
			// date_issue
			// 
			this->date_issue->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->date_issue->Location = System::Drawing::Point(240, 239);
			this->date_issue->Name = L"date_issue";
			this->date_issue->Size = System::Drawing::Size(180, 20);
			this->date_issue->TabIndex = 48;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label4->Location = System::Drawing::Point(180, 213);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 13);
			this->label4->TabIndex = 47;
			this->label4->Text = L"Category";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Location = System::Drawing::Point(167, 184);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 13);
			this->label3->TabIndex = 46;
			this->label3->Text = L"Webmail ID";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label2->Location = System::Drawing::Point(171, 158);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 13);
			this->label2->TabIndex = 45;
			this->label2->Text = L" Book Title";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Location = System::Drawing::Point(165, 132);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 13);
			this->label1->TabIndex = 44;
			this->label1->Text = L"Account No";
			// 
			// mail_id
			// 
			this->mail_id->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->mail_id->Location = System::Drawing::Point(240, 184);
			this->mail_id->Name = L"mail_id";
			this->mail_id->Size = System::Drawing::Size(180, 20);
			this->mail_id->TabIndex = 43;
			// 
			// book_id
			// 
			this->book_id->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->book_id->Location = System::Drawing::Point(240, 132);
			this->book_id->MinimumSize = System::Drawing::Size(180, 20);
			this->book_id->Name = L"book_id";
			this->book_id->Size = System::Drawing::Size(180, 20);
			this->book_id->TabIndex = 42;
			this->book_id->TextChanged += gcnew System::EventHandler(this, &renew_lib::book_id_TextChanged);
			// 
			// book_title
			// 
			this->book_title->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->book_title->Location = System::Drawing::Point(240, 158);
			this->book_title->Name = L"book_title";
			this->book_title->Size = System::Drawing::Size(180, 20);
			this->book_title->TabIndex = 41;
			// 
			// category
			// 
			this->category->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->category->FormattingEnabled = true;
			this->category->Location = System::Drawing::Point(240, 209);
			this->category->Name = L"category";
			this->category->Size = System::Drawing::Size(180, 21);
			this->category->TabIndex = 40;
			// 
			// date_renew
			// 
			this->date_renew->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->date_renew->Location = System::Drawing::Point(240, 271);
			this->date_renew->Name = L"date_renew";
			this->date_renew->Size = System::Drawing::Size(180, 20);
			this->date_renew->TabIndex = 51;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label6->Location = System::Drawing::Point(159, 278);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(79, 13);
			this->label6->TabIndex = 52;
			this->label6->Text = L"Date of Renew";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dateTimePicker1->Location = System::Drawing::Point(240, 272);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 53;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &renew_lib::dateTimePicker1_ValueChanged);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dateTimePicker2->Location = System::Drawing::Point(240, 239);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker2->TabIndex = 54;
			this->dateTimePicker2->Value = System::DateTime(2001, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker2->ValueChanged += gcnew System::EventHandler(this, &renew_lib::dateTimePicker2_ValueChanged);
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label7->Location = System::Drawing::Point(177, 346);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(353, 31);
			this->label7->TabIndex = 57;
			this->label7->Text = L"Enter a valid  issued book Id";
			this->label7->Click += gcnew System::EventHandler(this, &renew_lib::label7_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button10);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->Controls->Add(this->button11);
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(594, 82);
			this->groupBox1->TabIndex = 58;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Pages";
			// 
			// renew_lib
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(627, 433);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->date_renew);
			this->Controls->Add(this->category_txt);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->date_issue);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->mail_id);
			this->Controls->Add(this->book_id);
			this->Controls->Add(this->book_title);
			this->Controls->Add(this->category);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button1);
			this->MinimumSize = System::Drawing::Size(643, 471);
			this->Name = L"renew_lib";
			this->Text = L"Renew Books - Librarian";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &renew_lib::renew_lib_FormClosing);
			this->Load += gcnew System::EventHandler(this, &renew_lib::renew_lib_Load);
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) ;

	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) ;

	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) ;
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) ;

	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) ;

	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) ;

	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
					Application::Restart();
			 }
	private: System::Void renew_lib_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
				 Application::Exit();
			 }
	private: System::Void renew_lib_Load(System::Object^  sender, System::EventArgs^  e) {//renew button would be hidden on form load
				 date_renew->Hide();
				 button1->Hide();
				 label7->Show();
			 }
	private: System::Void book_id_TextChanged(System::Object^  sender, System::EventArgs^  e) {//On text change of bookId the corresponding details of the book will come into other text boxes
				 book_title->Text="";
				 mail_id->Text="";
				 category_txt->Text="";
				 label7->Show();
				 button1->Hide();
				 category_txt->Text=category->Text;
				 String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
				 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase =gcnew MySqlCommand("select * from project.issuedbooks where accNo='"+book_id->Text+"';",conDataBase);
				 //MySqlCommand^ cmdDataBase2=gcnew MySqlCommand("delete from project.issuedbooks where accNo='"+book_id->Text+"';",conDataBase);
				 MySqlDataReader^ myReader;
				 //MySqlDataReader^ myReader2;

				 try{
					 conDataBase->Open();
					 myReader=cmdDataBase->ExecuteReader();
					 //	MessageBox::Show("Entries Saved Successfully");
					 if(myReader->Read()){
						 //String^ User=myReader->GetString("Username");
						 //username->Text=User;
						 label7->Hide();
						 button1->Show();
						 String^ AllinOne=myReader->GetString("Book_title"); 
						 book_title->Text=AllinOne;
						 AllinOne=myReader->GetString("Category");
						 category_txt->Text=AllinOne;
						 int  Date;
						 Date=myReader->GetInt32("issueDate");
						 int Month;
						 Month=myReader->GetInt32("issueMonth");
						 int Year;
						 Year=myReader->GetInt32("issueYear");
						 DateTime Dater=  System ::DateTime(Year,Month,Date);
						 dateTimePicker2->Value= Dater;
						 //Datetime Dater2;
						 //textBox1->Text=Dater;
						 //dateTimePicker2->Value=Dater;
						 AllinOne=myReader->GetString("mailId"); 
						 mail_id->Text=AllinOne;



					 }


				 }
				 catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 //On renew button click it calculates the fine and chages the issue date.
				 int renew_limit=0;
				 int calculate_issue=0;
				 int month_cal2=0;
				 int month_cal1=0;
				 int date1=dateTimePicker2->Value.Day;
				 int date2=dateTimePicker1->Value.Day;
				 int month1=dateTimePicker2->Value.Month;
				 int month2=dateTimePicker1->Value.Month;
				 int year1=dateTimePicker2->Value.Year;
				 int year2=dateTimePicker1->Value.Year;
				 int fine_per_day=0;
				 int previous_fine=0;
				 String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
				 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase =gcnew MySqlCommand("Update project.issuedbooks set issueDate='"+this->date_renew->Text+"'where issueDate='"+this->date_issue->Text+"';",conDataBase);
				 MySqlCommand^ cmdDataBase2 =gcnew MySqlCommand("Select * from project.limit where id='1';",conDataBase);
				 MySqlCommand^ cmdDataBase3 =gcnew MySqlCommand("Select * from project.month_days where  month_no='"+this->dateTimePicker2->Value.Month+"';",conDataBase);
				 MySqlCommand^ cmdDataBase4 =gcnew MySqlCommand("Select * from project.month_days where month_no='"+this->dateTimePicker1->Value.Month+"';",conDataBase);
				 MySqlCommand^ cmdDataBase5;
				 MySqlCommand^ cmdDataBase6;
				 MySqlCommand^ cmdDataBase7;
				 MySqlDataReader^ myReader;
				 MySqlDataReader^ myReader2;
				 MySqlDataReader^ myReader3;
				 MySqlDataReader^ myReader4;
				 MySqlDataReader^ myReader7;
				 MySqlDataReader^ myReader5;
				 try{
					 conDataBase->Open();
					 myReader=cmdDataBase->ExecuteReader();
					 while(myReader->Read()){}
					 myReader->Close();
					 myReader2=cmdDataBase2->ExecuteReader();
					 if(myReader2->Read())
					 {
						 if(category_txt->Text=="Faculty")
						 {
							 fine_per_day=myReader2->GetInt32("fine_faculty"); //fine_per_day value
							 renew_limit=myReader2->GetInt32("renew_faculty"); //no_of_days without fine
						 }
						 else
						 {
							 fine_per_day=myReader2->GetInt32("fine_student");
							 renew_limit=myReader2->GetInt32("renew_student");
						 }
					 }
					 myReader2->Close();
					 myReader3=cmdDataBase3->ExecuteReader();
					 if(myReader3->Read())
					 {
						 month_cal1=myReader3->GetInt32("Cummulative_days");
					 }
					 myReader3->Close();
					 myReader4=cmdDataBase4->ExecuteReader();
					 if(myReader4->Read())
						 month_cal2=(myReader4->GetInt32("Cummulative_days"));
					 myReader4->Close();
					 // calculate_issue=date1+month_cal1+year1*365;
					 //	int calculate_renew=date2+month_cal2+year2*365;
					 int diff=date2-date1+month_cal2-month_cal1+(year2-year1)*365;
					 if(diff>renew_limit)
					 {

						 if(category_txt->Text=="Faculty")
						 {
							 cmdDataBase7 =gcnew MySqlCommand("Select * from project.facultytable where mailId='"+this->mail_id+"';",conDataBase);
							 myReader7=cmdDataBase7->ExecuteReader();
							 if(myReader7->Read())
							 {
								 previous_fine=myReader->GetInt32("fine");
							 }
							 myReader7->Close();
							 cmdDataBase5 =gcnew MySqlCommand("Update project.facultytable set fine='"+(((diff-renew_limit)*fine_per_day)+previous_fine)+"' where mailId='"+this->mail_id+"';",conDataBase);
							 myReader5=cmdDataBase5->ExecuteReader();
						 }else
						 {
							 cmdDataBase7=gcnew MySqlCommand("select * from project.studenttable where mailId='"+this->mail_id->Text+"';",conDataBase);
							 myReader7=cmdDataBase7->ExecuteReader();
							 if(myReader7->Read())
							 {
								 previous_fine=myReader7->GetInt32("fine");
							 }
							 myReader7->Close();
							 cmdDataBase5 =gcnew MySqlCommand("Update project.studenttable set fine='"+(((diff-renew_limit)*fine_per_day)+previous_fine)+"' where mailId='"+this->mail_id->Text+"';",conDataBase);
							 myReader5=cmdDataBase5->ExecuteReader();
						 }
						 myReader5->Close();
					 }
					 cmdDataBase6 =gcnew MySqlCommand("Update project.issuedbooks set issueDate='"+date2+"', issueMonth='"+month2+"',issueYear='"+year2+"' where mailId='"+this->mail_id->Text+"';",conDataBase);	
					 MySqlDataReader^ myReader6;
					 myReader6=cmdDataBase6->ExecuteReader();
					 MessageBox::Show("Book Renewed Successfully");
				 }
				 catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }
			 }
	private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void dateTimePicker2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) ;
	private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}
