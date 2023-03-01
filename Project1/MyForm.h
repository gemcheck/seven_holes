#pragma once

#include "MyForm2.h"
#include "MyForm3.h"
#include "game.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//

		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void){
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, 
				System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(496, 155);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(582, 108);
			this->label1->TabIndex = 0;
			this->label1->Text = L"���� �����";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, 
				System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(200, 454);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(376, 131);
			this->button1->TabIndex = 1;
			this->button1->Text = L"������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button_game);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, 
				System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(964, 454);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(376, 131);
			this->button2->TabIndex = 2;
			this->button2->Text = L"� ���������";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button_information_about_game);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, 
				System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(582, 650);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(376, 131);
			this->button3->TabIndex = 3;
			this->button3->Text = L"�� ������";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button_information);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1604, 896);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"���� �����";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->ResumeLayout(false);
			this->PerformLayout();
		}

#pragma endregion

// ������ ����� ����
		private: System::Void button_game(System::Object^ sender, System::EventArgs^ e) {
			game^ g = gcnew game(); // �������� ����� �����
			this->Visible = false; // ������� ���� �����
			g->ShowDialog(); // �������� ������ �����
			g->Game = this; // ����������� ������ �����, ���� ��� �� ����� ������� 
			g->Game->Show(); // ����� �����, ���� ���������� �������
		}



// ����� � ����������� �� ������
		private: System::Void button_information(System::Object^ sender, System::EventArgs^ e) {
			MyForm2^ f2 = gcnew MyForm2(); // �������� ����� �����
			this->Visible = false; // ������� �����
			f2->ShowDialog(); // �������� ������ �����
			f2->autor = this; // ����������� ������ �����, ���� ��� �� ����� ������� 
			f2->autor->Show(); // ����� �����, ���� ���������� �������

		}



// ����� � ����������� �� ����
		private: System::Void button_information_about_game(System::Object^ sender, System::EventArgs^ e) {
			MyForm3^ f3 = gcnew MyForm3(); // �������� ����� �����
			this->Visible = false; // ������� �����
			f3->ShowDialog(); // �������� ������ �����
			f3->about = this; // ����������� ������ �����, ���� ��� �� ����� ������� 
			f3->about->Show(); // ����� �����, ���� ���������� �������

		}
	};
}
