#pragma once
#include "form2.h"
								//STAFF LOGIN 

namespace TransportSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for login
	/// </summary>
	public ref class login : public System::Windows::Forms::Form
	{
	public:
		Form ^obj;
		login(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			pass2->PasswordChar = '*';
		}
		login(Form ^obj2)
		{
			obj = obj2;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			pass2->PasswordChar = '*';
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  userid;
	protected:

	private: System::Windows::Forms::Label^  password;

	private: System::Windows::Forms::TextBox^  user2;

	private: System::Windows::Forms::TextBox^  pass2;
	private: System::Windows::Forms::Button^  login2;

	private: System::Windows::Forms::Button^  REGISTER;
	private: System::Windows::Forms::Button^  main;
	private: System::Windows::Forms::TextBox^  namebox;

	private: System::Windows::Forms::TextBox^  address;
	private: System::Windows::Forms::TextBox^  agebox;




	private: System::Windows::Forms::TextBox^  contact;

	private: System::Windows::Forms::Label^  label2;


	private: System::Windows::Forms::Label^  name;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  FindBus;
	private: System::Windows::Forms::BindingSource^  bindingSource1;
	private: System::Windows::Forms::Label^  age;
	private: System::ComponentModel::IContainer^  components;







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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(login::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->userid = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::Label());
			this->user2 = (gcnew System::Windows::Forms::TextBox());
			this->pass2 = (gcnew System::Windows::Forms::TextBox());
			this->login2 = (gcnew System::Windows::Forms::Button());
			this->REGISTER = (gcnew System::Windows::Forms::Button());
			this->main = (gcnew System::Windows::Forms::Button());
			this->namebox = (gcnew System::Windows::Forms::TextBox());
			this->address = (gcnew System::Windows::Forms::TextBox());
			this->agebox = (gcnew System::Windows::Forms::TextBox());
			this->contact = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->FindBus = (gcnew System::Windows::Forms::Button());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->age = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(528, 94);
			this->label1->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(294, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login to your account";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// userid
			// 
			this->userid->AutoSize = true;
			this->userid->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userid->Location = System::Drawing::Point(289, 201);
			this->userid->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->userid->Name = L"userid";
			this->userid->Size = System::Drawing::Size(108, 28);
			this->userid->TabIndex = 1;
			this->userid->Text = L"UserID :";
			// 
			// password
			// 
			this->password->AutoSize = true;
			this->password->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password->Location = System::Drawing::Point(289, 274);
			this->password->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(142, 28);
			this->password->TabIndex = 2;
			this->password->Text = L"Password :";
			// 
			// user2
			// 
			this->user2->Location = System::Drawing::Point(505, 198);
			this->user2->Name = L"user2";
			this->user2->Size = System::Drawing::Size(336, 31);
			this->user2->TabIndex = 3;
			this->user2->TextChanged += gcnew System::EventHandler(this, &login::user2_TextChanged);
			// 
			// pass2
			// 
			this->pass2->Location = System::Drawing::Point(505, 274);
			this->pass2->Name = L"pass2";
			this->pass2->Size = System::Drawing::Size(336, 31);
			this->pass2->TabIndex = 4;
			// 
			// login2
			// 
			this->login2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"login2.Image")));
			this->login2->Location = System::Drawing::Point(979, 169);
			this->login2->Name = L"login2";
			this->login2->Size = System::Drawing::Size(134, 43);
			this->login2->TabIndex = 5;
			this->login2->Text = L"LOGIN";
			this->login2->UseVisualStyleBackColor = true;
			this->login2->Click += gcnew System::EventHandler(this, &login::button1_Click);
			// 
			// REGISTER
			// 
			this->REGISTER->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"REGISTER.Image")));
			this->REGISTER->Location = System::Drawing::Point(979, 229);
			this->REGISTER->Name = L"REGISTER";
			this->REGISTER->Size = System::Drawing::Size(134, 58);
			this->REGISTER->TabIndex = 6;
			this->REGISTER->Text = L"REGISTER";
			this->REGISTER->UseVisualStyleBackColor = true;
			this->REGISTER->Click += gcnew System::EventHandler(this, &login::REGISTER_Click);
			// 
			// main
			// 
			this->main->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"main.Image")));
			this->main->Location = System::Drawing::Point(979, 304);
			this->main->Name = L"main";
			this->main->Size = System::Drawing::Size(134, 66);
			this->main->TabIndex = 7;
			this->main->Text = L"Main Menu";
			this->main->UseVisualStyleBackColor = true;
			this->main->Click += gcnew System::EventHandler(this, &login::main_Click);
			// 
			// namebox
			// 
			this->namebox->Location = System::Drawing::Point(294, 465);
			this->namebox->Name = L"namebox";
			this->namebox->Size = System::Drawing::Size(307, 31);
			this->namebox->TabIndex = 8;
			// 
			// address
			// 
			this->address->Location = System::Drawing::Point(294, 520);
			this->address->Name = L"address";
			this->address->Size = System::Drawing::Size(307, 31);
			this->address->TabIndex = 9;
			// 
			// agebox
			// 
			this->agebox->Location = System::Drawing::Point(294, 649);
			this->agebox->Name = L"agebox";
			this->agebox->Size = System::Drawing::Size(307, 31);
			this->agebox->TabIndex = 10;
			// 
			// contact
			// 
			this->contact->Location = System::Drawing::Point(294, 585);
			this->contact->Name = L"contact";
			this->contact->Size = System::Drawing::Size(307, 31);
			this->contact->TabIndex = 11;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(133, 585);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(140, 25);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Contactno. :";
			// 
			// name
			// 
			this->name->AutoSize = true;
			this->name->Location = System::Drawing::Point(133, 468);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(79, 25);
			this->name->TabIndex = 14;
			this->name->Text = L"Name:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(133, 526);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(105, 25);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Address:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1343, 380);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 16;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1419, 453);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 17;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(1129, 33);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 18;
			this->button3->Text = L"EXIT";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &login::button3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(737, 464);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(194, 29);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Bus Information";
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Info;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->Location = System::Drawing::Point(742, 530);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(540, 144);
			this->dataGridView1->TabIndex = 20;
			// 
			// FindBus
			// 
			this->FindBus->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"FindBus.BackgroundImage")));
			this->FindBus->Location = System::Drawing::Point(1142, 460);
			this->FindBus->Name = L"FindBus";
			this->FindBus->Size = System::Drawing::Size(122, 40);
			this->FindBus->TabIndex = 21;
			this->FindBus->Text = L"Find Bus";
			this->FindBus->UseVisualStyleBackColor = true;
			this->FindBus->Click += gcnew System::EventHandler(this, &login::FindBus_Click);
			// 
			// age
			// 
			this->age->AutoSize = true;
			this->age->Location = System::Drawing::Point(133, 649);
			this->age->Name = L"age";
			this->age->Size = System::Drawing::Size(67, 25);
			this->age->TabIndex = 22;
			this->age->Text = L"Age :";
			// 
			// login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1358, 741);
			this->Controls->Add(this->age);
			this->Controls->Add(this->FindBus);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->name);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->contact);
			this->Controls->Add(this->agebox);
			this->Controls->Add(this->address);
			this->Controls->Add(this->namebox);
			this->Controls->Add(this->main);
			this->Controls->Add(this->REGISTER);
			this->Controls->Add(this->login2);
			this->Controls->Add(this->pass2);
			this->Controls->Add(this->user2);
			this->Controls->Add(this->password);
			this->Controls->Add(this->userid);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->Name = L"login";
			this->Text = L"login";
			this->Load += gcnew System::EventHandler(this, &login::login_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			

			int userid = Int32::Parse(user2->Text);
			String^ password = pass2->Text;
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=student transport system";
			MySqlConnection ^con = gcnew MySqlConnection(constr);


			MySqlCommand^ cmd = gcnew MySqlCommand("select * from staff WHERE userid=" +this-> user2->Text + " and password='" + this->pass2->Text + "' " , con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			int count = 0;
			while (dr->Read()) {
				namebox->Text = dr->GetString(2);
				address->Text = dr->GetString(3);
				contact->Text = dr->GetString(4);
				agebox->Text = dr->GetString(5);
				count = count + 1;
			}
			//MessageBox::Show("User info saved" + userid);
			if (count != 1) {
				MessageBox::Show("User not found");
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
			
		}
		/*this->Hide();
		show ^f2 = gcnew show();
		f2->ShowDialog();  */
	}
private: System::Void REGISTER_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	form2 ^f2 = gcnew form2(this);
	f2->ShowDialog(); 
}
private: System::Void main_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	obj->Show();
}
private: System::Void user2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void login_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void FindBus_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		String ^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=student transport system";
		MySqlConnection^ con = gcnew MySqlConnection(constr);

		String ^ userid = user2->Text;
		String ^ password = pass2->Text;

		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("select * from bus where Startpoint in (select address from staff where userid='" + userid + "' and password='" + password + "');", con);

		DataTable^ dt = gcnew DataTable();
		sda->Fill(dt);
		bindingSource1->DataSource = dt;
		dataGridView1->DataSource = bindingSource1;


	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}

};
}
