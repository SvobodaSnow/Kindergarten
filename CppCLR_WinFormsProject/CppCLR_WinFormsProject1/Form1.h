#pragma once

#include "ListKindergartenStudent.cpp"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
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
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker6;


	private: System::Windows::Forms::Label^ label9;

	private: ListKindergartenStudent listKindergartenStudent;

	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::ColumnHeader^ columnHeader5;
	private: System::Windows::Forms::ColumnHeader^ columnHeader6;
	private: System::Windows::Forms::ColumnHeader^ columnHeader7;
	private: System::Windows::Forms::ColumnHeader^ columnHeader8;














	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîõğàíèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîõğàíèòüÊàêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îòêğûòüToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;

	private: System::Windows::Forms::ToolStripMenuItem^ âîñïèòàííèêèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âàêöèíàöèÿToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ äîáàâèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ óäàëèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ íàéòèÂîñïèòàííèêàÏîÔÈÎToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûâåñòèÂñåõÂîñïèòàííèêîâToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïåğåâåñòèÂÑòàğøóşÃğóïïóToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ğåäàêòèğîâàíèåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ êîêëşøToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïàëåîìåëèòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ æåëòóõàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ òóáåğêóëåçToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator3;
	private: System::Windows::Forms::ToolStripMenuItem^ âûâåñòèÄàòóÈÂğåìÿToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ èçìåíèòüÄàòóToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^ êîêëşøàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïàëåîìåëèòToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ æåëòóõèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ òóáåğêóëåçàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ìåäîòâîäàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^ èçìåíüòüÂñåÄàòûToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator4;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator5;

