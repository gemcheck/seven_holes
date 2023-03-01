#pragma once
#include <cmath>
#include <fstream>
#include "windows.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� game
	/// </summary>
	public ref class game : public System::Windows::Forms::Form
	{
	public:
		System::Windows::Forms::Form^ Game;

		/* �������� ������ ����������� �������
		���� true, �� ������ �� ���������
		���� false(��� �������), �� ��������� ��� �����
		*/
		bool is_circle_white_1_MouseClick = true; 
		bool is_circle_white_2_MouseClick = true;
		bool is_circle_white_3_MouseClick = true;
		bool is_circle_empty_MouseClick = true;
		bool is_circle_black_1_MouseClick = true;
		bool is_circle_black_2_MouseClick = true;
		bool is_circle_black_3_MouseClick = true;
		//

		/* ����������� ������� �� ������
		���� true, �� �����
		���� false, �� ������
		*/
		bool check_game = true;
		//

		// ����������� ����� ������� ������ 2
		int choice = 0;
		int max_choice = 2;
		//

		// ������� �����
		int score = 0;
		//
	
		/* ������ ����� ����, ����� ��� ���� �������� - ��������� 
		��������� ������ ������� ��� ���� */
		int* play = new int[7];

		// ���������� ������ ��� ���������
		int x1 = 0;
		int x2 = 0;
		int position = 0;
		int sec_position = 0;
		//
		
		// ���������� ��� �������� ���������
		int start_circle = 0;
		int start_arrow = 0;
		// 
		
		// ���������� ������� ��� ���������
		int xa1 = 0;
		int xa2 = 0;
		//


	private: System::Windows::Forms::PictureBox^ circle_start_4;
	private: System::Windows::Forms::PictureBox^ circle_start_6;
	private: System::Windows::Forms::PictureBox^ circle_start_5;
	private: System::Windows::Forms::PictureBox^ circle_start_1;
	private: System::Windows::Forms::PictureBox^ circle_start_2;
	private: System::Windows::Forms::PictureBox^ circle_start_3;
	private: System::Windows::Forms::PictureBox^ circle_start_7;
	private: System::Windows::Forms::PictureBox^ arrow_start_2;
	private: System::Windows::Forms::PictureBox^ arrow_start_7;
	private: System::Windows::Forms::PictureBox^ arrow_start_6;
	private: System::Windows::Forms::PictureBox^ arrow_start_5;
	private: System::Windows::Forms::PictureBox^ arrow_start_4;
	private: System::Windows::Forms::PictureBox^ arrow_start_3;
	private: System::Windows::Forms::Button^ reset_butoon;
	private: System::Windows::Forms::Button^ pc_game;
	private: System::Windows::Forms::PictureBox^ arrow_start_1;


	public:
		game(void)
		{
		MyForm: System::Windows::Forms::Form^ home;
			Game = home;
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~game()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::GroupBox^ number_of_steps;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ circle_white_3;
	private: System::Windows::Forms::PictureBox^ circle_black_1;
	private: System::Windows::Forms::PictureBox^ circle_black_2;
	private: System::Windows::Forms::PictureBox^ circle_empty;
	private: System::Windows::Forms::PictureBox^ circle_black_3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ circle_white_2;
	private: System::Windows::Forms::PictureBox^ circle_white_1;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::PictureBox^ arrow_black_3;
	private: System::Windows::Forms::PictureBox^ arrow_black_2;
	private: System::Windows::Forms::PictureBox^ arrow_white_3;
	private: System::Windows::Forms::PictureBox^ arrow_white_2;
	private: System::Windows::Forms::PictureBox^ arrow_white_1;
	private: System::Windows::Forms::PictureBox^ arrow_empty;
	private: System::Windows::Forms::PictureBox^ arrow_black_1;


	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		
		void InitializeComponent(void){
			System::ComponentModel::ComponentResourceManager^ resources = 
				(gcnew System::ComponentModel::ComponentResourceManager(game::typeid));
			this->number_of_steps = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->circle_white_3 = (gcnew System::Windows::Forms::PictureBox());
			this->circle_black_1 = (gcnew System::Windows::Forms::PictureBox());
			this->circle_black_2 = (gcnew System::Windows::Forms::PictureBox());
			this->circle_empty = (gcnew System::Windows::Forms::PictureBox());
			this->circle_black_3 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->circle_white_2 = (gcnew System::Windows::Forms::PictureBox());
			this->circle_white_1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->arrow_black_3 = (gcnew System::Windows::Forms::PictureBox());
			this->arrow_black_2 = (gcnew System::Windows::Forms::PictureBox());
			this->arrow_white_3 = (gcnew System::Windows::Forms::PictureBox());
			this->arrow_white_2 = (gcnew System::Windows::Forms::PictureBox());
			this->arrow_white_1 = (gcnew System::Windows::Forms::PictureBox());
			this->arrow_empty = (gcnew System::Windows::Forms::PictureBox());
			this->arrow_black_1 = (gcnew System::Windows::Forms::PictureBox());
			this->circle_start_4 = (gcnew System::Windows::Forms::PictureBox());
			this->circle_start_6 = (gcnew System::Windows::Forms::PictureBox());
			this->circle_start_5 = (gcnew System::Windows::Forms::PictureBox());
			this->circle_start_1 = (gcnew System::Windows::Forms::PictureBox());
			this->circle_start_2 = (gcnew System::Windows::Forms::PictureBox());
			this->circle_start_3 = (gcnew System::Windows::Forms::PictureBox());
			this->circle_start_7 = (gcnew System::Windows::Forms::PictureBox());
			this->arrow_start_2 = (gcnew System::Windows::Forms::PictureBox());
			this->arrow_start_7 = (gcnew System::Windows::Forms::PictureBox());
			this->arrow_start_6 = (gcnew System::Windows::Forms::PictureBox());
			this->arrow_start_5 = (gcnew System::Windows::Forms::PictureBox());
			this->arrow_start_4 = (gcnew System::Windows::Forms::PictureBox());
			this->arrow_start_3 = (gcnew System::Windows::Forms::PictureBox());
			this->arrow_start_1 = (gcnew System::Windows::Forms::PictureBox());
			this->reset_butoon = (gcnew System::Windows::Forms::Button());
			this->pc_game = (gcnew System::Windows::Forms::Button());
			this->number_of_steps->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->circle_white_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->circle_black_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->circle_black_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->circle_empty))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->circle_black_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->circle_white_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->circle_white_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrow_black_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrow_black_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrow_white_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrow_white_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrow_white_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrow_empty))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrow_black_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->circle_start_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->circle_start_6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->circle_start_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->circle_start_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->circle_start_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->circle_start_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->circle_start_7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrow_start_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrow_start_7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrow_start_6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrow_start_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrow_start_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrow_start_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrow_start_1))->BeginInit();
			this->SuspendLayout();
			//
			// number_of_steps
			// 
			this->number_of_steps->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->number_of_steps->Controls->Add(this->label1);
			this->number_of_steps->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, 
				System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->number_of_steps->Location = System::Drawing::Point(341, 166);
			this->number_of_steps->Name = L"number_of_steps";
			this->number_of_steps->Size = System::Drawing::Size(360, 143);
			this->number_of_steps->TabIndex = 0;
			this->number_of_steps->TabStop = false;
			this->number_of_steps->Text = L"���������� �����";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"0";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Location = System::Drawing::Point(341, 315);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1103, 309);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// circle_white_3
			// 
			this->circle_white_3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->circle_white_3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->circle_white_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>
				(resources->GetObject(L"circle_white_3.BackgroundImage")));
			this->circle_white_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->circle_white_3->Location = System::Drawing::Point(688, 413);
			this->circle_white_3->Name = L"circle_white_3";
			this->circle_white_3->Size = System::Drawing::Size(130, 129);
			this->circle_white_3->TabIndex = 3;
			this->circle_white_3->TabStop = false;
			this->circle_white_3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &game::circle_white_3_MouseClick);
			this->circle_white_3->MouseLeave += gcnew System::EventHandler(this, &game::circle_white_3_MouseLeave);
			this->circle_white_3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &game::circle_white_3_MouseMove_1);
			// 
			// circle_black_1
			// 
			this->circle_black_1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->circle_black_1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->circle_black_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>
				(resources->GetObject(L"circle_black_1.BackgroundImage")));
			this->circle_black_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->circle_black_1->Location = System::Drawing::Point(960, 413);
			this->circle_black_1->Name = L"circle_black_1";
			this->circle_black_1->Size = System::Drawing::Size(130, 129);
			this->circle_black_1->TabIndex = 5;
			this->circle_black_1->TabStop = false;
			this->circle_black_1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &game::circle_black_1_MouseClick);
			this->circle_black_1->MouseLeave += gcnew System::EventHandler(this, &game::circle_black_1_MouseLeave);
			this->circle_black_1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &game::circle_black_1_MouseMove_1);
			// 
			// circle_black_2
			// 
			this->circle_black_2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->circle_black_2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->circle_black_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>
				(resources->GetObject(L"circle_black_2.BackgroundImage")));
			this->circle_black_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->circle_black_2->Location = System::Drawing::Point(1096, 413);
			this->circle_black_2->Name = L"circle_black_2";
			this->circle_black_2->Size = System::Drawing::Size(130, 129);
			this->circle_black_2->TabIndex = 6;
			this->circle_black_2->TabStop = false;
			this->circle_black_2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &game::circle_black_2_MouseClick);
			this->circle_black_2->MouseLeave += gcnew System::EventHandler(this, &game::circle_black_2_MouseLeave);
			this->circle_black_2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &game::circle_black_2_MouseMove_1);
			// 
			// circle_empty
			// 
			this->circle_empty->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->circle_empty->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->circle_empty->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>
				(resources->GetObject(L"circle_empty.BackgroundImage")));
			this->circle_empty->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->circle_empty->Location = System::Drawing::Point(824, 413);
			this->circle_empty->Name = L"circle_empty";
			this->circle_empty->Size = System::Drawing::Size(130, 129);
			this->circle_empty->TabIndex = 8;
			this->circle_empty->TabStop = false;
			this->circle_empty->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &game::circle_empty_MouseClick);
			this->circle_empty->MouseLeave += gcnew System::EventHandler(this, &game::circle_empty_MouseLeave);
			this->circle_empty->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &game::circle_empty_MouseMove_1);
			// 
			// circle_black_3
			// 
			this->circle_black_3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->circle_black_3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->circle_black_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>
				(resources->GetObject(L"circle_black_3.BackgroundImage")));
			this->circle_black_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->circle_black_3->Location = System::Drawing::Point(1232, 413);
			this->circle_black_3->Name = L"circle_black_3";
			this->circle_black_3->Size = System::Drawing::Size(130, 129);
			this->circle_black_3->TabIndex = 9;
			this->circle_black_3->TabStop = false;
			this->circle_black_3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &game::circle_black_3_MouseClick);
			this->circle_black_3->MouseLeave += gcnew System::EventHandler(this, &game::circle_black_3_MouseLeave);
			this->circle_black_3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &game::circle_black_3_MouseMove_1);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(64, 64);
			this->button1->TabIndex = 10;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &game::button1_Click);
			// 
			// circle_white_2
			// 
			this->circle_white_2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->circle_white_2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->circle_white_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>
				(resources->GetObject(L"circle_white_2.BackgroundImage")));
			this->circle_white_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->circle_white_2->Location = System::Drawing::Point(552, 413);
			this->circle_white_2->Name = L"circle_white_2";
			this->circle_white_2->Size = System::Drawing::Size(130, 129);
			this->circle_white_2->TabIndex = 11;
			this->circle_white_2->TabStop = false;
			this->circle_white_2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &game::circle_white_2_MouseClick);
			this->circle_white_2->MouseLeave += gcnew System::EventHandler(this, &game::circle_white_2_MouseLeave);
			this->circle_white_2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &game::circle_white_2_MouseMove_1);
			// 
			// circle_white_1
			// 
			this->circle_white_1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->circle_white_1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->circle_white_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>
				(resources->GetObject(L"circle_white_1.BackgroundImage")));
			this->circle_white_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->circle_white_1->Location = System::Drawing::Point(416, 413);
			this->circle_white_1->Name = L"circle_white_1";
			this->circle_white_1->Size = System::Drawing::Size(130, 129);
			this->circle_white_1->TabIndex = 12;
			this->circle_white_1->TabStop = false;
			this->circle_white_1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &game::circle_white_1_MouseClick);
			this->circle_white_1->MouseLeave += gcnew System::EventHandler(this, &game::circle_white_1_MouseLeave);
			this->circle_white_1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &game::circle_white_1_MouseMove_1);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pictureBox4->Location = System::Drawing::Point(397, 394);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(985, 13);
			this->pictureBox4->TabIndex = 13;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pictureBox10->Location = System::Drawing::Point(397, 548);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(985, 13);
			this->pictureBox10->TabIndex = 14;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pictureBox11->Location = System::Drawing::Point(397, 394);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(14, 167);
			this->pictureBox11->TabIndex = 15;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pictureBox12->Location = System::Drawing::Point(1368, 394);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(14, 167);
			this->pictureBox12->TabIndex = 16;
			this->pictureBox12->TabStop = false;
			// 
			// arrow_black_3
			// 
			this->arrow_black_3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->arrow_black_3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->arrow_black_3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"arrow_black_3.Image")));
			this->arrow_black_3->Location = System::Drawing::Point(1246, 330);
			this->arrow_black_3->Name = L"arrow_black_3";
			this->arrow_black_3->Size = System::Drawing::Size(98, 77);
			this->arrow_black_3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->arrow_black_3->TabIndex = 17;
			this->arrow_black_3->TabStop = false;
			this->arrow_black_3->Visible = false;
			// 
			// arrow_black_2
			// 
			this->arrow_black_2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->arrow_black_2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->arrow_black_2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"arrow_black_2.Image")));
			this->arrow_black_2->Location = System::Drawing::Point(1110, 330);
			this->arrow_black_2->Name = L"arrow_black_2";
			this->arrow_black_2->Size = System::Drawing::Size(98, 77);
			this->arrow_black_2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->arrow_black_2->TabIndex = 18;
			this->arrow_black_2->TabStop = false;
			this->arrow_black_2->Visible = false;
			// 
			// arrow_white_3
			// 
			this->arrow_white_3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->arrow_white_3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->arrow_white_3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"arrow_white_3.Image")));
			this->arrow_white_3->Location = System::Drawing::Point(701, 330);
			this->arrow_white_3->Name = L"arrow_white_3";
			this->arrow_white_3->Size = System::Drawing::Size(98, 77);
			this->arrow_white_3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->arrow_white_3->TabIndex = 19;
			this->arrow_white_3->TabStop = false;
			this->arrow_white_3->Visible = false;
			// 
			// arrow_white_2
			// 
			this->arrow_white_2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->arrow_white_2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->arrow_white_2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"arrow_white_2.Image")));
			this->arrow_white_2->Location = System::Drawing::Point(565, 330);
			this->arrow_white_2->Name = L"arrow_white_2";
			this->arrow_white_2->Size = System::Drawing::Size(98, 77);
			this->arrow_white_2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->arrow_white_2->TabIndex = 20;
			this->arrow_white_2->TabStop = false;
			this->arrow_white_2->Visible = false;
			// 
			// arrow_white_1
			// 
			this->arrow_white_1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->arrow_white_1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->arrow_white_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"arrow_white_1.Image")));
			this->arrow_white_1->Location = System::Drawing::Point(433, 330);
			this->arrow_white_1->Name = L"arrow_white_1";
			this->arrow_white_1->Size = System::Drawing::Size(98, 77);
			this->arrow_white_1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->arrow_white_1->TabIndex = 21;
			this->arrow_white_1->TabStop = false;
			this->arrow_white_1->Visible = false;
			// 
			// arrow_empty
			// 
			this->arrow_empty->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->arrow_empty->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->arrow_empty->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"arrow_empty.Image")));
			this->arrow_empty->Location = System::Drawing::Point(839, 330);
			this->arrow_empty->Name = L"arrow_empty";
			this->arrow_empty->Size = System::Drawing::Size(98, 77);
			this->arrow_empty->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->arrow_empty->TabIndex = 22;
			this->arrow_empty->TabStop = false;
			this->arrow_empty->Visible = false;
			// 
			// arrow_black_1
			// 
			this->arrow_black_1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->arrow_black_1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->arrow_black_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"arrow_black_1.Image")));
			this->arrow_black_1->Location = System::Drawing::Point(974, 330);
			this->arrow_black_1->Name = L"arrow_black_1";
			this->arrow_black_1->Size = System::Drawing::Size(98, 77);
			this->arrow_black_1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->arrow_black_1->TabIndex = 23;
			this->arrow_black_1->TabStop = false;
			this->arrow_black_1->Visible = false;
			// 
			// circle_start_4
			// 
			this->circle_start_4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->circle_start_4->BackColor = System::Drawing::SystemColors::Control;
			this->circle_start_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>
				(resources->GetObject(L"circle_start_4.BackgroundImage")));
			this->circle_start_4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->circle_start_4->Location = System::Drawing::Point(824, 770);
			this->circle_start_4->Name = L"circle_start_4";
			this->circle_start_4->Size = System::Drawing::Size(130, 129);
			this->circle_start_4->TabIndex = 24;
			this->circle_start_4->TabStop = false;
			this->circle_start_4->Visible = false;
			// 
			// circle_start_6
			// 
			this->circle_start_6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->circle_start_6->BackColor = System::Drawing::SystemColors::Control;
			this->circle_start_6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>
				(resources->GetObject(L"circle_start_6.BackgroundImage")));
			this->circle_start_6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->circle_start_6->Location = System::Drawing::Point(1096, 770);
			this->circle_start_6->Name = L"circle_start_6";
			this->circle_start_6->Size = System::Drawing::Size(130, 129);
			this->circle_start_6->TabIndex = 25;
			this->circle_start_6->TabStop = false;
			this->circle_start_6->Visible = false;
			// 
			// circle_start_5
			// 
			this->circle_start_5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->circle_start_5->BackColor = System::Drawing::SystemColors::Control;
			this->circle_start_5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>
				(resources->GetObject(L"circle_start_5.BackgroundImage")));
			this->circle_start_5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->circle_start_5->Location = System::Drawing::Point(960, 770);
			this->circle_start_5->Name = L"circle_start_5";
			this->circle_start_5->Size = System::Drawing::Size(130, 129);
			this->circle_start_5->TabIndex = 26;
			this->circle_start_5->TabStop = false;
			this->circle_start_5->Visible = false;
			// 
			// circle_start_1
			// 
			this->circle_start_1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->circle_start_1->BackColor = System::Drawing::SystemColors::Control;
			this->circle_start_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>
				(resources->GetObject(L"circle_start_1.BackgroundImage")));
			this->circle_start_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->circle_start_1->Location = System::Drawing::Point(416, 770);
			this->circle_start_1->Name = L"circle_start_1";
			this->circle_start_1->Size = System::Drawing::Size(130, 129);
			this->circle_start_1->TabIndex = 27;
			this->circle_start_1->TabStop = false;
			this->circle_start_1->Visible = false;
			// 
			// circle_start_2
			// 
			this->circle_start_2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->circle_start_2->BackColor = System::Drawing::SystemColors::Control;
			this->circle_start_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>
				(resources->GetObject(L"circle_start_2.BackgroundImage")));
			this->circle_start_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->circle_start_2->Location = System::Drawing::Point(552, 770);
			this->circle_start_2->Name = L"circle_start_2";
			this->circle_start_2->Size = System::Drawing::Size(130, 129);
			this->circle_start_2->TabIndex = 28;
			this->circle_start_2->TabStop = false;
			this->circle_start_2->Visible = false;
			// 
			// circle_start_3
			// 
			this->circle_start_3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->circle_start_3->BackColor = System::Drawing::SystemColors::Control;
			this->circle_start_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>
				(resources->GetObject(L"circle_start_3.BackgroundImage")));
			this->circle_start_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->circle_start_3->Location = System::Drawing::Point(688, 770);
			this->circle_start_3->Name = L"circle_start_3";
			this->circle_start_3->Size = System::Drawing::Size(130, 129);
			this->circle_start_3->TabIndex = 29;
			this->circle_start_3->TabStop = false;
			this->circle_start_3->Visible = false;
			// 
			// circle_start_7
			// 
			this->circle_start_7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->circle_start_7->BackColor = System::Drawing::SystemColors::Control;
			this->circle_start_7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>
				(resources->GetObject(L"circle_start_7.BackgroundImage")));
			this->circle_start_7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->circle_start_7->Location = System::Drawing::Point(1232, 770);
			this->circle_start_7->Name = L"circle_start_7";
			this->circle_start_7->Size = System::Drawing::Size(130, 129);
			this->circle_start_7->TabIndex = 30;
			this->circle_start_7->TabStop = false;
			this->circle_start_7->Visible = false;
			// 
			// arrow_start_2
			// 
			this->arrow_start_2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->arrow_start_2->BackColor = System::Drawing::SystemColors::Control;
			this->arrow_start_2->Image = (cli::safe_cast<System::Drawing::Image^>
				(resources->GetObject(L"arrow_start_2.Image")));
			this->arrow_start_2->Location = System::Drawing::Point(565, 687);
			this->arrow_start_2->Name = L"arrow_start_2";
			this->arrow_start_2->Size = System::Drawing::Size(98, 77);
			this->arrow_start_2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->arrow_start_2->TabIndex = 31;
			this->arrow_start_2->TabStop = false;
			this->arrow_start_2->Visible = false;
			// 
			// arrow_start_7
			// 
			this->arrow_start_7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->arrow_start_7->BackColor = System::Drawing::SystemColors::Control;
			this->arrow_start_7->Image = (cli::safe_cast<System::Drawing::Image^>
				(resources->GetObject(L"arrow_start_7.Image")));
			this->arrow_start_7->Location = System::Drawing::Point(1246, 687);
			this->arrow_start_7->Name = L"arrow_start_7";
			this->arrow_start_7->Size = System::Drawing::Size(98, 77);
			this->arrow_start_7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->arrow_start_7->TabIndex = 34;
			this->arrow_start_7->TabStop = false;
			this->arrow_start_7->Visible = false;
			// 
			// arrow_start_6
			// 
			this->arrow_start_6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->arrow_start_6->BackColor = System::Drawing::SystemColors::Control;
			this->arrow_start_6->Image = (cli::safe_cast<System::Drawing::Image^>
				(resources->GetObject(L"arrow_start_6.Image")));
			this->arrow_start_6->Location = System::Drawing::Point(1110, 687);
			this->arrow_start_6->Name = L"arrow_start_6";
			this->arrow_start_6->Size = System::Drawing::Size(98, 77);
			this->arrow_start_6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->arrow_start_6->TabIndex = 35;
			this->arrow_start_6->TabStop = false;
			this->arrow_start_6->Visible = false;
			// 
			// arrow_start_5
			// 
			this->arrow_start_5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->arrow_start_5->BackColor = System::Drawing::SystemColors::Control;
			this->arrow_start_5->Image = (cli::safe_cast<System::Drawing::Image^>
				(resources->GetObject(L"arrow_start_5.Image")));
			this->arrow_start_5->Location = System::Drawing::Point(974, 688);
			this->arrow_start_5->Name = L"arrow_start_5";
			this->arrow_start_5->Size = System::Drawing::Size(98, 77);
			this->arrow_start_5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->arrow_start_5->TabIndex = 36;
			this->arrow_start_5->TabStop = false;
			this->arrow_start_5->Visible = false;
			// 
			// arrow_start_4
			// 
			this->arrow_start_4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->arrow_start_4->BackColor = System::Drawing::SystemColors::Control;
			this->arrow_start_4->Image = (cli::safe_cast<System::Drawing::Image^>
				(resources->GetObject(L"arrow_start_4.Image")));
			this->arrow_start_4->Location = System::Drawing::Point(839, 687);
			this->arrow_start_4->Name = L"arrow_start_4";
			this->arrow_start_4->Size = System::Drawing::Size(98, 77);
			this->arrow_start_4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->arrow_start_4->TabIndex = 37;
			this->arrow_start_4->TabStop = false;
			this->arrow_start_4->Visible = false;
			// 
			// arrow_start_3
			// 
			this->arrow_start_3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->arrow_start_3->BackColor = System::Drawing::SystemColors::Control;
			this->arrow_start_3->Image = (cli::safe_cast<System::Drawing::Image^>
				(resources->GetObject(L"arrow_start_3.Image")));
			this->arrow_start_3->Location = System::Drawing::Point(703, 687);
			this->arrow_start_3->Name = L"arrow_start_3";
			this->arrow_start_3->Size = System::Drawing::Size(98, 77);
			this->arrow_start_3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->arrow_start_3->TabIndex = 38;
			this->arrow_start_3->TabStop = false;
			this->arrow_start_3->Visible = false;
			// 
			// arrow_start_1
			// 
			this->arrow_start_1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->arrow_start_1->BackColor = System::Drawing::SystemColors::Control;
			this->arrow_start_1->Image = (cli::safe_cast<System::Drawing::Image^>
				(resources->GetObject(L"arrow_start_1.Image")));
			this->arrow_start_1->Location = System::Drawing::Point(433, 687);
			this->arrow_start_1->Name = L"arrow_start_1";
			this->arrow_start_1->Size = System::Drawing::Size(98, 77);
			this->arrow_start_1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->arrow_start_1->TabIndex = 39;
			this->arrow_start_1->TabStop = false;
			this->arrow_start_1->Visible = false;
			// 
			// reset_butoon
			// 
			this->reset_butoon->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->reset_butoon->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->reset_butoon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, 
				System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->reset_butoon->Location = System::Drawing::Point(701, 630);
			this->reset_butoon->Name = L"reset_butoon";
			this->reset_butoon->Size = System::Drawing::Size(371, 142);
			this->reset_butoon->TabIndex = 40;
			this->reset_butoon->Text = L"����� ���������";
			this->reset_butoon->UseVisualStyleBackColor = true;
			this->reset_butoon->Click += gcnew System::EventHandler(this, &game::reset_butoon_Click);
			// 
			// pc_game
			// 
			this->pc_game->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pc_game->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->pc_game->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, 
				System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->pc_game->Location = System::Drawing::Point(1073, 166);
			this->pc_game->Name = L"pc_game";
			this->pc_game->Size = System::Drawing::Size(371, 142);
			this->pc_game->TabIndex = 41;
			this->pc_game->Text = L"���������������� ����";
			this->pc_game->UseVisualStyleBackColor = true;
			this->pc_game->Click += gcnew System::EventHandler(this, &game::pc_game_Click);
			// 
			// game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1770, 911);
			this->Controls->Add(this->pc_game);
			this->Controls->Add(this->reset_butoon);
			this->Controls->Add(this->arrow_start_1);
			this->Controls->Add(this->arrow_start_3);
			this->Controls->Add(this->arrow_start_4);
			this->Controls->Add(this->arrow_start_5);
			this->Controls->Add(this->arrow_start_6);
			this->Controls->Add(this->arrow_start_7);
			this->Controls->Add(this->arrow_start_2);
			this->Controls->Add(this->circle_start_7);
			this->Controls->Add(this->circle_start_3);
			this->Controls->Add(this->circle_start_2);
			this->Controls->Add(this->circle_start_1);
			this->Controls->Add(this->circle_start_5);
			this->Controls->Add(this->circle_start_6);
			this->Controls->Add(this->circle_start_4);
			this->Controls->Add(this->arrow_black_1);
			this->Controls->Add(this->arrow_empty);
			this->Controls->Add(this->arrow_white_1);
			this->Controls->Add(this->arrow_white_2);
			this->Controls->Add(this->arrow_white_3);
			this->Controls->Add(this->arrow_black_2);
			this->Controls->Add(this->arrow_black_3);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->circle_white_1);
			this->Controls->Add(this->circle_white_2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->circle_black_3);
			this->Controls->Add(this->circle_empty);
			this->Controls->Add(this->circle_black_2);
			this->Controls->Add(this->circle_black_1);
			this->Controls->Add(this->circle_white_3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->number_of_steps);
			this->Name = L"game";
			this->Text = L"���� �����";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &game::game_Load);
			this->number_of_steps->ResumeLayout(false);
			this->number_of_steps->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->circle_white_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->circle_black_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->circle_black_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->circle_empty))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->circle_black_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->circle_white_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->circle_white_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrow_black_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrow_black_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrow_white_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrow_white_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrow_white_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrow_empty))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrow_black_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->circle_start_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->circle_start_6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->circle_start_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->circle_start_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->circle_start_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->circle_start_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->circle_start_7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrow_start_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrow_start_7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrow_start_6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrow_start_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrow_start_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrow_start_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrow_start_1))->EndInit();
			this->ResumeLayout(false);
		}

