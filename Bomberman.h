#pragma once

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
	private: System::Windows::Forms::PictureBox^ pictureBox1;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Start = (gcnew System::Windows::Forms::Button());
			this->Settings = (gcnew System::Windows::Forms::Button());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->label_ALL1 = (gcnew System::Windows::Forms::Label());
			this->button_Back = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// Start
			// 
			this->Start->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Start->BackColor = System::Drawing::SystemColors::Window;
			this->Start->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Start->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Start->Location = System::Drawing::Point(18, 280);
			this->Start->Name = L"Start";
			this->Start->Size = System::Drawing::Size(153, 35);
			this->Start->TabIndex = 1;
			this->Start->Text = L"Начать новую игру";
			this->Start->UseVisualStyleBackColor = false;
			this->Start->Click += gcnew System::EventHandler(this, &MyForm::button_Start_Click);
			// 
			// Settings
			// 
			this->Settings->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Settings->BackColor = System::Drawing::SystemColors::Window;
			this->Settings->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Settings->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Settings->Location = System::Drawing::Point(18, 321);
			this->Settings->Name = L"Settings";
			this->Settings->Size = System::Drawing::Size(153, 35);
			this->Settings->TabIndex = 2;
			this->Settings->Text = L"Настройки";
			this->Settings->UseVisualStyleBackColor = false;
			this->Settings->Click += gcnew System::EventHandler(this, &MyForm::button_Settings_Click);
			// 
			// Exit
			// 
			this->Exit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Exit->BackColor = System::Drawing::SystemColors::Window;
			this->Exit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Exit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Exit->Location = System::Drawing::Point(18, 362);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(153, 35);
			this->Exit->TabIndex = 3;
			this->Exit->Text = L"Выход";
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &MyForm::button_Exit_Click);
			// 
			// label_ALL1
			// 
			this->label_ALL1->AutoSize = true;
			this->label_ALL1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_ALL1->Location = System::Drawing::Point(12, 213);
			this->label_ALL1->Name = L"label_ALL1";
			this->label_ALL1->Size = System::Drawing::Size(167, 36);
			this->label_ALL1->TabIndex = 4;
			this->label_ALL1->Text = L"label_ALL1";
			this->label_ALL1->Visible = false;
			// 
			// button_Back
			// 
			this->button_Back->BackColor = System::Drawing::SystemColors::Window;
			this->button_Back->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button_Back->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_Back->Location = System::Drawing::Point(18, 423);
			this->button_Back->Name = L"button_Back";
			this->button_Back->Size = System::Drawing::Size(82, 28);
			this->button_Back->TabIndex = 5;
			this->button_Back->Text = L"Назад";
			this->button_Back->UseVisualStyleBackColor = false;
			this->button_Back->Visible = false;
			this->button_Back->Click += gcnew System::EventHandler(this, &MyForm::button_Back_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"super-bomberman-r-online.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(962, 516);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(962, 516);
			this->Controls->Add(this->button_Back);
			this->Controls->Add(this->label_ALL1);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->Settings);
			this->Controls->Add(this->Start);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"Bomberman";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

}
	   //button 2
private: System::Void button_Settings_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Text = "Скоро будет";
	label_ALL1->Text = Text;
	label_ALL1->Visible = true;
	button_Back->Visible = true;
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
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
