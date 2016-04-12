#pragma once

#include "player.h"
#include "Persona.h"
#include <msclr\marshal_cppstd.h>

namespace WordGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// playForm 摘要
	/// </summary>
	public ref class playForm : public System::Windows::Forms::Form
	{
	public:
		playForm(player^ player)
		{
			InitializeComponent();
			m_name = new std::string;
			m_age = new std::string;
			m_job = new std::string;
			m_gender = new std::string;
			//outPutWord = new System::String^;
			*m_name = "";
			*m_age = "";
			*m_job = "";
			*m_gender = "";
			m_persona = new Persona(m_name, m_age, m_job, m_gender);
			//
			//TODO:  在此处添加构造函数代码
			//
			// Clear the playerTextBox
			this->playerTextBox->Text = System::String::Empty;
			// Append the player information
			this->playerTextBox->AppendText("Name:\t" + player->getName() + "\r\n");
			this->playerTextBox->AppendText("Age:\t" + player->getAge() + "\r\n");
			this->playerTextBox->AppendText("Vocation:\t" + player->getVacation() + "\r\n");
			this->playerTextBox->AppendText("Gender:\t" + player->getGender() + "\r\n");
			// Start the timer and the countTimer
			this->timer->Start();
			this->countTimer->Start();
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~playForm()
		{
			if (components)
			{
				delete m_persona;
				delete components;
			}

			Application::Exit();
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Timer^  timer;
	private: System::Windows::Forms::Label^  timeLabel;
	protected:
	private: System::Windows::Forms::Label^  numLabel;
	private: System::Windows::Forms::Label^  countLabel;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  inputTextBox;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::TextBox^  outputTextBox;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  playerTextBox;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Timer^  countTimer;

	private: System::ComponentModel::IContainer^  components;

	protected:

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		Persona* m_persona;
		std::string* m_name;
		std::string* m_age;
		std::string* m_job;
		std::string* m_gender;
		System::String^ outPutWord;



#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->timeLabel = (gcnew System::Windows::Forms::Label());
			this->numLabel = (gcnew System::Windows::Forms::Label());
			this->countLabel = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->inputTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->outputTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->playerTextBox = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->countTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label1->Location = System::Drawing::Point(108, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(250, 50);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Word Game";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// timer
			// 
			this->timer->Enabled = true;
			this->timer->Interval = 1000;
			this->timer->Tick += gcnew System::EventHandler(this, &playForm::timer_Tick);
			// 
			// timeLabel
			// 
			this->timeLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->timeLabel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->timeLabel->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->timeLabel->Location = System::Drawing::Point(108, 68);
			this->timeLabel->Name = L"timeLabel";
			this->timeLabel->Size = System::Drawing::Size(250, 30);
			this->timeLabel->TabIndex = 1;
			this->timeLabel->Text = L"00:00:00";
			this->timeLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// numLabel
			// 
			this->numLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->numLabel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->numLabel->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->numLabel->Location = System::Drawing::Point(27, 18);
			this->numLabel->Name = L"numLabel";
			this->numLabel->Size = System::Drawing::Size(80, 80);
			this->numLabel->TabIndex = 2;
			this->numLabel->Text = L"0";
			this->numLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// countLabel
			// 
			this->countLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->countLabel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->countLabel->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->countLabel->Location = System::Drawing::Point(359, 18);
			this->countLabel->Name = L"countLabel";
			this->countLabel->Size = System::Drawing::Size(80, 80);
			this->countLabel->TabIndex = 3;
			this->countLabel->Text = L"0";
			this->countLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(27, 419);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(205, 25);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Input Word";
			// 
			// inputTextBox
			// 
			this->inputTextBox->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inputTextBox->Location = System::Drawing::Point(27, 447);
			this->inputTextBox->Name = L"inputTextBox";
			this->inputTextBox->Size = System::Drawing::Size(205, 27);
			this->inputTextBox->TabIndex = 9;
			this->inputTextBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &playForm::inputTextBox_KeyDown);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(234, 107);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(205, 100);
			this->label3->TabIndex = 6;
			// 
			// outputTextBox
			// 
			this->outputTextBox->AcceptsReturn = true;
			this->outputTextBox->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->outputTextBox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->outputTextBox->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->outputTextBox->Location = System::Drawing::Point(27, 210);
			this->outputTextBox->Multiline = true;
			this->outputTextBox->Name = L"outputTextBox";
			this->outputTextBox->ReadOnly = true;
			this->outputTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->outputTextBox->Size = System::Drawing::Size(205, 200);
			this->outputTextBox->TabIndex = 10;
			this->outputTextBox->WordWrap = false;
			// 
			// label6
			// 
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Location = System::Drawing::Point(234, 419);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(205, 55);
			this->label6->TabIndex = 11;
			// 
			// playerTextBox
			// 
			this->playerTextBox->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->playerTextBox->Enabled = false;
			this->playerTextBox->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->playerTextBox->Location = System::Drawing::Point(27, 107);
			this->playerTextBox->Multiline = true;
			this->playerTextBox->Name = L"playerTextBox";
			this->playerTextBox->ReadOnly = true;
			this->playerTextBox->Size = System::Drawing::Size(205, 100);
			this->playerTextBox->TabIndex = 12;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(234, 210);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox1->Size = System::Drawing::Size(205, 200);
			this->textBox1->TabIndex = 13;
			this->textBox1->WordWrap = false;
			// 
			// countTimer
			// 
			this->countTimer->Enabled = true;
			this->countTimer->Interval = 1000;
			this->countTimer->Tick += gcnew System::EventHandler(this, &playForm::countTimer_Tick);
			// 
			// playForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(467, 492);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->playerTextBox);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->outputTextBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->inputTextBox);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->countLabel);
			this->Controls->Add(this->numLabel);
			this->Controls->Add(this->timeLabel);
			this->Controls->Add(this->label1);
			this->Name = L"playForm";
			this->Text = L"Word Game";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void inputTextBox_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (e->KeyCode == Keys::Enter) {
		System::String^ word = this->inputTextBox->Text->Trim();

		// converting system::string^ to std::string  then passing to persona & return
		std::string personaWord = msclr::interop::marshal_as<std::string>(word);

		//std::string personaWord = "AARDVARK";
		personaWord = m_persona->getBestWord(personaWord);

		// converting result to system::string^ so can be output
		outPutWord = gcnew String(personaWord.c_str());

		if (word != System::String::Empty) {
			if (this->outputTextBox->Text == System::String::Empty) {
				// Append text in the outputTextBox
				this->outputTextBox->AppendText(word);
				//this->textBox1->AppendText(outPutWord);
				// Reset the num in the numLabel
				this->numLabel->Text = "1";
			}
			else {
				// Newline and Append text in the outputTextBox
				this->outputTextBox->AppendText("\r\n" + word);
				//this->textBox1->AppendText("\r\n" +outPutWord);
				// Increase the number of the words in the numLabel
				System::Int32 num = System::Convert::ToInt32(this->numLabel->Text);
				++ num;
				this->numLabel->Text = System::Convert::ToString(num);
			}
		}
		// Clear the inputTextBox
		this->inputTextBox->Text = System::String::Empty;
		// No bing ding dong ring
		e->SuppressKeyPress = true;
	}
}

private: System::Void timer_Tick(System::Object^  sender, System::EventArgs^  e) {
	// Increase the timer
	TimeSpan^ duration = TimeSpan::Parse(this->timeLabel->Text);
	duration = duration->Add(TimeSpan::FromSeconds(1));
	this->timeLabel->Text = duration->ToString();
}

private: System::Void countTimer_Tick(System::Object^  sender, System::EventArgs^  e) {
	System::Int32 count = System::Convert::ToInt32(this->countLabel->Text);
	System::Int32 num = System::Convert::ToInt32(this->numLabel->Text);
	if (count < num) {
		++ count;
		this->countLabel->Text = count.ToString();
		this->textBox1->AppendText("\r\n" + outPutWord);
	}
	System::Random^ random = gcnew System::Random();
	this->countTimer->Interval = random->Next(3, 10) * 1000;
}
};
}


