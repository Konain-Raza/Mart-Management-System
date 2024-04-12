#pragma once
#include "passwordreset_page.h"
#include "Software.h"
#include "adminpanel_page.h"
#include <stdexcept>

namespace MartBillingSystem {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;

	public ref class signin_page : public System::Windows::Forms::Form {
	public:
		signin_page(void) {
			InitializeComponent();
		}

	protected:
		~signin_page() {
			if (components) {
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ username_label;
	private: System::Windows::Forms::Label^ password_label;
	private: System::Windows::Forms::Label^ signin_label;
	private: System::Windows::Forms::TextBox^ username_textbox;
	private: System::Windows::Forms::TextBox^ password_textbox;
	private: System::Windows::Forms::LinkLabel^ forgotpassword_label;
	private: System::Windows::Forms::Button^ signin_button;
	private: System::Windows::Forms::Button^ exit_button;

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(signin_page::typeid));
			this->username_label = (gcnew System::Windows::Forms::Label());
			this->password_label = (gcnew System::Windows::Forms::Label());
			this->signin_label = (gcnew System::Windows::Forms::Label());
			this->username_textbox = (gcnew System::Windows::Forms::TextBox());
			this->password_textbox = (gcnew System::Windows::Forms::TextBox());
			this->forgotpassword_label = (gcnew System::Windows::Forms::LinkLabel());
			this->signin_button = (gcnew System::Windows::Forms::Button());
			this->exit_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// username_label
			// 
			this->username_label->AutoSize = true;
			this->username_label->BackColor = System::Drawing::Color::Transparent;
			this->username_label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 17));
			this->username_label->Location = System::Drawing::Point(132, 190);
			this->username_label->Name = L"username_label";
			this->username_label->Size = System::Drawing::Size(126, 27);
			this->username_label->TabIndex = 0;
			this->username_label->Text = L"Username";
			// 
			// password_label
			// 
			this->password_label->AutoSize = true;
			this->password_label->BackColor = System::Drawing::Color::Transparent;
			this->password_label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 17));
			this->password_label->Location = System::Drawing::Point(132, 277);
			this->password_label->Name = L"password_label";
			this->password_label->Size = System::Drawing::Size(118, 27);
			this->password_label->TabIndex = 1;
			this->password_label->Text = L"Password";
			// 
			// signin_label
			// 
			this->signin_label->AutoSize = true;
			this->signin_label->BackColor = System::Drawing::Color::Transparent;
			this->signin_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 35.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signin_label->Location = System::Drawing::Point(126, 99);
			this->signin_label->Name = L"signin_label";
			this->signin_label->Size = System::Drawing::Size(156, 62);
			this->signin_label->TabIndex = 2;
			this->signin_label->Text = L"Signin";
			// 
			// username_textbox
			// 
			this->username_textbox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13));
			this->username_textbox->ForeColor = System::Drawing::SystemColors::InfoText;
			this->username_textbox->Location = System::Drawing::Point(137, 231);
			this->username_textbox->Name = L"username_textbox";
			this->username_textbox->Size = System::Drawing::Size(198, 29);
			this->username_textbox->TabIndex = 3;
			// 
			// password_textbox
			// 
			this->password_textbox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13));
			this->password_textbox->ForeColor = System::Drawing::SystemColors::InfoText;
			this->password_textbox->Location = System::Drawing::Point(137, 319);
			this->password_textbox->Name = L"password_textbox";
			this->password_textbox->Size = System::Drawing::Size(198, 29);
			this->password_textbox->TabIndex = 4;
			this->password_textbox->UseSystemPasswordChar = true;
			// 
			// forgotpassword_label
			// 
			this->forgotpassword_label->ActiveLinkColor = System::Drawing::Color::Green;
			this->forgotpassword_label->AutoSize = true;
			this->forgotpassword_label->BackColor = System::Drawing::Color::Transparent;
			this->forgotpassword_label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12));
			this->forgotpassword_label->Location = System::Drawing::Point(165, 370);
			this->forgotpassword_label->Name = L"forgotpassword_label";
			this->forgotpassword_label->Size = System::Drawing::Size(137, 21);
			this->forgotpassword_label->TabIndex = 5;
			this->forgotpassword_label->TabStop = true;
			this->forgotpassword_label->Text = L"Forgot Password";
			this->forgotpassword_label->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &signin_page::forgotpassword_label_LinkClicked);
			// 
			// signin_button
			// 
			this->signin_button->BackColor = System::Drawing::SystemColors::Highlight;
			this->signin_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->signin_button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signin_button->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->signin_button->Location = System::Drawing::Point(111, 427);
			this->signin_button->Name = L"signin_button";
			this->signin_button->Size = System::Drawing::Size(110, 45);
			this->signin_button->TabIndex = 6;
			this->signin_button->Text = L"Signin";
			this->signin_button->UseVisualStyleBackColor = false;
			this->signin_button->Click += gcnew System::EventHandler(this, &signin_page::signin_button_Click);
			// 
			// exit_button
			// 
			this->exit_button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exit_button->Location = System::Drawing::Point(269, 427);
			this->exit_button->Name = L"exit_button";
			this->exit_button->Size = System::Drawing::Size(110, 45);
			this->exit_button->TabIndex = 7;
			this->exit_button->Text = L"Exit";
			this->exit_button->UseVisualStyleBackColor = true;
			this->exit_button->Click += gcnew System::EventHandler(this, &signin_page::exit_button_Click);
			// 
			// signin_page
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(837, 580);
			this->ControlBox = false;
			this->Controls->Add(this->exit_button);
			this->Controls->Add(this->signin_button);
			this->Controls->Add(this->forgotpassword_label);
			this->Controls->Add(this->password_textbox);
			this->Controls->Add(this->username_textbox);
			this->Controls->Add(this->signin_label);
			this->Controls->Add(this->password_label);
			this->Controls->Add(this->username_label);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MaximizeBox = false;
			this->Name = L"signin_page";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Signin";
			this->Load += gcnew System::EventHandler(this, &signin_page::signin_page_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	protected:


	private: System::Void forgotpassword_label_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		passwordreset_page reset_password;
		reset_password.ShowDialog();
	}
	private: System::Void signin_button_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ username = username_textbox->Text;
		String^ password = password_textbox->Text;
		String^ admin_username = "Admin";
		String^ admin_password = "123";

		if (String::IsNullOrEmpty(username) || String::IsNullOrEmpty(password)) {
			MessageBox::Show("Please enter a valid username and password.");
			return;
		}
		else if (username->Equals(admin_username) && password->Equals(admin_password)) {
			username_textbox->Clear();
			password_textbox->Clear();
			adminpanel_page adminpanel;
			adminpanel.ShowDialog();

		}
		else {
			try {

				String^ connectstring = "Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=C:\\Users\\Konain Raza\\Documents\\MartBillingSystem.mdf;Integrated Security=True;Connect Timeout=30";


				{
					SqlConnection sqlConn(connectstring);
					sqlConn.Open();

					String^ sqlquery = "SELECT * FROM Credentials WHERE Username=@username AND Password=@password;";
					SqlCommand command(sqlquery, % sqlConn);
					command.Parameters->AddWithValue("@username", username);
					command.Parameters->AddWithValue("@password", password);

					Object^ result = command.ExecuteScalar();

					if (result != nullptr) {
						username_textbox->Clear();
						password_textbox->Clear();
						Software start;
						start.ShowDialog();
					}
					else {
						MessageBox::Show("Invalid username or password.");
						username_textbox->Clear();
						password_textbox->Clear();
					}
				}
			}
			catch (SqlException^ ex) {
				MessageBox::Show("SQL Exception: " + ex->Message + "\nNumber: " + ex->Number);
			}
			catch (Exception^ ex) {
				MessageBox::Show("Exception: " + ex->Message);
			}
		}
	}

	private: System::Void exit_button_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void signin_page_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}