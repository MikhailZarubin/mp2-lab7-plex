#pragma once
#include <msclr/marshal_cppstd.h>
#include"Plex.h"
namespace CppWinForm1 {

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
		Graphics^ gr;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
		   TPoint* point;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
		   bool flag, dr, res;
	private: System::Windows::Forms::TextBox^ textBox5;

		   TChart* chart;
	public:
		MyForm(void)
		{
			InitializeComponent();
			gr = this->CreateGraphics();
			point = NULL;
			chart = NULL;
			flag = dr = res = false;
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
				delete point;
				delete chart;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::ComponentModel::IContainer^ components;
	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(357, 55);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Добавить линию\r\n";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox1->Location = System::Drawing::Point(84, 16);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(66, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"0\r\n";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(84, 55);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(66, 20);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"0\r\n";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Координата Х\r\n";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Координата У";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(357, 14);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Добавить точку";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(166, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(173, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Координаты добавляемой линии";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(166, 34);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Начало\r\n";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(166, 62);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(38, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Конец";
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(225, 31);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(225, 57);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 10;
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(4, 429);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(200, 20);
			this->textBox5->TabIndex = 11;
			this->textBox5->Text = L"Добавления линии не было";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 461);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dr)
		{
			std::string first="", last="", tmp="";
			first = msclr::interop::marshal_as<std::string>(this->textBox3->Text);
			last= msclr::interop::marshal_as<std::string>(this->textBox4->Text);
			this->textBox3->Text = L"";
			this->textBox4->Text = L"";
			flag = dr = false;
			TChart* ch = new TChart;
			point = new TPoint;
			for (int i = 0; i < first.size(); i++)
			{
				if (first[i] != ',')
					tmp += first[i];
				else
				{
					point->SetX(std::atoi(tmp.c_str()));
					tmp = "";
				}
			}
			point->SetY(std::atoi(tmp.c_str()));
			ch->SetFirst(point);
			point = new TPoint;
			tmp = "";
			for (int i = 0; i < last.size(); i++)
			{
				if (first[i] != ',')
					tmp += last[i];
				else
				{
					point->SetX(std::atoi(tmp.c_str()));
					tmp = "";
				}
			}
			point->SetY(std::atoi(tmp.c_str()));
			ch->SetLast(point);
			if (chart)
			{
				res = chart->InsLine(gr, ch);
			}
			else
			{
				res = true;
				chart = ch;
			}
			if (res)
			{
				this->textBox5->Text = L"Линия добавлена к плексу\r\n";
				chart->show(gr);
			}
			else
			{
				this->textBox5->Text = L"Линия добавлена не к плексу\r\n";
				ch->show(gr);
			}
		
		}
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	point = new TPoint;
	point->SetX(Convert::ToInt32(textBox1->Text));
	point->SetY(Convert::ToInt32(textBox2->Text));
	point->show(gr);
	if (flag == false)
	{
		this->textBox3->Text = Convert::ToString(point->GetX());
		this->textBox3->Text += L",";
		this->textBox3->Text += Convert::ToString(point->GetY());
		flag = true;
	}
	else
	{
		this->textBox4->Text = Convert::ToString(point->GetX());
		this->textBox4->Text += L",";
		this->textBox4->Text += Convert::ToString(point->GetY());
		dr = true;
	}
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (res)
		this->textBox5->Text = L"Линия добавлена к плексу\r\n";
	else
		this->textBox5->Text = L"Линия добавлена не к плексу\r\n";
}
};
}
