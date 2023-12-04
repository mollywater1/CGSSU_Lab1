#pragma once

namespace Loginov {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	float lines[] = {
		4.f,1.f,5.f,3.f,
		4.f,1.f,3.f,4.f,
		3.f,4.f,2.f,6.f,
		2.f,6.f,1.f,10.f,
		1.f,10.f,1.f,13.f,
		1.f,13.f,2.f,14.f,
		2.f,14.f,6.f,14.f,
		6.f,14.f,7.f,13.f,
		6.7f,8.f,7.f,10.f,
		3.f,14.f,2.f,15.f,
		2.f,15.f,1.f,17.f,
		1.f,17.f,1.f,20.f,
		1.f,20.f,2.f,18.f,
		2.f,18.f,3.f,15.f,
		3.f,15.f,4.f,16.f,
		4.f,16.f,5.f,14.f,
		3.f,6.f,4.f,6.f,
		5.f,8.f,6.f,8.f,
		2.f,9.f,3.f,9.f,
		3.f,11.f,4.f,11.f,
		2.f,13.f,3.f,13.f,
		5.f,3.f,4.f,5.f,
		4.f,5.f,5.f,7.f,
		5.f,7.f,7.f,8.f,
		7.f,8.f,8.f,8.f,
		8.f,8.f,10.f,7.f,
		10.f,7.f,9.f,5.f,
		9.f,5.f,10.7f,6.f,
		10.7f,6.f,11.f,5.f,
		11.f,5.f,9.f,4.f,
		9.f,4.f,7.f,4.f,
		8.f,4.f,9.f,6.f,
		9.f,6.f,7.f,8.f,
		5.f,3.f,6.f,1.f,
		6.f,1.f,8.f,1.f,
		8.f,1.f,15.f,2.f,
		15.f,2.f,11.f,5.f,
		15.f,2.f,16.f,2.f,
		16.f,2.f,17.f,3.f,
		17.f,3.f,18.f,2.f,
		18.f,2.f,20.f,3.f,
		20.f,3.f,20.f,6.f,
		20.f,6.f,18.f,7.f,
		18.f,7.f,17.f,6.f,
		17.f,6.f,17.f,7.f,
		17.f,7.f,13.f,7.f,
		13.f,7.f,10.f,8.f,
		11.f,5.f,10.f,8.f,
		17.f,7.f,15.f,13.f,
		15.f,13.f,11.f,12.f,
		11.f,12.f,10.f,10.f,
		10.f,10.f,12.f,11.f,
		10.f,10.f,7.f,13.f,
		7.f,13.f,5.f,13.f,
		5.f,13.f,5.f,12.f,
		5.f,12.f,4.f,11.f,
		4.f,11.f,4.f,10.f,
		4.f,10.f,5.f,9.f,
		5.f,9.f,7.f,10.f,
		7.f,10.f,11.f,8.f,
		11.f,8.f,13.f,9.f,
		13.f,9.f,14.f,10.f,
		13.f,9.f,11.f,10.5f,
		10.f,8.f,9.8f,8.5f,
		11.f,12.f,6.f,15.f,
		6.f,15.f,5.f,16.f,
		5.f,16.f,5.f,17.f,
		5.f,17.f,11.f,20.f,
		11.f,20.f,13.f,20.f,
		13.f,20.f,12.f,24.f,
		12.f,24.f,11.f,25.f,
		11.f,25.f,9.f,25.f,
		9.f,25.f,5.f,21.f,
		5.f,21.f,4.f,17.f,
		4.f,17.f,6.f,20.f,
		6.f,20.f,10.f,22.f,
		6.f,20.f,10.5f,21.f,
		10.f,22.f,11.f,20.f,
		13.f,19.f,14.f,21.f,
		14.f,21.f,16.f,23.f,
		13.f,20.f,13.5,20.f,
		7.f,13.f,8.f,13.f,
		8.f,13.f,10.f,11.f,
		10.f,11.f,10.f,10.f,
		10.f,11.f,11.f,12.f,
		16.f,23.f,20.f,18.f,
		20.f,18.f,17.f,12.f,
		17.f,12.f,16.f,18.f,
		16.f,18.f,13.f,17.f,
		15.f,13.f,16.f,16.f,
		16.f,16.f,15.2f,17.5f,
		16.f,18.f,16.f,20.f,
		12.f,16.f,14.f,14.f,
		13.f,15.f,12.f,14.f,
		12.f,14.f,9.f,13.f,
		12.f,14.f,12.f,13.f,
		12.f,13.f,10.f,13.f,
		11.f,13.f,11.f,13.5f,
		10.f,13.f,10.f,13.2f,
		11.f,16.f,9.f,18.f,
		11.f, 16.f,12.5f,17.5f,
		12.f,17.f,12.f,19.f,
		12.f, 19.f,11.f,19.f,
		11.f, 19.f,9.5f,17.5f,
		9.5f, 17.5f,11.5f,19.5f,
		12.f,19.f,12.5f,19.5f,
		12.f,18.f,12.5f,18.5f,
		6.f,15.f,7.f,18.f,
		11.f,19.f,11.f,17.f,
		11.f,17.f,10.f,17.f

	};

	unsigned int arrayLength = sizeof(lines) / sizeof(float);

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

	protected:

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
			this->SuspendLayout();
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->DoubleBuffered = true;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
			this->Resize += gcnew System::EventHandler(this, &MyForm::MyForm_Resize);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void MyForm_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		Graphics^ g = e->Graphics;
		g->Clear(Color::Aquamarine);
		Pen^ redPen = gcnew Pen(Color::Red);
		redPen->Width = 6;
		g->DrawLine(redPen, 0, 0,this->ClientRectangle.Width,this->ClientRectangle.Height);
		Pen^ bluePen = gcnew Pen(Color::Blue, 10);
		g->DrawLine(bluePen, 90, 50, ClientRectangle.Width, 80);
		SolidBrush^ drawBrush = gcnew SolidBrush(Color::Black);
		System::Drawing::Font^ drawFont = gcnew System::Drawing::Font("Arial", 10);
		g->DrawString("Надпись на форме", drawFont, drawBrush, 40, 100);
		Pen^ greenPen = gcnew Pen(Color::Green, 5);
		g->DrawLine(greenPen, 0, ClientRectangle.Height / 3, ClientRectangle.Width * 2 / 3, 0);
		g->DrawLine(greenPen, ClientRectangle.Width * 2 / 3, 0,ClientRectangle.Width,ClientRectangle.Height*2/3);
		g->DrawLine(greenPen, ClientRectangle.Width, ClientRectangle.Height * 2 / 3,ClientRectangle.Width/3,ClientRectangle.Height);
		g->DrawLine(greenPen, ClientRectangle.Width / 3, ClientRectangle.Height, 0, ClientRectangle.Height / 3);





	}
	private: System::Void MyForm_Resize(System::Object^  sender, System::EventArgs^  e) {
		Refresh();
	}
	};
}
