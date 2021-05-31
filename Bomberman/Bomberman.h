#pragma once
#include "MyForm1.h"

namespace Bomberman {

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

	private: System::Windows::Forms::Button^ Start;
	protected:

	private: System::Windows::Forms::Button^ Settings;

	private: System::Windows::Forms::Button^ Exit;
	private: System::Windows::Forms::Label^ label_ALL1;

	private: System::Windows::Forms::Button^ button_Back;









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
		void InitializeComponent(void)
		{
			this->Start = (gcnew System::Windows::Forms::Button());
			this->Settings = (gcnew System::Windows::Forms::Button());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->label_ALL1 = (gcnew System::Windows::Forms::Label());
			this->button_Back = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Start
			// 
			this->Start->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->Start->BackColor = System::Drawing::SystemColors::Window;
			this->Start->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Start->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Start->Location = System::Drawing::Point(14, 228);
			this->Start->Margin = System::Windows::Forms::Padding(2);
			this->Start->Name = L"Start";
			this->Start->Size = System::Drawing::Size(115, 28);
			this->Start->TabIndex = 1;
			this->Start->Text = L"Начать новую игру";
			this->Start->UseVisualStyleBackColor = false;
			this->Start->Click += gcnew System::EventHandler(this, &MyForm::button_Start_Click);
			// 
			// Settings
			// 
			this->Settings->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->Settings->BackColor = System::Drawing::SystemColors::Window;
			this->Settings->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Settings->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Settings->Location = System::Drawing::Point(14, 261);
			this->Settings->Margin = System::Windows::Forms::Padding(2);
			this->Settings->Name = L"Settings";
			this->Settings->Size = System::Drawing::Size(115, 28);
			this->Settings->TabIndex = 2;
			this->Settings->Text = L"Настройки";
			this->Settings->UseVisualStyleBackColor = false;
			this->Settings->Click += gcnew System::EventHandler(this, &MyForm::button_Settings_Click);
			// 
			// Exit
			// 
			this->Exit->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->Exit->BackColor = System::Drawing::SystemColors::Window;
			this->Exit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Exit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Exit->Location = System::Drawing::Point(14, 294);
			this->Exit->Margin = System::Windows::Forms::Padding(2);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(115, 28);
			this->Exit->TabIndex = 3;
			this->Exit->Text = L"Выход";
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &MyForm::button_Exit_Click);
			// 
			// label_ALL1
			// 
			this->label_ALL1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label_ALL1->AutoSize = true;
			this->label_ALL1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_ALL1->Location = System::Drawing::Point(9, 173);
			this->label_ALL1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_ALL1->Name = L"label_ALL1";
			this->label_ALL1->Size = System::Drawing::Size(133, 29);
			this->label_ALL1->TabIndex = 4;
			this->label_ALL1->Text = L"label_ALL1";
			this->label_ALL1->Visible = false;
			// 
			// button_Back
			// 
			this->button_Back->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->button_Back->BackColor = System::Drawing::SystemColors::Window;
			this->button_Back->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button_Back->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_Back->Location = System::Drawing::Point(14, 344);
			this->button_Back->Margin = System::Windows::Forms::Padding(2);
			this->button_Back->Name = L"button_Back";
			this->button_Back->Size = System::Drawing::Size(62, 23);
			this->button_Back->TabIndex = 5;
			this->button_Back->Text = L"Назад";
			this->button_Back->UseVisualStyleBackColor = false;
			this->button_Back->Visible = false;
			this->button_Back->Click += gcnew System::EventHandler(this, &MyForm::button_Back_Click);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(722, 419);
			this->Controls->Add(this->button_Back);
			this->Controls->Add(this->label_ALL1);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->Settings);
			this->Controls->Add(this->Start);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"Bomberman";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

}
	   //button 2
private: System::Void button_Settings_Click(System::Object^ sender, System::EventArgs^ e) {
	//this->Text = "Скоро будет";
	label_ALL1->Text = Text;
	label_ALL1->Visible = true;
	button_Back->Visible = true;
	
	//string f2; 
	MyForm1^ f2 = gcnew MyForm1(); //Создаем новый экземпляр
	f2->Show(); //Открываем новую форму
	MyForm::Hide(); //Скрываем страрую форму

}
	   //button 1
private: System::Void button_Start_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Text = "Запуск игры";
	label_ALL1->Text = Text; 
	label_ALL1->Visible = true;
	button_Back->Visible = true; 	 
}
	   //button 3
private: System::Void button_Exit_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void button_Back_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Text = " "; 
	label_ALL1->Text = Text;
	label_ALL1->Visible = false;
	button_Back->Visible = false;
}

};
}

