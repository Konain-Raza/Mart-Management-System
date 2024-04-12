#pragma once

namespace MartBillingSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for productsadd_page
	/// </summary>
	public ref class productsadd_page : public System::Windows::Forms::Form
	{
	public:
		productsadd_page(void)
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
		~productsadd_page()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ barcode_label;
	protected:
	private: System::Windows::Forms::Label^ productname_label;
	private: System::Windows::Forms::Label^ price_label;
	private: System::Windows::Forms::Label^ quantity_label;
	private: System::Windows::Forms::Button^ add_button;
	private: System::Windows::Forms::Button^ cancel_button;
	private: System::Windows::Forms::TextBox^ barcode_textbox;
	private: System::Windows::Forms::TextBox^ productname_textbox;
	private: System::Windows::Forms::TextBox^ quantity_textbox;
	private: System::Windows::Forms::TextBox^ price_textbox;

	protected:











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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(productsadd_page::typeid));
			this->barcode_label = (gcnew System::Windows::Forms::Label());
			this->productname_label = (gcnew System::Windows::Forms::Label());
			this->price_label = (gcnew System::Windows::Forms::Label());
			this->quantity_label = (gcnew System::Windows::Forms::Label());
			this->add_button = (gcnew System::Windows::Forms::Button());
			this->cancel_button = (gcnew System::Windows::Forms::Button());
			this->barcode_textbox = (gcnew System::Windows::Forms::TextBox());
			this->productname_textbox = (gcnew System::Windows::Forms::TextBox());
			this->quantity_textbox = (gcnew System::Windows::Forms::TextBox());
			this->price_textbox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// barcode_label
			// 
			this->barcode_label->AutoSize = true;
			this->barcode_label->BackColor = System::Drawing::Color::Transparent;
			this->barcode_label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 17.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->barcode_label->Location = System::Drawing::Point(117, 103);
			this->barcode_label->Name = L"barcode_label";
			this->barcode_label->Size = System::Drawing::Size(107, 27);
			this->barcode_label->TabIndex = 0;
			this->barcode_label->Text = L"Barcode";
			// 
			// productname_label
			// 
			this->productname_label->AutoSize = true;
			this->productname_label->BackColor = System::Drawing::Color::Transparent;
			this->productname_label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 17.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->productname_label->Location = System::Drawing::Point(117, 150);
			this->productname_label->Name = L"productname_label";
			this->productname_label->Size = System::Drawing::Size(173, 27);
			this->productname_label->TabIndex = 1;
			this->productname_label->Text = L"Product Name";
			// 
			// price_label
			// 
			this->price_label->AutoSize = true;
			this->price_label->BackColor = System::Drawing::Color::Transparent;
			this->price_label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 17.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->price_label->Location = System::Drawing::Point(117, 245);
			this->price_label->Name = L"price_label";
			this->price_label->Size = System::Drawing::Size(68, 27);
			this->price_label->TabIndex = 2;
			this->price_label->Text = L"Price";
			// 
			// quantity_label
			// 
			this->quantity_label->AutoSize = true;
			this->quantity_label->BackColor = System::Drawing::Color::Transparent;
			this->quantity_label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 17.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->quantity_label->Location = System::Drawing::Point(117, 203);
			this->quantity_label->Name = L"quantity_label";
			this->quantity_label->Size = System::Drawing::Size(107, 27);
			this->quantity_label->TabIndex = 3;
			this->quantity_label->Text = L"Quantity";
			// 
			// add_button
			// 
			this->add_button->BackColor = System::Drawing::SystemColors::Highlight;
			this->add_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->add_button->FlatAppearance->BorderSize = 0;
			this->add_button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Bold));
			this->add_button->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->add_button->Location = System::Drawing::Point(152, 293);
			this->add_button->Name = L"add_button";
			this->add_button->Size = System::Drawing::Size(112, 47);
			this->add_button->TabIndex = 4;
			this->add_button->Text = L"Add ";
			this->add_button->UseVisualStyleBackColor = false;
			this->add_button->Click += gcnew System::EventHandler(this, &productsadd_page::add_button_Click);
			// 
			// cancel_button
			// 
			this->cancel_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cancel_button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10));
			this->cancel_button->Location = System::Drawing::Point(349, 293);
			this->cancel_button->Name = L"cancel_button";
			this->cancel_button->Size = System::Drawing::Size(112, 47);
			this->cancel_button->TabIndex = 5;
			this->cancel_button->Text = L"Cancel";
			this->cancel_button->UseVisualStyleBackColor = true;
			this->cancel_button->Click += gcnew System::EventHandler(this, &productsadd_page::cancel_button_Click);
			// 
			// barcode_textbox
			// 
			this->barcode_textbox->BackColor = System::Drawing::SystemColors::Window;
			this->barcode_textbox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->barcode_textbox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14));
			this->barcode_textbox->Location = System::Drawing::Point(296, 100);
			this->barcode_textbox->Name = L"barcode_textbox";
			this->barcode_textbox->Size = System::Drawing::Size(204, 30);
			this->barcode_textbox->TabIndex = 7;
			// 
			// productname_textbox
			// 
			this->productname_textbox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->productname_textbox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14));
			this->productname_textbox->Location = System::Drawing::Point(296, 150);
			this->productname_textbox->Name = L"productname_textbox";
			this->productname_textbox->Size = System::Drawing::Size(204, 30);
			this->productname_textbox->TabIndex = 8;
			// 
			// quantity_textbox
			// 
			this->quantity_textbox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->quantity_textbox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14));
			this->quantity_textbox->Location = System::Drawing::Point(296, 200);
			this->quantity_textbox->Name = L"quantity_textbox";
			this->quantity_textbox->Size = System::Drawing::Size(73, 30);
			this->quantity_textbox->TabIndex = 9;
			// 
			// price_textbox
			// 
			this->price_textbox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->price_textbox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14));
			this->price_textbox->Location = System::Drawing::Point(296, 247);
			this->price_textbox->Name = L"price_textbox";
			this->price_textbox->Size = System::Drawing::Size(73, 30);
			this->price_textbox->TabIndex = 10;
			// 
			// productsadd_page
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(605, 476);
			this->Controls->Add(this->price_textbox);
			this->Controls->Add(this->quantity_textbox);
			this->Controls->Add(this->productname_textbox);
			this->Controls->Add(this->barcode_textbox);
			this->Controls->Add(this->cancel_button);
			this->Controls->Add(this->add_button);
			this->Controls->Add(this->quantity_label);
			this->Controls->Add(this->price_label);
			this->Controls->Add(this->productname_label);
			this->Controls->Add(this->barcode_label);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MaximizeBox = false;
			this->Name = L"productsadd_page";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Add Products";
			this->Load += gcnew System::EventHandler(this, &productsadd_page::productsadd_page_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cancel_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

		   private: System::Void add_button_Click(System::Object^ sender, System::EventArgs^ e) {
			   String^ barcode = barcode_textbox->Text;
			   String^ productname = productname_textbox->Text;
			   String^ quantity_str = quantity_textbox->Text;
			   String^ price_str = price_textbox->Text;
			   String^ message;
			   bool update_flag = false;
			   // Validate barcode length
			   if (barcode->Length != 12) {
				   MessageBox::Show("Barcode must be 12 digits.");
				   return;
			   }

			   // Validate product name length
			   if (productname->Length > 50) {
				   MessageBox::Show("Product name must be 50 characters or less.");
				   return;
			   }

			   // Validate quantity
			   int quantity;
			   if (!Int32::TryParse(quantity_str, quantity) || quantity <= 0 || quantity >= 10000) {
				   MessageBox::Show("Invalid quantity. Please enter a quantity between 1 and 9999.");
				   return;
			   }

			   // Validate price
			   double price;
			   if (!Double::TryParse(price_str, price) || price <= 0 || price >= 100000) {
				   MessageBox::Show("Invalid price. Please enter a price between 0.01 and 99999.99.");
				   return;
			   }

			   // Check if barcode already exists
			   String^ connectionString = "Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=C:\\Users\\Konain Raza\\Documents\\MartBillingSystem.mdf;Integrated Security=True;Connect Timeout=30";
			   try {
				   SqlConnection^ connection = gcnew SqlConnection(connectionString);
				   connection->Open();

				   // Check if barcode and product name already exist
				   SqlCommand^ checkProductCommand = gcnew SqlCommand("SELECT * FROM Products WHERE Barcode = @Barcode AND [Product Name] = @ProductName", connection);
				   checkProductCommand->Parameters->AddWithValue("@Barcode", barcode);
				   checkProductCommand->Parameters->AddWithValue("@ProductName", productname);

				   SqlDataReader^ reader = checkProductCommand->ExecuteReader();

				   if (reader->Read()) {
					   // Product exists, get existing details and update
					   int existingQuantity = Convert::ToInt32(reader["Quantity"]);
					   double existingPrice = Convert::ToDouble(reader["Price"]);
					   reader->Close();

					   UpdateOrInsertProduct(connection, barcode, productname, quantity, price, true, existingQuantity, existingPrice, update_flag);
				   }
				   else {
					   // Product does not exist, insert a new product
					   reader->Close();

				   }
			   }
			   catch (SqlException^ ex) {
				   // Handle SQL exceptions
				   MessageBox::Show("Error accessing database. SQL Exception: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				   clear_textboxes();
			   }

			   try {
				   SqlConnection^ connection = gcnew SqlConnection(connectionString);
				   connection->Open();

				   // Check if barcode already exists
				   SqlCommand^ checkBarcodeCommand = gcnew SqlCommand("SELECT 1 FROM Products WHERE Barcode = @Barcode", connection);
				   checkBarcodeCommand->Parameters->AddWithValue("@Barcode", barcode);

				   Object^ barcodeResult = checkBarcodeCommand->ExecuteScalar();

				   if (barcodeResult != nullptr) {
					  
						   message = "Barcode already exists. Please enter a different barcode.";
						   throw message;
						   clear_textboxes();
						   return;
					   
					   
				   }

				   // Check if product name already exists
				   SqlCommand^ checkProductNameCommand = gcnew SqlCommand("SELECT 1 FROM Products WHERE [Product Name] = @ProductName", connection);
				   checkProductNameCommand->Parameters->AddWithValue("@ProductName", productname);

				   Object^ productNameResult = checkProductNameCommand->ExecuteScalar();

				   if (productNameResult != nullptr) {
					   message = "Product name already exists. Please enter a different product name.";
					   clear_textboxes();
					   throw message;
					  
					   
				   }

				   // Close the reader if no existing product is found

										  // Insert new product into the database
				   SqlCommand^ insertProductCommand = gcnew SqlCommand("INSERT INTO Products (Barcode, [Product Name], Quantity, Price) VALUES (@Barcode, @ProductName, @Quantity, @Price)", connection);
				   insertProductCommand->Parameters->AddWithValue("@Barcode", barcode);
				   insertProductCommand->Parameters->AddWithValue("@ProductName", productname);
				   insertProductCommand->Parameters->AddWithValue("@Quantity", quantity);
				   insertProductCommand->Parameters->AddWithValue("@Price", price);

				   int insertRowsAffected = insertProductCommand->ExecuteNonQuery();

				   if (insertRowsAffected > 0) {
					   message = "Product added successfully.";
					   throw message;
					   clear_textboxes();
					  
				   }
				   else {
					   message = "Failed to add product.";
					   throw message;
					   clear_textboxes();
					   
				   }


			   }
			   catch (String^ message) {
				   // Handle SQL exceptions
				   MessageBox::Show(message);
				   clear_textboxes();
			   }


		   }


public: void UpdateOrInsertProduct(SqlConnection^ connection, String^ barcode, String^ productname, int quantity, double price, bool isUpdate, int existingQuantity, double existingPrice, bool update_flag) {
String^ message;

	try {
		SqlCommand^ sqlCommand;

		if (isUpdate) {
			// Update existing product
			sqlCommand = gcnew SqlCommand("UPDATE Products SET Quantity = @Quantity, Price = @Price WHERE Barcode = @Barcode AND [Product Name] = @ProductName", connection);
			sqlCommand->Parameters->AddWithValue("@Quantity", existingQuantity + quantity);  // Update quantity by adding the new quantity
			sqlCommand->Parameters->AddWithValue("@Price", price);  // Update price with the sum of existing and new price
		}
		else {
			// Insert new product
			sqlCommand = gcnew SqlCommand("INSERT INTO Products (Barcode, [Product Name], Quantity, Price) VALUES (@Barcode, @ProductName, @Quantity, @Price)", connection);
			sqlCommand->Parameters->AddWithValue("@Quantity", quantity);
			sqlCommand->Parameters->AddWithValue("@Price", price);
		}

		sqlCommand->Parameters->AddWithValue("@Barcode", barcode);
		sqlCommand->Parameters->AddWithValue("@ProductName", productname);

		int rowsAffected = sqlCommand->ExecuteNonQuery();

		if (rowsAffected > 0) {
			if (isUpdate) {
				message = "Product updated successfully.";
				throw message;
				update_flag = true;
				clear_textboxes();
				return;
				
				
			}
			else {
				message = "Product added successfully.";
				throw message;
				clear_textboxes();
				return;
				
			
			}
		}
		else {
			if (isUpdate) {
				message = "Failed to update product.";
				throw message;
				clear_textboxes();
				return;
			}
			else {
				message = "Failed to add product.";
				throw message;
				clear_textboxes();
				return;
			
			}
		}
	}
	catch (String^ message) {
		// Handle SQL exceptions
		MessageBox::Show(message);
		clear_textboxes();
	}
}
	  public: void clear_textboxes() {
		  barcode_textbox->Clear();
		  productname_textbox->Clear();
		  quantity_textbox->Clear();
		  price_textbox->Clear();
	  }

	private: System::Void productsadd_page_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
