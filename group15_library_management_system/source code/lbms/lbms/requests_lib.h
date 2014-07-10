#pragma once

namespace lbms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for requests_lib
	/// </summary>
	public ref class requests_lib : public System::Windows::Forms::Form
	{
	public:
		requests_lib(void)
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
		~requests_lib()
		{
			if (components)
			{
				delete components;
			}
		}



	private: System::Windows::Forms::TextBox^  textBox4;


	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button9;

	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button12;






	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  button1;
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
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox4
			// 
			this->textBox4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox4->Location = System::Drawing::Point(93, 156);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(67, 20);
			this->textBox4->TabIndex = 3;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &requests_lib::textBox4_TextChanged);
			// 
			// button11
			// 
			this->button11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button11->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button11->Location = System::Drawing::Point(14, 19);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(90, 25);
			this->button11->TabIndex = 27;
			this->button11->Text = L"Home";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &requests_lib::button11_Click);
			// 
			// button9
			// 
			this->button9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button9->BackColor = System::Drawing::SystemColors::Control;
			this->button9->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button9->Location = System::Drawing::Point(110, 19);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(90, 25);
			this->button9->TabIndex = 26;
			this->button9->Text = L"Issue Books";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &requests_lib::button9_Click);
			// 
			// button7
			// 
			this->button7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button7->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button7->Location = System::Drawing::Point(206, 19);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(90, 25);
			this->button7->TabIndex = 24;
			this->button7->Text = L"Renew Books";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &requests_lib::button7_Click);
			// 
			// button6
			// 
			this->button6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button6->Location = System::Drawing::Point(398, 19);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(90, 25);
			this->button6->TabIndex = 23;
			this->button6->Text = L"Add Books";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &requests_lib::button6_Click);
			// 
			// button5
			// 
			this->button5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button5->Location = System::Drawing::Point(302, 19);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(90, 25);
			this->button5->TabIndex = 22;
			this->button5->Text = L"Return Books";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &requests_lib::button5_Click);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button4->Location = System::Drawing::Point(489, 19);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(90, 25);
			this->button4->TabIndex = 21;
			this->button4->Text = L"Remove Book";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &requests_lib::button4_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button3->Location = System::Drawing::Point(206, 50);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(90, 25);
			this->button3->TabIndex = 20;
			this->button3->Text = L"Search";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &requests_lib::button3_Click);
			// 
			// button10
			// 
			this->button10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button10->BackColor = System::Drawing::Color::Gray;
			this->button10->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button10->Location = System::Drawing::Point(302, 50);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(90, 25);
			this->button10->TabIndex = 19;
			this->button10->Text = L"Requests";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &requests_lib::button10_Click);
			// 
			// button12
			// 
			this->button12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button12->Location = System::Drawing::Point(513, 395);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(90, 25);
			this->button12->TabIndex = 18;
			this->button12->Text = L"Logout";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &requests_lib::button12_Click);
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label5->Location = System::Drawing::Point(12, 156);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 13);
			this->label5->TabIndex = 34;
			this->label5->Text = L"Request Id";
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->Location = System::Drawing::Point(15, 182);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(540, 198);
			this->dataGridView1->TabIndex = 35;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->Location = System::Drawing::Point(15, 395);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 20);
			this->button1->TabIndex = 36;
			this->button1->Text = L"Display Pending Requests";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &requests_lib::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button10);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button11);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(591, 100);
			this->groupBox1->TabIndex = 37;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Pages";
			// 
			// requests_lib
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(627, 433);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->textBox4);
			this->MinimumSize = System::Drawing::Size(643, 471);
			this->Name = L"requests_lib";
			this->Text = L"Requests - Librarian";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &requests_lib::requests_lib_FormClosing);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e);

	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) ;

	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) ;
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) ;

	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) ;

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) ;
	private: System::Void requests_lib_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
				 Application::Exit();

			 }
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 //  category_txt->Text=category->Text;

			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 //category_txt->Text=category->Text;
				 String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
				 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase =gcnew MySqlCommand("Select * from project.requeststable where status='Pending' ;",conDataBase);
				 // MySqlCommand^ cmdDataBase2= gcnew MySqlCommand("Update project.allbooks set status='Issued' where accNo='"+this->book_id->Text+"';",conDataBase);		
				 MySqlDataReader^ myReader;
				 //	MySqlDataReader^ myReader2;
				 try{
					 //conDataBase->Open();
					 //myReader=cmdDataBase->ExecuteReader();
					 //myReader->Close();
					 this->dataGridView1->Show();
					 MySqlDataAdapter ^ sda = gcnew MySqlDataAdapter();
					 sda->SelectCommand =cmdDataBase;
					 DataTable ^ dbdataset= gcnew DataTable();
					 sda->Fill(dbdataset);
					 BindingSource ^ bsource =gcnew BindingSource();
					 bsource->DataSource =dbdataset;
					 dataGridView1->DataSource=bsource;
					 //myReader2=cmdDataBase2->ExecuteReader();
					 //myReader->Close();
					 //	MessageBox::Show("Entries Saved Successfully");
					 //	while(myReader->Read()){
					 //		
					 //}
					 //	book_id->Text="";
					 //	book_title->Text="";
					 //	mail_id->Text="";
					 //	category_txt->Text="";
					 //	category->Text="";
					 //	date_issue->Text="";
					 sda->Update(dbdataset);
				 }
				 catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }

			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) ;
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
				 Application::Restart();
			 }
};
}