private: System::Windows::Forms::ToolStripMenuItem^ èçÌëàäøåéÃğóïïûToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ èçÑòàğøåéÃğóïïûToolStripMenuItem;





















	protected:

	protected:















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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker4 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker5 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker6 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíèòüÊàêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îòêğûòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->âûâåñòèÄàòóÈÂğåìÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âîñïèòàííèêèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äîáàâèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->óäàëèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íàéòèÂîñïèòàííèêàÏîÔÈÎToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->ïåğåâåñòèÂÑòàğøóşÃğóïïóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator5 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->âûâåñòèÂñåõÂîñïèòàííèêîâToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->èçÌëàäøåéÃğóïïûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->èçÑòàğøåéÃğóïïûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âàêöèíàöèÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êîêëşøToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïàëåîìåëèòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->æåëòóõàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->òóáåğêóëåçToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğåäàêòèğîâàíèåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->èçìåíèòüÄàòóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->êîêëşøàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïàëåîìåëèòToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->æåëòóõèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->òóáåğêóëåçàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ìåäîòâîäàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->èçìåíüòüÂñåÄàòûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 49);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(134, 20);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(134, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"ÔÈÎ âîñïèòàííèêà";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(190, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Ãğóïïà";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Ñòàğøàÿ", L"Ìëàäøàÿ" });
			this->comboBox1->Location = System::Drawing::Point(152, 49);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 3;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(279, 50);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(117, 20);
			this->dateTimePicker1->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(276, 30);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(120, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Äàòà çà÷èñëåíèÿ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(403, 30);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(114, 16);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Äàòà ìåäîòâîäà";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(402, 50);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(117, 20);
			this->dateTimePicker2->TabIndex = 6;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(525, 29);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(183, 16);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Äàòà ïğèâèâêè îò êîêëşøà";
			// 
			// dateTimePicker4
			// 
			this->dateTimePicker4->Location = System::Drawing::Point(751, 50);
			this->dateTimePicker4->Name = L"dateTimePicker4";
			this->dateTimePicker4->Size = System::Drawing::Size(137, 20);
			this->dateTimePicker4->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(714, 29);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(214, 16);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Äàòà ïğèâèâêè îò ïàëåîìåëèòà";
			// 
			// dateTimePicker3
			// 
			this->dateTimePicker3->Location = System::Drawing::Point(557, 50);
			this->dateTimePicker3->Name = L"dateTimePicker3";
			this->dateTimePicker3->Size = System::Drawing::Size(137, 20);
			this->dateTimePicker3->TabIndex = 10;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(1123, 30);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(212, 16);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Äàòà ïğèâèâêè îò òóáåğêóëåçà";
			// 
			// dateTimePicker5
			// 
			this->dateTimePicker5->Location = System::Drawing::Point(948, 50);
			this->dateTimePicker5->Name = L"dateTimePicker5";
			this->dateTimePicker5->Size = System::Drawing::Size(137, 20);
			this->dateTimePicker5->TabIndex = 14;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(934, 30);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(180, 16);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Äàòà ïğèâèâêè îò æåëòóõè";
			// 
			// dateTimePicker6
			// 
			this->dateTimePicker6->Location = System::Drawing::Point(1160, 50);
			this->dateTimePicker6->Name = L"dateTimePicker6";
			this->dateTimePicker6->Size = System::Drawing::Size(137, 20);
			this->dateTimePicker6->TabIndex = 12;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 72);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 13);
			this->label9->TabIndex = 18;
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(8) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7, this->columnHeader8
			});
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(12, 88);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(1317, 444);
			this->listView1->TabIndex = 21;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listView1_SelectedIndexChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"ÔÈÎ";
			this->columnHeader1->Width = 207;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Ãğóïïà";
			this->columnHeader2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader2->Width = 142;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Äàòà çà÷èñëåíèÿ";
			this->columnHeader3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader3->Width = 149;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Äàòà ïğèâèâêè îò êîêëşøà";
			this->columnHeader4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader4->Width = 164;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Äàòà ïğèâèâêè îò ïàëåîìåëèòà";
			this->columnHeader5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader5->Width = 181;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Äàòà ïğèâèâêè îò æåëòóõè";
			this->columnHeader6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader6->Width = 157;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"Äàòà ïğèâèâêè îò òóáåğêóëåçà";
			this->columnHeader7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader7->Width = 176;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"Äàòà ìåäîòâîäà";
			this->columnHeader8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader8->Width = 136;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ôàéëToolStripMenuItem,
					this->âîñïèòàííèêèToolStripMenuItem, this->âàêöèíàöèÿToolStripMenuItem, this->ğåäàêòèğîâàíèåToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1341, 24);
			this->menuStrip1->TabIndex = 41;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->ñîõğàíèòüToolStripMenuItem,
					this->ñîõğàíèòüÊàêToolStripMenuItem, this->îòêğûòüToolStripMenuItem, this->toolStripSeparator3, this->âûâåñòèÄàòóÈÂğåìÿToolStripMenuItem
			});
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->ôàéëToolStripMenuItem->Text = L"Ôàéë";
			// 
			// ñîõğàíèòüToolStripMenuItem
			// 
			this->ñîõğàíèòüToolStripMenuItem->Name = L"ñîõğàíèòüToolStripMenuItem";
			this->ñîõğàíèòüToolStripMenuItem->Size = System::Drawing::Size(193, 22);
			this->ñîõğàíèòüToolStripMenuItem->Text = L"Ñîõğàíèòü";
			this->ñîõğàíèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ñîõğàíèòüToolStripMenuItem_Click);
			// 
			// ñîõğàíèòüÊàêToolStripMenuItem
			// 
			this->ñîõğàíèòüÊàêToolStripMenuItem->Name = L"ñîõğàíèòüÊàêToolStripMenuItem";
			this->ñîõğàíèòüÊàêToolStripMenuItem->Size = System::Drawing::Size(193, 22);
			this->ñîõğàíèòüÊàêToolStripMenuItem->Text = L"Ñîõğàíèòü êàê...";
			this->ñîõğàíèòüÊàêToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ñîõğàíèòüÊàêToolStripMenuItem_Click);
			// 
			// îòêğûòüToolStripMenuItem
			// 
			this->îòêğûòüToolStripMenuItem->Name = L"îòêğûòüToolStripMenuItem";
			this->îòêğûòüToolStripMenuItem->Size = System::Drawing::Size(193, 22);
			this->îòêğûòüToolStripMenuItem->Text = L"Îòêğûòü...";
			this->îòêğûòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::îòêğûòüToolStripMenuItem_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(190, 6);
			// 
			// âûâåñòèÄàòóÈÂğåìÿToolStripMenuItem
			// 
			this->âûâåñòèÄàòóÈÂğåìÿToolStripMenuItem->Name = L"âûâåñòèÄàòóÈÂğåìÿToolStripMenuItem";
			this->âûâåñòèÄàòóÈÂğåìÿToolStripMenuItem->Size = System::Drawing::Size(193, 22);
			this->âûâåñòèÄàòóÈÂğåìÿToolStripMenuItem->Text = L"Âûâåñòè äàòó è âğåìÿ";
			this->âûâåñòèÄàòóÈÂğåìÿToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::âûâåñòèÄàòóÈÂğåìÿToolStripMenuItem_Click);
			// 
			// âîñïèòàííèêèToolStripMenuItem
			// 
			this->âîñïèòàííèêèToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
				this->äîáàâèòüToolStripMenuItem,
					this->óäàëèòüToolStripMenuItem, this->íàéòèÂîñïèòàííèêàÏîÔÈÎToolStripMenuItem, this->toolStripSeparator4, this->ïåğåâåñòèÂÑòàğøóşÃğóïïóToolStripMenuItem,
					this->toolStripSeparator5, this->âûâåñòèÂñåõÂîñïèòàííèêîâToolStripMenuItem, this->èçÌëàäøåéÃğóïïûToolStripMenuItem, this->èçÑòàğøåéÃğóïïûToolStripMenuItem
			});
			this->âîñïèòàííèêèToolStripMenuItem->Name = L"âîñïèòàííèêèToolStripMenuItem";
			this->âîñïèòàííèêèToolStripMenuItem->Size = System::Drawing::Size(98, 20);
			this->âîñïèòàííèêèToolStripMenuItem->Text = L"Âîñïèòàííèêè";
			// 
			// äîáàâèòüToolStripMenuItem
			// 
			this->äîáàâèòüToolStripMenuItem->Name = L"äîáàâèòüToolStripMenuItem";
			this->äîáàâèòüToolStripMenuItem->Size = System::Drawing::Size(245, 22);
			this->äîáàâèòüToolStripMenuItem->Text = L"Äîáàâèòü...";
			this->äîáàâèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::äîáàâèòüToolStripMenuItem_Click);
			// 
			// óäàëèòüToolStripMenuItem
			// 
			this->óäàëèòüToolStripMenuItem->Name = L"óäàëèòüToolStripMenuItem";
			this->óäàëèòüToolStripMenuItem->Size = System::Drawing::Size(245, 22);
			this->óäàëèòüToolStripMenuItem->Text = L"Îò÷èñëèòü...";
			this->óäàëèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::óäàëèòüToolStripMenuItem_Click);
			// 
			// íàéòèÂîñïèòàííèêàÏîÔÈÎToolStripMenuItem
			// 
			this->íàéòèÂîñïèòàííèêàÏîÔÈÎToolStripMenuItem->Name = L"íàéòèÂîñïèòàííèêàÏîÔÈÎToolStripMenuItem";
			this->íàéòèÂîñïèòàííèêàÏîÔÈÎToolStripMenuItem->Size = System::Drawing::Size(245, 22);
			this->íàéòèÂîñïèòàííèêàÏîÔÈÎToolStripMenuItem->Text = L"Íàéòè âîñïèòàííèêà...";
			this->íàéòèÂîñïèòàííèêàÏîÔÈÎToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::íàéòèÂîñïèòàííèêàÏîÔÈÎToolStripMenuItem_Click);
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(242, 6);
			// 
			// ïåğåâåñòèÂÑòàğøóşÃğóïïóToolStripMenuItem
			// 
			this->ïåğåâåñòèÂÑòàğøóşÃğóïïóToolStripMenuItem->Name = L"ïåğåâåñòèÂÑòàğøóşÃğóïïóToolStripMenuItem";
			this->ïåğåâåñòèÂÑòàğøóşÃğóïïóToolStripMenuItem->Size = System::Drawing::Size(245, 22);
			this->ïåğåâåñòèÂÑòàğøóşÃğóïïóToolStripMenuItem->Text = L"Ïåğåâåñòè â ñòàğøóş ãğóïïó...";
			this->ïåğåâåñòèÂÑòàğøóşÃğóïïóToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ïåğåâåñòèÂÑòàğøóşÃğóïïóToolStripMenuItem_Click);
			// 
			// toolStripSeparator5
			// 
			this->toolStripSeparator5->Name = L"toolStripSeparator5";
			this->toolStripSeparator5->Size = System::Drawing::Size(242, 6);
			// 
			// âûâåñòèÂñåõÂîñïèòàííèêîâToolStripMenuItem
			// 
			this->âûâåñòèÂñåõÂîñïèòàííèêîâToolStripMenuItem->Name = L"âûâåñòèÂñåõÂîñïèòàííèêîâToolStripMenuItem";
			this->âûâåñòèÂñåõÂîñïèòàííèêîâToolStripMenuItem->Size = System::Drawing::Size(245, 22);
			this->âûâåñòèÂñåõÂîñïèòàííèêîâToolStripMenuItem->Text = L"Âûâåñòè âñåõ âîñïèòàííèêîâ...";
			this->âûâåñòèÂñåõÂîñïèòàííèêîâToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::âûâåñòèÂñåõÂîñïèòàííèêîâToolStripMenuItem_Click);
			// 
			// èçÌëàäøåéÃğóïïûToolStripMenuItem
			// 
			this->èçÌëàäøåéÃğóïïûToolStripMenuItem->Name = L"èçÌëàäøåéÃğóïïûToolStripMenuItem";
			this->èçÌëàäøåéÃğóïïûToolStripMenuItem->Size = System::Drawing::Size(245, 22);
			this->èçÌëàäøåéÃğóïïûToolStripMenuItem->Text = L"Èç ìëàäøåé ãğóïïû...";
			this->èçÌëàäøåéÃğóïïûToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::èçÌëàäøåéÃğóïïûToolStripMenuItem_Click);
			// 
			// èçÑòàğøåéÃğóïïûToolStripMenuItem
			// 
			this->èçÑòàğøåéÃğóïïûToolStripMenuItem->Name = L"èçÑòàğøåéÃğóïïûToolStripMenuItem";
			this->èçÑòàğøåéÃğóïïûToolStripMenuItem->Size = System::Drawing::Size(245, 22);
			this->èçÑòàğøåéÃğóïïûToolStripMenuItem->Text = L"Èç ñòàğøåé ãğóïïû...";
			this->èçÑòàğøåéÃğóïïûToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::èçÑòàğøåéÃğóïïûToolStripMenuItem_Click);
			// 
			// âàêöèíàöèÿToolStripMenuItem
			// 
			this->âàêöèíàöèÿToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->êîêëşøToolStripMenuItem,
					this->ïàëåîìåëèòToolStripMenuItem, this->æåëòóõàToolStripMenuItem, this->òóáåğêóëåçToolStripMenuItem
			});
			this->âàêöèíàöèÿToolStripMenuItem->Name = L"âàêöèíàöèÿToolStripMenuItem";
			this->âàêöèíàöèÿToolStripMenuItem->Size = System::Drawing::Size(85, 20);
			this->âàêöèíàöèÿToolStripMenuItem->Text = L"Âàêöèíàöèÿ";
			// 
			// êîêëşøToolStripMenuItem
			// 
			this->êîêëşøToolStripMenuItem->Name = L"êîêëşøToolStripMenuItem";
			this->êîêëşøToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->êîêëşøToolStripMenuItem->Text = L"Êîêëşø...";
			this->êîêëşøToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::êîêëşøToolStripMenuItem_Click);
			// 
			// ïàëåîìåëèòToolStripMenuItem
			// 
			this->ïàëåîìåëèòToolStripMenuItem->Name = L"ïàëåîìåëèòToolStripMenuItem";
			this->ïàëåîìåëèòToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->ïàëåîìåëèòToolStripMenuItem->Text = L"Ïàëåîìåëèò...";
			this->ïàëåîìåëèòToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ïàëåîìåëèòToolStripMenuItem_Click);
			// 
			// æåëòóõàToolStripMenuItem
			// 
			this->æåëòóõàToolStripMenuItem->Name = L"æåëòóõàToolStripMenuItem";
			this->æåëòóõàToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->æåëòóõàToolStripMenuItem->Text = L"Æåëòóõà...";
			this->æåëòóõàToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::æåëòóõàToolStripMenuItem_Click);
			// 
			// òóáåğêóëåçToolStripMenuItem
			// 
			this->òóáåğêóëåçToolStripMenuItem->Name = L"òóáåğêóëåçToolStripMenuItem";
			this->òóáåğêóëåçToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->òóáåğêóëåçToolStripMenuItem->Text = L"Òóáåğêóëåç...";
			this->òóáåğêóëåçToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::òóáåğêóëåçToolStripMenuItem_Click);
			// 
			// ğåäàêòèğîâàíèåToolStripMenuItem
			// 
			this->ğåäàêòèğîâàíèåToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
				this->èçìåíèòüÄàòóToolStripMenuItem,
					this->toolStripSeparator1, this->êîêëşøàToolStripMenuItem, this->ïàëåîìåëèòToolStripMenuItem1, this->æåëòóõèToolStripMenuItem,
					this->òóáåğêóëåçàToolStripMenuItem, this->ìåäîòâîäàToolStripMenuItem, this->toolStripSeparator2, this->èçìåíüòüÂñåÄàòûToolStripMenuItem
			});
			this->ğåäàêòèğîâàíèåToolStripMenuItem->Name = L"ğåäàêòèğîâàíèåToolStripMenuItem";
			this->ğåäàêòèğîâàíèåToolStripMenuItem->Size = System::Drawing::Size(108, 20);
			this->ğåäàêòèğîâàíèåToolStripMenuItem->Text = L"Ğåäàêòèğîâàíèå";
			// 
			// èçìåíèòüÄàòóToolStripMenuItem
			// 
			this->èçìåíèòüÄàòóToolStripMenuItem->Name = L"èçìåíèòüÄàòóToolStripMenuItem";
			this->èçìåíèòüÄàòóToolStripMenuItem->Size = System::Drawing::Size(186, 22);
			this->èçìåíèòüÄàòóToolStripMenuItem->Text = L"Èçìåíèòü äàòó:";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(183, 6);
			// 
			// êîêëşøàToolStripMenuItem
			// 
			this->êîêëşøàToolStripMenuItem->Name = L"êîêëşøàToolStripMenuItem";
			this->êîêëşøàToolStripMenuItem->Size = System::Drawing::Size(186, 22);
			this->êîêëşøàToolStripMenuItem->Text = L"Êîêëşøà";
			this->êîêëşøàToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::êîêëşøàToolStripMenuItem_Click);
			// 
			// ïàëåîìåëèòToolStripMenuItem1
			// 
			this->ïàëåîìåëèòToolStripMenuItem1->Name = L"ïàëåîìåëèòToolStripMenuItem1";
			this->ïàëåîìåëèòToolStripMenuItem1->Size = System::Drawing::Size(186, 22);
			this->ïàëåîìåëèòToolStripMenuItem1->Text = L"Ïàëåîìåëèòà";
			this->ïàëåîìåëèòToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::ïàëåîìåëèòToolStripMenuItem1_Click);
			// 
			// æåëòóõèToolStripMenuItem
			// 
			this->æåëòóõèToolStripMenuItem->Name = L"æåëòóõèToolStripMenuItem";
			this->æåëòóõèToolStripMenuItem->Size = System::Drawing::Size(186, 22);
			this->æåëòóõèToolStripMenuItem->Text = L"Æåëòóõè";
			this->æåëòóõèToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::æåëòóõèToolStripMenuItem_Click);
			// 
			// òóáåğêóëåçàToolStripMenuItem
			// 
			this->òóáåğêóëåçàToolStripMenuItem->Name = L"òóáåğêóëåçàToolStripMenuItem";
			this->òóáåğêóëåçàToolStripMenuItem->Size = System::Drawing::Size(186, 22);
			this->òóáåğêóëåçàToolStripMenuItem->Text = L"Òóáåğêóëåçà";
			this->òóáåğêóëåçàToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::òóáåğêóëåçàToolStripMenuItem_Click);
			// 
			// ìåäîòâîäàToolStripMenuItem
			// 
			this->ìåäîòâîäàToolStripMenuItem->Name = L"ìåäîòâîäàToolStripMenuItem";
			this->ìåäîòâîäàToolStripMenuItem->Size = System::Drawing::Size(186, 22);
			this->ìåäîòâîäàToolStripMenuItem->Text = L"Ìåäîòâîäà";
			this->ìåäîòâîäàToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ìåäîòâîäàToolStripMenuItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(183, 6);
			// 
			// èçìåíüòüÂñåÄàòûToolStripMenuItem
			// 
			this->èçìåíüòüÂñåÄàòûToolStripMenuItem->Name = L"èçìåíüòüÂñåÄàòûToolStripMenuItem";
			this->èçìåíüòüÂñåÄàòûToolStripMenuItem->Size = System::Drawing::Size(186, 22);
			this->èçìåíüòüÂñåÄàòûToolStripMenuItem->Text = L"Èçìåíüòü âñå äàòû...";
			this->èçìåíüòüÂñåÄàòûToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::èçìåíüòüÂñåÄàòûToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1341, 544);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->dateTimePicker5);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->dateTimePicker6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dateTimePicker3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->dateTimePicker4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"Form1";
			this->Text = L"Ñïèñîê äåòñàäà";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void printKindergartenStudent(KindergartenStudent^ kindergartenStudent);
	private: System::Void ñîõğàíèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ñîõğàíèòüÊàêToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void îòêğûòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Form1_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
	private: System::Void saveToFile();
	private: System::Void âûâåñòèÄàòóÈÂğåìÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void äîáàâèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void óäàëèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void íàéòèÂîñïèòàííèêàÏîÔÈÎToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ïåğåâåñòèÂÑòàğøóşÃğóïïóToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void âûâåñòèÂñåõÂîñïèòàííèêîâToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void èçÌëàäøåéÃğóïïûToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void èçÑòàğøåéÃğóïïûToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void êîêëşøToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ïàëåîìåëèòToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void æåëòóõàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void òóáåğêóëåçToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void êîêëşøàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ïàëåîìåëèòToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void æåëòóõèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void òóáåğêóëåçàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ìåäîòâîäàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void èçìåíüòüÂñåÄàòûToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
