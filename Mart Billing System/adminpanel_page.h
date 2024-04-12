#pragma once
#include "registrationform_page.h"
#include "productsadd_page.h"

namespace MartBillingSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for adminpanel_page
	/// </summary>
	public ref class adminpanel_page : public System::Windows::Forms::Form
	{
	public:
		adminpanel_page(void)
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
		~adminpanel_page()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::LinkLabel^ addemployee_label;
	private: System::Windows::Forms::LinkLabel^ addproducts_label;

	private: System::Windows::Forms::LinkLabel^ cancel;
	private: System::Windows::Forms::Label^ button1;
	private: System::Windows::Forms::Label^ button2;
	private: System::Windows::Forms::Label^ button3;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(adminpanel_page::typeid));
			this->addemployee_label = (gcnew System::Windows::Forms::LinkLabel());
			this->addproducts_label = (gcnew System::Windows::Forms::LinkLabel());
			this->cancel = (gcnew System::Windows::Forms::LinkLabel());
			this->button1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// addemployee_label
			// 
			this->addemployee_label->ActiveLinkColor = System::Drawing::Color::Green;
			this->addemployee_label->AutoSize = true;
			this->addemployee_label->BackColor = System::Drawing::Color::Transparent;
			this->addemployee_label->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addemployee_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addemployee_label->ForeColor = System::Drawing::Color::Black;
			this->addemployee_label->LinkColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->addemployee_label->Location = System::Drawing::Point(48, 67);
			this->addemployee_label->Name = L"addemployee_label";
			this->addemployee_label->Size = System::Drawing::Size(37, 40);
			this->addemployee_label->TabIndex = 1;
			this->addemployee_label->TabStop = true;
			this->addemployee_label->Text = L"A";
			this->addemployee_label->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &adminpanel_page::linkLabel1_LinkClicked);
			// 
			// addproducts_label
			// 
			this->addproducts_label->ActiveLinkColor = System::Drawing::Color::Green;
			this->addproducts_label->AutoSize = true;
			this->addproducts_label->BackColor = System::Drawing::Color::Transparent;
			this->addproducts_label->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addproducts_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addproducts_label->ForeColor = System::Drawing::Color::Black;
			this->addproducts_label->LinkColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->addproducts_label->Location = System::Drawing::Point(49, 190);
			this->addproducts_label->Name = L"addproducts_label";
			this->addproducts_label->Size = System::Drawing::Size(36, 40);
			this->addproducts_label->TabIndex = 2;
			this->addproducts_label->TabStop = true;
			this->addproducts_label->Text = L"B";
			this->addproducts_label->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &adminpanel_page::addproducts_label_LinkClicked);
			// 
			// cancel
			// 
			this->cancel->ActiveLinkColor = System::Drawing::Color::Green;
			this->cancel->AutoSize = true;
			this->cancel->BackColor = System::Drawing::Color::Transparent;
			this->cancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cancel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Bold));
			this->cancel->ForeColor = System::Drawing::Color::Black;
			this->cancel->LinkColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->cancel->Location = System::Drawing::Point(48, 312);
			this->cancel->Name = L"cancel";
			this->cancel->Size = System::Drawing::Size(35, 40);
			this->cancel->TabIndex = 4;
			this->cancel->TabStop = true;
			this->cancel->Text = L"C";
			this->cancel->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &adminpanel_page::cancel_LinkClicked);
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(142, 190);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(215, 40);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Add Employee";
			// 
			// button2
			// 
			this->button2->AutoSize = true;
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Bold));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(142, 67);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(203, 40);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Add Products";
			// 
			// button3
			// 
			this->button3->AutoSize = true;
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Bold));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(142, 312);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(67, 40);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Exit";
			// 
			// adminpanel_page
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(391, 411);
			this->ControlBox = false;
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->cancel);
			this->Controls->Add(this->addproducts_label);
			this->Controls->Add(this->addemployee_label);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"adminpanel_page";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Admin Panel";
			this->Load += gcnew System::EventHandler(this, &adminpanel_page::adminpanel_page_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		registrationform_page add_employee;
		add_employee.ShowDialog();
	}
private: System::Void addproducts_label_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	productsadd_page add_products;
	add_products.ShowDialog();
}
private: System::Void cancel_button_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void adminpanel_page_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void cancel_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->Close();

}
};
}
