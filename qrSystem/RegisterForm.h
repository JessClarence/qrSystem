#pragma once
#include "dbConnection.h"
#include "User.h"

namespace qrSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
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
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnOk;
	private: System::Windows::Forms::TextBox^ txtConPass;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtPass;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtAddress;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtPhone;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtEmail;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::LinkLabel^ linkLogin;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtEmPerson;
	private: System::Windows::Forms::TextBox^ txtContactNo;
	private: System::Windows::Forms::Label^ label10;

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
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnOk = (gcnew System::Windows::Forms::Button());
			this->txtConPass = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtPass = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtAddress = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtPhone = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->linkLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtEmPerson = (gcnew System::Windows::Forms::TextBox());
			this->txtContactNo = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(706, 62);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Register";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(414, 480);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(108, 46);
			this->btnCancel->TabIndex = 28;
			this->btnCancel->Text = L"CANCEL";
			this->btnCancel->UseVisualStyleBackColor = true;
			// 
			// btnOk
			// 
			this->btnOk->Location = System::Drawing::Point(277, 480);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Size = System::Drawing::Size(108, 46);
			this->btnOk->TabIndex = 27;
			this->btnOk->Text = L"OK";
			this->btnOk->UseVisualStyleBackColor = true;
			this->btnOk->Click += gcnew System::EventHandler(this, &RegisterForm::btnOk_Click);
			// 
			// txtConPass
			// 
			this->txtConPass->Location = System::Drawing::Point(277, 449);
			this->txtConPass->Multiline = true;
			this->txtConPass->Name = L"txtConPass";
			this->txtConPass->PasswordChar = '*';
			this->txtConPass->Size = System::Drawing::Size(368, 25);
			this->txtConPass->TabIndex = 26;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(62, 445);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(210, 29);
			this->label7->TabIndex = 25;
			this->label7->Text = L"Confirm Password";
			// 
			// txtPass
			// 
			this->txtPass->Location = System::Drawing::Point(277, 402);
			this->txtPass->Multiline = true;
			this->txtPass->Name = L"txtPass";
			this->txtPass->PasswordChar = '*';
			this->txtPass->Size = System::Drawing::Size(368, 25);
			this->txtPass->TabIndex = 24;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(62, 398);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(120, 29);
			this->label6->TabIndex = 23;
			this->label6->Text = L"Password";
			// 
			// txtAddress
			// 
			this->txtAddress->Location = System::Drawing::Point(277, 192);
			this->txtAddress->Multiline = true;
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(368, 25);
			this->txtAddress->TabIndex = 22;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(62, 188);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(102, 29);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Address";
			// 
			// txtPhone
			// 
			this->txtPhone->Location = System::Drawing::Point(277, 148);
			this->txtPhone->Multiline = true;
			this->txtPhone->Name = L"txtPhone";
			this->txtPhone->Size = System::Drawing::Size(368, 25);
			this->txtPhone->TabIndex = 20;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(62, 144);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 29);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Phone";
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(277, 106);
			this->txtEmail->Multiline = true;
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(368, 25);
			this->txtEmail->TabIndex = 18;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(62, 102);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(74, 29);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Email";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(277, 65);
			this->txtName->Multiline = true;
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(368, 25);
			this->txtName->TabIndex = 16;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(62, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 29);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Name";
			// 
			// linkLogin
			// 
			this->linkLogin->AutoSize = true;
			this->linkLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLogin->Location = System::Drawing::Point(650, 521);
			this->linkLogin->Name = L"linkLogin";
			this->linkLogin->Size = System::Drawing::Size(44, 18);
			this->linkLogin->TabIndex = 29;
			this->linkLogin->TabStop = true;
			this->linkLogin->Text = L"Login";
			this->linkLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegisterForm::linkLogin_LinkClicked);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(207, 229);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(248, 29);
			this->label8->TabIndex = 30;
			this->label8->Text = L"In Case of Emergency";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(54, 273);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(218, 29);
			this->label9->TabIndex = 31;
			this->label9->Text = L"Emergency Person";
			// 
			// txtEmPerson
			// 
			this->txtEmPerson->Location = System::Drawing::Point(278, 277);
			this->txtEmPerson->Multiline = true;
			this->txtEmPerson->Name = L"txtEmPerson";
			this->txtEmPerson->Size = System::Drawing::Size(368, 25);
			this->txtEmPerson->TabIndex = 32;
			// 
			// txtContactNo
			// 
			this->txtContactNo->Location = System::Drawing::Point(278, 323);
			this->txtContactNo->Multiline = true;
			this->txtContactNo->Name = L"txtContactNo";
			this->txtContactNo->Size = System::Drawing::Size(197, 25);
			this->txtContactNo->TabIndex = 34;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(62, 323);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(132, 29);
			this->label10->TabIndex = 33;
			this->label10->Text = L"Contact No";
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(706, 548);
			this->Controls->Add(this->txtContactNo);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->txtEmPerson);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->linkLogin);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOk);
			this->Controls->Add(this->txtConPass);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtPass);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtAddress);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtPhone);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"RegisterForm";
			this->Text = L"RegisterForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool switchToLogin = false;
	public: User^ user = nullptr;
	private: System::Void btnOk_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = txtName->Text;
		String^ email = txtEmail->Text;
		String^ phone = txtPhone->Text;
		String^ address = txtAddress->Text;
		String^ password = txtPass->Text;
		String^ confirmpassword = txtConPass->Text;
		String^ contactperson = txtEmPerson->Text;
		String^ contactno = txtContactNo->Text;

		if (name->Length == 0 || email->Length == 0
			|| phone->Length == 0 || address->Length == 0
			|| password->Length == 0) {

			MessageBox::Show("Please enter all the fields",
				"On or more empty fields", MessageBoxButtons::OK);
			return;
		}

		if (String::Compare(password, confirmpassword) != 0) {
			MessageBox::Show("Password and Confirm Password do not match",
				"Password Error", MessageBoxButtons::OK);
			return;
		}

		Connection::Create(name, email, phone, address, password, contactperson, contactno);
		user = gcnew User();
		user->name = name;
		user->email = email;
		user->phone = phone;
		user->address = address;
		user->password = password;
		user->contactperson = contactperson;
		user->contactno = contactno;

		this->Close();


	}
	private: System::Void linkLogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchToLogin = true;
		this->Close();
	}

};
}
