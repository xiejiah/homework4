#pragma once
#include"MyForm1.h"
#include"MyForm2.h"
#include"MyForm3.h"
#include <msclr\marshal_cppstd.h>   //用于托管与非托管代码间数据类型的转换
namespace SoftProject4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm 摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ buttonHelp;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button3;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->buttonHelp = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(318, 124);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 47);
			this->button1->TabIndex = 0;
			this->button1->Text = L"配置运算规则";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"楷体", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(60, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(375, 35);
			this->label1->TabIndex = 1;
			this->label1->Text = L"四则运算自动生成程序";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(318, 361);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(128, 47);
			this->button2->TabIndex = 2;
			this->button2->Text = L"退出程序";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// buttonHelp
			// 
			this->buttonHelp->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->buttonHelp->Location = System::Drawing::Point(318, 242);
			this->buttonHelp->Name = L"buttonHelp";
			this->buttonHelp->Size = System::Drawing::Size(128, 47);
			this->buttonHelp->TabIndex = 3;
			this->buttonHelp->Text = L"说明/帮助";
			this->buttonHelp->UseVisualStyleBackColor = true;
			this->buttonHelp->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->Location = System::Drawing::Point(318, 301);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(128, 47);
			this->button4->TabIndex = 4;
			this->button4->Text = L"联系作者";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(29, 124);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(248, 286);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(318, 183);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(128, 47);
			this->button3->TabIndex = 6;
			this->button3->Text = L"打开输出文件夹";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(503, 470);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->buttonHelp);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"四则运算自动生成程序";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm1^ form1 = gcnew MyForm1;
		form1->ShowDialog();
		
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult result = MessageBox::Show("是否退出四则运算自动生成程序？", "四则运算自动生成程序", MessageBoxButtons::YesNo, MessageBoxIcon::Asterisk);
		if (result == System::Windows::Forms::DialogResult::Yes)
			MyForm::Close();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm3^ form3 = gcnew MyForm3;
		form3->ShowDialog();
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm2^ form2 = gcnew MyForm2;
	form2->ShowDialog();
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	std::string str = "explorer ";
	str += '"';
	str += _getcwd(NULL, 0);
	str += "\\output\\";
	str += '"';
	const char* ch = str.c_str();
	system(ch);
}
};
}
