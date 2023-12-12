#pragma once
#include "User.h"
#include "dbConnection.h"

namespace qrSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StudentForm
	/// </summary>
	public ref class StudentForm : public System::Windows::Forms::Form
	{
	private: 
		int id;
		String^ name;
		String^ email;
		String^ phone;
		String^ address;
		String^ contactperson;
		String^ contactno;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtConNo;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtConPerson;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ lblContactPerson;
	private: System::Windows::Forms::Label^ lblContactNo;


		   
	public:
		StudentForm(User^ user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			panel3->Hide();
			lblName->Text = "Name: " + user->name;
			lblEmail->Text = "Email: " + user->email;
			lblPhone->Text = "Phone: " + user->phone;
			lblAddress->Text = "Address: " + user->address;
			lblContactPerson->Text = "Contact Person: " + user->contactperson;
			lblContactNo->Text = "Contact No: " + user->contactno;
			this->id = user->id;
			this->name = user->name;
			this->email = user->email;
			this->phone = user->phone;
			this->address = user->address;
			this->contactperson = user->contactperson;
			this->contactno = user->contactno;

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pic;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblName;
	private: System::Windows::Forms::Label^ lblEmail;
	private: System::Windows::Forms::Label^ lblPhone;
	private: System::Windows::Forms::Label^ lblAddress;










	private: System::Windows::Forms::Button^ btnEdit;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ txtAddress;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtPhone;


	private: System::Windows::Forms::TextBox^ txtEmail;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label9;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentForm::typeid));
			this->pic = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->lblEmail = (gcnew System::Windows::Forms::Label());
			this->lblPhone = (gcnew System::Windows::Forms::Label());
			this->lblAddress = (gcnew System::Windows::Forms::Label());
			this->btnEdit = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtConNo = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtConPerson = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtAddress = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtPhone = (gcnew System::Windows::Forms::TextBox());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->lblContactPerson = (gcnew System::Windows::Forms::Label());
			this->lblContactNo = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic))->BeginInit();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// pic
			// 
			this->pic->Location = System::Drawing::Point(540, 12);
			this->pic->Name = L"pic";
			this->pic->Size = System::Drawing::Size(265, 167);
			this->pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pic->TabIndex = 0;
			this->pic->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(178, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(224, 25);
			this->label1->TabIndex = 10;
			this->label1->Text = L"YOUR INFORMATION";
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->Location = System::Drawing::Point(24, 86);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(38, 13);
			this->lblName->TabIndex = 13;
			this->lblName->Text = L"Name:";
			// 
			// lblEmail
			// 
			this->lblEmail->AutoSize = true;
			this->lblEmail->Location = System::Drawing::Point(24, 117);
			this->lblEmail->Name = L"lblEmail";
			this->lblEmail->Size = System::Drawing::Size(35, 13);
			this->lblEmail->TabIndex = 14;
			this->lblEmail->Text = L"Email:";
			// 
			// lblPhone
			// 
			this->lblPhone->AutoSize = true;
			this->lblPhone->Location = System::Drawing::Point(24, 152);
			this->lblPhone->Name = L"lblPhone";
			this->lblPhone->Size = System::Drawing::Size(41, 13);
			this->lblPhone->TabIndex = 16;
			this->lblPhone->Text = L"Phone:";
			// 
			// lblAddress
			// 
			this->lblAddress->AutoSize = true;
			this->lblAddress->Location = System::Drawing::Point(24, 185);
			this->lblAddress->Name = L"lblAddress";
			this->lblAddress->Size = System::Drawing::Size(48, 13);
			this->lblAddress->TabIndex = 18;
			this->lblAddress->Text = L"Address:";
			// 
			// btnEdit
			// 
			this->btnEdit->Location = System::Drawing::Point(408, 26);
			this->btnEdit->Name = L"btnEdit";
			this->btnEdit->Size = System::Drawing::Size(80, 23);
			this->btnEdit->TabIndex = 19;
			this->btnEdit->Text = L"EDIT";
			this->btnEdit->UseVisualStyleBackColor = true;
			this->btnEdit->Click += gcnew System::EventHandler(this, &StudentForm::btnEdit_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(624, 185);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 23);
			this->button1->TabIndex = 20;
			this->button1->Text = L"GENERATE QR";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->txtConNo);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->txtConPerson);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->txtAddress);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->txtPhone);
			this->panel3->Controls->Add(this->txtEmail);
			this->panel3->Controls->Add(this->txtName);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->btnUpdate);
			this->panel3->Controls->Add(this->button4);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Location = System::Drawing::Point(141, 64);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(347, 369);
			this->panel3->TabIndex = 26;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(164)), static_cast<System::Int32>(static_cast<System::Byte>(165)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->label6->Location = System::Drawing::Point(105, 209);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(156, 15);
			this->label6->TabIndex = 33;
			this->label6->Text = L"EMERGENCY INFORMATION";
			// 
			// txtConNo
			// 
			this->txtConNo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->txtConNo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtConNo->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtConNo->Location = System::Drawing::Point(116, 275);
			this->txtConNo->Multiline = true;
			this->txtConNo->Name = L"txtConNo";
			this->txtConNo->Size = System::Drawing::Size(203, 28);
			this->txtConNo->TabIndex = 32;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(164)), static_cast<System::Int32>(static_cast<System::Byte>(165)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->label5->Location = System::Drawing::Point(31, 288);
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
			this->txtConPerson->Location = System::Drawing::Point(103, 241);
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
			this->label4->Location = System::Drawing::Point(46, 254);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 15);
			this->label4->TabIndex = 29;
			this->label4->Text = L"NAME";
			// 
			// txtAddress
			// 
			this->txtAddress->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->txtAddress->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtAddress->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtAddress->Location = System::Drawing::Point(103, 168);
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
			this->label2->Location = System::Drawing::Point(31, 181);
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
			this->txtPhone->Location = System::Drawing::Point(103, 134);
			this->txtPhone->Multiline = true;
			this->txtPhone->Name = L"txtPhone";
			this->txtPhone->Size = System::Drawing::Size(216, 28);
			this->txtPhone->TabIndex = 26;
			// 
			// txtEmail
			// 
			this->txtEmail->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->txtEmail->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtEmail->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEmail->Location = System::Drawing::Point(103, 100);
			this->txtEmail->Multiline = true;
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(216, 28);
			this->txtEmail->TabIndex = 23;
			// 
			// txtName
			// 
			this->txtName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->txtName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtName->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtName->Location = System::Drawing::Point(103, 66);
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
			this->label3->Location = System::Drawing::Point(46, 66);
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
			this->label7->Location = System::Drawing::Point(41, 145);
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
			this->btnUpdate->Location = System::Drawing::Point(223, 309);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(96, 42);
			this->btnUpdate->TabIndex = 18;
			this->btnUpdate->Text = L"UPDATE";
			this->btnUpdate->UseVisualStyleBackColor = false;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &StudentForm::btnUpdate_Click);
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
			this->button4->Click += gcnew System::EventHandler(this, &StudentForm::button4_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(164)), static_cast<System::Int32>(static_cast<System::Byte>(165)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->label9->Location = System::Drawing::Point(46, 100);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(41, 15);
			this->label9->TabIndex = 4;
			this->label9->Text = L"EMAIL";
			// 
			// lblContactPerson
			// 
			this->lblContactPerson->AutoSize = true;
			this->lblContactPerson->Location = System::Drawing::Point(24, 237);
			this->lblContactPerson->Name = L"lblContactPerson";
			this->lblContactPerson->Size = System::Drawing::Size(83, 13);
			this->lblContactPerson->TabIndex = 27;
			this->lblContactPerson->Text = L"Contact Person:";
			// 
			// lblContactNo
			// 
			this->lblContactNo->AutoSize = true;
			this->lblContactNo->Location = System::Drawing::Point(24, 264);
			this->lblContactNo->Name = L"lblContactNo";
			this->lblContactNo->Size = System::Drawing::Size(64, 13);
			this->lblContactNo->TabIndex = 28;
			this->lblContactNo->Text = L"Contact No:";
			// 
			// StudentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(817, 445);
			this->Controls->Add(this->lblContactNo);
			this->Controls->Add(this->lblContactPerson);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnEdit);
			this->Controls->Add(this->lblAddress);
			this->Controls->Add(this->lblPhone);
			this->Controls->Add(this->lblEmail);
			this->Controls->Add(this->lblName);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pic);
			this->Name = L"StudentForm";
			this->Text = L"StudentForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnEdit_Click(System::Object^ sender, System::EventArgs^ e) {
		panel3->Show();	
		txtName->Text = name;
		txtEmail->Text = email;
		txtPhone->Text = phone;
		txtAddress->Text = address;
		txtConPerson->Text = contactperson;
		txtConNo->Text = contactno;
	}
	private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {

		Connection::Update(id, txtName->Text, txtEmail->Text, txtPhone->Text, txtAddress->Text, txtConPerson->Text, txtConNo->Text);

	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		panel3->Hide();
	}
};
}
