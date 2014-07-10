#pragma once

#include<ctime>

namespace lbms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for bookData_stud
	/// </summary>
	public ref class bookData_stud : public System::Windows::Forms::Form
	{
	public:
		bookData_stud(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			conString = "datasource=localhost;port=3306;username=root;password=root";
			con = gcnew MySqlConnection( conString );

		}
	private: System::Windows::Forms::Label^  label1;
	public: 
	private: System::Windows::Forms::Label^  lbl_bookTitle;
	private: System::Windows::Forms::DataGridView^  data_dataGrid;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  lbl_bookPublisher;

	private: System::Windows::Forms::Label^  lbl_bookAuthor;
	private: System::Windows::Forms::Label^  lbl_total_books;


	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  lbl_books_available;






			 //gloabal variables
	public: int titleId;
	public: String^ mailId;
	public: int userId;    //userId = 1 faculty and 2 for student
	public: String^ title;


			//Declaring public database connection variables.
	public:	String ^conString ;
	public:	MySqlConnection^ con;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^  data_sNo;
	public: 
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  data_accNo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  data_rackNo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  data_status;
	private: System::Windows::Forms::Button^  btn_request;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  txt_number_of_books;

	public:	MySqlDataReader^ myReader;


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~bookData_stud()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbl_bookTitle = (gcnew System::Windows::Forms::Label());
			this->data_dataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->data_sNo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->data_accNo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->data_rackNo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->data_status = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lbl_bookPublisher = (gcnew System::Windows::Forms::Label());
			this->lbl_bookAuthor = (gcnew System::Windows::Forms::Label());
			this->lbl_total_books = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lbl_books_available = (gcnew System::Windows::Forms::Label());
			this->btn_request = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_number_of_books = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->data_dataGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(30, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Title of the book : ";
			// 
			// lbl_bookTitle
			// 
			this->lbl_bookTitle->AutoSize = true;
			this->lbl_bookTitle->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_bookTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_bookTitle->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lbl_bookTitle->Location = System::Drawing::Point(171, 32);
			this->lbl_bookTitle->Name = L"lbl_bookTitle";
			this->lbl_bookTitle->Size = System::Drawing::Size(0, 18);
			this->lbl_bookTitle->TabIndex = 1;
			// 
			// data_dataGrid
			// 
			this->data_dataGrid->AllowUserToAddRows = false;
			this->data_dataGrid->AllowUserToDeleteRows = false;
			this->data_dataGrid->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->data_dataGrid->BackgroundColor = System::Drawing::SystemColors::Control;
			this->data_dataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data_dataGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {this->data_sNo, 
				this->data_accNo, this->data_rackNo, this->data_status});
			this->data_dataGrid->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->data_dataGrid->Location = System::Drawing::Point(28, 250);
			this->data_dataGrid->Name = L"data_dataGrid";
			this->data_dataGrid->Size = System::Drawing::Size(414, 270);
			this->data_dataGrid->TabIndex = 2;
			// 
			// data_sNo
			// 
			this->data_sNo->HeaderText = L"S No";
			this->data_sNo->Name = L"data_sNo";
			this->data_sNo->Width = 70;
			// 
			// data_accNo
			// 
			this->data_accNo->HeaderText = L"Acc No.";
			this->data_accNo->Name = L"data_accNo";
			// 
			// data_rackNo
			// 
			this->data_rackNo->HeaderText = L"Rack No.";
			this->data_rackNo->Name = L"data_rackNo";
			// 
			// data_status
			// 
			this->data_status->HeaderText = L"Current status";
			this->data_status->Name = L"data_status";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(30, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 18);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Author : ";
			// 
			// lbl_bookPublisher
			// 
			this->lbl_bookPublisher->AutoSize = true;
			this->lbl_bookPublisher->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_bookPublisher->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_bookPublisher->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lbl_bookPublisher->Location = System::Drawing::Point(170, 105);
			this->lbl_bookPublisher->Name = L"lbl_bookPublisher";
			this->lbl_bookPublisher->Size = System::Drawing::Size(0, 18);
			this->lbl_bookPublisher->TabIndex = 4;
			// 
			// lbl_bookAuthor
			// 
			this->lbl_bookAuthor->AutoSize = true;
			this->lbl_bookAuthor->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_bookAuthor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_bookAuthor->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lbl_bookAuthor->Location = System::Drawing::Point(168, 67);
			this->lbl_bookAuthor->Name = L"lbl_bookAuthor";
			this->lbl_bookAuthor->Size = System::Drawing::Size(0, 18);
			this->lbl_bookAuthor->TabIndex = 5;
			// 
			// lbl_total_books
			// 
			this->lbl_total_books->AutoSize = true;
			this->lbl_total_books->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_total_books->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_total_books->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lbl_total_books->Location = System::Drawing::Point(248, 148);
			this->lbl_total_books->Name = L"lbl_total_books";
			this->lbl_total_books->Size = System::Drawing::Size(0, 18);
			this->lbl_total_books->TabIndex = 6;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Location = System::Drawing::Point(31, 144);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(170, 18);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Total number of books : ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label7->Location = System::Drawing::Point(33, 181);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(196, 18);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Number of books available : ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label8->Location = System::Drawing::Point(32, 105);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(81, 18);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Publisher : ";
			// 
			// lbl_books_available
			// 
			this->lbl_books_available->AutoSize = true;
			this->lbl_books_available->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_books_available->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_books_available->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lbl_books_available->Location = System::Drawing::Point(248, 182);
			this->lbl_books_available->Name = L"lbl_books_available";
			this->lbl_books_available->Size = System::Drawing::Size(0, 18);
			this->lbl_books_available->TabIndex = 10;
			// 
			// btn_request
			// 
			this->btn_request->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_request->Location = System::Drawing::Point(302, 210);
			this->btn_request->Name = L"btn_request";
			this->btn_request->Size = System::Drawing::Size(140, 32);
			this->btn_request->TabIndex = 11;
			this->btn_request->Text = L"Request book";
			this->btn_request->UseVisualStyleBackColor = true;
			this->btn_request->Click += gcnew System::EventHandler(this, &bookData_stud::btn_request_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(31, 216);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(209, 18);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Number of books requested  : ";
			// 
			// txt_number_of_books
			// 
			this->txt_number_of_books->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->txt_number_of_books->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->txt_number_of_books->Location = System::Drawing::Point(238, 216);
			this->txt_number_of_books->Name = L"txt_number_of_books";
			this->txt_number_of_books->Size = System::Drawing::Size(45, 20);
			this->txt_number_of_books->TabIndex = 14;
			this->txt_number_of_books->Text = L"1";
			// 
			// bookData_stud
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(470, 532);
			this->Controls->Add(this->txt_number_of_books);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btn_request);
			this->Controls->Add(this->lbl_books_available);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->lbl_total_books);
			this->Controls->Add(this->lbl_bookAuthor);
			this->Controls->Add(this->lbl_bookPublisher);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->data_dataGrid);
			this->Controls->Add(this->lbl_bookTitle);
			this->Controls->Add(this->label1);
			this->Name = L"bookData_stud";
			this->Text = L"Book Data";
			this->Load += gcnew System::EventHandler(this, &bookData_stud::bookData_stud_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->data_dataGrid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion






		//This event is executed when the form loads.
		//This event loads data of books

	private: System::Void bookData_stud_Load(System::Object^  sender, System::EventArgs^  e) 
			 {

				 if ( userId == 2 || userId == 0 )  //If user is a student, disable the text box for number of requests
					 txt_number_of_books->Enabled = false;


				 //retrieve book data using titleId
				 try
				 {
					 //this is the query used to find all books with entered titleId
					 MySqlCommand^ cmd = gcnew MySqlCommand( "select * from project.allbooks where titleId = '"+titleId+"'; " , con );
					 String^ status;	//This stores the issue status of a book
					 con->Open();		//This connects to the database
					 myReader = cmd->ExecuteReader();	//This executed the above command
					 int total_count = 0, available_count = 0;	//These stores number of books available in library and number of books 

					 if ( myReader->Read() )  //For the first time fill title, author etc., and first entry of datagrid
					 {
						 lbl_bookTitle->Text = myReader->GetString("title");
						 lbl_bookAuthor->Text = myReader->GetString("Author");
						 lbl_bookPublisher->Text = myReader->GetString("Publisher");

						 total_count++;		//Incrementing total_count

						 if ( myReader->GetString("status") == "not issued" ) //If status = 'not issued', then the book is available in library
						 {
							 available_count++;								//Since the book is available in library, increment available_count
							 status = gcnew String("available");			
						 }
						 else status = gcnew String("issued");

						 //Creating a record to add into dataGrid
						 array<String ^> ^ AHRecord = {  total_count.ToString(), myReader->GetString("accNo"), myReader->GetString("rackNo"), status  };
						 //Adding record to dataGridView
						 data_dataGrid->Rows->Add(AHRecord);

					 }

					 while ( myReader->Read() ) //From next time, fill Datagrid entries.
					 {
						 total_count++;			//Since a book, is present, increment total_count
						 if ( myReader->GetString("status") == "not issued" ) //If status = '1', then the book is available in library
						 {
							 available_count++;						//Since the book is available in library, increment available_count
							 status = gcnew String("available");	//creating a status variable to add into dataGrid of books.
						 }
						 else status = gcnew String("issued");

						 //Creating a record to add into dataGrid
						 array<String ^> ^ AHRecord = {  total_count.ToString(), myReader->GetString("accNo"), myReader->GetString("rackNo"), status  };
						 //Adding record to dataGridView
						 data_dataGrid->Rows->Add(AHRecord);

					 }

					 //display total_count and availabe_count
					 lbl_total_books->Text = total_count.ToString();
					 lbl_books_available->Text = available_count.ToString();
				 }

				 //this is catch block handling exception
				 catch(Exception^ ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
				 con->Close();	//Closing the connection

			 }





			 //This event is triggered when user clicks request button.

	private: System::Void btn_request_Click(System::Object^  sender, System::EventArgs^  e) {


				 try
				 {
					 //Checking if the user haven't logged in.
					 if ( userId == 0 )
						 MessageBox::Show("Please login to request a book");							

					 //Checking if the user reached his request_limit
					 else if ( number_of_books_requested_by_user() >= user_request_limit() )
						 MessageBox::Show("Sorry. You have already requested maximum number of books. You can reject some of the requests using My requests tab");


					 //Checking if the book is already available in the library
					 else if ( book_available() )
						 MessageBox::Show("The book is already available in library. You can't request it again");


					 //If the book is already requested by user,
					 else if ( already_requested() )
						 MessageBox::Show("You have already requested the book. You cannot request again.");

					 else
					 {
						 //Accept the request

						 //This is the command for accepting the request.
						 MySqlCommand^ cmd = gcnew MySqlCommand("Insert into project.requeststable ( title, mailId, dateOfRequest, number, titleId, status ) values( '"+title+"' , '"+mailId+"' , '"+today()+"' , '"+txt_number_of_books->Text+"' , '"+titleId+"' , 'pending' );" , con);// 
						 con->Open();							//Connecting to database
						 myReader = cmd->ExecuteReader();		//Executing the command
						 MessageBox::Show("Thank you. You request has been added to database.");	//Message box showing success.

					 }

				 }

				 //this is catch block handling exception occured in try block
				 catch(Exception^ ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
				 con->Close();	//Closing the connection
			 }


			 //This functions returns current system date.
			 String^ today()
			 {
				 time_t t = time(0);   // get time now
				 struct tm * now = localtime( & t );	//creating a newlocal time object
				 return  (now->tm_year + 1900).ToString() + "-" + (now->tm_mon + 1).ToString() + "-" + now->tm_mday.ToString();		//This returns current date
			 }


			 //This function returns request limit of the user;
			 int user_request_limit()
			 {
				 //getting request limit of user
				 try
				 {
					 MySqlCommand^ cmd; int request_limit;
					 cmd = gcnew MySqlCommand("select * from project.requestlimits  where id='"+userId+"' ;" , con);
					 con->Open();							//connecting to database
					 myReader = cmd->ExecuteReader();		//Executing the command
					 myReader->Read();						//Reading the data of the query
					 request_limit = myReader->GetInt32("limit");	//Getting the request limit
					 con->Close();							//Closing the connection
					 return request_limit;					//return the limit;
				 }

				 //this is catch block handling exception occured in try block
				 catch(Exception ^ex)
				 {
					 MessageBox::Show(ex->Message);
				 }

			 }


			 //returning the number of books already requested by user. That is previous number of requests.
			 int number_of_books_requested_by_user()
			 {
				 try
				 {
					 //getting number of books requested by user upto now
					 MySqlCommand^ cmd = gcnew MySqlCommand("select * from project.requeststable where mailId= '"+mailId+"';" , con );
					 con->Open();							//Connecting to database
					 myReader = cmd->ExecuteReader();		//Executing the command

					 //Getting the count.
					 int count = 0;						
					 while( myReader->Read() )
						 count += myReader->GetInt32("number");   //Adding the number of books requested to count;

					 con->Close();							//Closing the connection

					 return count;							//returing hte count;
				 }

				 //this is catch block handling exception occured in try block
				 catch(Exception^ ex)
				 {
					 MessageBox::Show( ex->Message );
				 }
			 }



			 //This checks if the book is already available in the library.
			 bool book_available()
			 {

				 try
				 {
					 //Checking if the book is already available in library
					 MySqlCommand^ cmd = gcnew MySqlCommand("select status from project.allbooks where titleId = '"+titleId+"';" , con );
					 con->Open();							//connecting to database
					 myReader = cmd->ExecuteReader();		//executing the command


					 while( myReader->Read() )								//Reading book by book
					 {
						 if ( myReader->GetString("status") == "not issued" ) //If a book is already available in the library.
							 return true;										//Returning true;
					 }
					 con->Close();			//Closing the connection

					 return false;			//returning false if no books are available
				 }


				 //this is catch block handling exception occured in try block
				 catch(Exception^ ex)
				 {
					 MessageBox::Show( ex->Message );
				 }
			 }


			 //returns true if the user have already requested the book
			 bool already_requested()
			 {
				 //Check if the user have already requested the book.
				 try
				 {
					 MySqlCommand^ cmd = gcnew MySqlCommand("select status from project.requeststable where mailId= '"+mailId+"' and titleId = '"+titleId+"';" , con );
					 con->Open();								//Connecting to database
					 myReader = cmd->ExecuteReader();			//executing the command

					 int count = 0;
					 while( myReader->Read() )					//Checking for book by book
					 {
						 if ( myReader->GetString("status") == "pending" )  //If the request is pending, then the books is said to be "already requested"
							 return true;
					 }
					 con->Close();		//Closing connection to database
					 return false;		//Returning false if book is not requested
				 }

				 //this is catch block handling exception occured in try block
				 catch(Exception^ ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
			 }

	};
}
