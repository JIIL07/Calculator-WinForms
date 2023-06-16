#pragma once

namespace Calc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ exit;
	private: System::Windows::Forms::Label^ result;
	private: System::Windows::Forms::Button^ seven;
	private: System::Windows::Forms::Button^ eight;
	private: System::Windows::Forms::Button^ nine;
	private: System::Windows::Forms::Button^ divide;
	private: System::Windows::Forms::Button^ mult;
	private: System::Windows::Forms::Button^ six;
	private: System::Windows::Forms::Button^ five;
	private: System::Windows::Forms::Button^ four;
	private: System::Windows::Forms::Button^ plus;
	private: System::Windows::Forms::Button^ dot;
	private: System::Windows::Forms::Button^ null;
	private: System::Windows::Forms::Button^ minus;
	private: System::Windows::Forms::Button^ three;
	private: System::Windows::Forms::Button^ two;
	private: System::Windows::Forms::Button^ one;
	private: System::Windows::Forms::Button^ equal;
	private: System::Windows::Forms::Button^ per_cent;
	private: System::Windows::Forms::Button^ reverse;
	private: System::Windows::Forms::Button^ clear;
	private: System::Windows::Forms::Button^ tray;
	private: float f_num;
	private: char user_act = ' ';
	private: bool is_equal = false;

	protected:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->exit = (gcnew System::Windows::Forms::Button());
			this->result = (gcnew System::Windows::Forms::Label());
			this->seven = (gcnew System::Windows::Forms::Button());
			this->eight = (gcnew System::Windows::Forms::Button());
			this->nine = (gcnew System::Windows::Forms::Button());
			this->divide = (gcnew System::Windows::Forms::Button());
			this->mult = (gcnew System::Windows::Forms::Button());
			this->six = (gcnew System::Windows::Forms::Button());
			this->five = (gcnew System::Windows::Forms::Button());
			this->four = (gcnew System::Windows::Forms::Button());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->dot = (gcnew System::Windows::Forms::Button());
			this->null = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->three = (gcnew System::Windows::Forms::Button());
			this->two = (gcnew System::Windows::Forms::Button());
			this->one = (gcnew System::Windows::Forms::Button());
			this->equal = (gcnew System::Windows::Forms::Button());
			this->per_cent = (gcnew System::Windows::Forms::Button());
			this->reverse = (gcnew System::Windows::Forms::Button());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->tray = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// exit
			// 
			this->exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->exit->Cursor = System::Windows::Forms::Cursors::Default;
			this->exit->FlatAppearance->BorderSize = 0;
			this->exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exit->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->exit->Location = System::Drawing::Point(271, 10);
			this->exit->Margin = System::Windows::Forms::Padding(0);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(20, 20);
			this->exit->TabIndex = 0;
			this->exit->Text = L"×";
			this->exit->UseVisualStyleBackColor = false;
			this->exit->Click += gcnew System::EventHandler(this, &MyForm::Exit_Click);
			// 
			// result
			// 
			this->result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->result->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->result->Location = System::Drawing::Point(9, 37);
			this->result->MaximumSize = System::Drawing::Size(500, 58);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(282, 58);
			this->result->TabIndex = 1;
			this->result->Text = L"0";
			this->result->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// seven
			// 
			this->seven->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(189)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->seven->FlatAppearance->BorderSize = 0;
			this->seven->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->seven->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->seven->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->seven->Location = System::Drawing::Point(9, 95);
			this->seven->Margin = System::Windows::Forms::Padding(0);
			this->seven->Name = L"seven";
			this->seven->Size = System::Drawing::Size(50, 50);
			this->seven->TabIndex = 3;
			this->seven->Text = L"7";
			this->seven->UseVisualStyleBackColor = false;
			this->seven->Click += gcnew System::EventHandler(this, &MyForm::BtnNum_Click);
			// 
			// eight
			// 
			this->eight->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(189)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->eight->FlatAppearance->BorderSize = 0;
			this->eight->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->eight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->eight->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->eight->Location = System::Drawing::Point(69, 95);
			this->eight->Margin = System::Windows::Forms::Padding(0);
			this->eight->Name = L"eight";
			this->eight->Size = System::Drawing::Size(50, 50);
			this->eight->TabIndex = 4;
			this->eight->Text = L"8";
			this->eight->UseVisualStyleBackColor = false;
			this->eight->Click += gcnew System::EventHandler(this, &MyForm::BtnNum_Click);
			// 
			// nine
			// 
			this->nine->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(189)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->nine->FlatAppearance->BorderSize = 0;
			this->nine->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nine->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->nine->Location = System::Drawing::Point(129, 95);
			this->nine->Margin = System::Windows::Forms::Padding(0);
			this->nine->Name = L"nine";
			this->nine->Size = System::Drawing::Size(50, 50);
			this->nine->TabIndex = 5;
			this->nine->Text = L"9";
			this->nine->UseVisualStyleBackColor = false;
			this->nine->Click += gcnew System::EventHandler(this, &MyForm::BtnNum_Click);
			// 
			// divide
			// 
			this->divide->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->divide->FlatAppearance->BorderSize = 0;
			this->divide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->divide->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->divide->Location = System::Drawing::Point(189, 95);
			this->divide->Margin = System::Windows::Forms::Padding(0);
			this->divide->Name = L"divide";
			this->divide->Size = System::Drawing::Size(50, 50);
			this->divide->TabIndex = 6;
			this->divide->Text = L"/";
			this->divide->UseVisualStyleBackColor = false;
			this->divide->Click += gcnew System::EventHandler(this, &MyForm::divide_Click);
			// 
			// mult
			// 
			this->mult->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->mult->FlatAppearance->BorderSize = 0;
			this->mult->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mult->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->mult->Location = System::Drawing::Point(189, 155);
			this->mult->Margin = System::Windows::Forms::Padding(0);
			this->mult->Name = L"mult";
			this->mult->Size = System::Drawing::Size(50, 50);
			this->mult->TabIndex = 10;
			this->mult->Text = L"*";
			this->mult->UseVisualStyleBackColor = false;
			this->mult->Click += gcnew System::EventHandler(this, &MyForm::mult_Click);
			// 
			// six
			// 
			this->six->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(189)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->six->FlatAppearance->BorderSize = 0;
			this->six->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->six->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->six->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->six->Location = System::Drawing::Point(129, 155);
			this->six->Margin = System::Windows::Forms::Padding(0);
			this->six->Name = L"six";
			this->six->Size = System::Drawing::Size(50, 50);
			this->six->TabIndex = 9;
			this->six->Text = L"6";
			this->six->UseVisualStyleBackColor = false;
			this->six->Click += gcnew System::EventHandler(this, &MyForm::BtnNum_Click);
			// 
			// five
			// 
			this->five->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(189)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->five->FlatAppearance->BorderSize = 0;
			this->five->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->five->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->five->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->five->Location = System::Drawing::Point(69, 155);
			this->five->Margin = System::Windows::Forms::Padding(0);
			this->five->Name = L"five";
			this->five->Size = System::Drawing::Size(50, 50);
			this->five->TabIndex = 8;
			this->five->Text = L"5";
			this->five->UseVisualStyleBackColor = false;
			this->five->Click += gcnew System::EventHandler(this, &MyForm::BtnNum_Click);
			// 
			// four
			// 
			this->four->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(189)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->four->FlatAppearance->BorderSize = 0;
			this->four->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->four->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->four->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->four->Location = System::Drawing::Point(9, 155);
			this->four->Margin = System::Windows::Forms::Padding(0);
			this->four->Name = L"four";
			this->four->Size = System::Drawing::Size(50, 50);
			this->four->TabIndex = 7;
			this->four->Text = L"4";
			this->four->UseVisualStyleBackColor = false;
			this->four->Click += gcnew System::EventHandler(this, &MyForm::BtnNum_Click);
			// 
			// plus
			// 
			this->plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->plus->FlatAppearance->BorderSize = 0;
			this->plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->plus->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->plus->Location = System::Drawing::Point(189, 275);
			this->plus->Margin = System::Windows::Forms::Padding(0);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(50, 50);
			this->plus->TabIndex = 18;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = false;
			this->plus->Click += gcnew System::EventHandler(this, &MyForm::plus_Click);
			// 
			// dot
			// 
			this->dot->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(189)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->dot->FlatAppearance->BorderSize = 0;
			this->dot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->dot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dot->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->dot->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->dot->Location = System::Drawing::Point(129, 275);
			this->dot->Margin = System::Windows::Forms::Padding(0);
			this->dot->Name = L"dot";
			this->dot->Size = System::Drawing::Size(50, 50);
			this->dot->TabIndex = 17;
			this->dot->Text = L",";
			this->dot->UseVisualStyleBackColor = false;
			this->dot->Click += gcnew System::EventHandler(this, &MyForm::dot_Click);
			// 
			// null
			// 
			this->null->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(189)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->null->FlatAppearance->BorderSize = 0;
			this->null->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->null->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->null->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->null->Location = System::Drawing::Point(9, 275);
			this->null->Margin = System::Windows::Forms::Padding(0);
			this->null->Name = L"null";
			this->null->Size = System::Drawing::Size(110, 50);
			this->null->TabIndex = 15;
			this->null->Text = L"0";
			this->null->UseVisualStyleBackColor = false;
			this->null->Click += gcnew System::EventHandler(this, &MyForm::BtnNum_Click);
			// 
			// minus
			// 
			this->minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->minus->FlatAppearance->BorderSize = 0;
			this->minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minus->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->minus->Location = System::Drawing::Point(189, 215);
			this->minus->Margin = System::Windows::Forms::Padding(0);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(50, 50);
			this->minus->TabIndex = 14;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = false;
			this->minus->Click += gcnew System::EventHandler(this, &MyForm::minus_Click);
			// 
			// three
			// 
			this->three->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(189)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->three->FlatAppearance->BorderSize = 0;
			this->three->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->three->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->three->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->three->Location = System::Drawing::Point(129, 215);
			this->three->Margin = System::Windows::Forms::Padding(0);
			this->three->Name = L"three";
			this->three->Size = System::Drawing::Size(50, 50);
			this->three->TabIndex = 13;
			this->three->Text = L"3";
			this->three->UseVisualStyleBackColor = false;
			this->three->Click += gcnew System::EventHandler(this, &MyForm::BtnNum_Click);
			// 
			// two
			// 
			this->two->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(189)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->two->FlatAppearance->BorderSize = 0;
			this->two->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->two->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->two->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->two->Location = System::Drawing::Point(69, 215);
			this->two->Margin = System::Windows::Forms::Padding(0);
			this->two->Name = L"two";
			this->two->Size = System::Drawing::Size(50, 50);
			this->two->TabIndex = 12;
			this->two->Text = L"2";
			this->two->UseVisualStyleBackColor = false;
			this->two->Click += gcnew System::EventHandler(this, &MyForm::BtnNum_Click);
			// 
			// one
			// 
			this->one->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(189)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->one->FlatAppearance->BorderSize = 0;
			this->one->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->one->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->one->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->one->Location = System::Drawing::Point(9, 215);
			this->one->Margin = System::Windows::Forms::Padding(0);
			this->one->Name = L"one";
			this->one->Size = System::Drawing::Size(50, 50);
			this->one->TabIndex = 11;
			this->one->Text = L"1";
			this->one->UseVisualStyleBackColor = false;
			this->one->Click += gcnew System::EventHandler(this, &MyForm::BtnNum_Click);
			// 
			// equal
			// 
			this->equal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->equal->FlatAppearance->BorderSize = 0;
			this->equal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->equal->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->equal->Location = System::Drawing::Point(189, 335);
			this->equal->Margin = System::Windows::Forms::Padding(0);
			this->equal->Name = L"equal";
			this->equal->Size = System::Drawing::Size(50, 50);
			this->equal->TabIndex = 22;
			this->equal->Text = L"=";
			this->equal->UseVisualStyleBackColor = false;
			this->equal->Click += gcnew System::EventHandler(this, &MyForm::equal_Click);
			// 
			// per_cent
			// 
			this->per_cent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->per_cent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->per_cent->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->per_cent->Location = System::Drawing::Point(129, 335);
			this->per_cent->Margin = System::Windows::Forms::Padding(0);
			this->per_cent->Name = L"per_cent";
			this->per_cent->Size = System::Drawing::Size(50, 50);
			this->per_cent->TabIndex = 21;
			this->per_cent->Text = L"%";
			this->per_cent->UseVisualStyleBackColor = true;
			this->per_cent->Click += gcnew System::EventHandler(this, &MyForm::per_cent_Click);
			// 
			// reverse
			// 
			this->reverse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->reverse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->reverse->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->reverse->Location = System::Drawing::Point(69, 335);
			this->reverse->Margin = System::Windows::Forms::Padding(0);
			this->reverse->Name = L"reverse";
			this->reverse->Size = System::Drawing::Size(50, 50);
			this->reverse->TabIndex = 20;
			this->reverse->Text = L"+/-";
			this->reverse->UseVisualStyleBackColor = true;
			this->reverse->Click += gcnew System::EventHandler(this, &MyForm::reverse_Click);
			// 
			// clear
			// 
			this->clear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->clear->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->clear->Location = System::Drawing::Point(9, 335);
			this->clear->Margin = System::Windows::Forms::Padding(0);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(50, 50);
			this->clear->TabIndex = 19;
			this->clear->Text = L"AC";
			this->clear->UseVisualStyleBackColor = true;
			this->clear->Click += gcnew System::EventHandler(this, &MyForm::clear_Click);
			// 
			// tray
			// 
			this->tray->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->tray->Cursor = System::Windows::Forms::Cursors::Default;
			this->tray->FlatAppearance->BorderSize = 0;
			this->tray->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tray->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tray->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->tray->Location = System::Drawing::Point(241, 10);
			this->tray->Margin = System::Windows::Forms::Padding(0);
			this->tray->Name = L"tray";
			this->tray->Size = System::Drawing::Size(20, 20);
			this->tray->TabIndex = 23;
			this->tray->Text = L"-";
			this->tray->UseVisualStyleBackColor = false;
			this->tray->Click += gcnew System::EventHandler(this, &MyForm::tray_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(99)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->CausesValidation = false;
			this->ClientSize = System::Drawing::Size(300, 400);
			this->Controls->Add(this->tray);
			this->Controls->Add(this->equal);
			this->Controls->Add(this->per_cent);
			this->Controls->Add(this->reverse);
			this->Controls->Add(this->clear);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->dot);
			this->Controls->Add(this->null);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->three);
			this->Controls->Add(this->two);
			this->Controls->Add(this->one);
			this->Controls->Add(this->mult);
			this->Controls->Add(this->six);
			this->Controls->Add(this->five);
			this->Controls->Add(this->four);
			this->Controls->Add(this->divide);
			this->Controls->Add(this->nine);
			this->Controls->Add(this->eight);
			this->Controls->Add(this->seven);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->result);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->Margin = System::Windows::Forms::Padding(0);
			this->MaximumSize = System::Drawing::Size(500, 500);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void tray_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = FormWindowState::Minimized;
	}

	private: System::Void BtnNum_Click(System::Object^ sender, System::EventArgs^ e) {
		this->result->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
			static_cast<System::Int32>(static_cast<System::Byte>(66)));
		Button^ button = safe_cast<Button^>(sender);
		if (this->result->Text == "0" || is_equal) {
			this->result->Text = button->Text;
			this->is_equal = false;
		}
		else {
			this->result->Text = this->result->Text + button->Text;
		}
	}

	private: System::Void plus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('+');
	}

	private: System::Void minus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('-');
	}

	private: System::Void mult_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('*');
	}

	private: System::Void divide_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('/');
	}

	private: System::Void math_action(char action){
		this->f_num = System::Convert::ToDouble(this->result->Text);
		this->user_act = action;
		this->result->Text = "0";
	}
	private: System::Void equal_Click(System::Object^ sender, System::EventArgs^ e) {
		if (user_act == ' ')
			return;
		float s_num = System::Convert::ToDouble(this->result->Text);
		float res;
		switch (this->user_act) {
		case '+': res = this->f_num + s_num;		break;
		case '-': res = this->f_num - s_num;		break;
		case '*': res = this->f_num * s_num;		break;
		case '%': res = this->f_num * s_num / 100;  break;
		case '/': 
			if (s_num == 0) {
				this->result->ForeColor = Color::Red;
				res = 0;
				MessageBox::Show(this, "division by zero", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				res = this->f_num / s_num; break;
			}
		}
		this->is_equal = true;
		this->result->Text = System::Convert::ToString(res);
	}
	private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e) {
		this->result->Text = "0";
		this->result->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
			static_cast<System::Int32>(static_cast<System::Byte>(66)));
		this->f_num = 0;
		this->user_act = ' ';
		is_equal = false;
	}
	private: System::Void reverse_Click(System::Object^ sender, System::EventArgs^ e) {
		float num = System::Convert::ToDouble(this->result->Text);
		num *= -1;
		this->result->Text = System::Convert::ToString(num);
	}
	private: System::Void per_cent_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('%');
	}
	private: System::Void dot_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text = this->result->Text;
		if(!text->Contains(","))
			this->result->Text = text + ",";
	}
};
}