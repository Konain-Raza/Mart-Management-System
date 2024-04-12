#pragma once

namespace MartBillingSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	// Include the necessary namespaces
	using namespace System::Net;
	using namespace System::Net::Mail;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;




	/// <summary>
	/// Summary for registrationform_page
	/// </summary>
	public ref class registrationform_page: public System::Windows::Forms::Form
	{
	public:
		registrationform_page(void)
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
		~registrationform_page()
		{
			if (components)
			{
				delete components;
			}
		}

	public:
		String^ otp;
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ username_label;
	private: System::Windows::Forms::Label^ password_label;
	private: System::Windows::Forms::Label^ otp_label;
	private: System::Windows::Forms::Label^ email_label;
	private: System::Windows::Forms::LinkLabel^ sendotp_label;

	private: System::Windows::Forms::TextBox^ username_textbox;
	private: System::Windows::Forms::TextBox^ password_textbox;
	private: System::Windows::Forms::TextBox^ email_textbox;
	private: System::Windows::Forms::TextBox^ otp_textbox;
	private: System::Windows::Forms::Button^ register_button;
	private: System::Windows::Forms::Button^ cancel_button;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(registrationform_page::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->username_label = (gcnew System::Windows::Forms::Label());
			this->password_label = (gcnew System::Windows::Forms::Label());
			this->otp_label = (gcnew System::Windows::Forms::Label());
			this->email_label = (gcnew System::Windows::Forms::Label());
			this->sendotp_label = (gcnew System::Windows::Forms::LinkLabel());
			this->username_textbox = (gcnew System::Windows::Forms::TextBox());
			this->password_textbox = (gcnew System::Windows::Forms::TextBox());
			this->email_textbox = (gcnew System::Windows::Forms::TextBox());
			this->otp_textbox = (gcnew System::Windows::Forms::TextBox());
			this->register_button = (gcnew System::Windows::Forms::Button());
			this->cancel_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 17));
			this->label1->Location = System::Drawing::Point(196, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Registration";
			// 
			// username_label
			// 
			this->username_label->AutoSize = true;
			this->username_label->BackColor = System::Drawing::Color::Transparent;
			this->username_label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14));
			this->username_label->Location = System::Drawing::Point(155, 118);
			this->username_label->Name = L"username_label";
			this->username_label->Size = System::Drawing::Size(101, 22);
			this->username_label->TabIndex = 1;
			this->username_label->Text = L"Username";
			// 
			// password_label
			// 
			this->password_label->AutoSize = true;
			this->password_label->BackColor = System::Drawing::Color::Transparent;
			this->password_label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14));
			this->password_label->Location = System::Drawing::Point(155, 183);
			this->password_label->Name = L"password_label";
			this->password_label->Size = System::Drawing::Size(95, 22);
			this->password_label->TabIndex = 2;
			this->password_label->Text = L"Password";
			// 
			// otp_label
			// 
			this->otp_label->AutoSize = true;
			this->otp_label->BackColor = System::Drawing::Color::Transparent;
			this->otp_label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14));
			this->otp_label->Location = System::Drawing::Point(155, 340);
			this->otp_label->Name = L"otp_label";
			this->otp_label->Size = System::Drawing::Size(46, 22);
			this->otp_label->TabIndex = 3;
			this->otp_label->Text = L"OTP";
			// 
			// email_label
			// 
			this->email_label->AutoSize = true;
			this->email_label->BackColor = System::Drawing::Color::Transparent;
			this->email_label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14));
			this->email_label->Location = System::Drawing::Point(155, 242);
			this->email_label->Name = L"email_label";
			this->email_label->Size = System::Drawing::Size(56, 22);
			this->email_label->TabIndex = 4;
			this->email_label->Text = L"Email";
			// 
			// sendotp_label
			// 
			this->sendotp_label->ActiveLinkColor = System::Drawing::Color::DarkGreen;
			this->sendotp_label->AutoSize = true;
			this->sendotp_label->BackColor = System::Drawing::Color::Transparent;
			this->sendotp_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->sendotp_label->Location = System::Drawing::Point(227, 305);
			this->sendotp_label->Name = L"sendotp_label";
			this->sendotp_label->Size = System::Drawing::Size(74, 17);
			this->sendotp_label->TabIndex = 5;
			this->sendotp_label->TabStop = true;
			this->sendotp_label->Text = L"Send OTP";
			this->sendotp_label->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &registrationform_page::linkLabel1_LinkClicked);
			// 
			// username_textbox
			// 
			this->username_textbox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12));
			this->username_textbox->Location = System::Drawing::Point(159, 143);
			this->username_textbox->Name = L"username_textbox";
			this->username_textbox->Size = System::Drawing::Size(221, 27);
			this->username_textbox->TabIndex = 6;
			// 
			// password_textbox
			// 
			this->password_textbox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12));
			this->password_textbox->Location = System::Drawing::Point(159, 208);
			this->password_textbox->Name = L"password_textbox";
			this->password_textbox->Size = System::Drawing::Size(221, 27);
			this->password_textbox->TabIndex = 10;
			this->password_textbox->TextChanged += gcnew System::EventHandler(this, &registrationform_page::password_textbox_TextChanged);
			// 
			// email_textbox
			// 
			this->email_textbox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12));
			this->email_textbox->Location = System::Drawing::Point(159, 267);
			this->email_textbox->Name = L"email_textbox";
			this->email_textbox->Size = System::Drawing::Size(221, 27);
			this->email_textbox->TabIndex = 11;
			// 
			// otp_textbox
			// 
			this->otp_textbox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12));
			this->otp_textbox->Location = System::Drawing::Point(221, 340);
			this->otp_textbox->Name = L"otp_textbox";
			this->otp_textbox->Size = System::Drawing::Size(94, 27);
			this->otp_textbox->TabIndex = 12;
			// 
			// register_button
			// 
			this->register_button->BackColor = System::Drawing::SystemColors::Highlight;
			this->register_button->FlatAppearance->BorderSize = 0;
			this->register_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->register_button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->register_button->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->register_button->Location = System::Drawing::Point(171, 385);
			this->register_button->Name = L"register_button";
			this->register_button->Size = System::Drawing::Size(203, 34);
			this->register_button->TabIndex = 13;
			this->register_button->Text = L"Register";
			this->register_button->UseVisualStyleBackColor = false;
			this->register_button->Click += gcnew System::EventHandler(this, &registrationform_page::register_button_Click);
			// 
			// cancel_button
			// 
			this->cancel_button->BackColor = System::Drawing::Color::Transparent;
			this->cancel_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cancel_button->FlatAppearance->BorderSize = 0;
			this->cancel_button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11));
			this->cancel_button->Location = System::Drawing::Point(171, 425);
			this->cancel_button->Name = L"cancel_button";
			this->cancel_button->Size = System::Drawing::Size(203, 34);
			this->cancel_button->TabIndex = 14;
			this->cancel_button->Text = L"Cancel";
			this->cancel_button->UseVisualStyleBackColor = false;
			this->cancel_button->Click += gcnew System::EventHandler(this, &registrationform_page::cancel_button_Click);
			// 
			// registrationform_page
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(612, 546);
			this->Controls->Add(this->cancel_button);
			this->Controls->Add(this->register_button);
			this->Controls->Add(this->otp_textbox);
			this->Controls->Add(this->email_textbox);
			this->Controls->Add(this->password_textbox);
			this->Controls->Add(this->username_textbox);
			this->Controls->Add(this->sendotp_label);
			this->Controls->Add(this->email_label);
			this->Controls->Add(this->otp_label);
			this->Controls->Add(this->password_label);
			this->Controls->Add(this->username_label);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"registrationform_page";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Registration";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cancel_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}


	private: System::Void register_button_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ username = username_textbox->Text;
		String^ password = password_textbox->Text;
		String^ email = email_textbox->Text;
		String^ enteredOTP = otp_textbox->Text;
		if (username->Length < 0 && password->Length < 0 && email->Length < 0) {
			MessageBox::Show("Enter all fields to register.");
}
		// Check if the username is already a member
		SqlConnection^ connection = gcnew SqlConnection("Data Source=(LocalDB)\\MSSQLLocalDB; AttachDbFilename=C:\\Users\\Konain Raza\\Documents\\MartBillingSystem.mdf; Integrated Security=True; Connect Timeout=30");

		try {
			connection->Open();

			// Check if the username already exists
			SqlCommand^ checkUsernameCommand = gcnew SqlCommand("SELECT 1 FROM Credentials WHERE Username = @Username", connection);
			checkUsernameCommand->Parameters->AddWithValue("@Username", username);

			Object^ result = checkUsernameCommand->ExecuteScalar();

			if (result != nullptr) {
				MessageBox::Show("Username already exists. Please choose a different username.");
				String^ username = username_textbox->Text;
				String^ password = password_textbox->Text;
				String^ email = email_textbox->Text;
				String^ enteredOTP = otp_textbox->Text;
				return;
			}

			// Check if the username is less than or equal to 50 characters
			if (username->Length > 50) {
				MessageBox::Show("Username must be 50 characters or less.");
				String^ username = username_textbox->Text;
			
				return;
			}

			// Check if the password is less than or equal to 50 characters
			if (password->Length > 50) {
				MessageBox::Show("Password must be 50 characters or less.");
				
				String^ password = password_textbox->Text;
				
				return;
			}

			// Check if the email contains "@gmail.com"

			// Generate OTP



			// Check if entered OTP matches
			if (enteredOTP == otp) {
				// TODO: Save the username, password, and email in the database
				SqlCommand^ insertUserCommand = gcnew SqlCommand("INSERT INTO Credentials (Username, Password, Email) VALUES (@Username, @Password, @Email)", connection);
				insertUserCommand->Parameters->AddWithValue("@Username", username);
				insertUserCommand->Parameters->AddWithValue("@Password", password); // No hashing for demonstration purposes
				insertUserCommand->Parameters->AddWithValue("@Email", email);

				int rowsAffected = insertUserCommand->ExecuteNonQuery();

				if (rowsAffected > 0) {
					MessageBox::Show("Registration successful. You can now log in with your username and password.");
					String^ username = username_textbox->Text;
					String^ password = password_textbox->Text;
					String^ email = email_textbox->Text;
					String^ enteredOTP = otp_textbox->Text;
				}
				else {
					MessageBox::Show("Failed to register. Please try again.");
					String^ username = username_textbox->Text;
					String^ password = password_textbox->Text;
					String^ email = email_textbox->Text;
					String^ enteredOTP = otp_textbox->Text;
				}
			}
			else {
				MessageBox::Show("Invalid OTP. Registration failed.");
				String^ username = username_textbox->Text;
				String^ password = password_textbox->Text;
				String^ email = email_textbox->Text;
				String^ enteredOTP = otp_textbox->Text;
			}
		}
		catch (SqlException^ ex) {
			// Handle SQL exceptions
			MessageBox::Show("Error accessing database. SQL Exception: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			Console::WriteLine("SQL Exception: " + ex->Message);
		}
		finally {
			// Ensure the connection is closed
			if (connection->State == ConnectionState::Open) {
				connection->Close();
			}
		}
	}

		   private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
			   System::Random^ random = gcnew System::Random();
			   otp = random->Next(100000, 999999).ToString();

			   // Send OTP via email
			   String^ email_from = "sp23bscs0023@maju.edu.pk"; // Replace with your email
			   String^ email_from_password = "Mondego$1"; // Replace with your email password
			   String^ email = email_textbox->Text;
			   String^ email_body = "Hey, your registration OTP is " + otp;
			   String^ email_subject = "OTP for Registration";

			   if (email->Length > 0) {
				   SqlConnection^ connection = gcnew SqlConnection("Data Source=(LocalDB)\\MSSQLLocalDB; AttachDbFilename=C:\\Users\\Konain Raza\\Documents\\MartBillingSystem.mdf; Integrated Security=True; Connect Timeout=30");

				   try {
					   connection->Open();
					   SqlCommand^ checkEmailCommand = gcnew SqlCommand("SELECT 1 FROM Credentials WHERE Email = @Email", connection);
					   checkEmailCommand->Parameters->AddWithValue("@Email", email);

					   Object^ emailResult = checkEmailCommand->ExecuteScalar();

					   if (emailResult != nullptr) {
						   MessageBox::Show("This email is already used by another member. Please use a different email.");
						   return;
					   }
				   }
				   catch (SqlException^ ex) {
					   // Handle SQL exceptions
					   MessageBox::Show("Error accessing database. SQL Exception: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					   Console::WriteLine("SQL Exception: " + ex->Message);
					   return;
				   }
				   finally {
					   // Ensure the connection is closed
					   if (connection->State == ConnectionState::Open) {
						   connection->Close();
					   }
				   }
			   }


			   try {
				   MailMessage^ mail = gcnew MailMessage(email_from, email, email_subject, email_body);
				   SmtpClient^ client = gcnew SmtpClient("smtp.gmail.com");
				   client->Port = 587;
				   client->Credentials = gcnew NetworkCredential(email_from, email_from_password);
				   client->EnableSsl = true;
				   client->Send(mail);
				   MessageBox::Show("OTP sent successfully");
				 
			   }
			   catch (SmtpException^ ex) {
				   // Display a detailed error message for email sending
				   MessageBox::Show("Failed to send email. SMTP Exception: " + ex->Message + "\nStatusCode: " + Convert::ToString((int)ex->StatusCode), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				   return;
			   }

			   // Display a message to the user or perform other actions as needed
			   
		   }

	


	private: System::Void password_textbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
