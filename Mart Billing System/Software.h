#pragma once
namespace MartBillingSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Drawing::Printing;
	using namespace System::Collections;
	using namespace System::Data::SqlClient;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	public ref class Software : public System::Windows::Forms::Form
	{
	public:
		Software(void)
		{
			InitializeComponent();
			sno = 0;
		


		}

	protected:
		~Software()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
		int price;
		int quantity;
		int sno;
		int change_amount = 0;
		int total_price = 0;
		int given_amount;
		int invoice_num = 0000;

	public:

	private: System::Windows::Forms::Label^ invoiceno_label;
	private: System::Windows::Forms::Label^ customername_label;
	private: System::Windows::Forms::Button^ addbutton;
	private: System::Windows::Forms::TextBox^ customername_textbox;
	private: System::Windows::Forms::Label^ qunatity_label;
	private: System::Windows::Forms::Label^ barcodelabel;
	private: System::Windows::Forms::TextBox^ barcode_textbox;
	private: System::Windows::Forms::TextBox^ invoice_textbox;


	private: System::Windows::Forms::Label^ totalprice_label;
	private: System::Windows::Forms::Label^ givenamount_label;
	private: System::Windows::Forms::Label^ returnamount_label;
	private: System::Windows::Forms::TextBox^ givenamount_textbox;
	private: System::Windows::Forms::TextBox^ returnamount_textbox;
	private: System::Windows::Forms::Button^ print_button;
	private: System::Windows::Forms::Button^ exit_button;
	private: System::Windows::Forms::Button^ saveinvoice_button;

	private: System::Windows::Forms::TextBox^ quantity_textbox;
	private: System::Windows::Forms::TextBox^ totalprice_textbox;
	private: System::Windows::Forms::DataGridView^ dataGridView1;





	private: System::Windows::Forms::Label^ removeline_label;
	private: System::Windows::Forms::TextBox^ removeline_textbox;

	private: System::Windows::Forms::Button^ remove_button;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::Label^ invoice_labelheading;
	private: System::ComponentModel::IContainer^ components;

	private:
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Software::typeid));
			this->invoiceno_label = (gcnew System::Windows::Forms::Label());
			this->customername_label = (gcnew System::Windows::Forms::Label());
			this->addbutton = (gcnew System::Windows::Forms::Button());
			this->customername_textbox = (gcnew System::Windows::Forms::TextBox());
			this->qunatity_label = (gcnew System::Windows::Forms::Label());
			this->barcodelabel = (gcnew System::Windows::Forms::Label());
			this->barcode_textbox = (gcnew System::Windows::Forms::TextBox());
			this->invoice_textbox = (gcnew System::Windows::Forms::TextBox());
			this->totalprice_label = (gcnew System::Windows::Forms::Label());
			this->givenamount_label = (gcnew System::Windows::Forms::Label());
			this->returnamount_label = (gcnew System::Windows::Forms::Label());
			this->givenamount_textbox = (gcnew System::Windows::Forms::TextBox());
			this->returnamount_textbox = (gcnew System::Windows::Forms::TextBox());
			this->print_button = (gcnew System::Windows::Forms::Button());
			this->exit_button = (gcnew System::Windows::Forms::Button());
			this->saveinvoice_button = (gcnew System::Windows::Forms::Button());
			this->quantity_textbox = (gcnew System::Windows::Forms::TextBox());
			this->totalprice_textbox = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->removeline_label = (gcnew System::Windows::Forms::Label());
			this->removeline_textbox = (gcnew System::Windows::Forms::TextBox());
			this->remove_button = (gcnew System::Windows::Forms::Button());
			this->invoice_labelheading = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// invoiceno_label
			// 
			this->invoiceno_label->AutoSize = true;
			this->invoiceno_label->BackColor = System::Drawing::Color::Transparent;
			this->invoiceno_label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13, System::Drawing::FontStyle::Bold));
			this->invoiceno_label->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->invoiceno_label->Location = System::Drawing::Point(1102, 88);
			this->invoiceno_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->invoiceno_label->Name = L"invoiceno_label";
			this->invoiceno_label->Size = System::Drawing::Size(106, 22);
			this->invoiceno_label->TabIndex = 1;
			this->invoiceno_label->Text = L"Invoice No";
			// 
			// customername_label
			// 
			this->customername_label->AutoSize = true;
			this->customername_label->BackColor = System::Drawing::Color::Transparent;
			this->customername_label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16, System::Drawing::FontStyle::Bold));
			this->customername_label->ForeColor = System::Drawing::Color::White;
			this->customername_label->Location = System::Drawing::Point(23, 105);
			this->customername_label->Name = L"customername_label";
			this->customername_label->Size = System::Drawing::Size(187, 26);
			this->customername_label->TabIndex = 3;
			this->customername_label->Text = L"Customer Name";
			// 
			// addbutton
			// 
			this->addbutton->BackColor = System::Drawing::SystemColors::Highlight;
			this->addbutton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addbutton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->addbutton->Location = System::Drawing::Point(390, 270);
			this->addbutton->Name = L"addbutton";
			this->addbutton->Size = System::Drawing::Size(90, 43);
			this->addbutton->TabIndex = 4;
			this->addbutton->Text = L"Add";
			this->addbutton->UseVisualStyleBackColor = false;
			this->addbutton->Click += gcnew System::EventHandler(this, &Software::addbutton_Click);
			// 
			// customername_textbox
			// 
			this->customername_textbox->BackColor = System::Drawing::Color::White;
			this->customername_textbox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->customername_textbox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14));
			this->customername_textbox->ForeColor = System::Drawing::Color::Black;
			this->customername_textbox->Location = System::Drawing::Point(217, 102);
			this->customername_textbox->Name = L"customername_textbox";
			this->customername_textbox->Size = System::Drawing::Size(237, 30);
			this->customername_textbox->TabIndex = 5;
			// 
			// qunatity_label
			// 
			this->qunatity_label->AutoSize = true;
			this->qunatity_label->BackColor = System::Drawing::Color::Transparent;
			this->qunatity_label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->qunatity_label->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->qunatity_label->Location = System::Drawing::Point(32, 285);
			this->qunatity_label->Name = L"qunatity_label";
			this->qunatity_label->Size = System::Drawing::Size(99, 25);
			this->qunatity_label->TabIndex = 6;
			this->qunatity_label->Text = L"Quantity";
			// 
			// barcodelabel
			// 
			this->barcodelabel->AutoSize = true;
			this->barcodelabel->BackColor = System::Drawing::Color::Transparent;
			this->barcodelabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->barcodelabel->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->barcodelabel->Location = System::Drawing::Point(32, 194);
			this->barcodelabel->Name = L"barcodelabel";
			this->barcodelabel->Size = System::Drawing::Size(98, 25);
			this->barcodelabel->TabIndex = 7;
			this->barcodelabel->Text = L"Barcode";
			// 
			// barcode_textbox
			// 
			this->barcode_textbox->BackColor = System::Drawing::Color::White;
			this->barcode_textbox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->barcode_textbox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->barcode_textbox->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->barcode_textbox->Location = System::Drawing::Point(222, 192);
			this->barcode_textbox->Name = L"barcode_textbox";
			this->barcode_textbox->Size = System::Drawing::Size(209, 31);
			this->barcode_textbox->TabIndex = 8;
			// 
			// invoice_textbox
			// 
			this->invoice_textbox->BackColor = System::Drawing::Color::White;
			this->invoice_textbox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->invoice_textbox->Cursor = System::Windows::Forms::Cursors::No;
			this->invoice_textbox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12));
			this->invoice_textbox->ForeColor = System::Drawing::Color::Black;
			this->invoice_textbox->Location = System::Drawing::Point(1225, 85);
			this->invoice_textbox->Name = L"invoice_textbox";
			this->invoice_textbox->ReadOnly = true;
			this->invoice_textbox->Size = System::Drawing::Size(116, 27);
			this->invoice_textbox->TabIndex = 10;
			this->invoice_textbox->TextChanged += gcnew System::EventHandler(this, &Software::textBox1_TextChanged);
			// 
			// totalprice_label
			// 
			this->totalprice_label->AutoSize = true;
			this->totalprice_label->BackColor = System::Drawing::Color::Transparent;
			this->totalprice_label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalprice_label->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->totalprice_label->Location = System::Drawing::Point(32, 375);
			this->totalprice_label->Name = L"totalprice_label";
			this->totalprice_label->Size = System::Drawing::Size(115, 25);
			this->totalprice_label->TabIndex = 11;
			this->totalprice_label->Text = L"Total Price";
			// 
			// givenamount_label
			// 
			this->givenamount_label->AutoSize = true;
			this->givenamount_label->BackColor = System::Drawing::Color::Transparent;
			this->givenamount_label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->givenamount_label->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->givenamount_label->Location = System::Drawing::Point(32, 456);
			this->givenamount_label->Name = L"givenamount_label";
			this->givenamount_label->Size = System::Drawing::Size(160, 25);
			this->givenamount_label->TabIndex = 12;
			this->givenamount_label->Text = L"Given Amount";
			// 
			// returnamount_label
			// 
			this->returnamount_label->AutoSize = true;
			this->returnamount_label->BackColor = System::Drawing::Color::Transparent;
			this->returnamount_label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->returnamount_label->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->returnamount_label->Location = System::Drawing::Point(32, 519);
			this->returnamount_label->Name = L"returnamount_label";
			this->returnamount_label->Size = System::Drawing::Size(163, 25);
			this->returnamount_label->TabIndex = 13;
			this->returnamount_label->Text = L"Return Amount";
			// 
			// givenamount_textbox
			// 
			this->givenamount_textbox->BackColor = System::Drawing::Color::White;
			this->givenamount_textbox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->givenamount_textbox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->givenamount_textbox->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->givenamount_textbox->Location = System::Drawing::Point(222, 454);
			this->givenamount_textbox->Name = L"givenamount_textbox";
			this->givenamount_textbox->Size = System::Drawing::Size(100, 31);
			this->givenamount_textbox->TabIndex = 14;
			this->givenamount_textbox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->givenamount_textbox->TextChanged += gcnew System::EventHandler(this, &Software::givenamount_textbox_TextChanged_1);
			// 
			// returnamount_textbox
			// 
			this->returnamount_textbox->BackColor = System::Drawing::Color::White;
			this->returnamount_textbox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->returnamount_textbox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->returnamount_textbox->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->returnamount_textbox->Location = System::Drawing::Point(222, 517);
			this->returnamount_textbox->Name = L"returnamount_textbox";
			this->returnamount_textbox->ReadOnly = true;
			this->returnamount_textbox->Size = System::Drawing::Size(100, 31);
			this->returnamount_textbox->TabIndex = 15;
			this->returnamount_textbox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->returnamount_textbox->TextChanged += gcnew System::EventHandler(this, &Software::returnamount_textbox_TextChanged);
			// 
			// print_button
			// 
			this->print_button->BackColor = System::Drawing::SystemColors::Highlight;
			this->print_button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->print_button->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->print_button->Location = System::Drawing::Point(37, 591);
			this->print_button->Name = L"print_button";
			this->print_button->Size = System::Drawing::Size(90, 43);
			this->print_button->TabIndex = 16;
			this->print_button->Text = L"Print";
			this->print_button->UseVisualStyleBackColor = false;
			this->print_button->Click += gcnew System::EventHandler(this, &Software::print_button_Click);
			// 
			// exit_button
			// 
			this->exit_button->BackColor = System::Drawing::SystemColors::Highlight;
			this->exit_button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exit_button->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->exit_button->Location = System::Drawing::Point(381, 591);
			this->exit_button->Name = L"exit_button";
			this->exit_button->Size = System::Drawing::Size(90, 43);
			this->exit_button->TabIndex = 17;
			this->exit_button->Text = L"Exit";
			this->exit_button->UseVisualStyleBackColor = false;
			this->exit_button->Click += gcnew System::EventHandler(this, &Software::exit_button_Click);
			// 
			// saveinvoice_button
			// 
			this->saveinvoice_button->BackColor = System::Drawing::SystemColors::Highlight;
			this->saveinvoice_button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->saveinvoice_button->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->saveinvoice_button->Location = System::Drawing::Point(194, 591);
			this->saveinvoice_button->Name = L"saveinvoice_button";
			this->saveinvoice_button->Size = System::Drawing::Size(128, 43);
			this->saveinvoice_button->TabIndex = 18;
			this->saveinvoice_button->Text = L"Save Invoice";
			this->saveinvoice_button->UseVisualStyleBackColor = false;
			this->saveinvoice_button->Click += gcnew System::EventHandler(this, &Software::saveinvoice_button_Click);
			// 
			// quantity_textbox
			// 
			this->quantity_textbox->BackColor = System::Drawing::Color::White;
			this->quantity_textbox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->quantity_textbox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->quantity_textbox->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->quantity_textbox->Location = System::Drawing::Point(222, 280);
			this->quantity_textbox->Name = L"quantity_textbox";
			this->quantity_textbox->Size = System::Drawing::Size(62, 31);
			this->quantity_textbox->TabIndex = 19;
			this->quantity_textbox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// totalprice_textbox
			// 
			this->totalprice_textbox->BackColor = System::Drawing::Color::White;
			this->totalprice_textbox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->totalprice_textbox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalprice_textbox->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->totalprice_textbox->Location = System::Drawing::Point(222, 370);
			this->totalprice_textbox->Name = L"totalprice_textbox";
			this->totalprice_textbox->ReadOnly = true;
			this->totalprice_textbox->Size = System::Drawing::Size(100, 31);
			this->totalprice_textbox->TabIndex = 20;
			this->totalprice_textbox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->totalprice_textbox->TextChanged += gcnew System::EventHandler(this, &Software::totalprice_textbox_TextChanged);
			// 
			// dataGridView1
			// 
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::RaisedHorizontal;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->Location = System::Drawing::Point(741, 152);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::Black;
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView1->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::Black;
			this->dataGridView1->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::Color::White;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(617, 507);
			this->dataGridView1->TabIndex = 21;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Software::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"S.no";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 45;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Barcode";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 160;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Product Name";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 220;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Quantity";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 80;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Price";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 120;
			// 
			// removeline_label
			// 
			this->removeline_label->AutoSize = true;
			this->removeline_label->BackColor = System::Drawing::Color::Transparent;
			this->removeline_label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->removeline_label->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->removeline_label->Location = System::Drawing::Point(446, 364);
			this->removeline_label->Name = L"removeline_label";
			this->removeline_label->Size = System::Drawing::Size(250, 25);
			this->removeline_label->TabIndex = 22;
			this->removeline_label->Text = L"Delete Product Number";
			// 
			// removeline_textbox
			// 
			this->removeline_textbox->BackColor = System::Drawing::Color::White;
			this->removeline_textbox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->removeline_textbox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->removeline_textbox->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->removeline_textbox->Location = System::Drawing::Point(451, 407);
			this->removeline_textbox->Name = L"removeline_textbox";
			this->removeline_textbox->Size = System::Drawing::Size(106, 31);
			this->removeline_textbox->TabIndex = 23;
			// 
			// remove_button
			// 
			this->remove_button->BackColor = System::Drawing::SystemColors::Highlight;
			this->remove_button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->remove_button->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->remove_button->Location = System::Drawing::Point(606, 399);
			this->remove_button->Name = L"remove_button";
			this->remove_button->Size = System::Drawing::Size(90, 43);
			this->remove_button->TabIndex = 24;
			this->remove_button->Text = L"Delete";
			this->remove_button->UseVisualStyleBackColor = false;
			this->remove_button->Click += gcnew System::EventHandler(this, &Software::remove_button_Click);
			// 
			// invoice_labelheading
			// 
			this->invoice_labelheading->AutoSize = true;
			this->invoice_labelheading->BackColor = System::Drawing::Color::Transparent;
			this->invoice_labelheading->Font = (gcnew System::Drawing::Font(L"Century Gothic", 25, System::Drawing::FontStyle::Bold));
			this->invoice_labelheading->Location = System::Drawing::Point(1181, 41);
			this->invoice_labelheading->Name = L"invoice_labelheading";
			this->invoice_labelheading->Size = System::Drawing::Size(160, 40);
			this->invoice_labelheading->TabIndex = 25;
			this->invoice_labelheading->Text = L"INVOICE";
			this->invoice_labelheading->Click += gcnew System::EventHandler(this, &Software::invoice_labelheading_Click);
			// 
			// Software
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1370, 749);
			this->Controls->Add(this->invoice_labelheading);
			this->Controls->Add(this->remove_button);
			this->Controls->Add(this->removeline_textbox);
			this->Controls->Add(this->removeline_label);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->totalprice_textbox);
			this->Controls->Add(this->quantity_textbox);
			this->Controls->Add(this->saveinvoice_button);
			this->Controls->Add(this->exit_button);
			this->Controls->Add(this->print_button);
			this->Controls->Add(this->returnamount_textbox);
			this->Controls->Add(this->givenamount_textbox);
			this->Controls->Add(this->returnamount_label);
			this->Controls->Add(this->givenamount_label);
			this->Controls->Add(this->totalprice_label);
			this->Controls->Add(this->invoice_textbox);
			this->Controls->Add(this->barcode_textbox);
			this->Controls->Add(this->barcodelabel);
			this->Controls->Add(this->qunatity_label);
			this->Controls->Add(this->customername_textbox);
			this->Controls->Add(this->addbutton);
			this->Controls->Add(this->customername_label);
			this->Controls->Add(this->invoiceno_label);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"Software";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Software";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Software::Software_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: System::Void addbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		int quantity;
		if (!Int32::TryParse(quantity_textbox->Text, quantity) || quantity <= 0) {
			MessageBox::Show("Please enter a valid quantity.");
			return;
		}

		String^ barcode = barcode_textbox->Text;

		if (String::IsNullOrEmpty(barcode)) {
			MessageBox::Show("Please enter a valid barcode.");
			return;
		}

		try {
			String^ connectstring = "Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=C:\\Users\\Konain Raza\\Documents\\MartBillingSystem.mdf;Integrated Security=True;Connect Timeout=30";
			SqlConnection sqlConn(connectstring);
			sqlConn.Open();
			String^ sqlquery = "SELECT * FROM Products WHERE Barcode=@barcode;";
			SqlCommand command(sqlquery, % sqlConn);
			command.Parameters->AddWithValue("@barcode", barcode);

			SqlDataReader^ reader = command.ExecuteReader();

			if (reader->Read()) {
				int availableQuantity = Convert::ToInt32(reader["Quantity"]);
				String^ productName = reader["Product Name"]->ToString();
				int productPrice = Convert::ToInt32(reader["Price"]);
				reader->Close();

				if (availableQuantity >= quantity) {
					String^ updateQuery = "UPDATE Products SET Quantity = Quantity - @qty WHERE Barcode=@barcode;";
					SqlCommand updateCommand(updateQuery, % sqlConn);
					updateCommand.Parameters->AddWithValue("@barcode", barcode);
					updateCommand.Parameters->AddWithValue("@qty", quantity);
					updateCommand.ExecuteNonQuery();
					sno++;
					dataGridView1->Rows->Add(sno, barcode, productName, quantity, productPrice * quantity);
					total_price += (productPrice * quantity);
					totalprice_textbox->Text = total_price.ToString();
					barcode_textbox->Clear();
					quantity_textbox->Clear();
				}
				else {
					MessageBox::Show("Insufficient quantity in stock.");
					barcode_textbox->Clear();
					quantity_textbox->Clear();
				}
			}
			else {
				MessageBox::Show("Invalid barcode.");
				barcode_textbox->Clear();
				quantity_textbox->Clear();
			}
		}
		catch (SqlException^ ex) {
			MessageBox::Show("SQL Exception: " + ex->Message + "\nNumber: " + ex->Number);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Exception: " + ex->Message);
		}
	}

	private: System::Void contextMenuStrip1_Opening(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	}
	private: System::Void totalprice_textbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private:
		System::Void print_button_Click(System::Object^ sender, System::EventArgs^ e) {

		}







	private: System::Void exit_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void givenamount_textbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void saveinvoice_button_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ customerName = customername_textbox->Text;
		String^ desktopPath = Environment::GetFolderPath(Environment::SpecialFolder::Desktop);
		String^ folderPath = Path::Combine(desktopPath, "SalesReceipts");
		if (customerName->Length > 0 && dataGridView1->RowCount > 1) {
			if (!Directory::Exists(folderPath)) {
				Directory::CreateDirectory(folderPath);
			}

			try {
				String^ fileName = Path::Combine(folderPath, customerName + "_receipt.txt");
				StreamWriter^ sw = gcnew StreamWriter(fileName);
				sw->WriteLine("SNo\tBarcode\tProduct Name\tQuantity\t");

				// Write each row data
				for (int i = 0; i < dataGridView1->RowCount; i++) {
					for (int j = 0; j < dataGridView1->ColumnCount; j++) {
						sw->Write(dataGridView1->Rows[i]->Cells[j]->Value + "\t");
					}
					sw->WriteLine();
				}
				sw->WriteLine("\nTotal Amount: " + total_price.ToString() + " Rs");
				if (givenamount_textbox->TextLength > 1) {
					sw->WriteLine("Given Amount: " + given_amount.ToString() + " Rs");
					sw->WriteLine("Return Amount: " + change_amount.ToString() + " Rs");
					sw->Close();
					MessageBox::Show("Invoice file saved sucessfully.");
				}
				else {
					MessageBox::Show("Please enter given amount to proceed to save file.");
				}

				
				try
				{
					// Connection string to your SQL Server database
					String^ connectionString = "Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=C:\\Users\\Konain Raza\\Documents\\MartBillingSystem.mdf;Integrated Security=True;Timeout=30";


					// SQL query to update the invoice number
					String^ updateQuery = "UPDATE Invoice SET InvoiceNumber = @NewInvoiceNumber";

					// Create a SqlConnection
					SqlConnection^ connection = gcnew SqlConnection(connectionString);

					// Open the connection
					connection->Open();

					// Increment the invoice number (assuming it is in the format "0000")
					int newInvoiceNumber = Int32::Parse(invoice_textbox->Text) + 1;
					String^ newInvoiceNumberString = newInvoiceNumber.ToString("D4");

					// Create a SqlCommand to update the invoice number
					SqlCommand^ updateCommand = gcnew SqlCommand(updateQuery, connection);
					updateCommand->Parameters->AddWithValue("@NewInvoiceNumber", newInvoiceNumberString);

					// Execute the update query
					updateCommand->ExecuteNonQuery();

					// Close the connection
					connection->Close();
				}
				catch (Exception^ ex)
				{
					MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				barcode_textbox->Clear();
				quantity_textbox->Clear();
				totalprice_textbox->Clear();
				customername_textbox->Clear();
				givenamount_textbox->Clear();
				returnamount_textbox->Clear();
				DisplayInvoiceNumber();
			}
			catch (Exception^) {
				MessageBox::Show("Failed to save invoice file.");
			}
		}
		else {
			MessageBox::Show("Please Enter Customer Name and add products.");
		}
		

	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		DisplayInvoiceNumber();
	}
			private:
				void DisplayInvoiceNumber()
				{
					try
					{
						// Connection string to your SQL Server database
						String^ connectionString = "Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=C:\\Users\\Konain Raza\\Documents\\MartBillingSystem.mdf;Integrated Security=True;Timeout=30";


						// SQL query to retrieve the current invoice number
						String^ query = "SELECT InvoiceNumber FROM Invoice";

						// Create a SqlConnection
						SqlConnection^ connection = gcnew SqlConnection(connectionString);

						// Create a SqlCommand to retrieve the current invoice number
						SqlCommand^ command = gcnew SqlCommand(query, connection);

						// Open the connection
						connection->Open();

						// Execute the query and get the result
						SqlDataReader^ reader = command->ExecuteReader();

						if (reader->Read())
						{
							// Read the current invoice number from the database
							String^ currentInvoiceNumber = reader->GetString(0);

							// Display the current invoice number in the textbox
						invoice_textbox->Text = currentInvoiceNumber;
						}

						// Close the connection
						connection->Close();
					}
					catch (Exception^ ex)
					{
						MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}



	private: System::Void returnamount_textbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		
		if (returnamount_textbox->TextLength > 0 && Int32::TryParse(givenamount_textbox->Text, given_amount)) {
			if (given_amount >= total_price) {
				change_amount = given_amount - total_price;
				returnamount_textbox->Text = (change_amount.ToString() + " Rs");
			}
			else {
				MessageBox::Show("The given amount is less than the total price.");
				returnamount_textbox->Clear();
			}
		}
		else {
			MessageBox::Show("Please enter a valid given amount.");
			returnamount_textbox->Clear();
		}
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void Software_Load(System::Object^ sender, System::EventArgs^ e) {
		try {
			// Fetch the invoice number when the form loads
			DisplayInvoiceNumber();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void remove_button_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			int lineNumber;
			if (Int32::TryParse(removeline_textbox->Text, lineNumber)) {
				if (lineNumber > 0 && lineNumber <= dataGridView1->RowCount) {
					// Get the price of the line being removed
					int removedPrice = Convert::ToInt32(dataGridView1->Rows[lineNumber - 1]->Cells[dataGridView1->ColumnCount - 1]->Value);

					// Remove the line from the dataGridView1
					dataGridView1->Rows->RemoveAt(lineNumber - 1);

					// Update the total price
					total_price -= removedPrice;
					totalprice_textbox->Text = total_price.ToString();
				}
				else {
					MessageBox::Show("Invalid line number. Please enter a valid line number.");
				}
			}
			else {
				MessageBox::Show("Invalid input. Please enter a valid integer.");
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("An error occurred: " + ex->Message);
		}
	}



	private: System::Void invoice_labelheading_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void givenamount_textbox_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	if (givenamount_textbox->TextLength > 0 ) {
			if (Int32::TryParse(givenamount_textbox->Text, given_amount)) {
				if (given_amount >= total_price) {
					change_amount = given_amount - total_price;
					returnamount_textbox->Text = (change_amount.ToString() + " Rs");
				}
				else {
					Console::WriteLine("The given amount is less than the total price.");
					returnamount_textbox->Clear();
				}
			}
			else {
				MessageBox::Show("Please enter a valid given amount.");
				returnamount_textbox->Clear();
			}
		
	}
}

};
};
