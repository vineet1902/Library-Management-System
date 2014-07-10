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
	/// Summary for search_lib
	/// </summary>
	public ref class search_lib : public System::Windows::Forms::Form
	{
	public:
		search_lib(void)
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
		~search_lib()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button11;
	protected: 
	private: System::Windows::Forms::Button^  button9;

	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
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
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button11
			// 
			this->button11->ForeColor = System::Drawing::Color::Black;
			this->button11->Location = System::Drawing::Point(14, 29);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 20);
			this->button11->TabIndex = 27;
			this->button11->Text = L"Home";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &search_lib::button11_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::Control;
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(95, 29);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 20);
			this->button9->TabIndex = 26;
			this->button9->Text = L"Issue Books";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &search_lib::button9_Click);
			// 
			// button7
			// 
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(176, 29);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 20);
			this->button7->TabIndex = 24;
			this->button7->Text = L"Renew Books";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &search_lib::button7_Click);
			// 
			// button6
			// 
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(95, 56);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 20);
			this->button6->TabIndex = 23;
			this->button6->Text = L"Add Books";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &search_lib::button6_Click);
			// 
			// button5
			// 
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(282, 29);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(81, 20);
			this->button5->TabIndex = 22;
			this->button5->Text = L"Return Books";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &search_lib::button5_Click);
			// 
			// button4
			// 
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(176, 56);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 20);
			this->button4->TabIndex = 21;
			this->button4->Text = L"Remove Books";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &search_lib::button4_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Gray;
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(14, 55);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 20);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Search";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button10
			// 
			this->button10->ForeColor = System::Drawing::Color::Black;
			this->button10->Location = System::Drawing::Point(282, 56);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(81, 20);
			this->button10->TabIndex = 19;
			this->button10->Text = L"Requests";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &search_lib::button10_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->Location = System::Drawing::Point(527, 370);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 20);
			this->button3->TabIndex = 18;
			this->button3->Text = L"Logout";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &search_lib::button3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 113);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(590, 232);
			this->dataGridView1->TabIndex = 28;
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {L"accNo", L"RackNo", L"title", L"author", L"publisher", 
				L"status", L"titleId"});
			this->comboBox1->Location = System::Drawing::Point(496, 40);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 29;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &search_lib::comboBox1_SelectedIndexChanged);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->Location = System::Drawing::Point(496, 73);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(123, 20);
			this->textBox1->TabIndex = 30;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &search_lib::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Location = System::Drawing::Point(420, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 13);
			this->label1->TabIndex = 31;
			this->label1->Text = L"Search By";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label2->Location = System::Drawing::Point(420, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 32;
			this->label2->Text = L"Query";
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button10);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button11);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->ForeColor = System::Drawing::Color::White;
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(402, 95);
			this->groupBox1->TabIndex = 33;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Pages";
			// 
			// search_lib
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(627, 433);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->dataGridView1);
			this->MinimumSize = System::Drawing::Size(643, 471);
			this->Name = L"search_lib";
			this->Text = L"Search - Librarian";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &search_lib::search_lib_FormClosing);
			this->Load += gcnew System::EventHandler(this, &search_lib::search_lib_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) ;

	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) ;
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) ;

	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) ;
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) ;

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) ;

	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) ;
	private: System::Void search_lib_Load(System::Object^  sender, System::EventArgs^  e) { //Whole books database is loaded on form load.
				 while(dataGridView1->RowCount>0)
					 dataGridView1->Rows->RemoveAt(0);
				 String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
				 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase =gcnew MySqlCommand("Select * from project.allbooks ;",conDataBase);
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
					 //myReader2=cmdDataBase2-
					 sda->Update(dbdataset);
				 }
				 catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }

			 }
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {//On changing the query search will run through the datagrid view according to field selected in combobox.
				 String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
				 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
				 String^ abc= comboBox1->Text;
				 if( abc !="")
				 {
					 MySqlCommand^ cmdDataBase =gcnew MySqlCommand("Select * from project.allbooks where "+abc+" like '%"+textBox1->Text->ToString()+"%' ;",conDataBase);		
					 MySqlDataReader^ myReader;

					 try{
						 this->dataGridView1->Show();

						 MySqlDataAdapter ^ sda = gcnew MySqlDataAdapter();
						 sda->SelectCommand =cmdDataBase;
						 DataTable ^ dbdataset= gcnew DataTable();
						 sda->Fill(dbdataset);
						 BindingSource ^ bsource =gcnew BindingSource();
						 bsource->DataSource =dbdataset;
						 dataGridView1->DataSource=bsource;
						 sda->Update(dbdataset);
					 }
					 catch(Exception^ ex){
						 MessageBox::Show(ex->Message);
					 }
				 } 
			 }
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 Application::Restart();
			 }
private: System::Void search_lib_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 Application::Exit();
		 }
};
}
