#pragma once
#include<ctime>
namespace visualpasswordgenerator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Button^ button3;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.8F));
			this->button1->Location = System::Drawing::Point(177, 268);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(316, 62);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Genrated";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.8F));
			this->textBox1->Location = System::Drawing::Point(33, 200);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(605, 37);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"Create password";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.8F));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(142, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(375, 31);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Random password generation";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::Red;
			this->button2->Location = System::Drawing::Point(12, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(78, 35);
			this->button2->TabIndex = 4;
			this->button2->Text = L"EXIT";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->BackColor = System::Drawing::Color::Black;
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.8F));
			this->numericUpDown1->ForeColor = System::Drawing::Color::White;
			this->numericUpDown1->Location = System::Drawing::Point(177, 132);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 32, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 12, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->ReadOnly = true;
			this->numericUpDown1->Size = System::Drawing::Size(316, 37);
			this->numericUpDown1->TabIndex = 5;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 12, 0, 0, 0 });
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button3->Location = System::Drawing::Point(644, 200);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(67, 37);
			this->button3->TabIndex = 6;
			this->button3->Text = L"copy";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(723, 380);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		//*********************************Gentrate password************************************

		// randm_next which is use to creat new value number with previous value
		unsigned long int randm_next = 1;
		// randm function return a big value every time differnt value
		int randm()
		{
			randm_next = randm_next * 1103515245 + 12345;
			return((unsigned int)(randm_next / 65536) % 32768);
		}
		// srandm function initilize randm_next with differnt quantites 
		// it help to genrate every time different series
		void srandm(unsigned int seed)
		{
			randm_next = seed;
		}
		//randm_rang fuction is help to generate random number in given range
		int randm_rang(int min, int max)
		{
			int dis = max - min;
			int random = randm() % dis + min;
			return random;
		}
#pragma endregion
	//**************************************button for genrate***************************



	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//give srandm cureent time because time is different every time when program is run
		srandm(time(0));
		int count = 0;
		//password which storged the password
		String^ password;
		//passwrdlength is which length password user want 
		//numericupdowm is used to enter which length password required
		int PassowrdLength = (int)numericUpDown1->Value;
		//while loop run to creat the password
		while (count < PassowrdLength)
		{
			//for generated lower character
			if (count == 0 || count == 4)
			{
				int randnum = randm_rang(97,122);
				wchar_t NewChar = static_cast<wchar_t>(randnum);
				password = password + NewChar;
			}
			//for generated upper character
			else if (count==PassowrdLength-1|| count ==8)
			{
				int randnum = randm_rang(65,90);
				wchar_t NewChar = static_cast<wchar_t>(randnum);
				password = password + NewChar;
			}
			//for generated digit character
			else if (count == 6)
			{
				int randnum = randm_rang(49,57);
				wchar_t NewChar = static_cast<wchar_t>(randnum);
				password = password + NewChar;
			}
			//for generated @ sign character
			else if (count == 7)
			{
				int randnum = randm_rang(64,65);
				wchar_t NewChar = static_cast<wchar_t>(randnum);
				password = password + NewChar;

			}
			//for generated any character
			else
			{
				int randnum = randm_rang(33,126);
				wchar_t NewChar = static_cast<wchar_t>(randnum);
				password = password + NewChar;
			}
			count = count + 1;
		}
		//Display the password
		textBox1->Text = password;
		
	}
	//***********************Exit button to exit the application****************************
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   //*********************************copy button***************************************
	
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	//copy the text to the cilpboard
		Clipboard::SetText(textBox1->Text);
}
};
}
