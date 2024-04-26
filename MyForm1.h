#pragma once
#include<string>
#include<iostream>
#include<fstream>
#include <direct.h>
#include <msclr\marshal_cppstd.h>   //�����й�����йܴ�����������͵�ת��
#include"function.h"
#include"calculate.h"
using namespace msclr::interop;
namespace SoftProject4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm1 ժҪ
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		bool useAdd = false, useSub = false, useMul = false, useDiv = false;
		bool useParentheses = false, useDecimal = false;
		bool isclick = false;
		int maxNumber = 10;
		int numQuestions = 10;
	private: System::Windows::Forms::CheckBox^ checkBoxParentheses;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxMaxNumber;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxNumQuestions;
	private: System::Windows::Forms::Button^ button2;
	private: System::Void textBox_NumberOnly_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		// Check if the character is not a digit or control character (like backspace)
		if (!Char::IsDigit(e->KeyChar) && !Char::IsControl(e->KeyChar)) {
			e->Handled = true; // Handle the event, i.e., do not process the character
			MessageBox::Show("��ֻ�������֣�", "�������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}



	private: System::Windows::Forms::CheckBox^ checkBoxDecimal;
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::CheckBox^ checkBoxAdd;
	private: System::Windows::Forms::CheckBox^ checkBoxSub;
	private: System::Windows::Forms::CheckBox^ checkBoxMul;
	private: System::Windows::Forms::CheckBox^ checkBoxDiv;

	protected:

	private:
		/// <summary>
		/// ����������������
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ�޸�
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBoxAdd = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxSub = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxMul = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxDiv = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxParentheses = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxDecimal = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxMaxNumber = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxNumQuestions = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(108, 252);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(118, 37);
			this->button1->TabIndex = 0;
			this->button1->Text = L"��������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// checkBoxAdd
			// 
			this->checkBoxAdd->AutoSize = true;
			this->checkBoxAdd->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->checkBoxAdd->Location = System::Drawing::Point(45, 90);
			this->checkBoxAdd->Name = L"checkBoxAdd";
			this->checkBoxAdd->Size = System::Drawing::Size(91, 20);
			this->checkBoxAdd->TabIndex = 3;
			this->checkBoxAdd->Text = L"�ӷ�����";
			this->checkBoxAdd->UseVisualStyleBackColor = true;
			// 
			// checkBoxSub
			// 
			this->checkBoxSub->AutoSize = true;
			this->checkBoxSub->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->checkBoxSub->Location = System::Drawing::Point(45, 64);
			this->checkBoxSub->Name = L"checkBoxSub";
			this->checkBoxSub->Size = System::Drawing::Size(91, 20);
			this->checkBoxSub->TabIndex = 4;
			this->checkBoxSub->Text = L"��������";
			this->checkBoxSub->UseVisualStyleBackColor = true;
			// 
			// checkBoxMul
			// 
			this->checkBoxMul->AutoSize = true;
			this->checkBoxMul->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->checkBoxMul->Location = System::Drawing::Point(45, 116);
			this->checkBoxMul->Name = L"checkBoxMul";
			this->checkBoxMul->Size = System::Drawing::Size(91, 20);
			this->checkBoxMul->TabIndex = 5;
			this->checkBoxMul->Text = L"�˷�����";
			this->checkBoxMul->UseVisualStyleBackColor = true;
			// 
			// checkBoxDiv
			// 
			this->checkBoxDiv->AutoSize = true;
			this->checkBoxDiv->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->checkBoxDiv->Location = System::Drawing::Point(194, 64);
			this->checkBoxDiv->Name = L"checkBoxDiv";
			this->checkBoxDiv->Size = System::Drawing::Size(91, 20);
			this->checkBoxDiv->TabIndex = 6;
			this->checkBoxDiv->Text = L"��������";
			this->checkBoxDiv->UseVisualStyleBackColor = true;
			// 
			// checkBoxParentheses
			// 
			this->checkBoxParentheses->AutoSize = true;
			this->checkBoxParentheses->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->checkBoxParentheses->Location = System::Drawing::Point(194, 116);
			this->checkBoxParentheses->Name = L"checkBoxParentheses";
			this->checkBoxParentheses->Size = System::Drawing::Size(91, 20);
			this->checkBoxParentheses->TabIndex = 1;
			this->checkBoxParentheses->Text = L"��������";
			this->checkBoxParentheses->UseVisualStyleBackColor = true;
			// 
			// checkBoxDecimal
			// 
			this->checkBoxDecimal->AutoSize = true;
			this->checkBoxDecimal->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->checkBoxDecimal->Location = System::Drawing::Point(194, 90);
			this->checkBoxDecimal->Name = L"checkBoxDecimal";
			this->checkBoxDecimal->Size = System::Drawing::Size(91, 20);
			this->checkBoxDecimal->TabIndex = 2;
			this->checkBoxDecimal->Text = L"С������";
			this->checkBoxDecimal->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(12, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 16);
			this->label1->TabIndex = 7;
			this->label1->Text = L"�������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(12, 196);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(136, 16);
			this->label2->TabIndex = 8;
			this->label2->Text = L"�����������ֵ��";
			// 
			// textBoxMaxNumber
			// 
			this->textBoxMaxNumber->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxMaxNumber->ImeMode = System::Windows::Forms::ImeMode::Disable;
			this->textBoxMaxNumber->Location = System::Drawing::Point(154, 195);
			this->textBoxMaxNumber->MaxLength = 8;
			this->textBoxMaxNumber->Name = L"textBoxMaxNumber";
			this->textBoxMaxNumber->Size = System::Drawing::Size(50, 21);
			this->textBoxMaxNumber->TabIndex = 9;
			this->textBoxMaxNumber->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox_NumberOnly_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(12, 156);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 16);
			this->label3->TabIndex = 10;
			this->label3->Text = L"��Ŀ������";
			// 
			// textBoxNumQuestions
			// 
			this->textBoxNumQuestions->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxNumQuestions->ImeMode = System::Windows::Forms::ImeMode::Disable;
			this->textBoxNumQuestions->Location = System::Drawing::Point(98, 155);
			this->textBoxNumQuestions->MaxLength = 5;
			this->textBoxNumQuestions->Name = L"textBoxNumQuestions";
			this->textBoxNumQuestions->Size = System::Drawing::Size(50, 21);
			this->textBoxNumQuestions->TabIndex = 11;
			this->textBoxNumQuestions->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox_NumberOnly_KeyPress);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(108, 312);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(118, 37);
			this->button2->TabIndex = 12;
			this->button2->Text = L"��ʼ����";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(345, 361);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBoxNumQuestions);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxMaxNumber);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkBoxDiv);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBoxDecimal);
			this->Controls->Add(this->checkBoxMul);
			this->Controls->Add(this->checkBoxAdd);
			this->Controls->Add(this->checkBoxSub);
			this->Controls->Add(this->checkBoxParentheses);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm1";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"�����������";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void folderBrowserDialog1_HelpRequest(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checkBoxAdd->Checked == false && checkBoxSub->Checked == false && checkBoxMul->Checked == false && checkBoxDiv->Checked == false) {
			System::Windows::Forms::DialogResult result = MessageBox::Show("����������д�Ƿ���ȷ��", "����ʧ��", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (textBoxNumQuestions->Text == "" || textBoxMaxNumber->Text == "") {
			System::Windows::Forms::DialogResult result = MessageBox::Show("����������д�Ƿ���ȷ��", "����ʧ��", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			isclick = true;
			std::string temp = "";
			if (checkBoxAdd->Checked == true) {
				useAdd = true;
				temp += "����ӷ�����\n";
			}
			else {
				useAdd = false;
			}
			if (checkBoxSub->Checked == true) {
				useSub = true;
				temp += "�����������\n";
			}
			else
				useSub = false;
			if (checkBoxMul->Checked == true) {
				useMul = true;
				temp += "����˷�����\n";
			}
			else
				useMul = false;
			if (checkBoxDiv->Checked == true) {
				useDiv = true;
				temp += "�����������\n";
			}
			else
				useDiv = false;
			if (checkBoxDecimal->Checked == true) {
				useDecimal = true;
				temp += "����С������\n";
			}
			else
				useDecimal = false;
			if (checkBoxParentheses->Checked == true) {
				useParentheses = true;
				temp += "������������\n";
			}
			else
				useParentheses = false;
			std::string maxnum = marshal_as<std::string>(textBoxMaxNumber->Text);
			std::string NumQuestion = marshal_as<std::string>(textBoxNumQuestions->Text);
			maxNumber = std::stoi(maxnum.c_str());
			numQuestions = std::stoi(NumQuestion.c_str());
			temp = temp + "�����������" + maxnum + "\n";
			temp = temp + "��Ŀ������" + NumQuestion;
			String^ str = marshal_as<String^>(temp);
			System::Windows::Forms::DialogResult result = MessageBox::Show(str, "���óɹ�", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!isclick) {
			System::Windows::Forms::DialogResult result = MessageBox::Show("����ʧ��!\n���ȱ������ã�", "����ʧ��", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			generateQuestions(numQuestions, maxNumber, useAdd, useSub, useMul, useDiv, useParentheses, useDecimal);
			string address = _getcwd(NULL, 0);
			address += "\\output\\output(without anwser).txt";
			String^ str = marshal_as<String^>(address);
			System::Windows::Forms::DialogResult result = MessageBox::Show("���ɳɹ�����Ŀ�����ɵ������ļ�Ŀ¼�У�\n" + str, "���ɳɹ�", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			if (result == System::Windows::Forms::DialogResult::OK) {
				string tmp = "\\output\\output(with answer).txt";
				string inputPath = address;
				string outputPath = _getcwd(NULL, 0) + tmp;
				calculateResults(inputPath, outputPath);
				String^ str2 = marshal_as<String^>(outputPath);
				System::Windows::Forms::DialogResult result = MessageBox::Show("���ɳɹ�����Ŀ�������ɵ������ļ�Ŀ¼�У�\n" + str2, "���ɳɹ�", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				MyForm1::Close();
			}

		}
	}
	};
}
