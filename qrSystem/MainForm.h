#pragma once
#include "dbConnection.h"

namespace qrSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	private: void Reload() {
		Object^ dataSource = dataGridView1->DataSource;
		Connection::Reload_DataGrid(dataSource, "users");
		dataGridView1->DataSource = dataSource;
	}
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			panel3->Hide();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;







	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ txtIdUpdate;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtEmail;

	private: System::Windows::Forms::TextBox^ txtName;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ btnUpdate;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtPhone;
	private: System::Windows::Forms::TextBox^ txtAddress;



	private: System::Windows::Forms::Label^ label2;









	private: System::Windows::Forms::TextBox^ txtConNo;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtConPerson;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ address;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewButtonColumn^ btnEdit;
	private: System::Windows::Forms::DataGridViewButtonColumn^ btnDelete;















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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->txtConNo = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtConPerson = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtAddress = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtPhone = (gcnew System::Windows::Forms::TextBox());
			this->txtIdUpdate = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->address = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnEdit = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->btnDelete = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Silver;
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->txtId);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(732, 63);
			this->panel1->TabIndex = 1;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Brown;
			this->label11->Location = System::Drawing::Point(512, 15);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(37, 26);
			this->label11->TabIndex = 28;
			this->label11->Text = L"ID:";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::RosyBrown;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Brown;
			this->button3->Location = System::Drawing::Point(631, 14);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(70, 34);
			this->button3->TabIndex = 27;
			this->button3->Text = L"SEARCH";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// txtId
			// 
			this->txtId->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->txtId->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtId->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtId->Location = System::Drawing::Point(555, 18);
			this->txtId->Multiline = true;
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(70, 28);
			this->txtId->TabIndex = 26;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Brown;
			this->label1->Location = System::Drawing::Point(21, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 26);
			this->label1->TabIndex = 1;
			this->label1->Text = L"ADMIN";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::Gray;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::Gray;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeight = 35;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Column1,
					this->Column2, this->Column6, this->Column3, this->address, this->Column4, this->Column5, this->btnEdit, this->btnDelete
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::DimGray;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::DimGray;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->EnableHeadersVisualStyles = false;
			this->dataGridView1->GridColor = System::Drawing::Color::Silver;
			this->dataGridView1->Location = System::Drawing::Point(0, 63);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(732, 410);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::dataGridView1_CellContentClick);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Controls->Add(this->txtConNo);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->txtConPerson);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->txtAddress);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->txtPhone);
			this->panel3->Controls->Add(this->txtIdUpdate);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->txtEmail);
			this->panel3->Controls->Add(this->txtName);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->btnUpdate);
			this->panel3->Controls->Add(this->button4);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Location = System::Drawing::Point(193, 108);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(347, 365);
			this->panel3->TabIndex = 25;
			// 
			// txtConNo
			// 
			this->txtConNo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->txtConNo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtConNo->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtConNo->Location = System::Drawing::Point(103, 260);
			this->txtConNo->Multiline = true;
			this->txtConNo->Name = L"txtConNo";
			this->txtConNo->Size = System::Drawing::Size(216, 28);
			this->txtConNo->TabIndex = 32;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(164)), static_cast<System::Int32>(static_cast<System::Byte>(165)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->label5->Location = System::Drawing::Point(18, 273);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(79, 15);
			this->label5->TabIndex = 31;
			this->label5->Text = L"CONTACT NO";
			// 
			// txtConPerson
			// 
			this->txtConPerson->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->txtConPerson->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtConPerson->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtConPerson->Location = System::Drawing::Point(103, 226);
			this->txtConPerson->Multiline = true;
			this->txtConPerson->Name = L"txtConPerson";
			this->txtConPerson->Size = System::Drawing::Size(216, 28);
			this->txtConPerson->TabIndex = 30;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(164)), static_cast<System::Int32>(static_cast<System::Byte>(165)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->label4->Location = System::Drawing::Point(3, 239);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(105, 15);
			this->label4->TabIndex = 29;
			this->label4->Text = L"CONTACT PERSON";
			// 
			// txtAddress
			// 
			this->txtAddress->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->txtAddress->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtAddress->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtAddress->Location = System::Drawing::Point(103, 192);
			this->txtAddress->Multiline = true;
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(216, 28);
			this->txtAddress->TabIndex = 28;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(164)), static_cast<System::Int32>(static_cast<System::Byte>(165)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->label2->Location = System::Drawing::Point(31, 205);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 15);
			this->label2->TabIndex = 27;
			this->label2->Text = L"ADDRESS";
			// 
			// txtPhone
			// 
			this->txtPhone->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->txtPhone->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtPhone->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPhone->Location = System::Drawing::Point(103, 158);
			this->txtPhone->Multiline = true;
			this->txtPhone->Name = L"txtPhone";
			this->txtPhone->Size = System::Drawing::Size(216, 28);
			this->txtPhone->TabIndex = 26;
			// 
			// txtIdUpdate
			// 
			this->txtIdUpdate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->txtIdUpdate->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtIdUpdate->Enabled = false;
			this->txtIdUpdate->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtIdUpdate->Location = System::Drawing::Point(103, 56);
			this->txtIdUpdate->Multiline = true;
			this->txtIdUpdate->Name = L"txtIdUpdate";
			this->txtIdUpdate->Size = System::Drawing::Size(77, 28);
			this->txtIdUpdate->TabIndex = 25;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(164)), static_cast<System::Int32>(static_cast<System::Byte>(165)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->label10->Location = System::Drawing::Point(62, 56);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(18, 15);
			this->label10->TabIndex = 24;
			this->label10->Text = L"ID";
			// 
			// txtEmail
			// 
			this->txtEmail->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->txtEmail->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtEmail->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEmail->Location = System::Drawing::Point(103, 124);
			this->txtEmail->Multiline = true;
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(216, 28);
			this->txtEmail->TabIndex = 23;
			this->txtEmail->TextChanged += gcnew System::EventHandler(this, &MainForm::txtEmail_TextChanged);
			// 
			// txtName
			// 
			this->txtName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->txtName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtName->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtName->Location = System::Drawing::Point(103, 90);
			this->txtName->Multiline = true;
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(216, 28);
			this->txtName->TabIndex = 22;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(164)), static_cast<System::Int32>(static_cast<System::Byte>(165)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->label3->Location = System::Drawing::Point(46, 90);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 15);
			this->label3->TabIndex = 21;
			this->label3->Text = L"NAME";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(164)), static_cast<System::Int32>(static_cast<System::Byte>(165)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->label7->Location = System::Drawing::Point(41, 169);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 15);
			this->label7->TabIndex = 20;
			this->label7->Text = L"PHONE";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(34, 20);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(103, 33);
			this->label8->TabIndex = 19;
			this->label8->Text = L"UPDATE";
			// 
			// btnUpdate
			// 
			this->btnUpdate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnUpdate->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnUpdate->FlatAppearance->BorderSize = 0;
			this->btnUpdate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdate->ForeColor = System::Drawing::Color::White;
			this->btnUpdate->Location = System::Drawing::Point(223, 301);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(96, 42);
			this->btnUpdate->TabIndex = 18;
			this->btnUpdate->Text = L"UPDATE";
			this->btnUpdate->UseVisualStyleBackColor = false;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &MainForm::btnUpdate_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(325, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(18, 18);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(164)), static_cast<System::Int32>(static_cast<System::Byte>(165)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->label9->Location = System::Drawing::Point(46, 124);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(41, 15);
			this->label9->TabIndex = 4;
			this->label9->Text = L"EMAIL";
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column1->DataPropertyName = L"Id";
			this->Column1->HeaderText = L"ID";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 43;
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column2->DataPropertyName = L"name";
			this->Column2->HeaderText = L"NAME";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 66;
			// 
			// Column6
			// 
			this->Column6->DataPropertyName = L"email";
			this->Column6->HeaderText = L"EMAIL";
			this->Column6->Name = L"Column6";
			// 
			// Column3
			// 
			this->Column3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column3->DataPropertyName = L"phone";
			this->Column3->HeaderText = L"PHONE";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 74;
			// 
			// address
			// 
			this->address->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->address->DataPropertyName = L"address";
			this->address->HeaderText = L"ADDRESS";
			this->address->Name = L"address";
			// 
			// Column4
			// 
			this->Column4->DataPropertyName = L"contactperson";
			this->Column4->HeaderText = L"CONTACT PERSON";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->DataPropertyName = L"contactno";
			this->Column5->HeaderText = L"CONTACT NO";
			this->Column5->Name = L"Column5";
			// 
			// btnEdit
			// 
			this->btnEdit->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->btnEdit->HeaderText = L"EDIT";
			this->btnEdit->Name = L"btnEdit";
			this->btnEdit->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->btnEdit->Text = L"EDIT";
			this->btnEdit->UseColumnTextForButtonValue = true;
			this->btnEdit->Width = 58;
			// 
			// btnDelete
			// 
			this->btnDelete->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->btnDelete->HeaderText = L"DELETE";
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->btnDelete->Text = L"DELETE";
			this->btnDelete->UseColumnTextForButtonValue = true;
			this->btnDelete->Width = 78;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(732, 473);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		String^ id = dataGridView1->Rows[e->RowIndex]->Cells["Column1"]->Value->ToString();
		String^ name = dataGridView1->Rows[e->RowIndex]->Cells["Column2"]->Value->ToString();
		String^ email = dataGridView1->Rows[e->RowIndex]->Cells["Column6"]->Value->ToString();
		String^ phone = dataGridView1->Rows[e->RowIndex]->Cells["Column3"]->Value->ToString();
		String^ address = dataGridView1->Rows[e->RowIndex]->Cells["address"]->Value->ToString();
		String^ contactperson = dataGridView1->Rows[e->RowIndex]->Cells["Column4"]->Value->ToString();
		String^ contactno = dataGridView1->Rows[e->RowIndex]->Cells["Column5"]->Value->ToString();

		if (dataGridView1->Columns[e->ColumnIndex]->Name == "btnEdit") {
			txtIdUpdate->Text = id;
			txtName->Text = name;
			txtEmail->Text = email;
			txtPhone->Text = phone;
			txtAddress->Text = address;
			txtConPerson->Text = contactperson;
			txtConNo->Text = contactno;

			panel3->Show();
		}

		if (dataGridView1->Columns[e->ColumnIndex]->Name == "btnDelete") {

			System::Windows::Forms::DialogResult dialogResult = MessageBox::Show(
				"Do you want to Delete?",
				"Confirmation",
				MessageBoxButtons::YesNo,
				MessageBoxIcon::Question);

			if (dialogResult == System::Windows::Forms::DialogResult::Yes) {
				Connection::Delete(id);
				Reload();
			}
			else {
			}
		}
	}
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		Reload();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		int id;

		try {
			
			if (String::IsNullOrWhiteSpace(txtId->Text)) {
				Reload();
				return; 
			}
			id = Convert::ToInt32(txtId->Text);
			if (id == 0) {
				Reload();
				return; 
			}
		}
		catch (FormatException^) {
			Reload();
			return; 
		}
		

		Object^ dataSource = dataGridView1->DataSource;
		Connection::Search_DataGrid(dataSource, id);
		dataGridView1->DataSource = dataSource;
	}
	private: System::Void txtEmail_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		panel3->Hide();
	}
	private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
		int id;
		String^ name = txtName->Text;
		String^ email = txtEmail->Text;
		String^ phone = txtPhone->Text;
		String^ address = txtAddress->Text;
		String^ contactperson = txtConPerson->Text;
		String^ contactno = txtConNo->Text;

		try {
			id = System::Int32::Parse(txtIdUpdate->Text);
		}
		catch (FormatException^) {
			MessageBox::Show("Invalid input: Please enter a valid integer",
				"Input Error", MessageBoxButtons::OK);
		}

		if (name->Length == 0 || email->Length == 0
			|| phone->Length == 0 || id < 1 || address->Length == 0 ) {

			MessageBox::Show("Please enter all the fields",
				"On or more empty fields", MessageBoxButtons::OK);
			return;
		}

		Connection::Update(id, name, email, phone, address, contactperson, contactno);
		Reload();
		panel3->Hide();

	}
};
}
