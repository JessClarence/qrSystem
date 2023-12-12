#include "pch.h"
#include "User.h"
#include "LoginForm.h"
#include "RegisterForm.h"
#include "MainForm.h"
#include "StudentForm.h"

using namespace System;
using namespace System::Windows::Forms;

enum class UserRole { Admin, User, None };
UserRole userRole = UserRole::None;

void main(array<System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	User^ user = nullptr;

	while (true) {
		qrSystem::LoginForm loginForm;
		loginForm.ShowDialog();

		if (loginForm.switchToRegister) {
			qrSystem::RegisterForm registerForm;
			registerForm.ShowDialog();

			if (registerForm.switchToLogin) {
				continue;
			}
			else {
				user = registerForm.user;
				break;
			}
		}
		else {
			user = loginForm.user;
			break;
		}

		
	}

	if (user != nullptr) {
		qrSystem::MainForm mainForm;
		if (user->email == "admin@admin.com" && user->password == "admin") {
			userRole = UserRole::Admin;
		}
		else {
			userRole = UserRole::User;
		}

		// Open the appropriate dashboard based on the user's role
		if (userRole == UserRole::Admin) {
			Application::Run(% mainForm);
		}
		else {
			qrSystem::StudentForm student(user);
			Application::Run(% student);
		}
	}
	else {
		MessageBox::Show("Authentication Canceled", "Program.cpp", MessageBoxButtons::OK);
	}




}



//[STAThread]
//int main()
//{
//  Application::EnableVisualStyles();
//  Application::SetCompatibleTextRenderingDefault(false);
//  return 0;
//}