#pragma once
#include "login.h"

namespace TransportSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for show
	/// </summary>
	public ref class show : public System::Windows::Forms::Form
	{
	public:
		show(void)
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
		~show()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  name;
	private: System::Windows::Forms::TextBox^  adres;
	private: System::Windows::Forms::TextBox^  contact;
	private: System::Windows::Forms::TextBox^  busid;
	private: System::Windows::Forms::Button^  showbutton;
	protected:

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
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->adres = (gcnew System::Windows::Forms::TextBox());
			this->contact = (gcnew System::Windows::Forms::TextBox());
			this->busid = (gcnew System::Windows::Forms::TextBox());
			this->showbutton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// name
			// 
			this->name->Location = System::Drawing::Point(338, 159);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(343, 20);
			this->name->TabIndex = 0;
			// 
			// adres
			// 
			this->adres->Location = System::Drawing::Point(338, 199);
			this->adres->Name = L"adres";
			this->adres->Size = System::Drawing::Size(343, 20);
			this->adres->TabIndex = 1;
			// 
			// contact
			// 
			this->contact->Location = System::Drawing::Point(338, 238);
			this->contact->Name = L"contact";
			this->contact->Size = System::Drawing::Size(343, 20);
			this->contact->TabIndex = 2;
			// 
			// busid
			// 
			this->busid->Location = System::Drawing::Point(338, 289);
			this->busid->Name = L"busid";
			this->busid->Size = System::Drawing::Size(343, 20);
			this->busid->TabIndex = 3;
			// 
			// showbutton
			// 
			this->showbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->showbutton->Location = System::Drawing::Point(473, 82);
			this->showbutton->Name = L"showbutton";
			this->showbutton->Size = System::Drawing::Size(92, 35);
			this->showbutton->TabIndex = 4;
			this->showbutton->Text = L"show";
			this->showbutton->UseVisualStyleBackColor = true;
			this->showbutton->Click += gcnew System::EventHandler(this, &show::showbutton_Click);
			// 
			// show
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1018, 386);
			this->Controls->Add(this->showbutton);
			this->Controls->Add(this->busid);
			this->Controls->Add(this->contact);
			this->Controls->Add(this->adres);
			this->Controls->Add(this->name);
			this->Name = L"show";
			this->Text = L"show";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void showbutton_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=student transport system";
			MySqlConnection ^con = gcnew MySqlConnection(constr);

			int userid = Int32::Parse(user2->Text);
			String^ password = pass2->Text;


			MySqlCommand^ cmd = gcnew MySqlCommand("select from staff values(" + userid + ",'" + password + "' )", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			//MessageBox::Show("User info saved" + userid);
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		
	}
	
};
}
