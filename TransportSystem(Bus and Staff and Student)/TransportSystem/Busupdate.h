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
	/// Summary for Busupdate
	/// </summary>
	public ref class Busupdate : public System::Windows::Forms::Form
	{
	public:
		Busupdate(void)
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
		~Busupdate()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  ID1;
	private: System::Windows::Forms::TextBox^  Startpoint;
	private: System::Windows::Forms::TextBox^  Route;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  Destination;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Busupdate::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ID1 = (gcnew System::Windows::Forms::TextBox());
			this->Startpoint = (gcnew System::Windows::Forms::TextBox());
			this->Route = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Destination = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(835, 349);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(174, 47);
			this->button1->TabIndex = 0;
			this->button1->Text = L"UPDATE";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Busupdate::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(835, 429);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(170, 47);
			this->button2->TabIndex = 1;
			this->button2->Text = L"DELETE";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Busupdate::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(403, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(324, 27);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Enter Info to be Updated";
			// 
			// ID1
			// 
			this->ID1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ID1->Location = System::Drawing::Point(448, 212);
			this->ID1->Name = L"ID1";
			this->ID1->Size = System::Drawing::Size(199, 29);
			this->ID1->TabIndex = 3;
			this->ID1->TextChanged += gcnew System::EventHandler(this, &Busupdate::textBox1_TextChanged);
			// 
			// Startpoint
			// 
			this->Startpoint->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Startpoint->Location = System::Drawing::Point(448, 307);
			this->Startpoint->Name = L"Startpoint";
			this->Startpoint->Size = System::Drawing::Size(199, 29);
			this->Startpoint->TabIndex = 4;
			// 
			// Route
			// 
			this->Route->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Route->Location = System::Drawing::Point(448, 409);
			this->Route->Name = L"Route";
			this->Route->Size = System::Drawing::Size(199, 29);
			this->Route->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(260, 214);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 27);
			this->label2->TabIndex = 6;
			this->label2->Text = L"ID";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(260, 409);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 27);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Route";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(260, 307);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(138, 27);
			this->label4->TabIndex = 8;
			this->label4->Text = L"StartPoint";
			// 
			// Destination
			// 
			this->Destination->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Destination->Location = System::Drawing::Point(448, 507);
			this->Destination->Name = L"Destination";
			this->Destination->Size = System::Drawing::Size(199, 29);
			this->Destination->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(260, 507);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(160, 27);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Destination";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(835, 239);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(174, 55);
			this->button3->TabIndex = 11;
			this->button3->Text = L"ADD";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Busupdate::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(1018, 22);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Exit";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Busupdate::button4_Click_1);
			// 
			// Busupdate
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1124, 608);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Destination);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Route);
			this->Controls->Add(this->Startpoint);
			this->Controls->Add(this->ID1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Busupdate";
			this->Text = L"Busupdate";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Update
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ constr = "Server=127.0.0.1;Uid=root;pwd=;Database=student transport system";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		int id = Int32::Parse(ID1->Text);
		String^ start = Startpoint->Text;
		String^ route = Route->Text;
		String^ end = Destination->Text;

		MySqlCommand^ cmd = gcnew MySqlCommand("update bus set Startpoint='" + start + "',Destination='" + end + "',Route='" + route + "' where BUSID=" + id + "", con);
		MySqlDataReader^ dr;
		con->Open();
		dr = cmd->ExecuteReader();
		MessageBox::Show("Information Updated");
		con->Close();

	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ constr = "Server=127.0.0.1;Uid=root;pwd=;Database=student";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		int id = Int32::Parse(ID1->Text);
		MySqlCommand^ cmd = gcnew MySqlCommand("delete from bus where BUSID=" + id + "", con);
		MySqlDataReader^ dr;
		con->Open();
		dr = cmd->ExecuteReader();
		MessageBox::Show("Information deleted");
		con->Close();
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ constr = "Server=127.0.0.1;Uid=root;pwd=;Database=student transport system";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		int id = Int32::Parse(ID1->Text);
		String^ start = Startpoint->Text;
		String^ route = Route->Text;
		String^ end = Destination->Text;
		MySqlCommand^ cmd = gcnew MySqlCommand("insert into bus values("+id+", '"+start+"', '"+route+"', '100', 'Students')", con);
		MySqlDataReader^ dr;
		con->Open();
		dr = cmd->ExecuteReader();
		MessageBox::Show("Information deleted");
		con->Close();
	}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void button4_Click_1(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
};
}

