#pragma once
#include <cliext/list>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;
using namespace System::Collections::Generic; // Include this for List
using namespace cliext;



ref class Connection {
private:
	static String^ connstring = "Data Source=DESKTOP-G6KJNEA\\SQLEXPRESS01;Initial Catalog=qrdb;Integrated Security=True;Connect Timeout=30;Encrypt=False;";

public:
	static void Create(String^ name, String^ email, String^ phone, String^ address, String^ password, String^ contactperson, String^ contactno) {

		try {

			SqlConnection sqlConn(connstring);
			sqlConn.Open();

			String^ sqlQuery = "INSERT INTO users " +
				"(name, email, phone, address, password,contactperson,contactno) VALUES" +
				"(@name, @email, @phone, @address, @password, @conPerson, @conNo);";

			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@name", name);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@phone", phone);
			command.Parameters->AddWithValue("@address", address);
			command.Parameters->AddWithValue("@password", password);
			command.Parameters->AddWithValue("@conPerson", contactperson);
			command.Parameters->AddWithValue("@conNo", contactno);

			command.ExecuteNonQuery();

			MessageBox::Show("Successfully registered",
				"Success", MessageBoxButtons::OK);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to register new user",
				"Register Failure", MessageBoxButtons::OK);
		}

	}
	static void Reload_DataGrid(Object^% dataTable, String^ query) {
		SqlConnection^ sqlConn = gcnew SqlConnection(connstring);
		sqlConn->Open();

		String^ sqlQuery = "SELECT Id,name,email,phone,address,contactperson,contactno FROM " + query;
		SqlDataAdapter^ da = gcnew SqlDataAdapter(sqlQuery, sqlConn);
		DataTable^ dt = gcnew DataTable();
		da->Fill(dt);

		dataTable = dt;
	}

	static void Search_DataGrid(Object^% dataTable, int id) {
		SqlConnection^ sqlConn = gcnew SqlConnection(connstring);
		sqlConn->Open();

		String^ sqlQuery = "SELECT Id,name,email,phone,address,contactperson,contactno FROM users WHERE Id=@id";

		SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);
		command->Parameters->AddWithValue("@id", id);

		SqlDataAdapter^ da = gcnew SqlDataAdapter(command);
		DataTable^ dt = gcnew DataTable();
		da->Fill(dt);
		dataTable = dt;
	}

	static void Update(int id, String^ name,String^ email, String^ phone, String^ address, String^ conPerson, String^ conNo) {
		try {
			SqlConnection sqlConn(connstring);
			sqlConn.Open();

			String^ sqlQuery = "UPDATE users SET name=@name,email=@email,phone=@phone, address=@address, contactperson=@conPerson, contactno=@conNo WHERE Id=@id";

			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@id", id);
			command.Parameters->AddWithValue("@name", name);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@phone", phone);
			command.Parameters->AddWithValue("@address", address);
			command.Parameters->AddWithValue("@conPerson", conPerson);
			command.Parameters->AddWithValue("@conNo", conNo);

			command.ExecuteNonQuery();

			MessageBox::Show("Successfully Updated",
				"Success", MessageBoxButtons::OK);

		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to register new user",
				"Register Failure", MessageBoxButtons::OK);
		}
	}

	static void Delete(String^ id) {
		try {
			int Id = System::Int32::Parse(id);

			SqlConnection sqlConn(connstring);
			sqlConn.Open();

			String^ sqlQuery = "DELETE users WHERE Id=@id";

			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@id", Id);

			command.ExecuteNonQuery();

			MessageBox::Show("Successfully Deleted",
				"Success", MessageBoxButtons::OK);

		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to register new user",
				"Register Failure", MessageBoxButtons::OK);
		}
	}



};