#pragma endregion
// �������� ��������� ��� ������� �����
		private: System::Void game_Load(System::Object^ sender, System::EventArgs^ e) {
			start_game();
		}



// ������ ��� ������� �����
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { 
			if (check_game) {  // �������� ����� �� ������������ ������
				save_position(); // ����������
				this->Visible = false; 	// ������� �����
			}
		}



// ����� �������
		private: System::Void reset_butoon_Click(System::Object^ sender, System::EventArgs^ e) {
			if (check_game) { // �������� ����� �� ������������ ������

				for (int i = 0; i < 8; i++) {// ����� ��������� � ������� � ���������������

					if (i == 7) play[i] = 0; // ��������� ����
					else play[i] = i + 1; // ��������� ���������

				}

				loading_positions(); // �������� ��������������� ���������
				save_position(); // ���������� ������� ��������� � �����
			}
		}



// ������������ ���� �� ���������� �� 15 �����
		private: System::Void pc_game_Click(System::Object^ sender, System::EventArgs^ e) {
			check_game = false; // ����� ��������� ������ ������ ���� ����������
			save_position(); // ���������� �������

			for (int i = 0; i < 7; i++) { // ����� ��������� � ������� � ��������������� ��� ���� ����������
				play[i] = i + 1; // ��������� ��������� ���
			}

			loading_positions(); // ��������� ��� ���� ����������

			int pause = 600; // ����� ��� �����
			int pc_score = 0; // ���� ����������

			Application::DoEvents(); // ������������ ���������� ���� ������ � ������ �� ����� ����� � ����
			Sleep(pause); // ��������� �� n ����������

			// 1 ���, ������ ������ (4) � ������1 (5)
			this->label1->Text = L"" + ++pc_score; // ����� �����

			this->circle_empty->Location = System::Drawing::Point(this->circle_start_5->Location.X, this->circle_white_1->Location.Y); // ������
			this->circle_black_1->Location = System::Drawing::Point(this->circle_start_4->Location.X, this->circle_white_1->Location.Y); // 1 ������

			Application::DoEvents();
			Sleep(pause);

			// 2 ���, ������ ������ (5) � �����3 (3)
			this->label1->Text = L"" + ++pc_score;

			this->circle_empty->Location = System::Drawing::Point(this->circle_start_3->Location.X, this->circle_white_1->Location.Y); // ������
			this->circle_white_3->Location = System::Drawing::Point(this->circle_start_5->Location.X, this->circle_white_1->Location.Y); // 3 �����

			Application::DoEvents();
			Sleep(pause);

			// 3 ���, ������ ������ (3) � �����2 (2)
			this->label1->Text = L"" + ++pc_score;

			this->circle_empty->Location = System::Drawing::Point(this->circle_start_2->Location.X, this->circle_white_1->Location.Y); // ������
			this->circle_white_2->Location = System::Drawing::Point(this->circle_start_3->Location.X, this->circle_white_1->Location.Y); // 2 �����

			Application::DoEvents();
			Sleep(pause);

			// 4 ���, ������ ������ (2) � ������1 (4)
			this->label1->Text = L"" + ++pc_score;

			this->circle_empty->Location = System::Drawing::Point(this->circle_start_4->Location.X, this->circle_white_1->Location.Y); // ������
			this->circle_black_1->Location = System::Drawing::Point(this->circle_start_2->Location.X, this->circle_white_1->Location.Y); // 1 ������

			Application::DoEvents();
			Sleep(pause);

			// 5 ���, ������ ������ (4) � ������2 (6)
			this->label1->Text = L"" + ++pc_score;

			this->circle_empty->Location = System::Drawing::Point(this->circle_start_6->Location.X, this->circle_white_1->Location.Y); // ������
			this->circle_black_2->Location = System::Drawing::Point(this->circle_start_4->Location.X, this->circle_white_1->Location.Y); // 2 ������

			Application::DoEvents();
			Sleep(pause);

			// 6 ���, ������ ������ (6) � ������3 (7)
			this->label1->Text = L"" + ++pc_score;

			this->circle_empty->Location = System::Drawing::Point(this->circle_start_7->Location.X, this->circle_white_1->Location.Y); // ������
			this->circle_black_3->Location = System::Drawing::Point(this->circle_start_6->Location.X, this->circle_white_1->Location.Y); // 3 ������

			Application::DoEvents();
			Sleep(pause);

			// 7 ���, ������ ������ (7) � �����3 (5)
			this->label1->Text = L"" + ++pc_score;

			this->circle_empty->Location = System::Drawing::Point(this->circle_start_5->Location.X, this->circle_white_1->Location.Y); // ������
			this->circle_white_3->Location = System::Drawing::Point(this->circle_start_7->Location.X, this->circle_white_1->Location.Y); // 3 �����

			Application::DoEvents();
			Sleep(pause);

			// 8 ���, ������ ������ (5) � �����2 (3)
			this->label1->Text = L"" + ++pc_score;

			this->circle_empty->Location = System::Drawing::Point(this->circle_start_3->Location.X, this->circle_white_1->Location.Y); // ������
			this->circle_white_2->Location = System::Drawing::Point(this->circle_start_5->Location.X, this->circle_white_1->Location.Y); // 2 �����

			Application::DoEvents();
			Sleep(pause);

			// 9 ���, ������ ������ (3) � �����1 (1)
			this->label1->Text = L"" + ++pc_score;

			this->circle_empty->Location = System::Drawing::Point(this->circle_start_1->Location.X, this->circle_white_1->Location.Y); // ������
			this->circle_white_1->Location = System::Drawing::Point(this->circle_start_3->Location.X, this->circle_white_1->Location.Y); // 1�����

			Application::DoEvents();
			Sleep(pause);

			// 10 ���, ������ ������ (1) � ������1 (2)
			this->label1->Text = L"" + ++pc_score;

			this->circle_empty->Location = System::Drawing::Point(this->circle_start_2->Location.X, this->circle_white_1->Location.Y); // ������
			this->circle_black_1->Location = System::Drawing::Point(this->circle_start_1->Location.X, this->circle_white_1->Location.Y); // 1 ������

			Application::DoEvents();
			Sleep(pause);

			// 11 ���, ������ ������ (2) � ������2 (4)
			this->label1->Text = L"" + ++pc_score;

			this->circle_empty->Location = System::Drawing::Point(this->circle_start_4->Location.X, this->circle_white_1->Location.Y); // ������
			this->circle_black_2->Location = System::Drawing::Point(this->circle_start_2->Location.X, this->circle_white_1->Location.Y); // 2 ������

			Application::DoEvents();
			Sleep(pause);

			// 12 ���, ������ ������ (4) � ������3 (6)
			this->label1->Text = L"" + ++pc_score;

			this->circle_empty->Location = System::Drawing::Point(this->circle_start_6->Location.X, this->circle_white_1->Location.Y); // ������
			this->circle_black_3->Location = System::Drawing::Point(this->circle_start_4->Location.X, this->circle_white_1->Location.Y); // 3 ������

			Application::DoEvents();
			Sleep(pause);

			// 13 ���, ������ ������ (6) � �����2 (5)
			this->label1->Text = L"" + ++pc_score;

			this->circle_empty->Location = System::Drawing::Point(this->circle_start_5->Location.X, this->circle_white_1->Location.Y); // ������
			this->circle_white_2->Location = System::Drawing::Point(this->circle_start_6->Location.X, this->circle_white_1->Location.Y); // 2 �����

			Application::DoEvents();
			Sleep(pause);

			// 14 ���, ������ ������ (5) � �����1 (3)
			this->label1->Text = L"" + ++pc_score;

			this->circle_empty->Location = System::Drawing::Point(this->circle_start_3->Location.X, this->circle_white_1->Location.Y); // ������
			this->circle_white_1->Location = System::Drawing::Point(this->circle_start_5->Location.X, this->circle_white_1->Location.Y); // 1 �����

			Application::DoEvents();
			Sleep(pause);

			// 15 ���, ������ ������ (3) � ������3 (4)
			this->label1->Text = L"" + ++pc_score;

			this->circle_empty->Location = System::Drawing::Point(this->circle_start_4->Location.X, this->circle_white_1->Location.Y); // ������
			this->circle_black_3->Location = System::Drawing::Point(this->circle_start_3->Location.X, this->circle_white_1->Location.Y); // 3 ������

			Application::DoEvents();
			Sleep(pause);

			MessageBox::Show("��� ���� ������������ ����\n�� ���������� �� 15 �����.\n" +
				"���� �� ����� ����������\n� ������� ����������� �����,\n�� ��������� � �������������.\n" +
				"�� ����� ��� ����������.", "���� �����", // ����� ���������� � ���������� ���� �� ����������
				MessageBoxButtons::OK, MessageBoxIcon::Information);

			start_game(); // �������� ��������� �� ������������
			check_game = true; // ���������� �� ������������� ������
		}



