#pragma once
#include <iostream>
#include <list>
using namespace std;
namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	int domyslnaplansza[9][9] = { { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0 } };
	int Sudoku[9][9] = { { 0, 0, 5, 0, 0, 0, 3, 0, 0 },
	{ 0, 0, 0, 1, 0, 0, 0, 6, 0 },
	{ 0, 0, 0, 9, 6, 0, 4, 0, 7 },
	{ 8, 2, 0, 0, 4, 0, 0, 0, 6 },
	{ 0, 1, 0, 7, 0, 6, 0, 8, 0 },
	{ 7, 0, 0, 0, 2, 0, 0, 4, 1 },
	{ 3, 0, 6, 0, 1, 2, 0, 0, 0 },
	{ 0, 8, 0, 0, 0, 7, 0, 0, 0 },
	{ 0, 0, 7, 0, 0, 0, 6, 0, 0 } };
	int SudokuBezZmian[9][9] = { { 0, 0, 5, 0, 0, 0, 3, 0, 0 },
	{ 0, 0, 0, 1, 0, 0, 0, 6, 0 },
	{ 0, 0, 0, 9, 6, 0, 4, 0, 7 },
	{ 8, 2, 0, 0, 4, 0, 0, 0, 6 },
	{ 0, 1, 0, 7, 0, 6, 0, 8, 0 },
	{ 7, 0, 0, 0, 2, 0, 0, 4, 1 },
	{ 3, 0, 6, 0, 1, 2, 0, 0, 0 },
	{ 0, 8, 0, 0, 0, 7, 0, 0, 0 },
	{ 0, 0, 7, 0, 0, 0, 6, 0, 0 } };
	list<int>jakaslista[9][9];
	int probnatablica[4][4];
	list <int> wiersz[9];
	list <int> kolumna[9];
	list <int> pudelko[9];
	list<int> zbior = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	list <int> Markup[9][9] =
	{
		{ { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 } },
		{ { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 } },
		{ { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 } },
		{ { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 } },
		{ { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 } },
		{ { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 } },
		{ { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 } },
		{ { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 } },
		{ { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 } }
	};

	list<int> sumalist[9][9];
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column16;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column17;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column18;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column9;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9
			});
			this->dataGridView1->GridColor = System::Drawing::SystemColors::HotTrack;
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 18;
			this->dataGridView1->Size = System::Drawing::Size(290, 210);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::Yellow;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Column1->DefaultCellStyle = dataGridViewCellStyle1;
			this->Column1->HeaderText = L"";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 30;
			// 
			// Column2
			// 
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::Yellow;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Column2->DefaultCellStyle = dataGridViewCellStyle2;
			this->Column2->HeaderText = L"";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 30;
			// 
			// Column3
			// 
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::Yellow;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Column3->DefaultCellStyle = dataGridViewCellStyle3;
			this->Column3->HeaderText = L"";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 30;
			// 
			// Column4
			// 
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::Yellow;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Column4->DefaultCellStyle = dataGridViewCellStyle4;
			this->Column4->HeaderText = L"";
			this->Column4->Name = L"Column4";
			this->Column4->Width = 30;
			// 
			// Column5
			// 
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::Yellow;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Column5->DefaultCellStyle = dataGridViewCellStyle5;
			this->Column5->HeaderText = L"";
			this->Column5->Name = L"Column5";
			this->Column5->Width = 30;
			// 
			// Column6
			// 
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::Yellow;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Column6->DefaultCellStyle = dataGridViewCellStyle6;
			this->Column6->HeaderText = L"";
			this->Column6->Name = L"Column6";
			this->Column6->Width = 30;
			// 
			// Column7
			// 
			dataGridViewCellStyle7->BackColor = System::Drawing::Color::Yellow;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Column7->DefaultCellStyle = dataGridViewCellStyle7;
			this->Column7->HeaderText = L"";
			this->Column7->Name = L"Column7";
			this->Column7->Width = 30;
			// 
			// Column8
			// 
			dataGridViewCellStyle8->BackColor = System::Drawing::Color::Yellow;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Column8->DefaultCellStyle = dataGridViewCellStyle8;
			this->Column8->HeaderText = L"";
			this->Column8->Name = L"Column8";
			this->Column8->Width = 30;
			// 
			// Column9
			// 
			dataGridViewCellStyle9->BackColor = System::Drawing::Color::Yellow;
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Column9->DefaultCellStyle = dataGridViewCellStyle9;
			this->Column9->HeaderText = L"";
			this->Column9->Name = L"Column9";
			this->Column9->Width = 30;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(311, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(173, 51);
			this->button1->TabIndex = 1;
			this->button1->Text = L"�aduj plansz� Sudoku";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(678, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(173, 47);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Zapisz Plansz�";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Column10,
					this->Column11, this->Column12, this->Column13, this->Column14, this->Column15, this->Column16, this->Column17, this->Column18
			});
			this->dataGridView2->Location = System::Drawing::Point(241, 228);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(719, 220);
			this->dataGridView2->TabIndex = 3;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"";
			this->Column10->Name = L"Column10";
			this->Column10->Width = 75;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"";
			this->Column11->Name = L"Column11";
			this->Column11->Width = 75;
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"";
			this->Column12->Name = L"Column12";
			this->Column12->Width = 75;
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"";
			this->Column13->Name = L"Column13";
			this->Column13->Width = 75;
			// 
			// Column14
			// 
			this->Column14->HeaderText = L"";
			this->Column14->Name = L"Column14";
			this->Column14->Width = 75;
			// 
			// Column15
			// 
			this->Column15->HeaderText = L"";
			this->Column15->Name = L"Column15";
			this->Column15->Width = 75;
			// 
			// Column16
			// 
			this->Column16->HeaderText = L"";
			this->Column16->Name = L"Column16";
			this->Column16->Width = 75;
			// 
			// Column17
			// 
			this->Column17->HeaderText = L"";
			this->Column17->Name = L"Column17";
			this->Column17->Width = 75;
			// 
			// Column18
			// 
			this->Column18->HeaderText = L"";
			this->Column18->Name = L"Column18";
			this->Column18->Width = 75;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(729, 76);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Element 0 0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(504, 33);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(158, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Po wprowadzeniu liczb kliknij w:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(324, 101);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(454, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Pamietaj �eby wprowadza� warto�ci tylko z list potencjalnych wartosci!!!Potrzebuj"
				L"esz pomocy \?";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label4->Location = System::Drawing::Point(306, 126);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(317, 27);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Czy Warto�ci s� dobrze wpisane\?";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 323);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(217, 41);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Wy�wietl listy potencjalnych warto�ci";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(824, 473);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 10;
			this->button4->Text = L"------>>>";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->Location = System::Drawing::Point(38, 414);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 64);
			this->button5->TabIndex = 11;
			this->button5->Text = L"X";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(972, 508);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Form1";
			this->Text = L"Moja Aplikacja Sudoku";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		Form^ PlanszaDoGenerowaniaSudoku = gcnew Form;//dopisane
		dataGridView1->ColumnCount = 9;
		dataGridView1->RowCount = 9;
		dataGridView2->ColumnCount = 9;
		dataGridView2->RowCount = 9;
		for (System::Int32 i = 0; i < 9; i++)
		{
			dataGridView1->Columns[i]->SortMode = DataGridViewColumnSortMode::NotSortable;
			dataGridView1->SelectionMode = DataGridViewSelectionMode::CellSelect;
		}

		for (System::Int32 i = 0; i < 9; i++)
		{
			dataGridView2->Columns[i]->SortMode = DataGridViewColumnSortMode::NotSortable;
			dataGridView2->SelectionMode = DataGridViewSelectionMode::CellSelect;
		}
		for (System::Int32 j = 0; j < 9; j++)
		{
			for (System::Int32 i = 0; i < 9; i++)
			{
				dataGridView1->Rows[j]->Cells[i]->Value = domyslnaplansza[j][i];//Sudoku[j][i]
				//if (dataGridView1->Rows[j]->Cells[i]->Value == 0)
				//{
				//	dataGridView1->Rows[j]->Cells[i]->Style->ForeColor.Chocolate;
				//}

			}
		}
		for (System::Int32 j = 0; j < 9; j++)
		{
			for (System::Int32 i = 0; i < 9; i++)
			{
				dataGridView2->Rows[j]->Cells[i]->Value = domyslnaplansza[j][i];
			}
		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		for (System::Int32 j = 0; j < 9; j++)
		{
			for (System::Int32 i = 0; i < 9; i++)
			{
				dataGridView1->Rows[j]->Cells[i]->Value = Sudoku[j][i];
			}
		}
		label4->Text = "Podano dozwolone warto�ci";
		label4->BackColor = System::Drawing::Color::Green;
		//
		//////////////////////////////////WIERSZE//////////////////////////////////////////////////////
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				wiersz[i].push_back(Sudoku[i][j]);//wprowadzenie zmiennych wierszowych
			}
		}
		///////////////////////////////////KOLUMNY/////////////////////////////////////////////////////
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				kolumna[j].push_back(Sudoku[i][j]);//wprowadzenie zmiennych do ka�dej kolumny
			}
		}
		////////////////////////////////PUDE�KOWE////////////////////////////////////////////////////////
		///////////////////////////////////////////PUDE�KO1//////////////////////////////////////////////
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				pudelko[0].push_back(Sudoku[i][j]);
			}
		}
		/////////////////////////////////////////PUDELKO2////////////////////////////////////////////////
		for (int i = 0; i < 3; i++)
		{
			for (int j = 3; j < 6; j++)
			{
				pudelko[1].push_back(Sudoku[i][j]);
			}
		}
		////////////////////////////////////////PUDE�KO3/////////////////////////////////////////////////
		for (int i = 0; i < 3; i++)
		{
			for (int j = 6; j < 9; j++)
			{
				pudelko[2].push_back(Sudoku[i][j]);
			}
		}
		////////////////////////////////////////PUDE�KO4/////////////////////////////////////////////////
		for (int i = 3; i < 6; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				pudelko[3].push_back(Sudoku[i][j]);
			}
		}
		////////////////////////////////////////PUDE�KO5/////////////////////////////////////////////////
		for (int i = 3; i < 6; i++)
		{
			for (int j = 3; j < 6; j++)
			{
				pudelko[4].push_back(Sudoku[i][j]);
			}
		}
		////////////////////////////////////////PUDE�KO6/////////////////////////////////////////////////
		for (int i = 3; i < 6; i++)
		{
			for (int j = 6; j < 9; j++)
			{
				pudelko[5].push_back(Sudoku[i][j]);
			}
		}
		////////////////////////////////////////PUDE�KO7/////////////////////////////////////////////////
		for (int i = 6; i < 9; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				pudelko[6].push_back(Sudoku[i][j]);
			}
		}
		////////////////////////////////////////PUDE�KO8/////////////////////////////////////////////////
		for (int i = 6; i < 9; i++)
		{
			for (int j = 3; j < 6; j++)
			{
				pudelko[7].push_back(Sudoku[i][j]);
			}
		}
		////////////////////////////////////////PUDE�KO9/////////////////////////////////////////////////
		for (int i = 6; i < 9; i++)
		{
			for (int j = 6; j < 9; j++)
			{
				pudelko[8].push_back(Sudoku[i][j]);
			}
		}
		//
		///////////////////////////////////////1,2,3 WIERSZ MARKUPU/////////////////////////////////////////

		for (int j = 0; j < 3; j++)
		{
			for (int i = 0; i < 9; i++)
			{
				if (Sudoku[j][i].ToString() == "0")
				{
					for (list<int>::iterator iter = wiersz[j].begin(); iter != wiersz[j].end(); iter++)
					{
						sumalist[j][i].push_back(*iter);
					}
					for (list<int>::iterator iter = kolumna[i].begin(); iter != kolumna[i].end(); iter++)
					{
						sumalist[j][i].push_back(*iter);
					}
					for (list<int>::iterator iter = pudelko[(int)ceil(i / 3)].begin(); iter != pudelko[(int)ceil(i / 3)].end(); iter++)
					{
						sumalist[j][i].push_back(*iter);
					}
					sumalist[j][i].remove(0);

					for (list<int>::iterator iter = sumalist[j][i].begin(); iter != sumalist[j][i].end(); iter++)
					{
						Markup[j][i].remove(*iter);
					}
				}
				else
				{
					Markup[j][i].clear();
					Markup[j][i].push_back(Sudoku[j][i]);
				}
			}
		}
		//////////////////////////////////////4,5,6 Wiersze Markupu///////////////////////////////////////////////////
		for (int j = 3; j < 6; j++)
		{
			for (int i = 0; i < 9; i++)
			{
				if (Sudoku[j][i].ToString() == "0")
				{
					for (list<int>::iterator iter = wiersz[j].begin(); iter != wiersz[j].end(); iter++)
					{
						sumalist[j][i].push_back(*iter);
					}
					for (list<int>::iterator iter = kolumna[i].begin(); iter != kolumna[i].end(); iter++)
					{
						sumalist[j][i].push_back(*iter);
					}
					for (list<int>::iterator iter = pudelko[(int)ceil((i + 9) / 3)].begin(); iter != pudelko[(int)ceil((i + 9) / 3)].end(); iter++)
					{
						sumalist[j][i].push_back(*iter);
					}
					sumalist[j][i].remove(0);
					for (list<int>::iterator iter = sumalist[j][i].begin(); iter != sumalist[j][i].end(); iter++)
					{
						Markup[j][i].remove(*iter);
					}
				}
				else
				{
					Markup[j][i].clear();
					Markup[j][i].push_back(Sudoku[j][i]);
				}
			}
		}
		//////////////////////////////////////7,8,9 Wiersze Markupu///////////////////////////////////////////////////
		for (int j = 6; j < 9; j++)
		{
			//cout << "Wiersz" << j + 1 << endl;
			for (int i = 0; i < 9; i++)
			{
				if (Sudoku[j][i].ToString() == "0")
				{
					for (list<int>::iterator iter = wiersz[j].begin(); iter != wiersz[j].end(); iter++)
					{
						sumalist[j][i].push_back(*iter);
					}
					for (list<int>::iterator iter = kolumna[i].begin(); iter != kolumna[i].end(); iter++)
					{
						sumalist[j][i].push_back(*iter);
					}
					for (list<int>::iterator iter = pudelko[(int)ceil((i + 18) / 3)].begin(); iter != pudelko[(int)ceil((i + 18) / 3)].end(); iter++)
					{
						sumalist[j][i].push_back(*iter);
					}
					sumalist[j][i].remove(0);

					for (list<int>::iterator iter = sumalist[j][i].begin(); iter != sumalist[j][i].end(); iter++)
					{
						Markup[j][i].remove(*iter);
					}

				}
				else
				{
					Markup[j][i].clear();
					Markup[j][i].push_back(Sudoku[j][i]);
				}
			}
		}
		//button4->Click += gcnew EventHandler(this, &Form1::button4_Click);
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		//TAK SI� DOSTAJEMY DO ELEMENTU 0,0
		label1->Text = "zapisa�em";
		//(Convert::ToSingle(dataGridView1->Rows[0]->Cells[0]->Value).ToString());
		for (System::Int32 j = 0; j < 9; j++)
		{
			for (System::Int32 i = 0; i < 9; i++)
			{
				//PRZYPISANIE TEGO CO WPISZEMY DO SUDOKU!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!OK
				if ((Convert::ToSingle(dataGridView1->Rows[j]->Cells[i]->Value) < 10) && (Convert::ToSingle(dataGridView1->Rows[j]->Cells[i]->Value) >= 0) == true)//dopisane
				{
					Sudoku[j][i] = Convert::ToSingle(dataGridView1->Rows[j]->Cells[i]->Value);
				}
				else
				{
					label4->Text = "Podano warto�� wykraczaj�c� poza zakres Sudoku!!!Zamieniam j�";
					Sudoku[j][i] = SudokuBezZmian[j][i];
				}
			}

		}
		//for (System::Int32 j = 0; j < 4; j++)
		//{
		//for (System::Int32 i = 0; i < 4; i++)
		//{
		//	dataGridView2->Rows[j]->Cells[i]->Value = Sudoku[j][i];//Sudoku[j][i]
		//}
		//}
		if (label4->Text == "Podano dozwolone warto�ci")
		{
			label4->BackColor = System::Drawing::Color::Green;
		}
		else
		{
			label4->BackColor = System::Drawing::Color::Red;
		}
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				//dataGridView2->Rows[j]->Cells[i]->Value = (0).ToString();
				dataGridView2->Rows[j]->Cells[i]->Value = "";
			}
		}

		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				for (list<int>::iterator iter = Markup[j][i].begin(); iter != Markup[j][i].end(); iter++)
				{
					dataGridView2->Rows[j]->Cells[i]->Value += (*iter).ToString();
				}
			}
		}

	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		//Form^ PlanszaDoGenerowaniaSudoku;
		int SudokuWype�nione[9][9] = {
				{ 6, 9, 5, 2, 7, 4, 3, 1, 8 },
				{ 4, 7, 8, 1, 3, 5, 9, 6, 2 },
				{ 2, 3, 1, 9, 6, 8, 4, 5, 7 },
				{ 8, 2, 3, 5, 4, 1, 7, 9, 6 },
				{ 5, 1, 4, 7, 9, 6, 2, 8, 3 },
				{ 7, 6, 9, 8, 2, 3, 5, 4, 1 },
				{ 3, 5, 6, 4, 1, 2, 8, 7, 9 },
				{ 9, 8, 2, 6, 5, 7, 1, 3, 4 },
				{ 1, 4, 7, 3, 8, 9, 6, 2, 5 } };
		Form^ PlanszaDoGenerowaniaSudoku = gcnew Form;
		PlanszaDoGenerowaniaSudoku->Show();
		PlanszaDoGenerowaniaSudoku->Width = 800;
		PlanszaDoGenerowaniaSudoku->Height = 600;
		PlanszaDoGenerowaniaSudoku->Text = "Jak generowa� plansze";
		Rectangle ekran = System::Windows::Forms::Screen::GetBounds(PlanszaDoGenerowaniaSudoku);
		PlanszaDoGenerowaniaSudoku->Top = (ekran.Height / 2) - (PlanszaDoGenerowaniaSudoku->Height / 2);
		DataGridView^ TaSamoSudoku = gcnew DataGridView;
		TaSamoSudoku = dataGridView1;
		for (System::Int32 j = 0; j < 9; j++)
		{
			for (System::Int32 i = 0; i < 9; i++)
			{
				TaSamoSudoku->Rows[j]->Cells[i]->Value = SudokuWype�nione[j][i];//Sudoku[j][i]
			}
		}
		TaSamoSudoku->Size = System::Drawing::Size(290, 210);
		TaSamoSudoku->Show();
		//TextBox^ pole_tekstowe = gcnew TextBox;
		TaSamoSudoku->Location = Point(10, 50);
		TaSamoSudoku->ColumnCount = 9;
		TaSamoSudoku->RowCount = 9;
		PlanszaDoGenerowaniaSudoku->Controls->Add(TaSamoSudoku);
		/*Form^ okno = gcnew Form;
		okno->Show();
		okno->Text = "Drugie okno";
		TextBox^ pole_tekstowe = gcnew TextBox;
		pole_tekstowe->Location = Point(10, 50);
		okno->Controls->Add(pole_tekstowe);*/
		//////////////////////////////////////////////////////////////////
		RadioButton^ znacznik1 = gcnew RadioButton;
		znacznik1->Show();
		znacznik1->Location = Point(350, 55);
		PlanszaDoGenerowaniaSudoku->Controls->Add(znacznik1);
		RadioButton^ znacznik2 = gcnew RadioButton;
		znacznik1->Show();
		znacznik1->Location = Point(350, 60);
		PlanszaDoGenerowaniaSudoku->Controls->Add(znacznik2);
		//////////////////////////////////////////////////////////////////
		Button^ button6 = gcnew Button;
		button6->Show();
		button6->Location = Point(100, 300);
		button6->Text = "X";
		button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		button6->Size = System::Drawing::Size(75, 64);
		button6->Click += gcnew EventHandler(this, &Form1::button6_Click);
		PlanszaDoGenerowaniaSudoku->Controls->Add(button6);
		//////////////////////////////////////////////////////////////////
		Button^ button7 = gcnew Button;
		button7->Show();
		button7->Location = Point(400, 150);
		button7->Text = "Zamien";
		button7->Size = System::Drawing::Size(75, 150);
		button7->Click += gcnew EventHandler(this, &Form1::button7_Click);
		PlanszaDoGenerowaniaSudoku->Controls->Add(button7);
		//////////////////////////////////////////////////////////////////
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		//tutaj maj� byc funkcjonalno�ci do zamiany wierszy ale nie jest widoczny obiekt TaSama? czemu?

	}
	};
}

