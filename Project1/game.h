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
	/// Сводка для game
	/// </summary>
	public ref class game : public System::Windows::Forms::Form
	{
	public:
		System::Windows::Forms::Form^ Game;

		/* проверка вывода изображения стрелки
		если true, то ничего не выводится
		если false(при нажатии), то выводится все время
		*/
		bool is_circle_white_1_MouseClick = true; 
		bool is_circle_white_2_MouseClick = true;
		bool is_circle_white_3_MouseClick = true;
		bool is_circle_empty_MouseClick = true;
		bool is_circle_black_1_MouseClick = true;
		bool is_circle_black_2_MouseClick = true;
		bool is_circle_black_3_MouseClick = true;
		//

		/* возможность нажатия на кнопки
		если true, то можно
		если false, то нельзя
		*/
		bool check_game = true;
		//

		// максимальый вывод стрелок равный 2
		int choice = 0;
		int max_choice = 2;
		//

		// счетчик ходов
		int score = 0;
		//
	
		/* индекс номер шара, число под этим индексом - положение 
		последний индекс отведен под счёт */
		int* play = new int[7];

		// координаты кругов для изменения
		int x1 = 0;
		int x2 = 0;
		int position = 0;
		int sec_position = 0;
		//
		
		// переменная для стартого положения
		int start_circle = 0;
		int start_arrow = 0;
		// 
		
		// координаты стрелок для изменения
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
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
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
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
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
			this->number_of_steps->Text = L"Количество шагов";
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
			this->reset_butoon->Text = L"Сброс положения";
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
			this->pc_game->Text = L"Демонстрационная игра";
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
			this->Text = L"Семь Лунок";
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
// загрузка положения при запуске формы
		private: System::Void game_Load(System::Object^ sender, System::EventArgs^ e) {
			start_game();
		}



// кнопка для скрытия формы
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { 
			if (check_game) {  // проверка можно ли использовать кнопку
				save_position(); // сохранение
				this->Visible = false; 	// скрытие формы
			}
		}



// сброс позиций
		private: System::Void reset_butoon_Click(System::Object^ sender, System::EventArgs^ e) {
			if (check_game) { // проверка можно ли использовать кнопку

				for (int i = 0; i < 8; i++) {// сброс положения и возврат к первоначальному

					if (i == 7) play[i] = 0; // начальный счёт
					else play[i] = i + 1; // начальное положение

				}

				loading_positions(); // загрузка первоначального положения
				save_position(); // сохранение данного положения в файле
			}
		}



// демонстрация игры от компьютера за 15 ходов
		private: System::Void pc_game_Click(System::Object^ sender, System::EventArgs^ e) {
			check_game = false; // чтобы остальные кнопки больше были недоступны
			save_position(); // сохранение позиций

			for (int i = 0; i < 7; i++) { // сброс положения и возврат к первоначальному для игры компьютера
				play[i] = i + 1; // начальное положение для
			}

			loading_positions(); // отрисовка для игры компьютера

			int pause = 600; // время для паузы
			int pc_score = 0; // счёт компьютера

			Application::DoEvents(); // обязательное выполнение всех команд в потоке до этого места в коде
			Sleep(pause); // остановка на n милисекунд

			// 1 шаг, меняем пустой (4) и черный1 (5)
			this->label1->Text = L"" + ++pc_score; // вывод счёта

			this->circle_empty->Location = System::Drawing::Point(this->circle_start_5->Location.X, this->circle_white_1->Location.Y); // пустой
			this->circle_black_1->Location = System::Drawing::Point(this->circle_start_4->Location.X, this->circle_white_1->Location.Y); // 1 черный

			Application::DoEvents();
			Sleep(pause);

			// 2 шаг, меняем пустой (5) и белый3 (3)
			this->label1->Text = L"" + ++pc_score;

			this->circle_empty->Location = System::Drawing::Point(this->circle_start_3->Location.X, this->circle_white_1->Location.Y); // пустой
			this->circle_white_3->Location = System::Drawing::Point(this->circle_start_5->Location.X, this->circle_white_1->Location.Y); // 3 белый

			Application::DoEvents();
			Sleep(pause);

			// 3 шаг, меняем пустой (3) и белый2 (2)
			this->label1->Text = L"" + ++pc_score;

			this->circle_empty->Location = System::Drawing::Point(this->circle_start_2->Location.X, this->circle_white_1->Location.Y); // пустой
			this->circle_white_2->Location = System::Drawing::Point(this->circle_start_3->Location.X, this->circle_white_1->Location.Y); // 2 белый

			Application::DoEvents();
			Sleep(pause);

			// 4 шаг, меняем пустой (2) и черный1 (4)
			this->label1->Text = L"" + ++pc_score;

			this->circle_empty->Location = System::Drawing::Point(this->circle_start_4->Location.X, this->circle_white_1->Location.Y); // пустой
			this->circle_black_1->Location = System::Drawing::Point(this->circle_start_2->Location.X, this->circle_white_1->Location.Y); // 1 черный

			Application::DoEvents();
			Sleep(pause);

			// 5 шаг, меняем пустой (4) и черный2 (6)
			this->label1->Text = L"" + ++pc_score;

			this->circle_empty->Location = System::Drawing::Point(this->circle_start_6->Location.X, this->circle_white_1->Location.Y); // пустой
			this->circle_black_2->Location = System::Drawing::Point(this->circle_start_4->Location.X, this->circle_white_1->Location.Y); // 2 черный

			Application::DoEvents();
			Sleep(pause);

			// 6 шаг, меняем пустой (6) и черный3 (7)
			this->label1->Text = L"" + ++pc_score;

			this->circle_empty->Location = System::Drawing::Point(this->circle_start_7->Location.X, this->circle_white_1->Location.Y); // пустой
			this->circle_black_3->Location = System::Drawing::Point(this->circle_start_6->Location.X, this->circle_white_1->Location.Y); // 3 черный

			Application::DoEvents();
			Sleep(pause);

			// 7 шаг, меняем пустой (7) и белый3 (5)
			this->label1->Text = L"" + ++pc_score;

			this->circle_empty->Location = System::Drawing::Point(this->circle_start_5->Location.X, this->circle_white_1->Location.Y); // пустой
			this->circle_white_3->Location = System::Drawing::Point(this->circle_start_7->Location.X, this->circle_white_1->Location.Y); // 3 белый

			Application::DoEvents();
			Sleep(pause);

			// 8 шаг, меняем пустой (5) и белый2 (3)
			this->label1->Text = L"" + ++pc_score;

			this->circle_empty->Location = System::Drawing::Point(this->circle_start_3->Location.X, this->circle_white_1->Location.Y); // пустой
			this->circle_white_2->Location = System::Drawing::Point(this->circle_start_5->Location.X, this->circle_white_1->Location.Y); // 2 белый

			Application::DoEvents();
			Sleep(pause);

			// 9 шаг, меняем пустой (3) и белый1 (1)
			this->label1->Text = L"" + ++pc_score;

			this->circle_empty->Location = System::Drawing::Point(this->circle_start_1->Location.X, this->circle_white_1->Location.Y); // пустой
			this->circle_white_1->Location = System::Drawing::Point(this->circle_start_3->Location.X, this->circle_white_1->Location.Y); // 1белый

			Application::DoEvents();
			Sleep(pause);

			// 10 шаг, меняем пустой (1) и черный1 (2)
			this->label1->Text = L"" + ++pc_score;

			this->circle_empty->Location = System::Drawing::Point(this->circle_start_2->Location.X, this->circle_white_1->Location.Y); // пустой
			this->circle_black_1->Location = System::Drawing::Point(this->circle_start_1->Location.X, this->circle_white_1->Location.Y); // 1 черный

			Application::DoEvents();
			Sleep(pause);

			// 11 шаг, меняем пустой (2) и черный2 (4)
			this->label1->Text = L"" + ++pc_score;

			this->circle_empty->Location = System::Drawing::Point(this->circle_start_4->Location.X, this->circle_white_1->Location.Y); // пустой
			this->circle_black_2->Location = System::Drawing::Point(this->circle_start_2->Location.X, this->circle_white_1->Location.Y); // 2 черный

			Application::DoEvents();
			Sleep(pause);

			// 12 шаг, меняем пустой (4) и черный3 (6)
			this->label1->Text = L"" + ++pc_score;

			this->circle_empty->Location = System::Drawing::Point(this->circle_start_6->Location.X, this->circle_white_1->Location.Y); // пустой
			this->circle_black_3->Location = System::Drawing::Point(this->circle_start_4->Location.X, this->circle_white_1->Location.Y); // 3 черный

			Application::DoEvents();
			Sleep(pause);

			// 13 шаг, меняем пустой (6) и белый2 (5)
			this->label1->Text = L"" + ++pc_score;

			this->circle_empty->Location = System::Drawing::Point(this->circle_start_5->Location.X, this->circle_white_1->Location.Y); // пустой
			this->circle_white_2->Location = System::Drawing::Point(this->circle_start_6->Location.X, this->circle_white_1->Location.Y); // 2 белый

			Application::DoEvents();
			Sleep(pause);

			// 14 шаг, меняем пустой (5) и белый1 (3)
			this->label1->Text = L"" + ++pc_score;

			this->circle_empty->Location = System::Drawing::Point(this->circle_start_3->Location.X, this->circle_white_1->Location.Y); // пустой
			this->circle_white_1->Location = System::Drawing::Point(this->circle_start_5->Location.X, this->circle_white_1->Location.Y); // 1 белый

			Application::DoEvents();
			Sleep(pause);

			// 15 шаг, меняем пустой (3) и черный3 (4)
			this->label1->Text = L"" + ++pc_score;

			this->circle_empty->Location = System::Drawing::Point(this->circle_start_4->Location.X, this->circle_white_1->Location.Y); // пустой
			this->circle_black_3->Location = System::Drawing::Point(this->circle_start_3->Location.X, this->circle_white_1->Location.Y); // 3 черный

			Application::DoEvents();
			Sleep(pause);

			MessageBox::Show("Это была демонстрация игры\nот компьютера за 15 ходов.\n" +
				"Если Вы нашли комбинацию\nс меньшем количеством шагов,\nто свяжитесь с разработчиком.\n" +
				"Он будет вам благодарен.", "Семь Лунок", // вывод информации о завершении игры от компьютера
				MessageBoxButtons::OK, MessageBoxIcon::Information);

			start_game(); // загрузка положения до демоснтрации
			check_game = true; // разрешение на использование кнопок
		}



// действия связанные с circle_white_1
		private: System::Void circle_white_1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			// обработка нажатия на круг
			if (check_game) {  // проверка можно ли использовать кнопку
				if (choice != max_choice) {
					// работает пока не выбрано 2 круга
					if (is_circle_white_1_MouseClick && choice < max_choice) {
						// фиксация стрелки над кругом
						is_circle_white_1_MouseClick = false;

						choice += 1; // выбран этот круг
					}
					else  if (!is_circle_white_1_MouseClick) {
						// стрелка не должна больше выводиться
						is_circle_white_1_MouseClick = true;

						choice -= 1; // это круг больше не выбран
					}
					if (choice == 1) {
						// запоминание позиции
						x1 = this->circle_white_1->Location.X; // круг
						xa1 = this->arrow_white_1->Location.X; // стрелка на круг
						position = 1;
					}
				}

				if (choice == max_choice) {
					this->arrow_white_1->Visible = false; // скрываем стрелку
					is_circle_white_1_MouseClick = true; // стрелка не должна больше выводиться
					choice = 0; // сбрасываем количество выбранных шариков
					if (position == 4 && 2 * 136 >= abs(x1 - this->circle_white_1->Location.X)) {
						this->label1->Text = L"" + ++score; // при перемещении добавляется шаг

						x2 = this->circle_white_1->Location.X;
						xa2 = this->arrow_white_1->Location.X;

						this->circle_white_1->Location = System::Drawing::Point(x1, this->circle_white_1->Location.Y);
						// изменение положения на место первого выбора

						this->arrow_white_1->Location = System::Drawing::Point(xa1, this->arrow_white_1->Location.Y);
						// изменение положения стрелки

						change(position);
						// изменение положения второго выбора
						sec_position = 1;
						swap_pos();
						win_check();
					}
					else {
						// если не подходит, то запускается затычка
						change_nothing(position);
					}
				}
			}
		}
		private: System::Void circle_white_1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
			// выход за пределы круга

			if (is_circle_white_1_MouseClick) // если нажатие было, то круг остается
				this->arrow_white_1->Visible = false;

		}
		private: System::Void circle_white_1_MouseMove_1(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			// наведение на круг

			if (choice < max_choice) // максимальный вывод стрелок
				this->arrow_white_1->Visible = true;

		}



