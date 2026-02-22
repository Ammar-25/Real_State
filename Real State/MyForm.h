#pragma once
#include <iostream>
#include <string>
#include "FileHandler.h"
#include "Authentication.h"
#include <msclr/marshal_cppstd.h>
#include "AdminForm.h"
#include "UserForm.h"
namespace LoginPage {
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
			//
			//TODO: Add the constructor code here
			//
            this->txtEmail->Enter += gcnew System::EventHandler(this, &MyForm::txtEmail_Enter);
            this->txtEmail->Leave += gcnew System::EventHandler(this, &MyForm::txtEmail_Leave);
            this->txtPass->Enter += gcnew System::EventHandler(this, &MyForm::txtPass_Enter);
            this->txtPass->Leave += gcnew System::EventHandler(this, &MyForm::txtPass_Leave);

            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Sizable;
            this->ControlBox = true;
            this->MinimizeBox = true;
            this->MaximizeBox = false;
            this->txtPass->Enter += gcnew System::EventHandler(this, &MyForm::txtPass_Enter);
            this->txtPass->Leave += gcnew System::EventHandler(this, &MyForm::txtPass_Leave);

		}
        //animation variable
        float speed = 20.0f;      // Starting speed
        float minSpeed = 2.0f;     // Minimum speed to reach
        float deceleration = 0.1f; // How much speed decreases every tick
        int targetX = 0;           // X position to stop at (left edge)
        int originalWidth;
        int originalHeight;
        int originalLeft;
        float acceleration = 0.5f;     // Gradually faster
        float maxSpeed = 20.0f;        // Don't go faster than 20
        int totalDistance = 0;
        bool movingBack = false;
        
    private: System::Windows::Forms::Panel^ singin_panel;
    private: System::Windows::Forms::Timer^ signup_timer;
    public:
        int originalTop;

        //*//////////////////

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

	protected:




	protected:








    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::PictureBox^ Main_BG;







    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::LinkLabel^ Signup_label;


    private: System::Windows::Forms::PictureBox^ pictureBox2;
    private: System::Windows::Forms::PictureBox^ pictureBox4;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::PictureBox^ pictureBox3;
    private: System::Windows::Forms::PictureBox^ pictureBox5;
    private: System::Windows::Forms::TextBox^ txtEmail;
    private: System::Windows::Forms::TextBox^ txtPass;
    private: System::Windows::Forms::PictureBox^ showPass;
    private: System::Windows::Forms::PictureBox^ pictureBox8;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::PictureBox^ pictureBox7;
    private: System::Windows::Forms::Button^ Loginbtn;
    private: System::Windows::Forms::Label^ label17;
    private: System::Windows::Forms::PictureBox^ pictureBox9;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::TextBox^ txtName;

    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::TextBox^ txtPhone;

    private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::TextBox^ signup_Email;

    private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::TextBox^ signup_Pass;

    private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::TextBox^ signup_Pass2;


    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::LinkLabel^ singin_label;

    private: System::Windows::Forms::Timer^ login_timer;
    private: System::ComponentModel::IContainer^ components;










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
            this->components = (gcnew System::ComponentModel::Container());
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->Main_BG = (gcnew System::Windows::Forms::PictureBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->Signup_label = (gcnew System::Windows::Forms::LinkLabel());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
            this->txtEmail = (gcnew System::Windows::Forms::TextBox());
            this->txtPass = (gcnew System::Windows::Forms::TextBox());
            this->showPass = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
            this->Loginbtn = (gcnew System::Windows::Forms::Button());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->txtName = (gcnew System::Windows::Forms::TextBox());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->txtPhone = (gcnew System::Windows::Forms::TextBox());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->signup_Email = (gcnew System::Windows::Forms::TextBox());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->signup_Pass = (gcnew System::Windows::Forms::TextBox());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->signup_Pass2 = (gcnew System::Windows::Forms::TextBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->singin_label = (gcnew System::Windows::Forms::LinkLabel());
            this->login_timer = (gcnew System::Windows::Forms::Timer(this->components));
            this->singin_panel = (gcnew System::Windows::Forms::Panel());
            this->signup_timer = (gcnew System::Windows::Forms::Timer(this->components));
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Main_BG))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->showPass))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
            this->singin_panel->SuspendLayout();
            this->SuspendLayout();
            // 
            // pictureBox1
            // 
            this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(3, 10);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(518, 456);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox1->TabIndex = 9;
            this->pictureBox1->TabStop = false;
            this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
            // 
            // Main_BG
            // 
            this->Main_BG->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->Main_BG->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Main_BG.Image")));
            this->Main_BG->Location = System::Drawing::Point(618, -2);
            this->Main_BG->Name = L"Main_BG";
            this->Main_BG->Size = System::Drawing::Size(452, 695);
            this->Main_BG->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->Main_BG->TabIndex = 13;
            this->Main_BG->TabStop = false;
            // 
            // label3
            // 
            this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
            this->label3->Location = System::Drawing::Point(68, 126);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(242, 16);
            this->label3->TabIndex = 6;
            this->label3->Text = L"Please login to continue to your account";
            // 
            // label5
            // 
            this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label5->AutoSize = true;
            this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold));
            this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(91)), static_cast<System::Int32>(static_cast<System::Byte>(91)),
                static_cast<System::Int32>(static_cast<System::Byte>(91)));
            this->label5->Location = System::Drawing::Point(131, 374);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(283, 29);
            this->label5->TabIndex = 6;
            this->label5->Text = L"------------------------------";
            // 
            // Signup_label
            // 
            this->Signup_label->ActiveLinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)),
                static_cast<System::Int32>(static_cast<System::Byte>(103)), static_cast<System::Int32>(static_cast<System::Byte>(122)));
            this->Signup_label->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->Signup_label->AutoSize = true;
            this->Signup_label->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->Signup_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
            this->Signup_label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(91)), static_cast<System::Int32>(static_cast<System::Byte>(91)),
                static_cast<System::Int32>(static_cast<System::Byte>(91)));
            this->Signup_label->LinkColor = System::Drawing::Color::Black;
            this->Signup_label->Location = System::Drawing::Point(310, 410);
            this->Signup_label->Name = L"Signup_label";
            this->Signup_label->Size = System::Drawing::Size(55, 16);
            this->Signup_label->TabIndex = 7;
            this->Signup_label->TabStop = true;
            this->Signup_label->Text = L"Sign Up";
            this->Signup_label->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::Signup_label_LinkClicked);
            // 
            // pictureBox2
            // 
            this->pictureBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(79, 177);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(369, 54);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox2->TabIndex = 10;
            this->pictureBox2->TabStop = false;
            this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
            // 
            // pictureBox4
            // 
            this->pictureBox4->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->pictureBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
            this->pictureBox4->Location = System::Drawing::Point(79, 246);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(369, 54);
            this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox4->TabIndex = 10;
            this->pictureBox4->TabStop = false;
            // 
            // label2
            // 
            this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->label2->Location = System::Drawing::Point(127, 182);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(34, 36);
            this->label2->TabIndex = 12;
            this->label2->Text = L"|";
            // 
            // label4
            // 
            this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->label4->Location = System::Drawing::Point(127, 251);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(34, 36);
            this->label4->TabIndex = 12;
            this->label4->Text = L"|";
            // 
            // pictureBox3
            // 
            this->pictureBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
            this->pictureBox3->Location = System::Drawing::Point(103, 188);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(29, 31);
            this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox3->TabIndex = 11;
            this->pictureBox3->TabStop = false;
            // 
            // pictureBox5
            // 
            this->pictureBox5->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
            this->pictureBox5->Location = System::Drawing::Point(103, 257);
            this->pictureBox5->Name = L"pictureBox5";
            this->pictureBox5->Size = System::Drawing::Size(29, 31);
            this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox5->TabIndex = 11;
            this->pictureBox5->TabStop = false;
            // 
            // txtEmail
            // 
            this->txtEmail->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->txtEmail->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->txtEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
            this->txtEmail->Location = System::Drawing::Point(153, 189);
            this->txtEmail->Name = L"txtEmail";
            this->txtEmail->Size = System::Drawing::Size(270, 21);
            this->txtEmail->TabIndex = 1;
            this->txtEmail->TextChanged += gcnew System::EventHandler(this, &MyForm::txtEmail_TextChanged);
            // 
            // txtPass
            // 
            this->txtPass->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->txtPass->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->txtPass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
            this->txtPass->Location = System::Drawing::Point(153, 260);
            this->txtPass->Name = L"txtPass";
            this->txtPass->Size = System::Drawing::Size(270, 21);
            this->txtPass->TabIndex = 2;
            this->txtPass->UseSystemPasswordChar = true;
            // 
            // showPass
            // 
            this->showPass->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->showPass->Cursor = System::Windows::Forms::Cursors::Hand;
            this->showPass->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"showPass.Image")));
            this->showPass->Location = System::Drawing::Point(397, 257);
            this->showPass->Name = L"showPass";
            this->showPass->Size = System::Drawing::Size(29, 31);
            this->showPass->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->showPass->TabIndex = 8;
            this->showPass->TabStop = false;
            this->showPass->Click += gcnew System::EventHandler(this, &MyForm::showPass_Click);
            // 
            // pictureBox8
            // 
            this->pictureBox8->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->pictureBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
            this->pictureBox8->Location = System::Drawing::Point(174, 52);
            this->pictureBox8->Name = L"pictureBox8";
            this->pictureBox8->Size = System::Drawing::Size(70, 46);
            this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox8->TabIndex = 15;
            this->pictureBox8->TabStop = false;
            // 
            // label1
            // 
            this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
            this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(91)), static_cast<System::Int32>(static_cast<System::Byte>(91)),
                static_cast<System::Int32>(static_cast<System::Byte>(91)));
            this->label1->Location = System::Drawing::Point(67, 83);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(116, 36);
            this->label1->TabIndex = 3;
            this->label1->Text = L"Sign In";
            // 
            // pictureBox7
            // 
            this->pictureBox7->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->pictureBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
            this->pictureBox7->Location = System::Drawing::Point(164, 317);
            this->pictureBox7->Name = L"pictureBox7";
            this->pictureBox7->Size = System::Drawing::Size(213, 52);
            this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox7->TabIndex = 14;
            this->pictureBox7->TabStop = false;
            // 
            // Loginbtn
            // 
            this->Loginbtn->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->Loginbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
                static_cast<System::Int32>(static_cast<System::Byte>(122)));
            this->Loginbtn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->Loginbtn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)),
                static_cast<System::Int32>(static_cast<System::Byte>(103)), static_cast<System::Int32>(static_cast<System::Byte>(122)));
            this->Loginbtn->FlatAppearance->BorderSize = 0;
            this->Loginbtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)),
                static_cast<System::Int32>(static_cast<System::Byte>(103)), static_cast<System::Int32>(static_cast<System::Byte>(122)));
            this->Loginbtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)),
                static_cast<System::Int32>(static_cast<System::Byte>(103)), static_cast<System::Int32>(static_cast<System::Byte>(122)));
            this->Loginbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->Loginbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
            this->Loginbtn->ForeColor = System::Drawing::Color::White;
            this->Loginbtn->Location = System::Drawing::Point(214, 323);
            this->Loginbtn->Name = L"Loginbtn";
            this->Loginbtn->Size = System::Drawing::Size(109, 38);
            this->Loginbtn->TabIndex = 0;
            this->Loginbtn->Text = L"Login";
            this->Loginbtn->UseVisualStyleBackColor = false;
            this->Loginbtn->Click += gcnew System::EventHandler(this, &MyForm::Loginbtn_Click);
            // 
            // label17
            // 
            this->label17->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label17->AutoSize = true;
            this->label17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(91)), static_cast<System::Int32>(static_cast<System::Byte>(91)),
                static_cast<System::Int32>(static_cast<System::Byte>(91)));
            this->label17->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
            this->label17->Location = System::Drawing::Point(172, 410);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(139, 16);
            this->label17->TabIndex = 16;
            this->label17->Text = L"Don\'t have an account";
            // 
            // pictureBox9
            // 
            this->pictureBox9->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->pictureBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->pictureBox9->Location = System::Drawing::Point(618, 135);
            this->pictureBox9->Name = L"pictureBox9";
            this->pictureBox9->Size = System::Drawing::Size(410, 435);
            this->pictureBox9->TabIndex = 17;
            this->pictureBox9->TabStop = false;
            this->pictureBox9->Click += gcnew System::EventHandler(this, &MyForm::pictureBox9_Click);
            // 
            // label6
            // 
            this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(668, 202);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(72, 28);
            this->label6->TabIndex = 0;
            this->label6->Text = L"Name:";
            this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
            // 
            // txtName
            // 
            this->txtName->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->txtName->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->txtName->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
            this->txtName->Location = System::Drawing::Point(671, 235);
            this->txtName->Name = L"txtName";
            this->txtName->Size = System::Drawing::Size(155, 21);
            this->txtName->TabIndex = 18;
            // 
            // label7
            // 
            this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->Location = System::Drawing::Point(850, 202);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(72, 28);
            this->label7->TabIndex = 0;
            this->label7->Text = L"Phone:";
            this->label7->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
            // 
            // txtPhone
            // 
            this->txtPhone->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->txtPhone->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->txtPhone->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
            this->txtPhone->Location = System::Drawing::Point(854, 232);
            this->txtPhone->Name = L"txtPhone";
            this->txtPhone->Size = System::Drawing::Size(155, 21);
            this->txtPhone->TabIndex = 18;
            // 
            // label8
            // 
            this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->Location = System::Drawing::Point(668, 272);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(72, 28);
            this->label8->TabIndex = 0;
            this->label8->Text = L"Email:";
            this->label8->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
            // 
            // signup_Email
            // 
            this->signup_Email->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->signup_Email->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->signup_Email->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
            this->signup_Email->Location = System::Drawing::Point(671, 305);
            this->signup_Email->Name = L"signup_Email";
            this->signup_Email->Size = System::Drawing::Size(291, 21);
            this->signup_Email->TabIndex = 18;
            // 
            // label9
            // 
            this->label9->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->Location = System::Drawing::Point(669, 341);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(123, 28);
            this->label9->TabIndex = 0;
            this->label9->Text = L"Password:";
            this->label9->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
            // 
            // signup_Pass
            // 
            this->signup_Pass->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->signup_Pass->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->signup_Pass->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
            this->signup_Pass->Location = System::Drawing::Point(672, 374);
            this->signup_Pass->Name = L"signup_Pass";
            this->signup_Pass->Size = System::Drawing::Size(291, 21);
            this->signup_Pass->TabIndex = 18;
            // 
            // label10
            // 
            this->label10->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label10->Location = System::Drawing::Point(669, 407);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(253, 28);
            this->label10->TabIndex = 0;
            this->label10->Text = L"Confirm Password:";
            this->label10->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
            // 
            // signup_Pass2
            // 
            this->signup_Pass2->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->signup_Pass2->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->signup_Pass2->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
            this->signup_Pass2->Location = System::Drawing::Point(672, 440);
            this->signup_Pass2->Name = L"signup_Pass2";
            this->signup_Pass2->Size = System::Drawing::Size(291, 21);
            this->signup_Pass2->TabIndex = 18;
            // 
            // button1
            // 
            this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
                static_cast<System::Int32>(static_cast<System::Byte>(122)));
            this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button1->FlatAppearance->BorderSize = 0;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
            this->button1->ForeColor = System::Drawing::SystemColors::Window;
            this->button1->Location = System::Drawing::Point(648, 480);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(361, 29);
            this->button1->TabIndex = 19;
            this->button1->Text = L"Sign Up";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // label11
            // 
            this->label11->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label11->AutoSize = true;
            this->label11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
            this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(91)), static_cast<System::Int32>(static_cast<System::Byte>(91)),
                static_cast<System::Int32>(static_cast<System::Byte>(91)));
            this->label11->Location = System::Drawing::Point(731, 156);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(204, 36);
            this->label11->TabIndex = 3;
            this->label11->Text = L"New Account";
            // 
            // label12
            // 
            this->label12->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label12->AutoSize = true;
            this->label12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(91)), static_cast<System::Int32>(static_cast<System::Byte>(91)),
                static_cast<System::Int32>(static_cast<System::Byte>(91)));
            this->label12->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
            this->label12->Location = System::Drawing::Point(734, 529);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(158, 16);
            this->label12->TabIndex = 16;
            this->label12->Text = L"Already have an account ";
            // 
            // singin_label
            // 
            this->singin_label->ActiveLinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)),
                static_cast<System::Int32>(static_cast<System::Byte>(103)), static_cast<System::Int32>(static_cast<System::Byte>(122)));
            this->singin_label->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->singin_label->AutoSize = true;
            this->singin_label->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->singin_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
            this->singin_label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(91)), static_cast<System::Int32>(static_cast<System::Byte>(91)),
                static_cast<System::Int32>(static_cast<System::Byte>(91)));
            this->singin_label->LinkColor = System::Drawing::Color::Black;
            this->singin_label->Location = System::Drawing::Point(892, 529);
            this->singin_label->Name = L"singin_label";
            this->singin_label->Size = System::Drawing::Size(47, 16);
            this->singin_label->TabIndex = 7;
            this->singin_label->TabStop = true;
            this->singin_label->Text = L"Sign In";
            this->singin_label->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::singin_label_LinkClicked);
            // 
            // login_timer
            // 
            this->login_timer->Interval = 15;
            this->login_timer->Tick += gcnew System::EventHandler(this, &MyForm::login_timer_Tick);
            // 
            // singin_panel
            // 
            this->singin_panel->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->singin_panel->Controls->Add(this->label17);
            this->singin_panel->Controls->Add(this->Loginbtn);
            this->singin_panel->Controls->Add(this->pictureBox7);
            this->singin_panel->Controls->Add(this->label1);
            this->singin_panel->Controls->Add(this->pictureBox8);
            this->singin_panel->Controls->Add(this->showPass);
            this->singin_panel->Controls->Add(this->txtPass);
            this->singin_panel->Controls->Add(this->txtEmail);
            this->singin_panel->Controls->Add(this->pictureBox5);
            this->singin_panel->Controls->Add(this->pictureBox3);
            this->singin_panel->Controls->Add(this->label4);
            this->singin_panel->Controls->Add(this->label2);
            this->singin_panel->Controls->Add(this->pictureBox4);
            this->singin_panel->Controls->Add(this->pictureBox2);
            this->singin_panel->Controls->Add(this->Signup_label);
            this->singin_panel->Controls->Add(this->label5);
            this->singin_panel->Controls->Add(this->label3);
            this->singin_panel->Controls->Add(this->pictureBox1);
            this->singin_panel->Location = System::Drawing::Point(45, 104);
            this->singin_panel->Name = L"singin_panel";
            this->singin_panel->Size = System::Drawing::Size(537, 475);
            this->singin_panel->TabIndex = 20;
            // 
            // signup_timer
            // 
            this->signup_timer->Interval = 10;
            this->signup_timer->Tick += gcnew System::EventHandler(this, &MyForm::signup_timer_Tick);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->ClientSize = System::Drawing::Size(1069, 690);
            this->Controls->Add(this->singin_panel);
            this->Controls->Add(this->label12);
            this->Controls->Add(this->singin_label);
            this->Controls->Add(this->label11);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->txtPhone);
            this->Controls->Add(this->signup_Pass2);
            this->Controls->Add(this->signup_Pass);
            this->Controls->Add(this->signup_Email);
            this->Controls->Add(this->label10);
            this->Controls->Add(this->label9);
            this->Controls->Add(this->txtName);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->pictureBox9);
            this->Controls->Add(this->Main_BG);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Name = L"MyForm";
            this->Text = L"Real Estate";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Main_BG))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->showPass))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
            this->singin_panel->ResumeLayout(false);
            this->singin_panel->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
	
	private: System::Void Loginbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Email = txtEmail->Text;
		String^ PassWord = txtPass->Text;
		std::string stdEmail = msclr::interop::marshal_as<std::string>(Email);
		std::string stdPass = msclr::interop::marshal_as<std::string>(PassWord);


		int res = Authentication::SignIn(stdEmail, stdPass);
		if (res == 0) {
            txtEmail->Clear();
            txtPass->Clear();
            this->Hide();
            if (Global::currUser.getAdmin()) {
                AdminForm^ Fadmin = gcnew AdminForm(this); // Create an instance of the welcome form
                Fadmin->ShowDialog(); // Show it modally
            }
            else {
                UserForm^ Fuser = gcnew UserForm(this); // Create an instance of the welcome form
                Fuser->ShowDialog(); // Show it modally
            }
		}
		else if (res == 1) {
			MessageBox::Show("Wrong Pass", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else{
			MessageBox::Show("Email not found", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void showPass_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtPass->UseSystemPasswordChar) {
			txtPass->UseSystemPasswordChar = false;
		}
		else {
			txtPass->UseSystemPasswordChar = true;
		}
	}
	private: System::Void txtEmail_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
   
    Main_BG->BringToFront();
    // Mortada
    txtEmail->Text = "Email";
    txtEmail->ForeColor = System::Drawing::Color::FromArgb(25, 59, 71);
    txtEmail->Font = gcnew System::Drawing::Font(txtEmail->Font, System::Drawing::FontStyle::Regular);
    txtPass->Text = "Password";
    txtPass->ForeColor = System::Drawing::Color::FromArgb(25, 59, 71);
    txtPass->Font = gcnew System::Drawing::Font(txtPass->Font, System::Drawing::FontStyle::Regular);
    txtPass->UseSystemPasswordChar = false;  // Show text normally at start

  /*  originalLeft = Main_BG->Left;
    originalTop = Main_BG->Top;
    originalWidth = Main_BG->Width;
    originalHeight = Main_BG->Height;*/
    originalLeft = Main_BG->Left;
    originalWidth = Main_BG->Width;
    originalHeight = Main_BG->Height;
    targetX = 0;  // This is usually 0 (leftmost of the form)


}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
       // ************Mortada Edits*******************
       // When the user clicks (focus) on the TextBox
private: System::Void txtEmail_Enter(System::Object^ sender, System::EventArgs^ e) {
    if (txtEmail->Text == "Email") {
        txtEmail->Text = "";
        txtEmail->ForeColor = System::Drawing::Color::Black;
        txtEmail->Font = gcnew System::Drawing::Font(txtEmail->Font, System::Drawing::FontStyle::Regular);
    }
}

       // When the user leaves the TextBox
private: System::Void txtEmail_Leave(System::Object^ sender, System::EventArgs^ e) {
    if (txtEmail->Text == "") {
        txtEmail->Text = "Email";
        txtEmail->ForeColor = System::Drawing::Color::FromArgb(25, 59, 71);
        txtEmail->Font = gcnew System::Drawing::Font(txtEmail->Font, System::Drawing::FontStyle::Regular);
    }
}

private: System::Void txtPass_Enter(System::Object^ sender, System::EventArgs^ e) {
    if (txtPass->Text == "Password") {
        txtPass->Text = "";
        txtPass->ForeColor = System::Drawing::Color::Black;
        txtPass->Font = gcnew System::Drawing::Font(txtPass->Font, System::Drawing::FontStyle::Regular);
        txtPass->UseSystemPasswordChar = true;  // Start hiding password
    }
}

       // When the user leaves the Password TextBox
private: System::Void txtPass_Leave(System::Object^ sender, System::EventArgs^ e) {
    if (txtPass->Text == "") {
        txtPass->UseSystemPasswordChar = false;  // Show text normally again
        txtPass->Text = "Password";
        txtPass->ForeColor = System::Drawing::Color::FromArgb(25, 59, 71);
        txtPass->Font = gcnew System::Drawing::Font(txtPass->Font, System::Drawing::FontStyle::Regular);
    }
}


private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Signup_label_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

    speed = 20.0f; // Reset speed on each click
    login_timer->Start();
    
}
private: System::Void login_timer_Tick(System::Object^ sender, System::EventArgs^ e) {
    // Check if Main_BG has reached the left edge of the singin_panel
    if (Main_BG->Left > singin_panel->Left)
    {
        // Move the image to the left
        Main_BG->Left -= (int)speed;

        // Smoothly slow down (ease-in)
        if (speed > minSpeed)
            speed -= deceleration;

        // Keep it vertically centered
        Main_BG->Top = originalTop + (originalHeight - Main_BG->Height) / 2;
    }
    else
    {
        // Hide the singin_panel when Main_BG reaches the left edge of the panel
        singin_panel->Visible = false;
    }

    // Stop the image when it reaches the left edge of the form
    if (Main_BG->Left > 0)  // When the left edge is still inside the form
    {
        Main_BG->Left -= (int)speed;  // Keep moving left
        // Slow down smoothly (ease-in)
        if (speed > minSpeed)
            speed -= deceleration;
    }
    else
    {
        // Stop moving once the image reaches the left edge of the form
        Main_BG->Left = 0;  // Ensure it stops exactly at the form's left edge
        login_timer->Stop(); // Stop the timer

        // Reset the Main_BG size and position to its original state
        Main_BG->Width = originalWidth;
        Main_BG->Height = originalHeight;
        Main_BG->Top = originalTop;
    }
    //if (Main_BG->Left > targetX)
    //{
    //    Main_BG->Left -= (int)speed;

    //    if (speed > minSpeed)
    //        speed -= deceleration;

    //    // Hide panel once picture passes it
    //    if (Main_BG->Right <= singin_panel->Left && singin_panel->Visible)
    //    {
    //        singin_panel->Visible = false;
    //    }
    //}
    //else
    //{
    //    login_timer->Stop();

    //    // Lock at target
    //    Main_BG->Left = targetX;
    //    Main_BG->Width = originalWidth;
    //    Main_BG->Height = originalHeight;
    //    Main_BG->Top = originalTop;

    //    speed = 2.0f; // Prepare slow speed for moving back right
    //}
}