// �������� ��������� � circle_white_1
		private: System::Void circle_white_1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			// ��������� ������� �� ����
			if (check_game) {  // �������� ����� �� ������������ ������
				if (choice != max_choice) {
					// �������� ���� �� ������� 2 �����
					if (is_circle_white_1_MouseClick && choice < max_choice) {
						// �������� ������� ��� ������
						is_circle_white_1_MouseClick = false;

						choice += 1; // ������ ���� ����
					}
					else  if (!is_circle_white_1_MouseClick) {
						// ������� �� ������ ������ ����������
						is_circle_white_1_MouseClick = true;

						choice -= 1; // ��� ���� ������ �� ������
					}
					if (choice == 1) {
						// ����������� �������
						x1 = this->circle_white_1->Location.X; // ����
						xa1 = this->arrow_white_1->Location.X; // ������� �� ����
						position = 1;
					}
				}

				if (choice == max_choice) {
					this->arrow_white_1->Visible = false; // �������� �������
					is_circle_white_1_MouseClick = true; // ������� �� ������ ������ ����������
					choice = 0; // ���������� ���������� ��������� �������
					if (position == 4 && 2 * 136 >= abs(x1 - this->circle_white_1->Location.X)) {
						this->label1->Text = L"" + ++score; // ��� ����������� ����������� ���

						x2 = this->circle_white_1->Location.X;
						xa2 = this->arrow_white_1->Location.X;

						this->circle_white_1->Location = System::Drawing::Point(x1, this->circle_white_1->Location.Y);
						// ��������� ��������� �� ����� ������� ������

						this->arrow_white_1->Location = System::Drawing::Point(xa1, this->arrow_white_1->Location.Y);
						// ��������� ��������� �������

						change(position);
						// ��������� ��������� ������� ������
						sec_position = 1;
						swap_pos();
						win_check();
					}
					else {
						// ���� �� ��������, �� ����������� �������
						change_nothing(position);
					}
				}
			}
		}
		private: System::Void circle_white_1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
			// ����� �� ������� �����

			if (is_circle_white_1_MouseClick) // ���� ������� ����, �� ���� ��������
				this->arrow_white_1->Visible = false;

		}
		private: System::Void circle_white_1_MouseMove_1(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			// ��������� �� ����

			if (choice < max_choice) // ������������ ����� �������
				this->arrow_white_1->Visible = true;

		}



