#pragma once

namespace MartBillingSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Data::SqlClient;
	using namespace System::Web;
	using namespace System::Net::Mail;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for passwordreset_page1
	/// </summary>
	public ref class passwordreset_page: public System::Windows::Forms::Form
	{
	public:
		passwordreset_page(void)
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
		~passwordreset_page()
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
	private: System::Windows::Forms::Label^ newpassword_label;
	private: System::Windows::Forms::Label^ otp_label;
	private: System::Windows::Forms::TextBox^ username_textbox;
	private: System::Windows::Forms::TextBox^ newpassword_textbox;
	private: System::Windows::Forms::TextBox^ otp_textbox;

	private: System::Windows::Forms::Button^ cancel_button;
	private: System::Windows::Forms::LinkLabel^ sendotp_label;
	private: System::Windows::Forms::Button^ confirm_button;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(passwordreset_page::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->username_label = (gcnew System::Windows::Forms::Label());
			this->newpassword_label = (gcnew System::Windows::Forms::Label());
			this->otp_label = (gcnew System::Windows::Forms::Label());
			this->username_textbox = (gcnew System::Windows::Forms::TextBox());
			this->newpassword_textbox = (gcnew System::Windows::Forms::TextBox());
			this->otp_textbox = (gcnew System::Windows::Forms::TextBox());
			this->cancel_button = (gcnew System::Windows::Forms::Button());
			this->sendotp_label = (gcnew System::Windows::Forms::LinkLabel());
			this->confirm_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 17.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(236, 77);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(185, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Reset Password";
			this->label1->Click += gcnew System::EventHandler(this, &passwordreset_page::label1_Click);
			// 
			// username_label
			// 
			this->username_label->AutoSize = true;
			this->username_label->BackColor = System::Drawing::Color::Transparent;
			this->username_label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13));
			this->username_label->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->username_label->Location = System::Drawing::Point(226, 130);
			this->username_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->username_label->Name = L"username_label";
			this->username_label->Size = System::Drawing::Size(98, 21);
			this->username_label->TabIndex = 1;
			this->username_label->Text = L"Username";
			this->username_label->Click += gcnew System::EventHandler(this, &passwordreset_page::username_label_Click);
			// 
			// newpassword_label
			// 
			this->newpassword_label->AutoSize = true;
			this->newpassword_label->BackColor = System::Drawing::Color::Transparent;
			this->newpassword_label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13));
			this->newpassword_label->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->newpassword_label->Location = System::Drawing::Point(226, 194);
			this->newpassword_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->newpassword_label->Name = L"newpassword_label";
			this->newpassword_label->Size = System::Drawing::Size(134, 21);
			this->newpassword_label->TabIndex = 2;
			this->newpassword_label->Text = L"New Password";
			this->newpassword_label->Click += gcnew System::EventHandler(this, &passwordreset_page::newpassword_label_Click);
			// 
			// otp_label
			// 
			this->otp_label->AutoSize = true;
			this->otp_label->BackColor = System::Drawing::Color::Transparent;
			this->otp_label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13));
			this->otp_label->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->otp_label->Location = System::Drawing::Point(226, 278);
			this->otp_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->otp_label->Name = L"otp_label";
			this->otp_label->Size = System::Drawing::Size(45, 21);
			this->otp_label->TabIndex = 3;
			this->otp_label->Text = L"OTP";
			this->otp_label->Click += gcnew System::EventHandler(this, &passwordreset_page::otp_label_Click);
			// 
			// username_textbox
			// 
			this->username_textbox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.5F));
			this->username_textbox->Location = System::Drawing::Point(230, 155);
			this->username_textbox->Margin = System::Windows::Forms::Padding(4);
			this->username_textbox->Name = L"username_textbox";
			this->username_textbox->Size = System::Drawing::Size(197, 26);
			this->username_textbox->TabIndex = 4;
			this->username_textbox->TextChanged += gcnew System::EventHandler(this, &passwordreset_page::username_textbox_TextChanged);
			// 
			// newpassword_textbox
			// 
			this->newpassword_textbox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.5F));
			this->newpassword_textbox->Location = System::Drawing::Point(230, 219);
			this->newpassword_textbox->Margin = System::Windows::Forms::Padding(4);
			this->newpassword_textbox->Name = L"newpassword_textbox";
			this->newpassword_textbox->Size = System::Drawing::Size(197, 26);
			this->newpassword_textbox->TabIndex = 5;
			this->newpassword_textbox->TextChanged += gcnew System::EventHandler(this, &passwordreset_page::newpassword_textbox_TextChanged);
			// 
			// otp_textbox
			// 
			this->otp_textbox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.5F));
			this->otp_textbox->Location = System::Drawing::Point(230, 303);
			this->otp_textbox->Margin = System::Windows::Forms::Padding(4);
			this->otp_textbox->Name = L"otp_textbox";
			this->otp_textbox->Size = System::Drawing::Size(119, 26);
			this->otp_textbox->TabIndex = 6;
			this->otp_textbox->TextChanged += gcnew System::EventHandler(this, &passwordreset_page::otp_textbox_TextChanged);
			// 
			// cancel_button
			// 
			this->cancel_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cancel_button->FlatAppearance->BorderSize = 0;
			this->cancel_button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10));
			this->cancel_button->Location = System::Drawing::Point(230, 397);
			this->cancel_button->Margin = System::Windows::Forms::Padding(4);
			this->cancel_button->Name = L"cancel_button";
			this->cancel_button->Size = System::Drawing::Size(203, 38);
			this->cancel_button->TabIndex = 8;
			this->cancel_button->Text = L"Cancel";
			this->cancel_button->UseVisualStyleBackColor = true;
			this->cancel_button->Click += gcnew System::EventHandler(this, &passwordreset_page::cancel_button_Click);
			// 
			// sendotp_label
			// 
			this->sendotp_label->ActiveLinkColor = System::Drawing::Color::LawnGreen;
			this->sendotp_label->AutoSize = true;
			this->sendotp_label->BackColor = System::Drawing::Color::Transparent;
			this->sendotp_label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11));
			this->sendotp_label->Location = System::Drawing::Point(279, 254);
			this->sendotp_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->sendotp_label->Name = L"sendotp_label";
			this->sendotp_label->Size = System::Drawing::Size(76, 20);
			this->sendotp_label->TabIndex = 9;
			this->sendotp_label->TabStop = true;
			this->sendotp_label->Text = L"Send OTP";
			this->sendotp_label->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &passwordreset_page::sendotp_label_LinkClicked);
			// 
			// confirm_button
			// 
			this->confirm_button->BackColor = System::Drawing::SystemColors::Highlight;
			this->confirm_button->FlatAppearance->BorderSize = 0;
			this->confirm_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->confirm_button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->confirm_button->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->confirm_button->Location = System::Drawing::Point(230, 356);
			this->confirm_button->Name = L"confirm_button";
			this->confirm_button->Size = System::Drawing::Size(203, 34);
			this->confirm_button->TabIndex = 14;
			this->confirm_button->Text = L"Confirm";
			this->confirm_button->UseVisualStyleBackColor = false;
			this->confirm_button->Click += gcnew System::EventHandler(this, &passwordreset_page::button1_Click);
			// 
			// passwordreset_page
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(612, 546);
			this->Controls->Add(this->confirm_button);
			this->Controls->Add(this->sendotp_label);
			this->Controls->Add(this->cancel_button);
			this->Controls->Add(this->otp_textbox);
			this->Controls->Add(this->newpassword_textbox);
			this->Controls->Add(this->username_textbox);
			this->Controls->Add(this->otp_label);
			this->Controls->Add(this->newpassword_label);
			this->Controls->Add(this->username_label);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MaximizeBox = false;
			this->Name = L"passwordreset_page";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Reset Password";
			this->Load += gcnew System::EventHandler(this, &passwordreset_page::passwordreset_page1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void passwordreset_page1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void sendotp_label_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		SqlConnection^ connection = gcnew SqlConnection("Data Source = (LocalDB)\\MSSQLLocalDB; AttachDbFilename = C:\\Users\\Konain Raza\\Documents\\MartBillingSystem.mdf; Integrated Security = True; Connect Timeout = 30");
		SqlCommand^ command = gcnew SqlCommand("SELECT Email FROM Credentials WHERE Username = @Username", connection);
		String^ username = username_textbox->Text;
		command->Parameters->AddWithValue("@Username", username);
		if (otp_textbox->TextLength <= 0) {
			Console::WriteLine("OTP field should not be empty.");
			username_textbox->Clear();
			newpassword_textbox->Clear();
		}
		try {
			connection->Open();
			SqlDataReader^ reader = command->ExecuteReader();

			// Check if the username exists in the database
			if (reader->Read()) {
				String^ email_to = reader["Email"]->ToString();
				String^ email_from = "sp23bscs0023@maju.edu.pk";
				String^ email_from_password = "Mondego$1";  // Replace with your email password

				System::Random^ random = gcnew System::Random();

				// Assign the generated OTP to the class member
				otp = random->Next(100000, 999999).ToString();

				String^ email_body = "Hey " + username + ", your password changing OTP is " + otp;
				String^ email_subject = "OTP for Password Change.";

				try {
					MailMessage^ mail = gcnew MailMessage(email_from, email_to, email_subject, email_body);
					SmtpClient^ client = gcnew SmtpClient("smtp.gmail.com");
					client->Port = 587;
					client->Credentials = gcnew System::Net::NetworkCredential(email_from, email_from_password);
					client->EnableSsl = true;
					client->Send(mail);
					MessageBox::Show("OTP sent successfully");
				}
				catch (SmtpException^ ex) {
					// Display a detailed error message for email sending
					MessageBox::Show("Failed to send email. SMTP Exception: " + ex->Message + "\nStatusCode: " + Convert::ToString((int)ex->StatusCode), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			else {
				// Username not found in the database
				MessageBox::Show("Username not found in the database");
			}

			reader->Close();
		}
		catch (SqlException^ ex) {
			// Handle SQL exceptions
			MessageBox::Show("Error accessing database. SQL Exception: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			// Ensure the connection is closed
			if (connection->State == ConnectionState::Open) {
				connection->Close();
			}
		}
	}
private: System::Void cancel_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void register_button_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void username_label_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void username_textbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void newpassword_label_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void newpassword_textbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void otp_label_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void otp_textbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ username = username_textbox->Text;
	String^ enteredOTP = otp_textbox->Text;
	String^ newPassword = newpassword_textbox->Text;



	// Connect to the database
	SqlConnection^ connection = gcnew SqlConnection("Data Source = (LocalDB)\\MSSQLLocalDB; AttachDbFilename = C:\\Users\\Konain Raza\\Documents\\MartBillingSystem.mdf; Integrated Security = True; Connect Timeout = 30");

	try {
		connection->Open();

		// Retrieve the email associated with the entered username
		SqlCommand^ getEmailCommand = gcnew SqlCommand("SELECT Email FROM Credentials WHERE Username = @Username", connection);
		getEmailCommand->Parameters->AddWithValue("@Username", username);

		SqlDataReader^ reader = getEmailCommand->ExecuteReader();
		String^ userEmail = nullptr;

		if (reader->Read()) {
			userEmail = reader->GetString(0);
		}

		reader->Close();

		// Logging for debugging
		Console::WriteLine("Username: " + username);
		Console::WriteLine("User Email: " + userEmail);

		if (userEmail != nullptr) {
			// Verify the entered OTP against the generated OTP
			if (enteredOTP == otp) {
				// Update the password for the given username
				SqlCommand^ updatePasswordCommand = gcnew SqlCommand("UPDATE Credentials SET Password = @NewPassword WHERE Username = @Username", connection);
				updatePasswordCommand->Parameters->AddWithValue("@NewPassword", newPassword);
				updatePasswordCommand->Parameters->AddWithValue("@Username", username);

				int rowsAffected = updatePasswordCommand->ExecuteNonQuery();

				if (rowsAffected > 0) {
					MessageBox::Show("Password updated successfully");
					username_textbox->Clear();
					newpassword_textbox->Clear();
					otp_textbox->Clear();
				}
				else {
					MessageBox::Show("Failed to update password. No rows were affected.");
					Console::WriteLine("No rows were affected by the update query.");
					Console::WriteLine("Username: " + username);
					Console::WriteLine("New Password: " + newPassword);
					Console::WriteLine("Rows Affected: " + rowsAffected);
				}
			}
			else {
				MessageBox::Show("Invalid OTP. Please try again.");
			}
		}
		else {
			MessageBox::Show("Username not found.");
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
};
}