private: System::Void singin_label_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

 /*   speed = 2.0f;
    totalDistance = originalLeft - Main_BG->Left;
    movingBack = true;
    signup_timer->Start();*/
    signup_timer->Interval = 10;  // Timer interval set to 10 ms for smoothness
    signup_timer->Start();

}


       private: System::Void signup_timer_Tick(System::Object^ sender, System::EventArgs^ e) {
           if (Main_BG->Left < originalLeft)
           {
               int traveledDistance = Main_BG->Left - targetX;
               float halfDistance = totalDistance / 2.0f;

               if (traveledDistance < halfDistance)
               {
                   // Phase 1: Accelerate
                   if (speed < maxSpeed)
                       speed += acceleration;
               }
               else
               {
                   // Phase 2: Decelerate
                   if (speed > minSpeed)
                       speed -= deceleration;
               }

               Main_BG->Left += (int)speed;

               if (Main_BG->Right >= singin_panel->Left && !singin_panel->Visible)
               {
                   singin_panel->Visible = true;
               }
           }
           else
           {
               signup_timer->Stop();
               movingBack = false;

               Main_BG->Left = originalLeft;
               Main_BG->Width = originalWidth;
               Main_BG->Height = originalHeight;
               Main_BG->Top = originalTop;

               speed = 20.0f; // prepare for next left move
           }
       
       }

    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        String^ Name = txtName->Text;
        String^ PassWord = signup_Pass->Text;
        String^ PassWord2 = signup_Pass2->Text;
        String^ Email = signup_Email->Text;
        String^ Phone = txtPhone->Text;

        std::string name = msclr::interop::marshal_as<std::string>(Name);
        std::string password = msclr::interop::marshal_as<std::string>(PassWord);
        std::string password2 = msclr::interop::marshal_as<std::string>(PassWord2);
        std::string email = msclr::interop::marshal_as<std::string>(Email);
        std::string phone = msclr::interop::marshal_as<std::string>(Phone);


        if (password != password2) {
            MessageBox::Show("Passwords do not match!", "Signup Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            int res = Authentication::SignUp(name, email, password, phone);

            switch (res) {
            case 0:
            {
                MessageBox::Show("Sign up successful! Please log in.", "Signup Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
                txtName->Clear();
                signup_Pass->Clear();
                signup_Pass2->Clear();
                signup_Email->Clear();
                txtPhone->Clear();
                signup_timer->Interval = 10;  // Timer interval set to 10 ms for smoothness
                signup_timer->Start();
                break;
            }
            case 1:
                MessageBox::Show("Password must be at least 8 characters long.", "Signup Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                break;
            case 2:
                MessageBox::Show("Email already exists. Please use a different email.", "Signup Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                break;
            default:
                MessageBox::Show("An unknown error occurred.", "Signup Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                break;
            }
        }
    }
    };
}