// действия связанные с circle_white_2
		private: System::Void circle_white_2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			// обработка нажатия на круг
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
						// при перемещении добавляется шаг
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
			// выход за пределы круга

			if (is_circle_white_2_MouseClick) // если нажатие было, то круг остается
				this->arrow_white_2->Visible = false;

		}
		private: System::Void circle_white_2_MouseMove_1(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			// наведение на круг

			if (choice < max_choice)
				this->arrow_white_2->Visible = true;

		}



// действия связанные с circle_white_3
		private: System::Void circle_white_3_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			// обработка нажатия на круг
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
						// при перемещении добавляется шаг
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
			// выход за пределы круга

			if (is_circle_white_3_MouseClick) // если нажатие было, то круг остается
				this->arrow_white_3->Visible = false;

		}
		private: System::Void circle_white_3_MouseMove_1(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			// наведение на круг

			if (choice < max_choice)
				this->arrow_white_3->Visible = true;

		}



// действия связанные с circle_empty
		private: System::Void circle_empty_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			// обработка нажатия на круг
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
						// при перемещении добавляется шаг
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
			// выход за пределы круга

			if (is_circle_empty_MouseClick) // если нажатие было, то круг остается
				this->arrow_empty->Visible = false;

		}
		private: System::Void circle_empty_MouseMove_1(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			// наведение на круг

			if (choice < max_choice)
				this->arrow_empty->Visible = true;

		}



