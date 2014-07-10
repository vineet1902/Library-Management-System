#pragma once
#include "stdafx.h"
#include "home_stud.h"
#include "bookClass.h"
#include "home_lib.h"

namespace lbms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{

			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			conString = "datasource=localhost;port=3306;username=root;password=root";
			con = gcnew MySqlConnection( conString );
			b = new bookClass();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

		//global variables
		String^ conString;
		MySqlConnection^ con;
		MySqlDataReader^ myReader;
		bookClass *b;

	private: System::Windows::Forms::TextBox^  userName;
	protected: 
	private: System::Windows::Forms::TextBox^  password;
	private: System::Windows::Forms::Button^  logIn;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::ComboBox^  category;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  btn_search;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  txt_search;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ComboBox^  combo_search_category;
	private: System::Windows::Forms::DataGridView^  search_dataGrid;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  rackNo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  search_subject;
	private: System::Windows::Forms::DataGridViewButtonColumn^  book_details;



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
			this->userName = (gcnew System::Windows::Forms::TextBox());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->logIn = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->category = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_search = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_search = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->combo_search_category = (gcnew System::Windows::Forms::ComboBox());
			this->search_dataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->rackNo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->search_subject = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->book_details = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->search_dataGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// userName
			// 
			this->userName->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->userName->Location = System::Drawing::Point(313, 30);
			this->userName->Name = L"userName";
			this->userName->Size = System::Drawing::Size(100, 20);
			this->userName->TabIndex = 0;
			// 
			// password
			// 
			this->password->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->password->Location = System::Drawing::Point(525, 28);
			this->password->Name = L"password";
			this->password->PasswordChar = '*';
			this->password->Size = System::Drawing::Size(100, 21);
			this->password->TabIndex = 1;
			// 
			// logIn
			// 
			this->logIn->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->logIn->AutoEllipsis = true;
			this->logIn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->logIn->Location = System::Drawing::Point(642, 26);
			this->logIn->Name = L"logIn";
			this->logIn->Size = System::Drawing::Size(75, 23);
			this->logIn->TabIndex = 2;
			this->logIn->Text = L"Log in";
			this->logIn->UseVisualStyleBackColor = true;
			this->logIn->Click += gcnew System::EventHandler(this, &Form1::logIn_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->category);
			this->groupBox1->Controls->Add(this->logIn);
			this->groupBox1->Controls->Add(this->userName);
			this->groupBox1->Controls->Add(this->password);
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->groupBox1->Location = System::Drawing::Point(68, 464);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(733, 65);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Sign in";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(229, 32);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 15);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Webmail Id : ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(444, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 15);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Password : ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(6, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 15);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Category : ";
			// 
			// category
			// 
			this->category->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->category->FormattingEnabled = true;
			this->category->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"faculty", L"student", L"librarian"});
			this->category->Location = System::Drawing::Point(91, 31);
			this->category->Name = L"category";
			this->category->Size = System::Drawing::Size(121, 21);
			this->category->TabIndex = 3;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->btn_search);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->txt_search);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->combo_search_category);
			this->groupBox2->ForeColor = System::Drawing::Color::MistyRose;
			this->groupBox2->Location = System::Drawing::Point(43, 74);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(796, 55);
			this->groupBox2->TabIndex = 8;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Search Library";
			// 
			// btn_search
			// 
			this->btn_search->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_search->Location = System::Drawing::Point(707, 21);
			this->btn_search->Name = L"btn_search";
			this->btn_search->Size = System::Drawing::Size(75, 23);
			this->btn_search->TabIndex = 6;
			this->btn_search->Text = L"Search";
			this->btn_search->UseVisualStyleBackColor = true;
			this->btn_search->Click += gcnew System::EventHandler(this, &Form1::btn_search_Click_1);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(257, 27);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Key word : ";
			// 
			// txt_search
			// 
			this->txt_search->Location = System::Drawing::Point(338, 23);
			this->txt_search->Name = L"txt_search";
			this->txt_search->Size = System::Drawing::Size(363, 20);
			this->txt_search->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(40, 25);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(73, 13);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Search type : ";
			// 
			// combo_search_category
			// 
			this->combo_search_category->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->combo_search_category->FormattingEnabled = true;
			this->combo_search_category->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"title", L"author", L"subject", L"publisher"});
			this->combo_search_category->Location = System::Drawing::Point(119, 22);
			this->combo_search_category->Name = L"combo_search_category";
			this->combo_search_category->Size = System::Drawing::Size(121, 21);
			this->combo_search_category->TabIndex = 2;
			this->combo_search_category->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::combo_search_category_SelectedIndexChanged);
			// 
			// search_dataGrid
			// 
			this->search_dataGrid->AllowUserToAddRows = false;
			this->search_dataGrid->AllowUserToDeleteRows = false;
			this->search_dataGrid->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->search_dataGrid->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->search_dataGrid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->search_dataGrid->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->search_dataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->search_dataGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {this->dataGridViewTextBoxColumn1, 
				this->rackNo, this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->search_subject, this->book_details});
			this->search_dataGrid->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->search_dataGrid->Location = System::Drawing::Point(43, 147);
			this->search_dataGrid->Name = L"search_dataGrid";
			this->search_dataGrid->Size = System::Drawing::Size(796, 300);
			this->search_dataGrid->TabIndex = 7;
			this->search_dataGrid->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::search_dataGrid_CellContentClick);
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"S No.";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 70;
			// 
			// rackNo
			// 
			this->rackNo->HeaderText = L"Rack No";
			this->rackNo->Name = L"rackNo";
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Title of the book";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Width = 250;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Book Author";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->Width = 110;
			// 
			// search_subject
			// 
			this->search_subject->HeaderText = L"Subject";
			this->search_subject->Name = L"search_subject";
			this->search_subject->Width = 125;
			// 
			// book_details
			// 
			this->book_details->HeaderText = L"Details";
			this->book_details->Name = L"book_details";
			this->book_details->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->book_details->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(870, 562);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->search_dataGrid);
			this->Name = L"Form1";
			this->Text = L"Library Management System";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->search_dataGrid))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion



	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) 
			 {

			 }




			 //this event is executed when the user clicks log in button. This event logs the user in.
	private: System::Void logIn_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 //This is connecting to database
				 String ^conString = "datasource=localhost;port=3306;username=root;password=root";
				 MySqlConnection^ con = gcnew MySqlConnection( conString );
				 MySqlDataReader^ myReader;
				 MySqlCommand^ cmd;
				 if ( category->Text != "" && userName->Text != "" && password->Text != "")
				 {
				 
					 try
					 {
						 //Checking the category of the user and executing the category accordingly.
						 if ( category->Text == "faculty" )
							 cmd = gcnew MySqlCommand("select * from project.facultytable where mailId = '"+userName->Text+"' and password = '"+password->Text+"';",con);

						 else if ( category->Text == "student" )
							 cmd = gcnew MySqlCommand("select * from project.studenttable where mailId = '"+userName->Text+"' and password = '"+password->Text+"';",con);

						 else if ( category->Text == "librarian" )
							 cmd = gcnew MySqlCommand("select * from project.librariantable where mailId = '"+userName->Text+"' and password = '"+password->Text+"';",con);

						 else if ( category->Text == "admin" )
							 cmd = gcnew MySqlCommand("select * from project.admintable where mailId = '"+userName->Text+"' and password = '"+password->Text+"';",con);

						 con->Open();	//Connecting to the database
						 myReader = cmd->ExecuteReader();	//Executing the command 
						 int count = 0;

						 //Checking number of user present with the user name
						 while ( myReader->Read() )
							 count++;

						 //count stores the number of users with the entered webmail Id.

						 if ( count == 1 )	//If there is one student with the entered webmailid
						 {

							 if ( category->Text == "student" )
							 {
								 //Hiding current form
								 this->Hide();

								 //Creating new form and passing details of the user
								 home_stud^ studentHomePage = gcnew home_stud();
								 studentHomePage->mailId = userName->Text;
								 studentHomePage->userId = 2;		//UserId is 2 for students
								 studentHomePage->ShowDialog();

							 }

							 else if ( category->Text == "faculty" )
							 {
								 //Hiding current form
								 this->Hide();

								 //Creating new form and passing details of the user
								 home_stud^ studentHomePage = gcnew home_stud();
								 studentHomePage->mailId = userName->Text;
								 studentHomePage->userId = 1;		//UserId is 1 for faculty
								 studentHomePage->ShowDialog();

							 }

							 else if ( category->Text == "admin" )
							 {
							 }

							 else if ( category->Text == "librarian" )
							 {
								 this->Hide();
								 home_lib^ form1 = gcnew home_lib();
								 form1->ShowDialog();
							 }
						 }

						 //If there are multiple users with same webmailId then pop up an error message
						 else if ( count > 1 )
							 MessageBox::Show( " Multiple users with same id!!! Can't Log in ");

						 //If there are no users with the entered webmailId then pop up an error message
						 else
							 MessageBox::Show( " Wrong username or password. Check your category." );

					 }
					 catch( Exception^ ex )
					 {	
						 MessageBox::Show( ex->Message ); 
					 }
				 }

				 else
				 {
					 MessageBox::Show("You haven't entered all the details");
				 }
			 }






			 //This event is executed when users clicks searchDatagrid cell		 
	private: System::Void search_dataGrid_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) 
			 {
				 //Retrieving titleId of the book clicked.
				 int book_titleId = stoi( b->TitleId( e->RowIndex ) );
				 if ( e->ColumnIndex == 5 )       //If user clicks on details button
				 {
					 //Creating a dataPage and transferring data to it. This page contaings details of the book clicked.
					 bookData_stud^ dataPage = gcnew bookData_stud();
					 dataPage->titleId = book_titleId;		//passing titleid to the page
					 dataPage->userId = 0;					//passing userid to the page
					 //dataPage->mailId = mailId;			//passing mailid of the user to the page
					 dataPage->title = search_dataGrid->Rows[e->RowIndex]->Cells[2]->Value->ToString();	//passing title of the book
					 dataPage->ShowDialog();					//Finally opening the page.
				 }
			 }



			 //This function is used to comapre two strings using string alignment. This function returns the final count obtained string alignment.
	private: float compare(String^ x, String^ y)  //Used for comparing two strings using string alignment;
			 {
				 int x_length = x->Length;			//Calculating lenghts of two strings.
				 int y_length = y->Length;
				 //Assuming that x_length is smaller.

				 // Assming f(-,i) = 1.5 , f(i,j) = 4, f(i,i) = 0;

				 float *temp = new float[x_length+1];		//Creating a temporary array.
				 float *sol = new float[x_length+1];		//Creating a solution array.

				 for ( int i = 0 ; i <= x_length; i++ )
					 temp[i] = 1.5*i;						//Initializing temporary array.

				 //This is the code for string alignment.
				 for ( int i = 1; i <= y_length; i++ )
				 {
					 sol[0] = 1.5*i;
					 for ( int j = 1; j <= x_length; j++ )
					 {
						 if(x[j-1] == y[i-1])
							 sol[j] = min( temp[j-1] , temp[j] + 1.5 , sol[j-1] + 1.5 );
						 else
							 sol[j] = min( temp[j-1] + 4 , temp[j] + 1.5 , sol[j-1] + 1.5 );
					 }

					 for ( int j = 0; j <= x_length; j++ )
						 temp[j] = sol[j];
				 }

				 return sol[x_length];

			 }

	private: float min( float x , float y , float z )   //returns minimum of 3 numbers x,y,z
			 {
				 float minimum;
				 if ( x <= y )
					 minimum = x;
				 else 
					 minimum = y;

				 if ( z < minimum )
					 minimum = z;
				 return minimum;
			 }



			 void MarshalString ( String ^ s, string& os )   //Used to convert string^ to string format
			 {
				 using namespace Runtime::InteropServices;
				 const char* chars =
					 (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
				 os = chars;
				 Marshal::FreeHGlobal(IntPtr((void*)chars));
			 }


			 //This event gets executed when category in category box changes.
	private: System::Void combo_search_category_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 search();
			 }



			 void search()				//This function actually searches the document for the key word.
			 {
				 MySqlCommand^ query = gcnew MySqlCommand("select * from project.allbooks group by titleId", con);
				 float compare_count;	//This value stores the compare_count returned by compare function.


				 if ( txt_search->Text->Trim()->Length != 0 )  //If any book name is entered in search box. This is to ensure that search box contatin non null value
				 {
					 try
					 {
						 b->clear();								//Clearing previous books list
						 con->Open();							//Connecting to database
						 myReader = query->ExecuteReader();		//Executing the command
						 search_dataGrid->Rows->Clear();			//Clearing the dataGrid.( may contain previous search data )

						 //Search by Title
						 if ( combo_search_category->Text == "title" )	//If the search category is title
						 {
							 while(myReader->Read())					//Reading books one by one.
							 {
								 String^ bookTitle = myReader->GetString("title");	

								 if ( ( compare_count = compare( txt_search->Text->ToLower() , bookTitle->ToLower() ) ) < 40 )  //Comparing title with entered text. 
								 {
									 string Title_std, Author_std, rackNo_std, publisher_std, subject_std, titleId_std;
									 //Converting String^ format to string format
									 MarshalString( bookTitle , Title_std );													
									 MarshalString( myReader->GetString("rackNo") , rackNo_std );
									 MarshalString( myReader->GetString("publisher") , publisher_std );
									 MarshalString( myReader->GetString("subject") , subject_std );
									 MarshalString( myReader->GetString("author") , Author_std );
									 MarshalString( myReader->GetString("titleId") , titleId_std );

									 //Inserting into bookClass object. These will be sorted later and displayed into dataGrid.
									 b->insert ( Title_std, Author_std, rackNo_std, publisher_std, subject_std, titleId_std, compare_count );			 
								 }
							 }

						 }



						 //search by author
						 else if ( combo_search_category->Text == "author" )
						 {
							 while(myReader->Read())
							 {
								 String^ bookAuthor = myReader->GetString("author");
								 if ( ( compare_count = compare( txt_search->Text->ToLower() , bookAuthor->ToLower() ) ) < 40 ) 
								 {
									 string Title_std, Author_std, rackNo_std, publisher_std, subject_std, titleId_std;
									 //Converting String^ format to string format
									 MarshalString( bookAuthor , Author_std );
									 MarshalString( myReader->GetString("rackNo") , rackNo_std );
									 MarshalString( myReader->GetString("publisher") , publisher_std );
									 MarshalString( myReader->GetString("subject") , subject_std );
									 MarshalString( myReader->GetString("title") , Title_std );
									 MarshalString( myReader->GetString("titleId") , titleId_std );
									 //Inserting into bookClass object. These will be sorted later and displayed into dataGrid.
									 b->insert ( Title_std, Author_std, rackNo_std, publisher_std, subject_std, titleId_std, compare_count );			 
								 }
							 }
						 }


						 //search by subject
						 else if ( combo_search_category->Text == "subject" )
						 {
							 while(myReader->Read())
							 {
								 String^ bookSubject = myReader->GetString("subject");
								 if ( ( compare_count = compare( txt_search->Text->ToLower() , bookSubject->ToLower() ) ) < 35 ) 
								 {
									 string Title_std, Author_std, rackNo_std, publisher_std, subject_std, titleId_std;
									 //Converting String^ format to string format
									 MarshalString( bookSubject , subject_std );
									 MarshalString( myReader->GetString("rackNo") , rackNo_std );
									 MarshalString( myReader->GetString("publisher") , publisher_std );
									 MarshalString( myReader->GetString("title") , Title_std );
									 MarshalString( myReader->GetString("author") , Author_std );
									 MarshalString( myReader->GetString("titleId") , titleId_std );
									 //Inserting into bookClass object. These will be sorted later and displayed into dataGrid.
									 b->insert ( Title_std, Author_std, rackNo_std, publisher_std, subject_std, titleId_std, compare_count );			 
								 }
							 }
						 }


						 //search by publisher
						 else if ( combo_search_category->Text == "publisher" )
						 {
							 while(myReader->Read())
							 {
								 String^ bookPublisher = myReader->GetString("publisher");
								 if ( ( compare_count = compare( txt_search->Text->ToLower() , bookPublisher->ToLower() ) ) < 40 ) 
								 {
									 string Title_std, Author_std, rackNo_std, publisher_std, subject_std, titleId_std;
									 //Converting String^ format to string format
									 MarshalString( bookPublisher , publisher_std );
									 MarshalString( myReader->GetString("rackNo") , rackNo_std );
									 MarshalString( myReader->GetString("title") , Title_std );
									 MarshalString( myReader->GetString("subject") , subject_std );
									 MarshalString( myReader->GetString("author") , Author_std );
									 MarshalString( myReader->GetString("titleId") , titleId_std );
									 //Inserting into bookClass object. These will be sorted later and displayed into dataGrid.
									 b->insert ( Title_std, Author_std, rackNo_std, publisher_std, subject_std, titleId_std, compare_count );			 
								 }
							 }
						 }


						 b->sort();
						 int totalRecords = b->count();
						 for ( int i = 0 ; i < totalRecords; i++ )
						 {
							 String^ RackNo=gcnew String( b->RackNo(i).c_str());
							 String^ Title=gcnew String( b->Title(i).c_str());
							 String^ Author=gcnew String( b->Author(i).c_str());
							 String^ Subject = gcnew String( b->Subject(i).c_str());

							 array<String ^> ^ AHRecord = { (i+1).ToString() , RackNo, Title , Author, Subject , "Details" };
							 search_dataGrid->Rows->Add(AHRecord);
						 }

					 }
					 //This is catch block which gets executed when there is an exception in try block.

					 catch(Exception^ ex)
					 {
						 MessageBox::Show(ex->Message);
					 }
					 con->Close();			//Closing the connection
				 }
			 }


			 //This event is executed when the user presses search button.
	private: System::Void btn_search_Click_1(System::Object^  sender, System::EventArgs^  e) {
				 search();
			 }






	};
}