// �������� ��������� � circle_white_2
		private: System::Void circle_white_2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			// ��������� ������� �� ����
			if (check_game) {
				if (choice != max_choice) {
					if (is_circle_white_2_MouseClick && choice < max_choice) {
						is_circle_white_2_MouseClick = false;
						choice += 1;
					}
					else  if (!is_circle_white_2_MouseClick) {
						is_circle_white_2_MouseClick = true;
						choice -= 1;
					}
					if (choice == 1) {
						x1 = this->circle_white_2->Location.X;
						xa1 = this->arrow_white_2->Location.X;
						position = 2;
					}
				}

				if (choice == max_choice) {
					this->arrow_white_2->Visible = false;
					is_circle_white_2_MouseClick = true;
					choice = 0;
					if (position == 4 && 2 * 136 >= abs(x1 - this->circle_white_2->Location.X)) {
						// ��� ����������� ����������� ���
						this->label1->Text = L"" + ++score;

						x2 = this->circle_white_2->Location.X;
						xa2 = this->arrow_white_2->Location.X;

						this->circle_white_2->Location = System::Drawing::Point(x1, this->circle_white_2->Location.Y);
						this->arrow_white_2->Location = System::Drawing::Point(xa1, this->arrow_white_2->Location.Y);
						change(position);
						sec_position = 2;
						swap_pos();
						win_check();
					}
					else {
						change_nothing(position);
					}
				}
			}

		}
		private: System::Void circle_white_2_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
			// ����� �� ������� �����

			if (is_circle_white_2_MouseClick) // ���� ������� ����, �� ���� ��������
				this->arrow_white_2->Visible = false;

		}
		private: System::Void circle_white_2_MouseMove_1(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			// ��������� �� ����

			if (choice < max_choice)
				this->arrow_white_2->Visible = true;

		}



