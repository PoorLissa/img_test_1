#pragma once

#include <math.h>

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

			pictureBox1->Load("_img4.jpg");
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1346, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(218, 154);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(2, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(666, 666);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(674, 3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(666, 666);
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(1402, 182);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10000, 0, 0, 0});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 20);
			this->numericUpDown1->TabIndex = 3;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1346, 229);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(218, 154);
			this->button2->TabIndex = 4;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1346, 389);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(218, 154);
			this->button3->TabIndex = 5;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(1346, 549);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(218, 79);
			this->button4->TabIndex = 6;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(1346, 646);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(214, 23);
			this->progressBar1->TabIndex = 7;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1572, 677);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: 
		Void button1_Click(Object^ sender, EventArgs^ e)
		{
			button1->Enabled = false;

			Bitmap ^image1 = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
			Bitmap ^image2 = gcnew Bitmap(pictureBox2->Width, pictureBox2->Height);

			pictureBox1->DrawToBitmap(image1, pictureBox1->ClientRectangle);

			SolidBrush ^brush = gcnew SolidBrush(Color::Empty);
			Pen ^pen = gcnew Pen(Color::Empty);
			Random ^rnd = gcnew Random();

			pictureBox2->DrawToBitmap(image2, pictureBox2->ClientRectangle);
			Graphics ^g = Graphics::FromImage(image2);

			static int cnt = 0;

			int size = Convert::ToInt32(numericUpDown1->Value);

			for(int i = 0; i < 100000 * 10/size; i++)
			{
				int X = 0, Y = 0;

#if 1
				X += rnd->Next(0, image1->Width );
				Y += rnd->Next(0, image1->Height);
#else
				for(int i = 0; i < 12; i++)
				{
					X += rnd->Next(0, image1->Width );
					Y += rnd->Next(0, image1->Height);
				}

				X = (X-6) / 12;
				Y = (Y-6) / 12;
#endif
				if( X < 0 )
					X = 0;
				if( Y < 0 )
					Y = 0;
				if( X > pictureBox1->Width )
					X = pictureBox1->Width;
				if( Y > pictureBox1->Height )
					Y = pictureBox1->Height;

				Color clr = image1->GetPixel(X, Y);

				pen->Color   = clr;
				brush->Color = clr;

#if 1
				static int aaa = 1;
				double bbb = aaa*2;
				int ccc = abs(2*sin(bbb));
				int ddd = abs(2*cos(bbb));

				X += ccc - rnd->Next(0, 2*ccc);
				Y += ddd - rnd->Next(0, 2*ddd);

				aaa++;
#endif 

/*
				if( size > 1 )
					g->FillRectangle(brush, X-size/2, Y-size/2, size, size);
				else
					g->FillRectangle(brush, X, Y, 1, 1);
*/
				if( size > 1 )
					g->FillEllipse(brush, X-size/2, Y-size/2, size, size);
				else
					g->FillRectangle(brush, X, Y, 1, 1);

				if( cnt % 1000 == 0 )
				{
					pictureBox2->Image = image2;
					pictureBox2->Refresh();
				}

				cnt++;
			}

			pictureBox2->Image = image2;
			pictureBox2->Refresh();

			//pictureBox1->Image = image2;
			//pictureBox1->Refresh();

			button1->Enabled = true;

			return;
		}

		Void button2_Click(Object^ sender, EventArgs^ e)
		{
			int N = Convert::ToInt32(numericUpDown1->Value);

			button2->Enabled = false;

			Bitmap ^image1 = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
			Bitmap ^image2 = gcnew Bitmap(pictureBox2->Width, pictureBox2->Height);

			pictureBox1->DrawToBitmap(image1, pictureBox1->ClientRectangle);

			SolidBrush ^brush = gcnew SolidBrush(Color::Empty);
			Pen ^pen = gcnew Pen(Color::Empty);

			pictureBox2->Image = nullptr;

			pictureBox2->DrawToBitmap(image2, pictureBox2->ClientRectangle);
			Graphics ^g = Graphics::FromImage(image2);

			for(int i = 0; i < image1->Width; i+=N)
			{
				for(int j = 0; j < image1->Height; j+=N)
				{
					Color clr;
					int R = 0, G = 0, B = 0;

					int cnt = 0;

					for(int x = i; x < i+N; x++)
					{
						for(int y = j; y < j+N; y++)
						{
							if( x < image1->Width && y < image1->Height )
							{
								clr = image1->GetPixel(x, y);

								int r = clr.R;
								int g = clr.G;
								int b = clr.B;
/*
								int Th = 25;

								if( r < Th )
								{
									int diff = Th - r;
									r += diff*5;
								}

								if( g < Th )
								{
									int diff = Th - g;
									g += diff*5;
								}

								if( b < Th )
								{
									int diff = Th - b;
									b += diff*5;
								}
*/

/*
								int asd = (r+g+b)/3;

								//r = r > 125 ? 250 : r;
								g = g > 125 ? 250 : g;
								b = b > 125 ? 250 : b;

								r = asd;
								g = asd;
								b = asd;
*/

/*
								r += r > 100 ? 10 : -10;
								g += g > 100 ? 10 : -10;
								b += b > 100 ? 10 : -10;

								if( r < 0 ) r = 0;
								if( g < 0 ) g = 0;
								if( b < 0 ) b = 0;

								if( r > 255 ) r = 255;
								if( g > 255 ) g = 255;
								if( b > 255 ) b = 255;
*/
								R += r;
								G += g;
								B += b;

								cnt++;
							}
						}
					}

					clr = Color::FromArgb(R/cnt, G/cnt, B/cnt);

					brush->Color = clr;

					g->FillRectangle(brush, i/N, j/N, 1, 1);

					//g->FillRectangle(brush, X-size/2, Y-size/2, size, size);
					//g->FillEllipse(brush, i/N, j/N, 13, 13);
				}
			}

			pictureBox2->Image = image2;
			pictureBox2->Refresh();

			button2->Enabled = true;

			pictureBox1->Image = image2;
			pictureBox1->Refresh();

			return;
		}

		Void button3_Click(Object^ sender, EventArgs^ e)
		{
			button2->Enabled = false;

			int N = 2;

			pictureBox2->Image = nullptr;

			Bitmap ^image1 = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
			Bitmap ^image2 = gcnew Bitmap(pictureBox2->Width, pictureBox2->Height);

			pictureBox1->DrawToBitmap(image1, pictureBox1->ClientRectangle);

			SolidBrush ^brush = gcnew SolidBrush(Color::Empty);

			pictureBox2->DrawToBitmap(image2, pictureBox2->ClientRectangle);
			Graphics ^g = Graphics::FromImage(image2);

			for(int i = 0; i < image1->Width; i++)
			{
				for(int j = 0; j < image1->Height; j++)
				{
					Color clr = image1->GetPixel(i, j);
					int R = 0, G = 0, B = 0;

					brush->Color = clr;

					g->FillRectangle(brush, i*2, j*2, 2, 2);
				}
			}

			pictureBox2->Image = image2;
			pictureBox2->Refresh();

			button2->Enabled = true;

			pictureBox1->Image = image2;
			pictureBox1->Refresh();

			return;
		}

		Void button4_Click(Object^ sender, EventArgs^ e)
		{
			button4->Enabled = false;

			int N = 40;

			pictureBox2->Image = nullptr;

			pictureBox1->Width  = 333;
			pictureBox1->Height = 333;

			int w = pictureBox1->Width  * N;
			int h = pictureBox1->Height * N;

			Bitmap ^image1 = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
			Bitmap ^image2 = gcnew Bitmap(w, h);
			Bitmap ^image3 = gcnew Bitmap(pictureBox2->Width, pictureBox2->Height);

			pictureBox1->DrawToBitmap(image1, pictureBox1->ClientRectangle);

			SolidBrush ^brush = gcnew SolidBrush(Color::Empty);

			Random ^rnd = gcnew Random();

			int size = Convert::ToInt32(numericUpDown1->Value);

			size = N / 4;

			progressBar1->Value = 0;

			// enlarge N times
			{
				Graphics ^g = Graphics::FromImage(image2);

				for(int i = 0; i < image1->Width; i++)
				{
					for(int j = 0; j < image1->Height; j++)
					{
						brush->Color = image1->GetPixel(i, j);

						g->FillRectangle(brush, i*N, j*N, N, N);
					}
				}

				image2->Save("__001.bmp");
			}

			pictureBox2->Image = image2;
			pictureBox2->Refresh();

			progressBar1->Value = 0;

			// enlarge N times + random filling
			if( 1 )
			{
				Graphics ^g = Graphics::FromImage(image2);

				int CNT = N * 1000000 / 2;
				int Percent = CNT/100;

				for(int i = 0; i < CNT; i++)
				{
					if( i % Percent == 0 )
						progressBar1->Value++;

					int X = rnd->Next(0, w);
					int Y = rnd->Next(0, h);

					brush->Color = image1->GetPixel(X / N, Y / N);

					if( size > 1 )
						g->FillEllipse(brush, X-size/2, Y-size/2, size, size);
					else
						g->FillRectangle(brush, X, Y, 1, 1);
				}

				image2->Save("__002.bmp");
			}

			pictureBox2->Image = image2;
			pictureBox2->Refresh();

			progressBar1->Value = 0;

			// enlarge N times + random filling
			if( 1 )
			{
				Graphics ^g = Graphics::FromImage(image2);

				int CNT = N * 1000000 / 2;
				int Percent = CNT/100;

				size = size / 2;

				for(int i = 0; i < CNT; i++)
				{
					if( i % Percent == 0 )
						progressBar1->Value++;

					int X = rnd->Next(0, w);
					int Y = rnd->Next(0, h);

					brush->Color = image1->GetPixel(X / N, Y / N);

					if( size > 1 )
						g->FillEllipse(brush, X-size/2, Y-size/2, size, size);
					else
						g->FillRectangle(brush, X, Y, 1, 1);
				}

				image2->Save("__003.bmp");
			}

			pictureBox2->Image = image2;
			pictureBox2->Refresh();

			progressBar1->Value = 0;

			// minimize N times
			{
				Graphics ^g = Graphics::FromImage(image3);

				int CNT = image2->Width;
				N /= 2;
				int Percent = CNT/100/N;
				CNT = 0;

				for(int i = 0; i < image2->Width; i += N)
				{
					CNT++;

					if( CNT >= Percent && progressBar1->Value < 100 )
					{
						progressBar1->Value++;
						CNT = 0;
					}

					for(int j = 0; j < image2->Height; j += N)
					{
						Color clr;
						int R = 0, G = 0, B = 0;

						int cnt = 0;

						for(int x = i; x < i+N; x++)
						{
							for(int y = j; y < j+N; y++)
							{
								if( x < image2->Width && y < image2->Height )
								{
									clr = image2->GetPixel(x, y);

									int r = clr.R;
									int g = clr.G;
									int b = clr.B;

									R += r;
									G += g;
									B += b;

									cnt++;
								}
							}
						}

						brush->Color = Color::FromArgb(R/cnt, G/cnt, B/cnt);

						g->FillRectangle(brush, i/N, j/N, 1, 1);
					}
				}

				progressBar1->Value = 100;
			}

			pictureBox2->Image = image3;
			pictureBox2->Refresh();

			image3->Save("asd.bmp");

			button4->Enabled = true;

			return;
		}
	};
}
