#pragma comment(lib, "User32.lib")

#include <Windows.h>
#include <conio.h>
#include <iostream>
int blacks() {

	HDC hdcScreen = GetDC(NULL);
	int cnt = 0;
	for (int i = 0; i <= 1000; i += 1000) {
		for (int j = 0; j <= 1000; j += 1000) {
			COLORREF color = GetPixel(hdcScreen, i, j);
			int red = GetRValue(color);
			int green = GetGValue(color);
			int blue = GetBValue(color);
			if (red == 0 && green == 0 && blue == 0) cnt++;
		}
	}
	ReleaseDC(NULL, hdcScreen);
	return cnt;
}

void click(double x, double y) {

	bool tr = false;
	while (blacks() != 4) {};
	int k = 5; 
	while (k--) {
		x = x / 1920 * GetSystemMetrics(SM_CXSCREEN);
		y = y / 1080 * GetSystemMetrics(SM_CYSCREEN);
		SetCursorPos(x, y);
		Sleep(50);
		mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
		mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
		double xx = double(962) / 1920 * GetSystemMetrics(SM_CXSCREEN);
		double yy = double(730) / 1080 * GetSystemMetrics(SM_CYSCREEN);
		SetCursorPos(xx, yy);
		Sleep(50);
		mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
		mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
	}
}
#pragma once

namespace instalocker {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button1;























	protected:


	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(197, 61);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 80);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(283, 61);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(80, 80);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(369, 61);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(80, 80);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(455, 61);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(80, 80);
			this->button5->TabIndex = 4;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(541, 61);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(80, 80);
			this->button6->TabIndex = 5;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->Location = System::Drawing::Point(627, 61);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(80, 80);
			this->button7->TabIndex = 6;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Transparent;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.Image")));
			this->button8->Location = System::Drawing::Point(713, 61);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(80, 80);
			this->button8->TabIndex = 7;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Transparent;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.Image")));
			this->button9->Location = System::Drawing::Point(799, 61);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(80, 80);
			this->button9->TabIndex = 8;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Transparent;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.Image")));
			this->button10->Location = System::Drawing::Point(799, 147);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(80, 80);
			this->button10->TabIndex = 17;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Transparent;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.Image")));
			this->button11->Location = System::Drawing::Point(713, 147);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(80, 80);
			this->button11->TabIndex = 16;
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Transparent;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.Image")));
			this->button12->Location = System::Drawing::Point(627, 147);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(80, 80);
			this->button12->TabIndex = 15;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Transparent;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.Image")));
			this->button13->Location = System::Drawing::Point(541, 147);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(80, 80);
			this->button13->TabIndex = 14;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Transparent;
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button14.Image")));
			this->button14->Location = System::Drawing::Point(455, 147);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(80, 80);
			this->button14->TabIndex = 13;
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Transparent;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.Image")));
			this->button15->Location = System::Drawing::Point(369, 147);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(80, 80);
			this->button15->TabIndex = 12;
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Transparent;
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button16.Image")));
			this->button16->Location = System::Drawing::Point(283, 147);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(80, 80);
			this->button16->TabIndex = 11;
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Transparent;
			this->button17->FlatAppearance->BorderSize = 0;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button17.Image")));
			this->button17->Location = System::Drawing::Point(197, 147);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(80, 80);
			this->button17->TabIndex = 10;
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::Transparent;
			this->button18->FlatAppearance->BorderSize = 0;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button18.Image")));
			this->button18->Location = System::Drawing::Point(111, 147);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(80, 80);
			this->button18->TabIndex = 9;
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::Transparent;
			this->button22->FlatAppearance->BorderSize = 0;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button22.Image")));
			this->button22->Location = System::Drawing::Point(541, 233);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(80, 80);
			this->button22->TabIndex = 23;
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::Transparent;
			this->button23->FlatAppearance->BorderSize = 0;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button23.Image")));
			this->button23->Location = System::Drawing::Point(455, 233);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(80, 80);
			this->button23->TabIndex = 22;
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::Transparent;
			this->button24->FlatAppearance->BorderSize = 0;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button24.Image")));
			this->button24->Location = System::Drawing::Point(369, 233);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(80, 80);
			this->button24->TabIndex = 21;
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::Transparent;
			this->button25->FlatAppearance->BorderSize = 0;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button25.Image")));
			this->button25->Location = System::Drawing::Point(283, 233);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(80, 80);
			this->button25->TabIndex = 20;
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::Transparent;
			this->button26->FlatAppearance->BorderSize = 0;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button26.Image")));
			this->button26->Location = System::Drawing::Point(197, 233);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(80, 80);
			this->button26->TabIndex = 19;
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::Transparent;
			this->button27->FlatAppearance->BorderSize = 0;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button27.Image")));
			this->button27->Location = System::Drawing::Point(111, 233);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(80, 80);
			this->button27->TabIndex = 18;
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(111, 61);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 80);
			this->button1->TabIndex = 24;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuBar;
			this->ClientSize = System::Drawing::Size(981, 377);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Instalocker";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
		click(1040, 1010);
	}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	click(624, 844);
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	click(790, 844);
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	click(1130, 930);
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	click(1290, 930);
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	click(710, 930);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	click(710, 844);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	click(870, 844);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	click(960, 844);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	click(1040, 844);
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	click(1130, 844);
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	click(1210, 844);
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	click(1290, 844);
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	click(624, 930);
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	click(790, 930);
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	click(870, 930);
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	click(960, 930);
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	click(1040, 930);
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	click(1210, 930);
}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
	click(624, 1010);
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	click(710, 1010);
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	click(790, 1010);
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	click(870, 1010);
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	click(960, 1010);
}
};
}
