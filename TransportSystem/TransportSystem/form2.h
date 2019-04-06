#pragma once


namespace TransportSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for form2
	/// </summary>
	public ref class form2 : public System::Windows::Forms::Form
	{
	public:
		Form ^obj;
		form2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		form2(Form ^obj2)
		{
			obj = obj2;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ColorDialog^  colorDialog1;
	private: System::Windows::Forms::Label^  registration;
	protected:


	private: System::Windows::Forms::Label^  name;
	private: System::Windows::Forms::Label^  Adress;
	private: System::Windows::Forms::Label^  contact;
	private: System::Windows::Forms::Label^  busid;






	private: System::Windows::Forms::TextBox^  namebox;
	private: System::Windows::Forms::TextBox^  adresBox;
	private: System::Windows::Forms::TextBox^  contactBox;
	private: System::Windows::Forms::TextBox^  busBox;





	private: System::Windows::Forms::Label^  User;
	private: System::Windows::Forms::Label^  password;
	private: System::Windows::Forms::TextBox^  userIDBox;









	private: System::Windows::Forms::TextBox^  passwordBox;
	private: System::Windows::Forms::Button^  Done;
	private: System::Windows::Forms::Button^  Back;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(form2::typeid));
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->registration = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::Label());
			this->Adress = (gcnew System::Windows::Forms::Label());
			this->contact = (gcnew System::Windows::Forms::Label());
			this->busid = (gcnew System::Windows::Forms::Label());
			this->namebox = (gcnew System::Windows::Forms::TextBox());
			this->adresBox = (gcnew System::Windows::Forms::TextBox());
			this->contactBox = (gcnew System::Windows::Forms::TextBox());
			this->busBox = (gcnew System::Windows::Forms::TextBox());
			this->User = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::Label());
			this->userIDBox = (gcnew System::Windows::Forms::TextBox());
			this->passwordBox = (gcnew System::Windows::Forms::TextBox());
			this->Done = (gcnew System::Windows::Forms::Button());
			this->Back = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// registration
			// 
			this->registration->AutoSize = true;
			this->registration->BackColor = System::Drawing::Color::White;
			this->registration->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registration->Location = System::Drawing::Point(558, 111);
			this->registration->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->registration->Name = L"registration";
			this->registration->Size = System::Drawing::Size(376, 29);
			this->registration->TabIndex = 0;
			this->registration->Text = L"STAFF REGISTRATION FORM";
			// 
			// name
			// 
			this->name->AutoSize = true;
			this->name->BackColor = System::Drawing::Color::White;
			this->name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name->ForeColor = System::Drawing::SystemColors::ControlText;
			this->name->Location = System::Drawing::Point(258, 272);
			this->name->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(70, 20);
			this->name->TabIndex = 2;
			this->name->Text = L"Name  :";
			// 
			// Adress
			// 
			this->Adress->AutoSize = true;
			this->Adress->BackColor = System::Drawing::Color::White;
			this->Adress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Adress->Location = System::Drawing::Point(258, 329);
			this->Adress->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->Adress->Name = L"Adress";
			this->Adress->Size = System::Drawing::Size(90, 20);
			this->Adress->TabIndex = 3;
			this->Adress->Text = L"Address  :";
			// 
			// contact
			// 
			this->contact->AutoSize = true;
			this->contact->BackColor = System::Drawing::Color::White;
			this->contact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contact->Location = System::Drawing::Point(258, 384);
			this->contact->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->contact->Name = L"contact";
			this->contact->Size = System::Drawing::Size(117, 20);
			this->contact->TabIndex = 4;
			this->contact->Text = L"Contact no.  :";
			// 
			// busid
			// 
			this->busid->AutoSize = true;
			this->busid->BackColor = System::Drawing::Color::White;
			this->busid->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->busid->Location = System::Drawing::Point(258, 435);
			this->busid->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->busid->Name = L"busid";
			this->busid->Size = System::Drawing::Size(84, 20);
			this->busid->TabIndex = 5;
			this->busid->Text = L"Bus ID   :";
			// 
			// namebox
			// 
			this->namebox->Location = System::Drawing::Point(455, 268);
			this->namebox->Name = L"namebox";
			this->namebox->Size = System::Drawing::Size(351, 24);
			this->namebox->TabIndex = 7;
			// 
			// adresBox
			// 
			this->adresBox->Location = System::Drawing::Point(455, 325);
			this->adresBox->Name = L"adresBox";
			this->adresBox->Size = System::Drawing::Size(351, 24);
			this->adresBox->TabIndex = 8;
			// 
			// contactBox
			// 
			this->contactBox->Location = System::Drawing::Point(455, 380);
			this->contactBox->Name = L"contactBox";
			this->contactBox->Size = System::Drawing::Size(351, 24);
			this->contactBox->TabIndex = 9;
			// 
			// busBox
			// 
			this->busBox->Location = System::Drawing::Point(455, 435);
			this->busBox->Name = L"busBox";
			this->busBox->Size = System::Drawing::Size(351, 24);
			this->busBox->TabIndex = 10;
			// 
			// User
			// 
			this->User->AutoSize = true;
			this->User->BackColor = System::Drawing::Color::White;
			this->User->Location = System::Drawing::Point(939, 288);
			this->User->Name = L"User";
			this->User->Size = System::Drawing::Size(81, 18);
			this->User->TabIndex = 11;
			this->User->Text = L"User-ID  :";
			// 
			// password
			// 
			this->password->AutoSize = true;
			this->password->BackColor = System::Drawing::Color::White;
			this->password->Location = System::Drawing::Point(939, 328);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(98, 18);
			this->password->TabIndex = 12;
			this->password->Text = L"Password  :";
			// 
			// userIDBox
			// 
			this->userIDBox->Location = System::Drawing::Point(1092, 282);
			this->userIDBox->Name = L"userIDBox";
			this->userIDBox->Size = System::Drawing::Size(195, 24);
			this->userIDBox->TabIndex = 13;
			// 
			// passwordBox
			// 
			this->passwordBox->Location = System::Drawing::Point(1092, 325);
			this->passwordBox->Name = L"passwordBox";
			this->passwordBox->Size = System::Drawing::Size(195, 24);
			this->passwordBox->TabIndex = 14;
			// 
			// Done
			// 
			this->Done->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Done->Location = System::Drawing::Point(942, 484);
			this->Done->Name = L"Done";
			this->Done->Size = System::Drawing::Size(111, 46);
			this->Done->TabIndex = 15;
			this->Done->Text = L"Done";
			this->Done->UseVisualStyleBackColor = true;
			this->Done->Click += gcnew System::EventHandler(this, &form2::Done_Click);
			// 
			// Back
			// 
			this->Back->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Back->Location = System::Drawing::Point(1142, 484);
			this->Back->Name = L"Back";
			this->Back->Size = System::Drawing::Size(107, 46);
			this->Back->TabIndex = 16;
			this->Back->Text = L"Back";
			this->Back->UseVisualStyleBackColor = true;
			this->Back->Click += gcnew System::EventHandler(this, &form2::Back_Click);
			// 
			// form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1370, 586);
			this->Controls->Add(this->Back);
			this->Controls->Add(this->Done);
			this->Controls->Add(this->passwordBox);
			this->Controls->Add(this->userIDBox);
			this->Controls->Add(this->password);
			this->Controls->Add(this->User);
			this->Controls->Add(this->busBox);
			this->Controls->Add(this->contactBox);
			this->Controls->Add(this->adresBox);
			this->Controls->Add(this->namebox);
			this->Controls->Add(this->busid);
			this->Controls->Add(this->contact);
			this->Controls->Add(this->Adress);
			this->Controls->Add(this->name);
			this->Controls->Add(this->registration);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->Name = L"form2";
			this->Text = L"form2";
			this->Load += gcnew System::EventHandler(this, &form2::form2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void form2_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void Done_Click(System::Object^  sender, System::EventArgs^  e) {
			//MessageBox::Show("insert clicked");
			try {
				String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=student transport system";
				MySqlConnection ^con = gcnew MySqlConnection(constr);
	
				int userid = Int32::Parse(userIDBox->Text);
				int busid = Int32::Parse(busBox->Text);
				String^ password = passwordBox->Text;
				
				//MessageBox::Show("ID: " + id);
				String^ name = namebox->Text;
				String^ adress = adresBox->Text;
				int contact = Int32::Parse(contactBox->Text);
				
				MySqlCommand^ cmd = gcnew MySqlCommand("insert into staff values(" + userid + ",'" + password + "','" + name + "','" + adress + "'," + contact + "," + busid + ")", con);
				MySqlDataReader^ dr;
				con->Open();
				dr = cmd->ExecuteReader();
				MessageBox::Show("User info saved" + userid);
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			} 
	}
	private: System::Void Back_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		obj->Show();
	}
};
}