// действия связанные с circle_black_1
		private: System::Void circle_black_1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			// обработка нажатия на круг
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
						// при перемещении добавляется шаг
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
			// выход за пределы круга

			if (is_circle_black_1_MouseClick) // если нажатие было, то круг остается
				this->arrow_black_1->Visible = false;

		}
		private: System::Void circle_black_1_MouseMove_1(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			// наведение на круг

			if (choice < max_choice)
				this->arrow_black_1->Visible = true;

		}



// действия связанные с circle_black_2
		private: System::Void circle_black_2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			// обработка нажатия на круг
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
						// при перемещении добавляется шаг
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
			// выход за пределы круга

			if (is_circle_black_2_MouseClick) // если нажатие было, то круг остается
				this->arrow_black_2->Visible = false;

		}
		private: System::Void circle_black_2_MouseMove_1(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			// наведение на круг

			if (choice < max_choice)
				this->arrow_black_2->Visible = true;

		}



// действия связанные с circle_black_3
		private: System::Void circle_black_3_MouseClick(System::Object ^ sender, System::Windows::Forms::MouseEventArgs ^ e) {
			// обработка нажатия на круг
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
						// при перемещении добавляется шаг
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
			// выход за пределы круга

			if (is_circle_black_3_MouseClick) // если нажатие было, то круг остается
				this->arrow_black_3->Visible = false;

		}
		private: System::Void circle_black_3_MouseMove_1(System::Object ^ sender, System::Windows::Forms::MouseEventArgs ^ e) {
			// наведение на круг

			if (choice < max_choice)
				this->arrow_black_3->Visible = true;

		}



