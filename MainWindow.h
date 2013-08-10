#pragma once
#include "Shlwapi.h"
#include "math.h"
#include <windows.h>
#include <iostream>


namespace PMTProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	void BW(PictureBox^  e);
	System::Drawing::Bitmap^ Pseudo(PictureBox^  e,PictureBox^  ee, int n);


	
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
		{
			InitializeComponent();
		}

	protected:
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button6;

	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;


	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;




	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->ImageLocation = L"";
			this->pictureBox1->Location = System::Drawing::Point(13, 44);
			this->pictureBox1->MaximumSize = System::Drawing::Size(600, 400);
			this->pictureBox1->MinimumSize = System::Drawing::Size(600, 400);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(600, 400);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button1->Location = System::Drawing::Point(1142, 447);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 45);
			this->button1->TabIndex = 1;
			this->button1->Text = L"EXIT";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainWindow::button1_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(920, 447);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(105, 45);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Search";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MainWindow::button6_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox2->Location = System::Drawing::Point(636, 44);
			this->pictureBox2->MaximumSize = System::Drawing::Size(600, 400);
			this->pictureBox2->MinimumSize = System::Drawing::Size(600, 400);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(600, 400);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Originalna slika";
			this->label1->Click += gcnew System::EventHandler(this, &MainWindow::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(633, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Obradjena slika";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(623, 463);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(232, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Predlaže se unos slika koje su veličine 600x400";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1031, 447);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 45);
			this->button2->TabIndex = 12;
			this->button2->Text = L"SaveImage";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainWindow::button2_Click);
			// 
			// trackBar1
			// 
			this->trackBar1->AccessibleDescription = L"1";
			this->trackBar1->AllowDrop = true;
			this->trackBar1->BackColor = System::Drawing::SystemColors::Menu;
			this->trackBar1->Location = System::Drawing::Point(509, 450);
			this->trackBar1->Maximum = 4;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(104, 45);
			this->trackBar1->TabIndex = 13;
			this->trackBar1->Value = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(517, 479);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 13);
			this->label4->TabIndex = 14;
			this->label4->Text = L"0    1     2    3     4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(342, 450);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(145, 13);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Faktor koji utiče na izbor boja";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(342, 463);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(165, 13);
			this->label6->TabIndex = 16;
			this->label6->Text = L"što je manji izlazna slika je tamnija";
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1259, 504);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MainWindow";
			this->Text = L"PMT Project";
			this->Load += gcnew System::EventHandler(this, &MainWindow::MainWindow_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


   

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		MessageBox::Show("Petar Parabucki 115/2006\n © May 2013","Tema projekta: PseudoColor", MessageBoxButtons::OK,
         MessageBoxIcon::Asterisk);
				 this->Close();
}

private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		
		openFileDialog1->Filter = "Image Files(*.BMP;*.JPG;*.PNG)|*.BMP;*.JPG;*.PNG";
		openFileDialog1->Title = "Unose se slike";
		
		if(openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
      {
			  System::IO::StreamReader ^ sr = gcnew
			  System::IO::StreamReader(openFileDialog1->FileName);
		 
			  pictureBox1->Load(openFileDialog1->FileName);
			  Pseudo(this->pictureBox1,this->pictureBox2,trackBar1->Value);
			  sr->Close();
	   }
			
		
}

private: System::Void MainWindow_Load(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	  
	  // Displays a SaveFileDialog so the user can save the Image
      // assigned to Button2.

      SaveFileDialog ^ saveFileDialog1 = gcnew SaveFileDialog();
      saveFileDialog1->Filter = "JPeg Image|*.jpg|Bitmap Image|*.bmp|Gif Image|*.gif";
      saveFileDialog1->Title = "Save an Image File";
      saveFileDialog1->ShowDialog();
      // If the file name is not an empty string, open it for saving.
      if(saveFileDialog1->FileName != "")
      {
         System::IO::FileStream ^ fs = safe_cast<System::IO::FileStream^>(saveFileDialog1->OpenFile());
         
		 System::Drawing::Image^ slika;
		 slika = Pseudo(pictureBox1,pictureBox2,trackBar1->Value);
         switch(saveFileDialog1->FilterIndex)
         {
			 
            case 1 :
				slika->Save(fs, System::Drawing::Imaging::ImageFormat::Jpeg);
				break;
            case 2 :
               slika->Save(fs, System::Drawing::Imaging::ImageFormat::Bmp);
               break;
            case 3 :
               slika->Save(fs, System::Drawing::Imaging::ImageFormat::Gif);
               break;
         }
      fs->Close();
      }
	}





};

/*
void BW( PictureBox^  e )
   {
      // Create a Bitmap object from a file.
		
      Bitmap^ myBitmap = gcnew Bitmap( "..//PMT Project//ndeda.jpg" );

      // Draw myBitmap to the screen.
	 
	  e->Image = myBitmap;
      

      // Set each pixel in myBitmap to black. 
      for ( int Xcount = 0; Xcount < myBitmap->Width; Xcount++ )
      {
         for ( int Ycount = 0; Ycount < myBitmap->Height; Ycount++ )
         {
			
			Color pixelColor = myBitmap->GetPixel( Xcount, Ycount );
			
			float fR(pixelColor.R );
			float fG(pixelColor.G );
			float fB(pixelColor.B );		
 
			float fWB = sqrt((fR * fR + fG * fG + fB * fB) /3);
			Color a = Color::FromArgb(fWB, fWB, fWB);
			myBitmap->SetPixel(Xcount, Ycount, a );			
         }
      }

      // Draw myBitmap to the screen again.
      e->Image = myBitmap;
 }
 */

System::Drawing::Bitmap^ Pseudo( PictureBox^  e , PictureBox^  ee, int n )
   {
      // Create a Bitmap object from a file.
	   Bitmap^ myBitmap = gcnew Bitmap( e->ImageLocation );
	   
      // Draw myBitmap to the screen.
	 
	  ee->Image = myBitmap;
      

      // Set each pixel in myBitmap to black. 
      for ( int Xcount = 0; Xcount < myBitmap->Width; Xcount++ )
      {
         for ( int Ycount = 0; Ycount < myBitmap->Height; Ycount++ )
         {
			
			Color pixelColor = myBitmap->GetPixel( Xcount, Ycount );
			
			Color a;
			
			
			if(pixelColor.GetBrightness() <= 0.25) {
				 a = Color::FromArgb(0,0,(pixelColor.GetBrightness()) * n * 255);
			}else if(pixelColor.GetBrightness() <= 0.5) {
				 a = Color::FromArgb(0,(pixelColor.GetBrightness() - 0.25) * n * 255,255);
			}else if(pixelColor.GetBrightness() <= 0.75) {
				 a = Color::FromArgb(0,255,(0.75 - pixelColor.GetBrightness()) * n * 255);
			}else if(pixelColor.GetBrightness() <= .99) {
				 a = Color::FromArgb((pixelColor.GetBrightness() - 0.75) * n * 255,(1.0 - pixelColor.GetBrightness()) * n * 255,0);
			}else{
				a = Color::White;
			}
			myBitmap->SetPixel(Xcount, Ycount, a );			
         }
      }

      // Draw myBitmap to the screen again.
      ee->Image = myBitmap;
	  //b->I
	  return myBitmap;
	 
	  
 }

}

