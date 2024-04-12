#pragma once
#include "signin_page.h"
namespace MartBillingSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for loading_page
	/// </summary>
	public ref class loading_page : public System::Windows::Forms::Form
	{
	public:
		loading_page(void)
		{
			InitializeComponent();
	
		
		


		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~loading_page()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ProgressBar^ loading_bar;
	protected:
	private: System::Windows::Forms::Timer^ loading_time;
	private: System::Windows::Forms::Label^ martbillingsystem_label;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(loading_page::typeid));
			this->loading_bar = (gcnew System::Windows::Forms::ProgressBar());
			this->loading_time = (gcnew System::Windows::Forms::Timer(this->components));
			this->martbillingsystem_label = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// loading_bar
			// 
			this->loading_bar->BackColor = System::Drawing::Color::White;
			this->loading_bar->ForeColor = System::Drawing::Color::Black;
			this->loading_bar->Location = System::Drawing::Point(194, 236);
			this->loading_bar->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->loading_bar->Name = L"loading_bar";
			this->loading_bar->Size = System::Drawing::Size(273, 28);
			this->loading_bar->TabIndex = 0;
			this->loading_bar->Tag = L"Please wait..";
			this->loading_bar->Click += gcnew System::EventHandler(this, &loading_page::loading_bar_Click);
			// 
			// loading_time
			// 
			this->loading_time->Enabled = true;
			this->loading_time->Tick += gcnew System::EventHandler(this, &loading_page::loading_time_Tick);
			// 
			// martbillingsystem_label
			// 
			this->martbillingsystem_label->AutoSize = true;
			this->martbillingsystem_label->BackColor = System::Drawing::Color::Transparent;
			this->martbillingsystem_label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 26, System::Drawing::FontStyle::Bold));
			this->martbillingsystem_label->Location = System::Drawing::Point(156, 141);
			this->martbillingsystem_label->Name = L"martbillingsystem_label";
			this->martbillingsystem_label->Size = System::Drawing::Size(327, 41);
			this->martbillingsystem_label->TabIndex = 1;
			this->martbillingsystem_label->Text = L"Mart Billing System";
			// 
			// loading_page
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(591, 394);
			this->Controls->Add(this->martbillingsystem_label);
			this->Controls->Add(this->loading_bar);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"loading_page";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"loading_page";
			this->Load += gcnew System::EventHandler(this, &loading_page::loading_page_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void loading_page_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void loading_bar_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void loading_time_Tick(System::Object^ sender, System::EventArgs^ e) {
		loading_time->Enabled = true;
		loading_bar->Increment(2);
		if (loading_bar->Value == 100) {
			loading_time->Enabled = false;
			
			signin_page^ signin = gcnew signin_page();
			signin->ShowDialog();
			this->Hide();

		}

		
	}
	};
}
