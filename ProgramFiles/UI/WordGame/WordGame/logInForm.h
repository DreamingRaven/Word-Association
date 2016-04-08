#pragma once

#include "player.h"
#include "playForm.h"

namespace WordGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// logInForm 摘要
	/// </summary>
	public ref class logInForm : public System::Windows::Forms::Form
	{
	public:
		logInForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~logInForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  vacationTextBox;
	private: System::Windows::Forms::TextBox^  ageTextBox;
	private: System::Windows::Forms::TextBox^  nameTextBox;
	private: System::Windows::Forms::Button^  start;
	private: System::Windows::Forms::RadioButton^  femaleRadioButton;
	private: System::Windows::Forms::RadioButton^  maleRadioButton;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label6;

	protected:

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->femaleRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->maleRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->vacationTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ageTextBox = (gcnew System::Windows::Forms::TextBox());
			this->nameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->start = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(111, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(200, 43);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Word Game";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->start);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(36, 59);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(350, 338);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Player";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->femaleRadioButton);
			this->groupBox2->Controls->Add(this->maleRadioButton);
			this->groupBox2->Controls->Add(this->vacationTextBox);
			this->groupBox2->Controls->Add(this->ageTextBox);
			this->groupBox2->Controls->Add(this->nameTextBox);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Location = System::Drawing::Point(46, 31);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(277, 237);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(119, 25);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(110, 22);
			this->label6->TabIndex = 9;
			this->label6->Text = L"User Login";
			// 
			// femaleRadioButton
			// 
			this->femaleRadioButton->AutoSize = true;
			this->femaleRadioButton->Font = (gcnew System::Drawing::Font(L"Consolas", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->femaleRadioButton->Location = System::Drawing::Point(189, 198);
			this->femaleRadioButton->Name = L"femaleRadioButton";
			this->femaleRadioButton->Size = System::Drawing::Size(74, 21);
			this->femaleRadioButton->TabIndex = 8;
			this->femaleRadioButton->Text = L"Female";
			this->femaleRadioButton->UseVisualStyleBackColor = true;
			// 
			// maleRadioButton
			// 
			this->maleRadioButton->AutoSize = true;
			this->maleRadioButton->Checked = true;
			this->maleRadioButton->Font = (gcnew System::Drawing::Font(L"Consolas", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maleRadioButton->Location = System::Drawing::Point(116, 198);
			this->maleRadioButton->Name = L"maleRadioButton";
			this->maleRadioButton->Size = System::Drawing::Size(58, 21);
			this->maleRadioButton->TabIndex = 7;
			this->maleRadioButton->TabStop = true;
			this->maleRadioButton->Text = L"Male";
			this->maleRadioButton->UseVisualStyleBackColor = true;
			// 
			// vacationTextBox
			// 
			this->vacationTextBox->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->vacationTextBox->Location = System::Drawing::Point(116, 150);
			this->vacationTextBox->Name = L"vacationTextBox";
			this->vacationTextBox->Size = System::Drawing::Size(142, 26);
			this->vacationTextBox->TabIndex = 6;
			// 
			// ageTextBox
			// 
			this->ageTextBox->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ageTextBox->Location = System::Drawing::Point(116, 106);
			this->ageTextBox->Name = L"ageTextBox";
			this->ageTextBox->Size = System::Drawing::Size(142, 26);
			this->ageTextBox->TabIndex = 5;
			this->ageTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &logInForm::ageTextBox_KeyPress);
			// 
			// nameTextBox
			// 
			this->nameTextBox->BackColor = System::Drawing::Color::White;
			this->nameTextBox->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameTextBox->Location = System::Drawing::Point(116, 63);
			this->nameTextBox->Name = L"nameTextBox";
			this->nameTextBox->Size = System::Drawing::Size(142, 26);
			this->nameTextBox->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::SteelBlue;
			this->label5->Location = System::Drawing::Point(16, 195);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 22);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Gender:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->ForeColor = System::Drawing::Color::SteelBlue;
			this->label4->Location = System::Drawing::Point(10, 150);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(76, 20);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Vocation:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::SteelBlue;
			this->label3->Location = System::Drawing::Point(47, 106);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 23);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Age:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::SteelBlue;
			this->label2->Location = System::Drawing::Point(31, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 23);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Name:";
			// 
			// start
			// 
			this->start->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->start->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->start->Location = System::Drawing::Point(122, 285);
			this->start->Name = L"start";
			this->start->Size = System::Drawing::Size(107, 41);
			this->start->TabIndex = 9;
			this->start->Text = L"START";
			this->start->UseVisualStyleBackColor = true;
			this->start->Click += gcnew System::EventHandler(this, &logInForm::start_Click);
			// 
			// logInForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(421, 414);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Name = L"logInForm";
			this->Text = L"Word Game";
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void start_Click(System::Object^  sender, System::EventArgs^  e) {
	// Set the player
	System::String^ name = this->nameTextBox->Text->Trim();
	if (name == System::String::Empty) {
		MessageBox::Show("The name textbox can't be empty!", "Input Error");
	}
	else {
		System::String^ sAge = this->ageTextBox->Text->Trim();
		if (sAge == System::String::Empty) {
			MessageBox::Show("The age textbox can't be empty!", "Input Error");
		}
		else {
			System::Int32^ iAge = System::Convert::ToInt32(sAge);
			System::String^ vacation = this->vacationTextBox->Text->Trim();
			if (vacation == System::String::Empty) {
				MessageBox::Show("The vocation textbox can't be empty!", "Input Error");
			}
			else {
				System::String^ gender = this->maleRadioButton->Checked ? "Male" : "Female";
				player^ p = gcnew player(name, iAge, vacation, gender);
				// Hide the logInForm and Show the playForm
				this->Hide();
				(gcnew playForm(p))->Show();
			}
		}
	}
}

private: System::Void ageTextBox_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	// If the input is not a digit, cancel it.
	if (e->KeyChar < '0' || e->KeyChar > '9') {
		e->Handled = true;
	}
	if (e->KeyChar == (char)Keys::Back) {
		System::String^ text = this->ageTextBox->Text;
		this->ageTextBox->Text = System::String::Empty;
		this->ageTextBox->AppendText(text->Substring(0, text->Length - 1));
	}
}

};
}

