#pragma once
#include"Bomberman.h"
//#include <SFML/Graphics.hpp> 
namespace Bomberman {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TrackBar^ TrackBar;
	protected:

	protected:

	private: System::Windows::Forms::Label^ Volume;

	protected:

	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ Language;
	private: System::Windows::Forms::Button^ Cancellation;
	private: System::Windows::Forms::Button^ Apply;





	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->TrackBar = (gcnew System::Windows::Forms::TrackBar());
			this->Volume = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->Language = (gcnew System::Windows::Forms::Label());
			this->Cancellation = (gcnew System::Windows::Forms::Button());
			this->Apply = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TrackBar))->BeginInit();
			this->SuspendLayout();
			// 
			// TrackBar
			// 
			this->TrackBar->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->TrackBar->Location = System::Drawing::Point(164, 44);
			this->TrackBar->Name = L"TrackBar";
			this->TrackBar->Size = System::Drawing::Size(289, 45);
			this->TrackBar->TabIndex = 0;
			// 
			// Volume
			// 
			this->Volume->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->Volume->AutoSize = true;
			this->Volume->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Volume->Location = System::Drawing::Point(12, 44);
			this->Volume->Name = L"Volume";
			this->Volume->Size = System::Drawing::Size(136, 29);
			this->Volume->TabIndex = 1;
			this->Volume->Text = L"√ромкость";
			// 
			// listBox1
			// 
			this->listBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->listBox1->ItemHeight = 29;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"–усский", L"јнглийский" });
			this->listBox1->Location = System::Drawing::Point(164, 95);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(289, 29);
			this->listBox1->TabIndex = 2;
			//this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::listBox1_SelectedIndexChanged);
			// 
			// Language
			// 
			this->Language->AutoSize = true;
			this->Language->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Language->Location = System::Drawing::Point(12, 95);
			this->Language->Name = L"Language";
			this->Language->Size = System::Drawing::Size(71, 29);
			this->Language->TabIndex = 3;
			this->Language->Text = L"язык";
			// 
			// Cancellation
			// 
			this->Cancellation->Location = System::Drawing::Point(477, 309);
			this->Cancellation->Name = L"Cancellation";
			this->Cancellation->Size = System::Drawing::Size(106, 27);
			this->Cancellation->TabIndex = 5;
			this->Cancellation->Text = L"ќтмена";
			this->Cancellation->UseVisualStyleBackColor = true;
			this->Cancellation->Click += gcnew System::EventHandler(this, &MyForm1::Cancellation_Click);
			// 
			// Apply
			// 
			this->Apply->Location = System::Drawing::Point(365, 309);
			this->Apply->Name = L"Apply";
			this->Apply->Size = System::Drawing::Size(106, 27);
			this->Apply->TabIndex = 5;
			this->Apply->Text = L"ѕрименить";
			this->Apply->UseVisualStyleBackColor = true;
			this->Apply->Click += gcnew System::EventHandler(this, &MyForm1::Apply_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(601, 349);
			this->Controls->Add(this->Apply);
			this->Controls->Add(this->Cancellation);
			this->Controls->Add(this->Language);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->Volume);
			this->Controls->Add(this->TrackBar);
			this->Name = L"MyForm1";
			this->Text = L"Setting";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TrackBar))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void Cancellation_Click(System::Object^ sender, System::EventArgs^ e)
	{
		
	}
private: System::Void Apply_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	MyForm1^ f3 = gcnew MyForm1(); //—оздаем новый экземпл€р
	f3->Show(); //ќткрываем новую форму
	MyForm1::Hide(); //—крываем страрую форму
	}

};
}