// �������� ��������� � circle_white_3
		private: System::Void circle_white_3_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			// ��������� ������� �� ����
			if (check_game) {
				if (choice != max_choice) {
					if (is_circle_white_3_MouseClick && choice < max_choice) {
						is_circle_white_3_MouseClick = false;
						choice += 1;
					}
					else  if (!is_circle_white_3_MouseClick) {
						is_circle_white_3_MouseClick = true;
						choice -= 1;
					}
					if (choice == 1) {
						x1 = this->circle_white_3->Location.X;
						xa1 = this->arrow_white_3->Location.X;
						position = 3;
					}
				}

				if (choice == max_choice) {
					this->arrow_white_3->Visible = false;
					is_circle_white_3_MouseClick = true;
					choice = 0;

					if (position == 4 && 2 * 136 >= abs(x1 - this->circle_white_3->Location.X)) {
						// ��� ����������� ����������� ���
						this->label1->Text = L"" + ++score;

						x2 = this->circle_white_3->Location.X;
						xa2 = this->arrow_white_3->Location.X;


						this->circle_white_3->Location = System::Drawing::Point(x1, this->circle_white_3->Location.Y);
						this->arrow_white_3->Location = System::Drawing::Point(xa1, this->arrow_white_3->Location.Y);
						change(position);
						sec_position = 3;
						swap_pos();
						win_check();
					}
					else {
						change_nothing(position);
					}
				}
			}

		}
		private: System::Void circle_white_3_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
			// ����� �� ������� �����

			if (is_circle_white_3_MouseClick) // ���� ������� ����, �� ���� ��������
				this->arrow_white_3->Visible = false;

		}
		private: System::Void circle_white_3_MouseMove_1(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			// ��������� �� ����

			if (choice < max_choice)
				this->arrow_white_3->Visible = true;

		}



