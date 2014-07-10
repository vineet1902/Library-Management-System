#pragma once

#include "bookData_stud.h"
#include "bookClass.h"
#include<ctime>
#include "stdafx.h"

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
	/// Summary for home_stud
	/// </summary>
	public ref class home_stud : public System::Windows::Forms::Form
	{
	public:
		home_stud(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//


			conString = "datasource=localhost;port=3306;username=root;password=root";
			con = gcnew MySqlConnection( conString );
			b = new bookClass();

		}

		//Declaring public database connection variables.
	public:	String ^conString ;
	public:	MySqlConnection^ con;
	public:	MySqlDataReader^ myReader;
	public: bookClass *b;

			//These are details of the user. These come from homepage.
	public: String^ mailId;
	public: int userId;  //userId = 1 for faculty and 2 for students

	private: System::Windows::Forms::TabControl^  tabs;
	public: 

	public: 

	public: 

	public: 





	private: System::Windows::Forms::TabPage^  tab_home;
	private: System::Windows::Forms::TabPage^  tab_requests;


	private: System::Windows::Forms::DataGridView^  dataGrid;





	private: System::Windows::Forms::DataGridView^  requests_dataGrid;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  requests_sNo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  requests_title;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  requests_author;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  requests_dateOfRequest;
	private: System::Windows::Forms::DataGridViewButtonColumn^  reject_link;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  sno;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  accNo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  title;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  author;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  issueDate;
	private: System::Windows::Forms::TabPage^  tab_search;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  btn_search;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txt_search;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ComboBox^  combo_search_category;
	private: System::Windows::Forms::DataGridView^  search_dataGrid;






	private: System::Windows::Forms::TabPage^  tab_feedback;
	private: System::Windows::Forms::TextBox^  txt_feedback;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  btn_submit;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  rackNo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  search_subject;
	private: System::Windows::Forms::DataGridViewButtonColumn^  book_details;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^  book_fine;


	public: 



	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~home_stud()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::Button^  logOut;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  lbl_fine;

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
			this->logOut = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbl_fine = (gcnew System::Windows::Forms::Label());
			this->tabs = (gcnew System::Windows::Forms::TabControl());
			this->tab_home = (gcnew System::Windows::Forms::TabPage());
			this->dataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->sno = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->accNo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->title = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->author = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->issueDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->book_fine = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tab_requests = (gcnew System::Windows::Forms::TabPage());
			this->requests_dataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->requests_sNo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->requests_title = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->requests_author = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->requests_dateOfRequest = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->reject_link = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->tab_search = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_search = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_search = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->combo_search_category = (gcnew System::Windows::Forms::ComboBox());
			this->search_dataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->rackNo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->search_subject = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->book_details = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->tab_feedback = (gcnew System::Windows::Forms::TabPage());
			this->btn_submit = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_feedback = (gcnew System::Windows::Forms::TextBox());
			this->tabs->SuspendLayout();
			this->tab_home->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGrid))->BeginInit();
			this->tab_requests->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->requests_dataGrid))->BeginInit();
			this->tab_search->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->search_dataGrid))->BeginInit();
			this->tab_feedback->SuspendLayout();
			this->SuspendLayout();
			// 
			// logOut
			// 
			this->logOut->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->logOut->Location = System::Drawing::Point(748, 14);
			this->logOut->Name = L"logOut";
			this->logOut->Size = System::Drawing::Size(75, 23);
			this->logOut->TabIndex = 1;
			this->logOut->Text = L"Log out";
			this->logOut->UseVisualStyleBackColor = true;
			this->logOut->Click += gcnew System::EventHandler(this, &home_stud::logOut_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(592, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Your fine : ";
			// 
			// lbl_fine
			// 
			this->lbl_fine->AutoSize = true;
			this->lbl_fine->Location = System::Drawing::Point(666, 45);
			this->lbl_fine->Name = L"lbl_fine";
			this->lbl_fine->Size = System::Drawing::Size(0, 13);
			this->lbl_fine->TabIndex = 6;
			// 
			// tabs
			// 
			this->tabs->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tabs->Controls->Add(this->tab_home);
			this->tabs->Controls->Add(this->tab_requests);
			this->tabs->Controls->Add(this->tab_search);
			this->tabs->Controls->Add(this->tab_feedback);
			this->tabs->Location = System::Drawing::Point(12, 43);
			this->tabs->Name = L"tabs";
			this->tabs->SelectedIndex = 0;
			this->tabs->Size = System::Drawing::Size(829, 439);
			this->tabs->TabIndex = 7;
			// 
			// tab_home
			// 
			this->tab_home->BackColor = System::Drawing::Color::Black;
			this->tab_home->Controls->Add(this->dataGrid);
			this->tab_home->Controls->Add(this->lbl_fine);
			this->tab_home->Controls->Add(this->label1);
			this->tab_home->Location = System::Drawing::Point(4, 22);
			this->tab_home->Name = L"tab_home";
			this->tab_home->Padding = System::Windows::Forms::Padding(3);
			this->tab_home->Size = System::Drawing::Size(821, 413);
			this->tab_home->TabIndex = 0;
			this->tab_home->Text = L"Home";
			this->tab_home->Click += gcnew System::EventHandler(this, &home_stud::home_stud_Load);
			// 
			// dataGrid
			// 
			this->dataGrid->AllowUserToAddRows = false;
			this->dataGrid->AllowUserToDeleteRows = false;
			this->dataGrid->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dataGrid->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGrid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGrid->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->dataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {this->sno, this->accNo, 
				this->title, this->author, this->issueDate, this->book_fine});
			this->dataGrid->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataGrid->Location = System::Drawing::Point(17, 104);
			this->dataGrid->Name = L"dataGrid";
			this->dataGrid->Size = System::Drawing::Size(779, 258);
			this->dataGrid->TabIndex = 1;
			// 
			// sno
			// 
			this->sno->HeaderText = L"S No.";
			this->sno->Name = L"sno";
			this->sno->Width = 50;
			// 
			// accNo
			// 
			this->accNo->HeaderText = L"Account No";
			this->accNo->Name = L"accNo";
			this->accNo->Width = 90;
			// 
			// title
			// 
			this->title->HeaderText = L"Title of the book";
			this->title->Name = L"title";
			this->title->Width = 225;
			// 
			// author
			// 
			this->author->HeaderText = L"Book Author";
			this->author->Name = L"author";
			this->author->Width = 120;
			// 
			// issueDate
			// 
			this->issueDate->HeaderText = L"Issued/Renewed Date";
			this->issueDate->Name = L"issueDate";
			this->issueDate->Width = 150;
			// 
			// book_fine
			// 
			this->book_fine->HeaderText = L"fine for the book";
			this->book_fine->Name = L"book_fine";
			// 
			// tab_requests
			// 
			this->tab_requests->BackColor = System::Drawing::Color::Black;
			this->tab_requests->Controls->Add(this->requests_dataGrid);
			this->tab_requests->Location = System::Drawing::Point(4, 22);
			this->tab_requests->Name = L"tab_requests";
			this->tab_requests->Padding = System::Windows::Forms::Padding(3);
			this->tab_requests->Size = System::Drawing::Size(821, 413);
			this->tab_requests->TabIndex = 1;
			this->tab_requests->Text = L"My Requests";
			this->tab_requests->Enter += gcnew System::EventHandler(this, &home_stud::requests_std_Load);
			this->tab_requests->Leave += gcnew System::EventHandler(this, &home_stud::tab_requests_Leave);
			// 
			// requests_dataGrid
			// 
			this->requests_dataGrid->AllowUserToAddRows = false;
			this->requests_dataGrid->AllowUserToDeleteRows = false;
			this->requests_dataGrid->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->requests_dataGrid->BackgroundColor = System::Drawing::SystemColors::Window;
			this->requests_dataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->requests_dataGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {this->requests_sNo, 
				this->requests_title, this->requests_author, this->requests_dateOfRequest, this->reject_link});
			this->requests_dataGrid->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->requests_dataGrid->Location = System::Drawing::Point(14, 113);
			this->requests_dataGrid->Name = L"requests_dataGrid";
			this->requests_dataGrid->Size = System::Drawing::Size(793, 203);
			this->requests_dataGrid->TabIndex = 1;
			this->requests_dataGrid->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &home_stud::requests_dataGrid_CellContentClick);
			// 
			// requests_sNo
			// 
			this->requests_sNo->HeaderText = L"S. No";
			this->requests_sNo->Name = L"requests_sNo";
			// 
			// requests_title
			// 
			this->requests_title->HeaderText = L"Title of the book";
			this->requests_title->Name = L"requests_title";
			this->requests_title->Width = 250;
			// 
			// requests_author
			// 
			this->requests_author->HeaderText = L"Author";
			this->requests_author->Name = L"requests_author";
			this->requests_author->Width = 150;
			// 
			// requests_dateOfRequest
			// 
			this->requests_dateOfRequest->HeaderText = L"Date of request";
			this->requests_dateOfRequest->Name = L"requests_dateOfRequest";
			this->requests_dateOfRequest->Width = 150;
			// 
			// reject_link
			// 
			this->reject_link->HeaderText = L"Reject request";
			this->reject_link->Name = L"reject_link";
			this->reject_link->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->reject_link->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			// 
			// tab_search
			// 
			this->tab_search->BackColor = System::Drawing::Color::Black;
			this->tab_search->Controls->Add(this->groupBox1);
			this->tab_search->Controls->Add(this->search_dataGrid);
			this->tab_search->Location = System::Drawing::Point(4, 22);
			this->tab_search->Name = L"tab_search";
			this->tab_search->Padding = System::Windows::Forms::Padding(3);
			this->tab_search->Size = System::Drawing::Size(821, 413);
			this->tab_search->TabIndex = 2;
			this->tab_search->Text = L"Search Library";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btn_search);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->txt_search);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->combo_search_category);
			this->groupBox1->ForeColor = System::Drawing::Color::MistyRose;
			this->groupBox1->Location = System::Drawing::Point(11, 22);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(796, 55);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Search Library";
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
			this->btn_search->Click += gcnew System::EventHandler(this, &home_stud::btn_search_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(257, 27);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Key word : ";
			// 
			// txt_search
			// 
			this->txt_search->Location = System::Drawing::Point(323, 23);
			this->txt_search->Name = L"txt_search";
			this->txt_search->Size = System::Drawing::Size(363, 20);
			this->txt_search->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(40, 25);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Search type : ";
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
			this->search_dataGrid->Location = System::Drawing::Point(11, 100);
			this->search_dataGrid->Name = L"search_dataGrid";
			this->search_dataGrid->Size = System::Drawing::Size(796, 300);
			this->search_dataGrid->TabIndex = 5;
			this->search_dataGrid->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &home_stud::search_dataGrid_CellContentClick);
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
			// tab_feedback
			// 
			this->tab_feedback->BackColor = System::Drawing::Color::Black;
			this->tab_feedback->Controls->Add(this->btn_submit);
			this->tab_feedback->Controls->Add(this->label4);
			this->tab_feedback->Controls->Add(this->txt_feedback);
			this->tab_feedback->Location = System::Drawing::Point(4, 22);
			this->tab_feedback->Name = L"tab_feedback";
			this->tab_feedback->Padding = System::Windows::Forms::Padding(3);
			this->tab_feedback->Size = System::Drawing::Size(821, 413);
			this->tab_feedback->TabIndex = 3;
			this->tab_feedback->Text = L"Give feedback";
			// 
			// btn_submit
			// 
			this->btn_submit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_submit->Location = System::Drawing::Point(656, 341);
			this->btn_submit->Name = L"btn_submit";
			this->btn_submit->Size = System::Drawing::Size(92, 29);
			this->btn_submit->TabIndex = 2;
			this->btn_submit->Text = L"Submit";
			this->btn_submit->UseVisualStyleBackColor = true;
			this->btn_submit->Click += gcnew System::EventHandler(this, &home_stud::btn_submit_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(82, 106);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(147, 24);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Your feedback : ";
			// 
			// txt_feedback
			// 
			this->txt_feedback->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txt_feedback->Location = System::Drawing::Point(255, 94);
			this->txt_feedback->Multiline = true;
			this->txt_feedback->Name = L"txt_feedback";
			this->txt_feedback->Size = System::Drawing::Size(499, 206);
			this->txt_feedback->TabIndex = 0;
			this->txt_feedback->Text = L"Your feedback here";
			this->txt_feedback->Enter += gcnew System::EventHandler(this, &home_stud::txt_feedback_Enter);
			this->txt_feedback->Leave += gcnew System::EventHandler(this, &home_stud::txt_feedback_Leave);
			// 
			// home_stud
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(855, 514);
			this->Controls->Add(this->tabs);
			this->Controls->Add(this->logOut);
			this->Name = L"home_stud";
			this->Text = L"Library Management System";
			this->Load += gcnew System::EventHandler(this, &home_stud::home_stud_Load);
			this->tabs->ResumeLayout(false);
			this->tab_home->ResumeLayout(false);
			this->tab_home->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGrid))->EndInit();
			this->tab_requests->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->requests_dataGrid))->EndInit();
			this->tab_search->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->search_dataGrid))->EndInit();
			this->tab_feedback->ResumeLayout(false);
			this->tab_feedback->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		//////////////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////Home tab//////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////////////

	private: System::Void home_stud_Load(System::Object^  sender, System::EventArgs^  e) 
			 {

				 float fine_per_book_per_day = finePerBookPerDay();		//Calculating fine per book per day for the user
				 int days_limit = daysLimit();							//Calculating the number of days after which fine is imposed on the user.
				 MySqlCommand^ cmd;
				 int count = 0,number_of_days;
				 float fine,total_fine=0;

				 //Have to calculate books under the user and display
				 if ( dataGrid->RowCount == 0)
				 {
					 //
					 cmd = gcnew MySqlCommand("select issuedbooks.accNo as acc, allbooks.title as tit ,allbooks.author as aut,issuedbooks.issueDate as dat, DATEDIFF(NOW(),issuedbooks.issueDate) as datedif from project.issuedbooks,project.allbooks where issuedbooks.mailId='"+mailId+"' and issuedbooks.accNo = allbooks.accNo ;" , con );
					 try
					 {
						 con->Open();								//Connecting to database
						 myReader = cmd->ExecuteReader();			//Executing the command


						 while( myReader->Read() )					//Reading book by book(every row)
						 {
							 count++;								//Incrementing count variable
							 number_of_days = myReader->GetInt32("datedif");
							 if ( number_of_days > days_limit )											//Checkinf if the book have a fine
								 fine = ( number_of_days - days_limit ) * fine_per_book_per_day;		//Calucalating fine for the book
							 else 
								 fine = 0;																//If the fine is zero, fine=0

							 total_fine += fine;														//calculating total fine

							 //Creating a record for connecting to database
							 array<String ^> ^ AHRecord = {  count.ToString() , myReader->GetString("acc") , myReader->GetString("tit") , myReader->GetString("aut") , myReader->GetString("dat") , fine.ToString() };
							 //Adding the record to datagrid
							 dataGrid->Rows->Add(AHRecord);

						 }

					 }
					 //This is catch block which gets executed when there is an exception in try block.

					 catch( Exception^ ex )
					 {
						 MessageBox::Show( ex->Message );
					 }
					 con->Close();					//Closing the connection
				 }




				 //Have to calculate previous fee and display
				 if ( userId == 1 ) //If user is a faculty,
					 cmd = gcnew MySqlCommand( "select fine from project.facultytable where mailId = '"+mailId+"' ;",con );

				 else //If user is a student,
					 cmd = gcnew MySqlCommand( "select fine from project.studenttable where mailId = '"+mailId+"' ;",con );

				 try
				 {
					 con->Open();							//connecting to database
					 myReader = cmd->ExecuteReader();		//executing the command
					 myReader->Read();						//Reading the first row which contains fine
					 float previous_fine = myReader->GetFloat("fine");		//Reading the float value present in the fine
					 lbl_fine->Text = (previous_fine + total_fine).ToString();		//filling the test value
				 }
				 //This is catch block which gets executed when there is an exception in try block.

				 catch(Exception^ ex)
				 {
					 MessageBox::Show( ex->Message );
				 }
				 con->Close();							//Closing the connection

			 }


			 //Returns number of days limit after which fine will be imposed on the user
			 int daysLimit()
			 {
				 //Calculating fine per book per day for the user
				 MySqlCommand^ cmd;
				 float days_limit;

				 //Creating a mysqlcommand for finding dayLimit
				 cmd = gcnew MySqlCommand("select * from project.noofdaystable where id = '"+userId+"';" , con);

				 try
				 {
					 con->Open();						//Connecting to database
					 myReader = cmd->ExecuteReader();	//Executing the command
					 myReader->Read();					//Reading the first row of the result of the query
					 days_limit = myReader->GetInt32("number");		//Storing fine per book per day
				 }
				 //This is catch block which gets executed when there is an exception in try block.

				 catch(Exception^ ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
				 con->Close();						//Closing connection
				 return days_limit;		//Finally return the value
			 }

			 //This function returns fine per book per day for the user.
			 float finePerBookPerDay()
			 {
				 //Calculating fine per book per day for the user
				 MySqlCommand^ cmd;
				 float fine_per_book_per_day;

				 //Creating a mysqlcommand for finding finePerBookPerDay
				 cmd = gcnew MySqlCommand("select * from project.finetable where id = '"+userId+"';" , con);

				 try
				 {
					 con->Open();						//Connecting to database
					 myReader = cmd->ExecuteReader();	//Executing the command
					 myReader->Read();					//Reading the first row of the result of the query
					 fine_per_book_per_day = myReader->GetFloat("fine");		//Storing fine per book per day
				 }
				 //This is catch block which gets executed when there is an exception in try block.

				 catch(Exception^ ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
				 con->Close();						//Closing connection
				 return fine_per_book_per_day;		//Finally return the value
			 }



			 //////////////////////////////////////////////////////////////////////////////////////////////////
			 //////////////////////////////////////////////////////////////////////////////////////////////////
			 /////////////////////////////////Requests tab/////////////////////////////////////////////////////
			 //////////////////////////////////////////////////////////////////////////////////////////////////
			 //////////////////////////////////////////////////////////////////////////////////////////////////


			 //This function loads requests.
			 void loadRequests()  //This function loads requests into database
			 {
				 //creating a MySqlcommand for executing the Mysql query.
				 MySqlCommand^ cmd; 
				 cmd = gcnew MySqlCommand("select requeststable.title as tit, allbooks.author as aut, requeststable.dateOfRequest as dat, allbooks.subject    from project.requeststable, project.allbooks     where requeststable.mailId='"+mailId+"' and requeststable.titleId = allbooks.titleId  group by allbooks.titleId ;" , con );
				 try
				 {
					 con->Open();						//Connecting to database
					 myReader = cmd->ExecuteReader();  //Executes query
					 int count = 0;					  //count variable is used to fill serial numbers in dataGrid

					 while( myReader->Read() )			//Reading book by book.
					 {

						 count++;					//Incrementing count for every book read
						 //Creating a record to insert into dataGridView
						 array<String ^> ^ AHRecord = {  count.ToString() , myReader->GetString("tit") , myReader->GetString("aut") , myReader->GetString("dat") , "reject" };
						 //Adding record to dataGridView
						 requests_dataGrid->Rows->Add(AHRecord);
					 }
				 }
				 //This is catch block which gets executed when there is an exception in try block.

				 catch( Exception^ ex )
				 {
					 MessageBox::Show( ex->Message );   //This gives error message in case of exception.
				 }
				 con->Close();			//Finally, closing the connection.

			 }


			 //This function is called when user enters requests tab
	private: System::Void requests_std_Load(System::Object^  sender, System::EventArgs^  e) { 

				 loadRequests();
			 }

			 //This event is executed when user clicks cells of requests datagrid
	private: System::Void requests_dataGrid_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) 
			 {

				 //If user clicks on column 5( i.e., requests button )
				 if ( e->ColumnIndex == 4 ) //That is If the user presses reject button
				 {
					 //e->RowIndex gives row selected and e->ColumnIndex gives column selected

					 //This is mySqlcommand for deleting request.
					 MySqlCommand^ cmd;
					 cmd = gcnew MySqlCommand("delete from project.requeststable  where requeststable.mailId='"+mailId+"' and requeststable.title = '"+requests_dataGrid->Rows[e->RowIndex]->Cells[1]->Value->ToString() +"'  ;" , con );

					 try
					 {
						 con->Open();						//Connecting to database
						 myReader = cmd->ExecuteReader();   //Executes query.
						 requests_dataGrid->Rows->RemoveAt(e->RowIndex); //This deletes the selected row from the dataGrid view
					 }

					 //This is catch block which gets executed when there is an exception in try block.
					 catch( Exception^ ex )
					 {
						 MessageBox::Show( ex->Message ); //This gives error message in case of exception.
					 }
					 con->Close();					//Close connection

				 }

			 }

			 //This function is executed when user leaves requests tab. this clear requests data grid
	private: System::Void tab_requests_Leave(System::Object^  sender, System::EventArgs^  e) {
				 //This clears requests dataGrid when users leaves the tab. This ensures that dataGrid is updated every time when 
				 requests_dataGrid->Rows->Clear();
			 }




			 //////////////////////////////////////////////////////////////////////////////////////////////////
			 //////////////////////////////////////////////////////////////////////////////////////////////////
			 /////////////////////////////////Search tab/////////////////////////////////////////////////////
			 //////////////////////////////////////////////////////////////////////////////////////////////////
			 //////////////////////////////////////////////////////////////////////////////////////////////////



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
					 dataPage->userId = userId;				//passing userid to the page
					 dataPage->mailId = mailId;				//passing mailid of the user to the page
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





			 //////////////////////////////////////////////////////////////////////////////////////////////////
			 //////////////////////////////////////////////////////////////////////////////////////////////////
			 /////////////////////////////////Feedback tab/////////////////////////////////////////////////////
			 //////////////////////////////////////////////////////////////////////////////////////////////////
			 //////////////////////////////////////////////////////////////////////////////////////////////////



			 //This is event is called when the user enters feedback text box. This function erases message "Your feedback here".
	private: System::Void txt_feedback_Enter(System::Object^  sender, System::EventArgs^  e) {
				 if ( txt_feedback->Text == "Your feedback here" )
					 txt_feedback->Text = "";
			 }

			 //This event is called when the user leaves feedback text box. This function fills "Your feedback here" in text box if user didn't use the text box.
	private: System::Void txt_feedback_Leave(System::Object^  sender, System::EventArgs^  e) {
				 if ( txt_feedback->Text == "" )
					 txt_feedback->Text = "Your feedback here";
			 }

			 //This function returns system date.
			 String^ today()
			 {
				 time_t t = time(0);   // get time now
				 struct tm * now = localtime( & t );
				 return  (now->tm_year + 1900).ToString() + "-" + (now->tm_mon + 1).ToString() + "-" + now->tm_mday.ToString();
			 }

			 //This function is executed when submit button is clicked by the user.
			 //This function inserts feedback into database.
	private: System::Void btn_submit_Click(System::Object^  sender, System::EventArgs^  e) {

				 if ( txt_feedback->Text != "" ) //Checking if the feedback is null;
				 {
					 try
					 {
						 MySqlCommand^ cmd = gcnew MySqlCommand( "Insert into project.feedbacktable ( feedback ,mailId, date ) values ( '"+txt_feedback->Text+"' , '"+mailId+"' , '"+today()+"' );" , con );
						 con->Open();								//connecting to database.
						 myReader = cmd->ExecuteReader();			//executing the command
						 MessageBox::Show(" Your feedback has been submitted. Thanks for you responce " );   
					 }
					 //This is catch block which gets executed when there is an exception in try block.

					 catch(Exception ^ex)
					 {
						 MessageBox::Show( ex->Message );
					 }
					 con->Close();
				 }
			 }




			 //This event is executed when the user clicks log out button. this simply restarts the application.

	private: System::Void logOut_Click(System::Object^  sender, System::EventArgs^  e) {
				 Application::Restart();
			 }



	};

}
