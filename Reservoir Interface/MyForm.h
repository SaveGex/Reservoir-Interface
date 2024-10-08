#pragma once
#include <string>
namespace ReservoirInterface {

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
	private: System::Windows::Forms::PrintDialog^ printDialog1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ToolStripMenuItem^ seaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pondToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ poolToolStripMenuItem;

	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem4;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox8;




















	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->seaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pondToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->poolToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip1->SuspendLayout();
			this->contextMenuStrip2->SuspendLayout();
			this->SuspendLayout();
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(135, 326);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(180, 65);
			this->button1->TabIndex = 0;
			this->button1->Text = L"ќбчислити";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 72);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(105, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 25);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Width";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 128);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(105, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 155);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 25);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Length";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(12, 183);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(105, 20);
			this->textBox3->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(376, 155);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 25);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Length";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(335, 183);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(105, 20);
			this->textBox4->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(376, 100);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 25);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Width";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(335, 128);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(105, 20);
			this->textBox5->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(376, 44);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(64, 25);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Name";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(335, 72);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(105, 20);
			this->textBox6->TabIndex = 7;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label7->Location = System::Drawing::Point(12, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(128, 25);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Reservoir 1";
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label8->Location = System::Drawing::Point(312, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(128, 25);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Reservoir 2";
			this->label8->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// seaToolStripMenuItem
			// 
			this->seaToolStripMenuItem->Name = L"seaToolStripMenuItem";
			this->seaToolStripMenuItem->Size = System::Drawing::Size(77, 22);
			this->seaToolStripMenuItem->Text = L"Sea";
			this->seaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::seaToolStripMenuItem_Click);
			// 
			// pondToolStripMenuItem
			// 
			this->pondToolStripMenuItem->Name = L"pondToolStripMenuItem";
			this->pondToolStripMenuItem->Size = System::Drawing::Size(77, 22);
			this->pondToolStripMenuItem->Text = L"Pond";
			this->pondToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::pondToolStripMenuItem_Click);
			// 
			// poolToolStripMenuItem
			// 
			this->poolToolStripMenuItem->Name = L"poolToolStripMenuItem";
			this->poolToolStripMenuItem->Size = System::Drawing::Size(77, 22);
			this->poolToolStripMenuItem->Text = L"Pool";
			this->poolToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::poolToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->AllowDrop = true;
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->seaToolStripMenuItem,
					this->pondToolStripMenuItem, this->poolToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->ShowImageMargin = false;
			this->contextMenuStrip1->Size = System::Drawing::Size(78, 70);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(14, 256);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(145, 17);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Type of water surface";
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label11->ContextMenuStrip = this->contextMenuStrip2;
			this->label11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label11->Location = System::Drawing::Point(335, 283);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(105, 20);
			this->label11->TabIndex = 18;
			this->label11->Text = L"Click me";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->AllowDrop = true;
			this->contextMenuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripMenuItem1,
					this->toolStripMenuItem3, this->toolStripMenuItem4
			});
			this->contextMenuStrip2->Name = L"contextMenuStrip1";
			this->contextMenuStrip2->ShowImageMargin = false;
			this->contextMenuStrip2->Size = System::Drawing::Size(78, 70);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(77, 22);
			this->toolStripMenuItem1->Text = L"Sea";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem1_Click);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(77, 22);
			this->toolStripMenuItem3->Text = L"Pond";
			this->toolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem3_Click);
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(77, 22);
			this->toolStripMenuItem4->Text = L"Pool";
			this->toolStripMenuItem4->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem4_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(303, 256);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(145, 17);
			this->label12->TabIndex = 17;
			this->label12->Text = L"Type of water surface";
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label10->ContextMenuStrip = this->contextMenuStrip1;
			this->label10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label10->Location = System::Drawing::Point(12, 283);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(105, 20);
			this->label10->TabIndex = 16;
			this->label10->Text = L"Click me";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(12, 206);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(102, 25);
			this->label13->TabIndex = 20;
			this->label13->Text = L"Max Deep";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(12, 234);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(105, 20);
			this->textBox7->TabIndex = 19;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(338, 206);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(102, 25);
			this->label14->TabIndex = 22;
			this->label14->Text = L"Max Deep";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(335, 234);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(105, 20);
			this->textBox8->TabIndex = 21;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(452, 403);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->contextMenuStrip1->ResumeLayout(false);
			this->contextMenuStrip2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void seaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pondToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void poolToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void toolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void toolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e);
};
}