// �������� ��������� � circle_empty
		private: System::Void circle_empty_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			// ��������� ������� �� ����
			if (check_game) {
				if (choice != max_choice) {
					if (is_circle_empty_MouseClick && choice < max_choice) {
						is_circle_empty_MouseClick = false;
						choice += 1;
					}
					else  if (!is_circle_empty_MouseClick) {
						is_circle_empty_MouseClick = true;
						choice -= 1;
					}
					if (choice == 1) {
						x1 = this->circle_empty->Location.X;
						xa1 = this->arrow_empty->Location.X;
						position = 4;
					}
				}

				if (choice == max_choice) {
					this->arrow_empty->Visible = false;
					is_circle_empty_MouseClick = true;
					choice = 0;

					if (2 * 136 >= abs(x1 - this->circle_empty->Location.X)) {
						// ��� ����������� ����������� ���
						this->label1->Text = L"" + ++score;

						x2 = this->circle_empty->Location.X;
						xa2 = this->arrow_empty->Location.X;

						this->circle_empty->Location = System::Drawing::Point(x1, this->circle_empty->Location.Y);
						this->arrow_empty->Location = System::Drawing::Point(xa1, this->arrow_empty->Location.Y);
						change(position);
						sec_position = 4;
						swap_pos();
						win_check();
					}
					else {
						change_nothing(position);
					}

				}
			}


		}
		private: System::Void circle_empty_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
			// ����� �� ������� �����

			if (is_circle_empty_MouseClick) // ���� ������� ����, �� ���� ��������
				this->arrow_empty->Visible = false;

		}
		private: System::Void circle_empty_MouseMove_1(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			// ��������� �� ����

			if (choice < max_choice)
				this->arrow_empty->Visible = true;

		}