// перемещение первого круга
		private: void change(int pos) {
			switch (pos){

				case 1: {
					this->arrow_white_1->Visible = false; // скрываем вторую стрелку
					is_circle_white_1_MouseClick = true; // стрелка не должна больше выводиться

					this->circle_white_1->Location = System::Drawing::Point(x2, this->circle_white_1->Location.Y);
					// изменение положения на место второго выбора
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



// затычка, ничего не меняет, только скрывает стрелки
		private: void change_nothing(int pos) {
			switch (pos) {

				case 1: {
					this->arrow_white_1->Visible = false; // скрываем вторую стрелку
					is_circle_white_1_MouseClick = true; // стрелка не должна больше выводиться
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



// стартовое положение шариков
		private: void start_game() {
			std::ifstream fIn("game.txt"); // открытие файла
			int r = 0; // дополнительная меременая для выгрузки из файла
			if (fIn.peek() == EOF) { // если файл пуст
				for (int i = 0; i < 8; i++) {

					if (i == 7) play[i] = 0; // начальный счёт
					else play[i] = i + 1; // начальное положение

				}
			}
			else {
				while (fIn) {
					fIn >> play[r]; // загрузка положения
					r++;
				}
			}
			fIn.close();
			loading_positions(); // загрузка позиций
		}



// начальные координаты
		private: void start_position(int pos) {

			switch (pos) {

				case 1: {
					start_circle = this->circle_start_1->Location.X; // круг
					start_arrow = this->arrow_start_1->Location.X; // стрелка
				} break;

				case 2: {
					start_circle = this->circle_start_2->Location.X; // круг
					start_arrow = this->arrow_start_2->Location.X; // стрелка
				} break;

				case 3: {
					start_circle = this->circle_start_3->Location.X; // круг
					start_arrow = this->arrow_start_3->Location.X; // стрелка
				} break;

				case 4: {
					start_circle = this->circle_start_4->Location.X; // круг
					start_arrow = this->arrow_start_4->Location.X; // стрелка
				} break;
				case 5: {
					start_circle = this->circle_start_5->Location.X; // круг
					start_arrow = this->arrow_start_5->Location.X; // стрелка
				} break;

				case 6: {
					start_circle = this->circle_start_6->Location.X; // круг
					start_arrow = this->arrow_start_6->Location.X; // стрелка
				} break;

				case 7: {
					start_circle = this->circle_start_7->Location.X; // круг
					start_arrow = this->arrow_start_7->Location.X; // стрелка
				} break;

			}
		}



// начальное положение определенного шарика и счета
		private: void loading_positions() {

			start_position(play[0]); // отрисовка 1 белого
			this->circle_white_1->Location = System::Drawing::Point(start_circle, this->circle_white_1->Location.Y); // круг
			this->arrow_white_1->Location = System::Drawing::Point(start_arrow, this->arrow_white_1->Location.Y); // стрелка

			start_position(play[1]); // отрисовка 2 белого
			this->circle_white_2->Location = System::Drawing::Point(start_circle, this->circle_white_1->Location.Y); // круг
			this->arrow_white_2->Location = System::Drawing::Point(start_arrow, this->arrow_white_1->Location.Y); // стрелка

			start_position(play[2]); // отрисовка 3 белого
			this->circle_white_3->Location = System::Drawing::Point(start_circle, this->circle_white_1->Location.Y); // круг
			this->arrow_white_3->Location = System::Drawing::Point(start_arrow, this->arrow_white_1->Location.Y); // стрелка

			start_position(play[3]); // отрисовка пустого
			this->circle_empty->Location = System::Drawing::Point(start_circle, this->circle_white_1->Location.Y); // круг
			this->arrow_empty->Location = System::Drawing::Point(start_arrow, this->arrow_white_1->Location.Y); // стрелка

			start_position(play[4]); // отрисовка 1 черного
			this->circle_black_1->Location = System::Drawing::Point(start_circle, this->circle_white_1->Location.Y); // круг
			this->arrow_black_1->Location = System::Drawing::Point(start_arrow, this->arrow_white_1->Location.Y); // стрелка

			start_position(play[5]); // отрисовка 2 черного
			this->circle_black_2->Location = System::Drawing::Point(start_circle, this->circle_white_1->Location.Y); // круг
			this->arrow_black_2->Location = System::Drawing::Point(start_arrow, this->arrow_white_1->Location.Y); // стрелка

			start_position(play[6]); // отрисовка 3 черного
			this->circle_black_3->Location = System::Drawing::Point(start_circle, this->circle_white_1->Location.Y); // круг
			this->arrow_black_3->Location = System::Drawing::Point(start_arrow, this->arrow_white_1->Location.Y); // стрелка

			score = play[7]; // счёт
			this->label1->Text = L"" + score; // вывод счёта
		}



// сохранение позиций
		private: void save_position() {
			int r = 0;  // дополнительная меременая для записи в файл
			std::ofstream fOut("game.txt");

			for (int i = 0; i < 8; i++) {
				r = play[i];

				if (i == 7) fOut << score; // последнее число для счёта
				else fOut << r << " "; // запись положения шариков

			}

			fOut.close();
		}
			 


// изменение позиций в списке
		private: void swap_pos() {
			std::swap(play[position - 1], play[sec_position-1]);
		}



// проверка победы
		private: void win_check() {
			if (play[3] == 4 && play[0] > 4 && play[1] > 4 && play[2] > 4) {
				// пустой круг должен находиться в центре, позиции белых должны быть больше центрального
				MessageBox::Show("Поздравляем!\nВы победили!\nВаше количество ходов: " + score + "!", "Семь Лунок", 
					// вывод информации о победе
					MessageBoxButtons::OK, MessageBoxIcon::Information);

				for (int i = 0; i < 8; i++) { // сброс положения и возврат к первоначальному

					if (i == 7) play[i] = 0; // начальный счёт
					else play[i] = i + 1; // начальное положение

				}

				loading_positions(); // загрузка позиций
			}

		}
	};
}