// �������� ��������� � circle_black_1
		private: System::Void circle_black_1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			// ��������� ������� �� ����
			if (check_game) {
				if (choice != max_choice) {
					if (is_circle_black_1_MouseClick && choice < max_choice) {
						is_circle_black_1_MouseClick = false;
						choice += 1;
					}
					else if (!is_circle_black_1_MouseClick) {
						is_circle_black_1_MouseClick = true;
						choice -= 1;
					}
					if (choice == 1) {
						x1 = this->circle_black_1->Location.X;
						xa1 = this->arrow_black_1->Location.X;
						position = 5;
					}
				}

				if (choice == max_choice) {
					this->arrow_black_1->Visible = false;
					is_circle_black_1_MouseClick = true;
					choice = 0;

					if (position == 4 && 2 * 136 >= abs(x1 - this->circle_black_1->Location.X)) {
						// ��� ����������� ����������� ���
						this->label1->Text = L"" + ++score;

						x2 = this->circle_black_1->Location.X;
						xa2 = this->arrow_black_1->Location.X;


						this->circle_black_1->Location = System::Drawing::Point(x1, this->circle_black_1->Location.Y);
						this->arrow_black_1->Location = System::Drawing::Point(xa1, this->arrow_black_1->Location.Y);
						change(position);
						sec_position = 5;
						swap_pos();
						win_check();
					}
					else {
						change_nothing(position);
					}
				}
			}

		}
		private: System::Void circle_black_1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
			// ����� �� ������� �����

			if (is_circle_black_1_MouseClick) // ���� ������� ����, �� ���� ��������
				this->arrow_black_1->Visible = false;

		}
		private: System::Void circle_black_1_MouseMove_1(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			// ��������� �� ����

			if (choice < max_choice)
				this->arrow_black_1->Visible = true;

		}



// �������� ��������� � circle_black_2
		private: System::Void circle_black_2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			// ��������� ������� �� ����
			if (check_game) {
				if (choice != max_choice) {
					if (is_circle_black_2_MouseClick && choice < max_choice) {
						is_circle_black_2_MouseClick = false;
						choice += 1;
					}
					else if (!is_circle_black_2_MouseClick) {
						is_circle_black_2_MouseClick = true;
						choice -= 1;
					}
					if (choice == 1) {
						x1 = this->circle_black_2->Location.X;
						xa1 = this->arrow_black_2->Location.X;
						position = 6;
					}
				}

				if (choice == max_choice) {
					this->arrow_black_2->Visible = false;
					is_circle_black_2_MouseClick = true;
					choice = 0;
					if (position == 4 && 2 * 136 >= abs(x1 - this->circle_black_2->Location.X)) {
						// ��� ����������� ����������� ���
						this->label1->Text = L"" + ++score;

						x2 = this->circle_black_2->Location.X;
						xa2 = this->arrow_black_2->Location.X;

						this->circle_black_2->Location = System::Drawing::Point(x1, this->circle_black_2->Location.Y);
						this->arrow_black_2->Location = System::Drawing::Point(xa1, this->arrow_black_2->Location.Y);
						change(position);
						sec_position = 6;
						swap_pos();
						win_check();
					}
					else {
						change_nothing(position);
					}
				}
			}

		}
		private: System::Void circle_black_2_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
			// ����� �� ������� �����

			if (is_circle_black_2_MouseClick) // ���� ������� ����, �� ���� ��������
				this->arrow_black_2->Visible = false;

		}
		private: System::Void circle_black_2_MouseMove_1(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			// ��������� �� ����

			if (choice < max_choice)
				this->arrow_black_2->Visible = true;

		}



// �������� ��������� � circle_black_3
		private: System::Void circle_black_3_MouseClick(System::Object ^ sender, System::Windows::Forms::MouseEventArgs ^ e) {
			// ��������� ������� �� ����
			if (check_game) {
				if (choice != max_choice) {
					if (is_circle_black_3_MouseClick && choice < max_choice) {
						is_circle_black_3_MouseClick = false;
						choice += 1;
					}
					else if (!is_circle_black_3_MouseClick) {
						is_circle_black_3_MouseClick = true;
						choice -= 1;
					}

					if (choice == 1) {
						x1 = this->circle_black_3->Location.X;
						xa1 = this->arrow_black_3->Location.X;
						position = 7;
					}
				}

				if (choice == max_choice) {
					this->arrow_black_3->Visible = false;
					is_circle_black_3_MouseClick = true;
					choice = 0;

					if (position == 4 && 2 * 136 >= abs(x1 - this->circle_black_3->Location.X)) {
						// ��� ����������� ����������� ���
						this->label1->Text = L"" + ++score;

						x2 = this->circle_black_3->Location.X;
						xa2 = this->arrow_black_3->Location.X;

						this->circle_black_3->Location = System::Drawing::Point(x1, this->circle_black_3->Location.Y);
						this->arrow_black_3->Location = System::Drawing::Point(xa1, this->arrow_black_3->Location.Y);
						change(position);
						sec_position = 7;
						swap_pos();
						win_check();
					}
					else {
						change_nothing(position);
					}
				}
			}
			

		}
		private: System::Void circle_black_3_MouseLeave(System::Object ^ sender, System::EventArgs ^ e) {
			// ����� �� ������� �����

			if (is_circle_black_3_MouseClick) // ���� ������� ����, �� ���� ��������
				this->arrow_black_3->Visible = false;

		}
		private: System::Void circle_black_3_MouseMove_1(System::Object ^ sender, System::Windows::Forms::MouseEventArgs ^ e) {
			// ��������� �� ����

			if (choice < max_choice)
				this->arrow_black_3->Visible = true;

		}



// ����������� ������� �����
		private: void change(int pos) {
			switch (pos){

				case 1: {
					this->arrow_white_1->Visible = false; // �������� ������ �������
					is_circle_white_1_MouseClick = true; // ������� �� ������ ������ ����������

					this->circle_white_1->Location = System::Drawing::Point(x2, this->circle_white_1->Location.Y);
					// ��������� ��������� �� ����� ������� ������
					this->arrow_white_1->Location = System::Drawing::Point(xa2, this->arrow_white_1->Location.Y);

					 } break;

				case 2: {
					this->arrow_white_2->Visible = false;
					is_circle_white_2_MouseClick = true;
					this->circle_white_2->Location = System::Drawing::Point(x2, this->circle_white_2->Location.Y);
					this->arrow_white_2->Location = System::Drawing::Point(xa2, this->arrow_white_2->Location.Y);
				} break;

				case 3: {
					this->arrow_white_3->Visible = false;
					is_circle_white_3_MouseClick = true;
					this->circle_white_3->Location = System::Drawing::Point(x2, this->circle_white_3->Location.Y); 
					this->arrow_white_3->Location = System::Drawing::Point(xa2, this->arrow_white_3->Location.Y);
					 } break;

				case 4: {
					this->arrow_empty->Visible = false;
					is_circle_empty_MouseClick = true;
					this->circle_empty->Location = System::Drawing::Point(x2, this->circle_empty->Location.Y);
					this->arrow_empty->Location = System::Drawing::Point(xa2, this->arrow_empty->Location.Y);
				} break;

				case 5: {
					this->arrow_black_1->Visible = false;
					is_circle_black_1_MouseClick = true;
					this->circle_black_1->Location = System::Drawing::Point(x2, this->circle_black_1->Location.Y);
					this->arrow_black_1->Location = System::Drawing::Point(xa2, this->arrow_black_1->Location.Y);
					 } break;

				case 6: {
					this->arrow_black_2->Visible = false;
					is_circle_black_2_MouseClick = true;
					this->circle_black_2->Location = System::Drawing::Point(x2, this->circle_black_2->Location.Y);
					this->arrow_black_2->Location = System::Drawing::Point(xa2, this->arrow_black_2->Location.Y);
					 } break;

				case 7: {
					this->arrow_black_3->Visible = false;
					is_circle_black_3_MouseClick = true;
					this->circle_black_3->Location = System::Drawing::Point(x2, this->circle_black_3->Location.Y);
					this->arrow_black_3->Location = System::Drawing::Point(xa2, this->arrow_black_3->Location.Y);
					 } break;

			}
		}



// �������, ������ �� ������, ������ �������� �������
		private: void change_nothing(int pos) {
			switch (pos) {

				case 1: {
					this->arrow_white_1->Visible = false; // �������� ������ �������
					is_circle_white_1_MouseClick = true; // ������� �� ������ ������ ����������
				} break;

				case 2: {
					this->arrow_white_2->Visible = false;
					is_circle_white_2_MouseClick = true;
				} break;

				case 3: {
					this->arrow_white_3->Visible = false;
					is_circle_white_3_MouseClick = true;
				} break;

				case 4: {
					this->arrow_empty->Visible = false;
					is_circle_empty_MouseClick = true;
				} break;
				case 5: {
					this->arrow_black_1->Visible = false;
					is_circle_black_1_MouseClick = true;
				} break;

				case 6: {
					this->arrow_black_2->Visible = false;
					is_circle_black_2_MouseClick = true;
				} break;

				case 7: {
					this->arrow_black_3->Visible = false;
					is_circle_black_3_MouseClick = true;
				} break;

			}
		}



// ��������� ��������� �������
		private: void start_game() {
			std::ifstream fIn("game.txt"); // �������� �����
			int r = 0; // �������������� ��������� ��� �������� �� �����
			if (fIn.peek() == EOF) { // ���� ���� ����
				for (int i = 0; i < 8; i++) {

					if (i == 7) play[i] = 0; // ��������� ����
					else play[i] = i + 1; // ��������� ���������

				}
			}
			else {
				while (fIn) {
					fIn >> play[r]; // �������� ���������
					r++;
				}
			}
			fIn.close();
			loading_positions(); // �������� �������
		}



// ��������� ����������
		private: void start_position(int pos) {

			switch (pos) {

				case 1: {
					start_circle = this->circle_start_1->Location.X; // ����
					start_arrow = this->arrow_start_1->Location.X; // �������
				} break;

				case 2: {
					start_circle = this->circle_start_2->Location.X; // ����
					start_arrow = this->arrow_start_2->Location.X; // �������
				} break;

				case 3: {
					start_circle = this->circle_start_3->Location.X; // ����
					start_arrow = this->arrow_start_3->Location.X; // �������
				} break;

				case 4: {
					start_circle = this->circle_start_4->Location.X; // ����
					start_arrow = this->arrow_start_4->Location.X; // �������
				} break;
				case 5: {
					start_circle = this->circle_start_5->Location.X; // ����
					start_arrow = this->arrow_start_5->Location.X; // �������
				} break;

				case 6: {
					start_circle = this->circle_start_6->Location.X; // ����
					start_arrow = this->arrow_start_6->Location.X; // �������
				} break;

				case 7: {
					start_circle = this->circle_start_7->Location.X; // ����
					start_arrow = this->arrow_start_7->Location.X; // �������
				} break;

			}
		}



// ��������� ��������� ������������� ������ � �����
		private: void loading_positions() {

			start_position(play[0]); // ��������� 1 ������
			this->circle_white_1->Location = System::Drawing::Point(start_circle, this->circle_white_1->Location.Y); // ����
			this->arrow_white_1->Location = System::Drawing::Point(start_arrow, this->arrow_white_1->Location.Y); // �������

			start_position(play[1]); // ��������� 2 ������
			this->circle_white_2->Location = System::Drawing::Point(start_circle, this->circle_white_1->Location.Y); // ����
			this->arrow_white_2->Location = System::Drawing::Point(start_arrow, this->arrow_white_1->Location.Y); // �������

			start_position(play[2]); // ��������� 3 ������
			this->circle_white_3->Location = System::Drawing::Point(start_circle, this->circle_white_1->Location.Y); // ����
			this->arrow_white_3->Location = System::Drawing::Point(start_arrow, this->arrow_white_1->Location.Y); // �������

			start_position(play[3]); // ��������� �������
			this->circle_empty->Location = System::Drawing::Point(start_circle, this->circle_white_1->Location.Y); // ����
			this->arrow_empty->Location = System::Drawing::Point(start_arrow, this->arrow_white_1->Location.Y); // �������

			start_position(play[4]); // ��������� 1 �������
			this->circle_black_1->Location = System::Drawing::Point(start_circle, this->circle_white_1->Location.Y); // ����
			this->arrow_black_1->Location = System::Drawing::Point(start_arrow, this->arrow_white_1->Location.Y); // �������

			start_position(play[5]); // ��������� 2 �������
			this->circle_black_2->Location = System::Drawing::Point(start_circle, this->circle_white_1->Location.Y); // ����
			this->arrow_black_2->Location = System::Drawing::Point(start_arrow, this->arrow_white_1->Location.Y); // �������

			start_position(play[6]); // ��������� 3 �������
			this->circle_black_3->Location = System::Drawing::Point(start_circle, this->circle_white_1->Location.Y); // ����
			this->arrow_black_3->Location = System::Drawing::Point(start_arrow, this->arrow_white_1->Location.Y); // �������

			score = play[7]; // ����
			this->label1->Text = L"" + score; // ����� �����
		}



// ���������� �������
		private: void save_position() {
			int r = 0;  // �������������� ��������� ��� ������ � ����
			std::ofstream fOut("game.txt");

			for (int i = 0; i < 8; i++) {
				r = play[i];

				if (i == 7) fOut << score; // ��������� ����� ��� �����
				else fOut << r << " "; // ������ ��������� �������

			}

			fOut.close();
		}
			 


// ��������� ������� � ������
		private: void swap_pos() {
			std::swap(play[position - 1], play[sec_position-1]);
		}



// �������� ������
		private: void win_check() {
			if (play[3] == 4 && play[0] > 4 && play[1] > 4 && play[2] > 4) {
				// ������ ���� ������ ���������� � ������, ������� ����� ������ ���� ������ ������������
				MessageBox::Show("�����������!\n�� ��������!\n���� ���������� �����: " + score + "!", "���� �����", 
					// ����� ���������� � ������
					MessageBoxButtons::OK, MessageBoxIcon::Information);

				for (int i = 0; i < 8; i++) { // ����� ��������� � ������� � ���������������

					if (i == 7) play[i] = 0; // ��������� ����
					else play[i] = i + 1; // ��������� ���������

				}

				loading_positions(); // �������� �������
			}

		}
	};
}