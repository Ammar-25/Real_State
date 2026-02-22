
#pragma once
#include "Global.h"
#include <msclr/marshal_cppstd.h>
using namespace msclr::interop;
#include <sstream>

namespace LoginPage {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for AdminForm
    /// </summary>
    public ref class AdminForm : public System::Windows::Forms::Form
    {



        //// ammar's panels
        Panel^ CreateUserPanel(String^ id, String^ email, String^ name, int balance , bool isFrozen) {
            Panel^ panel5 = gcnew Panel();

            // 
            // panel5
            // 
            if (isFrozen) {
                panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
                    static_cast<System::Int32>(static_cast<System::Byte>(122)));
            }
            else {
                panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
                    static_cast<System::Int32>(static_cast<System::Byte>(105)));
            }
            panel5->Location = System::Drawing::Point(3, 3);
            panel5->Name = L"panel5";
            panel5->Size = System::Drawing::Size(825, 130);
            panel5->TabIndex = 4;
            // 
            // button13
            // 

            Button^ button13 = gcnew Button();

            button13->BackColor = System::Drawing::Color::CadetBlue;
            button13->Cursor = System::Windows::Forms::Cursors::Hand;
            button13->FlatAppearance->BorderSize = 0;
            button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
            button13->ForeColor = System::Drawing::Color::WhiteSmoke;
            button13->Location = System::Drawing::Point(703, 9);
            button13->Name = L"button13";
            button13->Size = System::Drawing::Size(111, 30);
            button13->TabIndex = 18;
            button13->Text = L"DETAILS";
            button13->UseVisualStyleBackColor = false;
            button13->Tag = id;
            button13->Click += gcnew System::EventHandler(this, &AdminForm::User_moreDetails_Click);
            // 
            // pictureBox23
            // 

            PictureBox^ pictureBox23 = gcnew PictureBox();

            pictureBox23->Cursor = System::Windows::Forms::Cursors::Hand;
            if (isFrozen) {
                pictureBox23->Image = Image::FromFile("E:\\2nd FCIS\\Fourth term\\Data Structure\\Project\\Project Versions\\V4\\Login_Page\\imgs\\snow.png");
            }
            else {
                pictureBox23->Image = Image::FromFile("E:\\2nd FCIS\\Fourth term\\Data Structure\\Project\\Project Versions\\V4\\Login_Page\\imgs\\unfreeze.png");
            }
            pictureBox23->Location = System::Drawing::Point(720, 45);
            pictureBox23->Name = L"pictureBox23";
            pictureBox23->Size = System::Drawing::Size(94, 67);
            pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            pictureBox23->TabIndex = 1;
            pictureBox23->TabStop = false;
            pictureBox23->Tag = id;
            pictureBox23->Click += gcnew System::EventHandler(this, &AdminForm::Toggle_freeze_Click);
            
            
            // 
            // Balancelbl
            // 
            Label^ Balancelbl = gcnew Label();

            Balancelbl->AutoSize = true;
            Balancelbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            Balancelbl->ForeColor = System::Drawing::Color::White;
            Balancelbl->Location = System::Drawing::Point(346, 70);
            Balancelbl->Name = L"Balancelbl";
            Balancelbl->Size = System::Drawing::Size(83, 20);
            Balancelbl->TabIndex = 3;
            Balancelbl->Text = L"Balance: $ " + balance.ToString("N0");
            // 
            // Emaillbl
            // 
            Label^ Emaillbl = gcnew Label();
            Emaillbl->AutoSize = true;
            Emaillbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            Emaillbl->ForeColor = System::Drawing::Color::White;
            Emaillbl->Location = System::Drawing::Point(346, 21);
            Emaillbl->Name = L"Emaillbl";
            Emaillbl->Size = System::Drawing::Size(68, 20);
            Emaillbl->TabIndex = 3;
            Emaillbl->Text = L"Email: " + email;
            // 
            // id2lbl
            // 
            Label^ id2lbl = gcnew Label();
            id2lbl->AutoSize = true;
            id2lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            id2lbl->ForeColor = System::Drawing::Color::White;
            id2lbl->Location = System::Drawing::Point(17, 69);
            id2lbl->Name = L"id2lbl";
            id2lbl->Size = System::Drawing::Size(36, 20);
            id2lbl->TabIndex = 3;
            id2lbl->Text = L"Id: " + id + (isFrozen ? "  (Frozen)" : "  (Not Frozen)");
            // 
            // Namelbl
            // 
            Label^ Namelbl = gcnew Label();
            Namelbl->AutoSize = true;
            Namelbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            Namelbl->ForeColor = System::Drawing::Color::White;
            Namelbl->Location = System::Drawing::Point(17, 20);
            Namelbl->Name = L"Namelbl";
            Namelbl->Size = System::Drawing::Size(69, 20);
            Namelbl->TabIndex = 3;
            Namelbl->Text = L"Name: " + name;



            panel5->Controls->Add(button13);
            panel5->Controls->Add(pictureBox23);
            panel5->Controls->Add(Balancelbl);
            panel5->Controls->Add(Emaillbl);
            panel5->Controls->Add(id2lbl);
            panel5->Controls->Add(Namelbl);


            return panel5;

        }




        Panel^ CreatePropertyPendingPanel(String^ id , String^ ownerName , String^ type , int price) {
            Panel^ panel4 = gcnew Panel();

            // 
            // panel4
            // 
            panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
                static_cast<System::Int32>(static_cast<System::Byte>(122)));
            
            panel4->Location = System::Drawing::Point(3, 3);
            panel4->Name = L"panel4";
            panel4->Size = System::Drawing::Size(799, 127);
            panel4->TabIndex = 2;
            // 
            // Price
            //
            Label^ Price = gcnew Label();
            Price->AutoSize = true;
            Price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            Price->ForeColor = System::Drawing::Color::White;
            Price->Location = System::Drawing::Point(405, 72);
            Price->Name = L"Price";
            Price->Size = System::Drawing::Size(59, 20);
            Price->TabIndex = 3;
            Price->Text = L"Price: " + "$ " + price.ToString("N0");
            Price->Click += gcnew System::EventHandler(this, &AdminForm::label41_Click);
            // 
            // Rejectbtn
            // 
            Button^ Rejectbtn = gcnew Button();
            Rejectbtn->BackColor = System::Drawing::Color::Crimson;
            Rejectbtn->Cursor = System::Windows::Forms::Cursors::Hand;
            Rejectbtn->FlatAppearance->BorderSize = 0;
            Rejectbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            Rejectbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
            Rejectbtn->ForeColor = System::Drawing::Color::WhiteSmoke;
            Rejectbtn->Location = System::Drawing::Point(654, 81);
            Rejectbtn->Name = L"Rejectbtn";
            Rejectbtn->Size = System::Drawing::Size(113, 30);
            Rejectbtn->TabIndex = 17;
            Rejectbtn->Text = L"REJECT";
            Rejectbtn->UseVisualStyleBackColor = false;
            Rejectbtn->Tag = id;
            Rejectbtn->Click += gcnew System::EventHandler(this, &AdminForm::Rejectbtn_Click);
            
            // 
            // Type
            // 
            Label^ Type = gcnew Label();

            Type->AutoSize = true;
            Type->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            Type->ForeColor = System::Drawing::Color::White;
            Type->Location = System::Drawing::Point(405, 23);
            Type->Name = L"Type";
            Type->Size = System::Drawing::Size(61, 20);
            Type->TabIndex = 3;
            Type->Text = L"Type:  " + type;
            Type->Click += gcnew System::EventHandler(this, &AdminForm::label43_Click);
            // 
            // Id
            // 
            Label^ Id = gcnew Label();
            Id->AutoSize = true;
            Id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            Id->ForeColor = System::Drawing::Color::White;
            Id->Location = System::Drawing::Point(17, 69);
            Id->Name = L"Id";
            Id->Size = System::Drawing::Size(36, 20);
            Id->TabIndex = 3;
            Id->Text = L"Id: " + id;
            // 
            // AprroveBtn
            //
            Button^ AprroveBtn = gcnew Button();
            AprroveBtn->BackColor = System::Drawing::Color::MediumSeaGreen;
            AprroveBtn->Cursor = System::Windows::Forms::Cursors::Hand;
            AprroveBtn->FlatAppearance->BorderSize = 0;
            AprroveBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            AprroveBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            AprroveBtn->ForeColor = System::Drawing::Color::WhiteSmoke;
            AprroveBtn->Location = System::Drawing::Point(654, 46);
            AprroveBtn->Name = L"AprroveBtn";
            AprroveBtn->Size = System::Drawing::Size(111, 30);
            AprroveBtn->TabIndex = 16;
            AprroveBtn->Text = L"APPROVE";
            AprroveBtn->UseVisualStyleBackColor = false;
            AprroveBtn->Tag = id;
            AprroveBtn->Click += gcnew System::EventHandler(this, &AdminForm::AprroveBtn_Click);

            // 
            // NameLbL
            // 
            Label^ NameLbL = gcnew Label();
            NameLbL->AutoSize = true;
            NameLbL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            NameLbL->ForeColor = System::Drawing::Color::White;
            NameLbL->Location = System::Drawing::Point(17, 20);
            NameLbL->Name = L"NameLbL";
            NameLbL->Size = System::Drawing::Size(129, 20);
            NameLbL->TabIndex = 3;
            NameLbL->Text = L"Owner Name:  " + ownerName;
            // 
            // DetailsBtn
            // 
            Button^ DetailsBtn = gcnew Button();

            DetailsBtn->BackColor = System::Drawing::Color::CadetBlue;
            DetailsBtn->Cursor = System::Windows::Forms::Cursors::Hand;
            DetailsBtn->FlatAppearance->BorderSize = 0;
            DetailsBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            DetailsBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
            DetailsBtn->ForeColor = System::Drawing::Color::WhiteSmoke;
            DetailsBtn->Location = System::Drawing::Point(654, 9);
            DetailsBtn->Name = L"DetailsBtn";
            DetailsBtn->Size = System::Drawing::Size(111, 30);
            DetailsBtn->TabIndex = 15;
            DetailsBtn->Text = L"DETAILS";
            DetailsBtn->UseVisualStyleBackColor = false;
            DetailsBtn->Tag = id;
            DetailsBtn->Click += gcnew EventHandler(this, &AdminForm::DetailsButton_Click2);



            panel4->Controls->Add(Price);
            panel4->Controls->Add(Rejectbtn);
            panel4->Controls->Add(Type);
            panel4->Controls->Add(Id);
            panel4->Controls->Add(AprroveBtn);
            panel4->Controls->Add(NameLbL);
            panel4->Controls->Add(DetailsBtn);


            return panel4;
        }


        Panel^ CreatePropertyBrowsePanel(String^ id, String^ type, String^ ownerName , int price, bool highlighted) {



            Panel^ panel7 = gcnew Panel();
            
            if (highlighted) {
                panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
                    static_cast<System::Int32>(static_cast<System::Byte>(105)));
               
            }
            else {
                panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
                    static_cast<System::Int32>(static_cast<System::Byte>(122)));
            }
            panel7->Location = System::Drawing::Point(273, 24);
            panel7->Name = L"panel7";
            panel7->Size = System::Drawing::Size(779, 119);
            panel7->TabIndex = 5;




            // 
            // label70
            //
            // 

            Label^ label70 = gcnew Label();

            label70->AutoSize = true;
            label70->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            label70->ForeColor = System::Drawing::Color::White;
            label70->Location = System::Drawing::Point(47, 61);
            label70->Name = L"label70";
            label70->Size = System::Drawing::Size(300, 300);
            label70->TabIndex = 4;
            label70->Text = id + (highlighted ? " (Highlighted)" : " (NOT Highlighted)");


            // 
            // pictureBox14
            // 
            PictureBox^ pictureBox14 = gcnew PictureBox();
            pictureBox14->Cursor = System::Windows::Forms::Cursors::Hand;

            // path for highlighted lamp
            if (highlighted) {
                pictureBox14->Image = Image::FromFile("E:\\2nd FCIS\\Fourth term\\Data Structure\\Project\\Project Versions\\V4\\Login_Page\\imgs\\desk-lamp.png");
            }
            else {
                // unhighlighted
                pictureBox14->Image = Image::FromFile("E:\\2nd FCIS\\Fourth term\\Data Structure\\Project\\Project Versions\\V4\\Login_Page\\imgs\\desk-lamp2.png");
            }

            pictureBox14->Location = System::Drawing::Point(512, 2);
            pictureBox14->Name = L"pictureBox14";
            pictureBox14->Size = System::Drawing::Size(126, 116);
            pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            pictureBox14->TabIndex = 1;
            pictureBox14->TabStop = false;
            pictureBox14->Click += gcnew System::EventHandler(this, &AdminForm::HighlightProperty);
            pictureBox14->Tag = id;

            Label^ label66 = gcnew Label();

            label66->AutoSize = true;
            label66->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            label66->ForeColor = System::Drawing::Color::White;
            label66->Location = System::Drawing::Point(150, 18);
            label66->Name = L"label66";
            label66->Size = System::Drawing::Size(76, 20);
            label66->TabIndex = 4;
            label66->Text = ownerName;


            Label^ label71 = gcnew Label();

            label71->AutoSize = true;
            label71->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            label71->ForeColor = System::Drawing::Color::White;
            label71->Location = System::Drawing::Point(17, 61);
            label71->Name = L"label71";
            label71->Size = System::Drawing::Size(36, 20);
            label71->TabIndex = 5;
            label71->Text = L"Id: ";


            Button^ delete_btn = gcnew Button();

            delete_btn->BackColor = System::Drawing::Color::CadetBlue;
            delete_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            delete_btn->FlatAppearance->BorderSize = 0;
            delete_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            delete_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
            delete_btn->ForeColor = System::Drawing::Color::WhiteSmoke;
            delete_btn->Location = System::Drawing::Point(646, 65);
            delete_btn->Name = L"delete_btn";
            delete_btn->Size = System::Drawing::Size(120, 50);
            delete_btn->TabIndex = 17;
            delete_btn->Text = L"DELETE";
            delete_btn->UseVisualStyleBackColor = false;
            delete_btn->Click += gcnew System::EventHandler(this, &AdminForm::delete_btn_Click);
            delete_btn->Tag = id;

            Label^ label69 = gcnew Label();

            label69->AutoSize = true;
            label69->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            label69->ForeColor = System::Drawing::Color::White;
            label69->Location = System::Drawing::Point(13, 18);
            label69->Name = L"label69";
            label69->Size = System::Drawing::Size(129, 20);
            label69->TabIndex = 5;
            label69->Text = L"Owner Name: ";


            Label^ label62 = gcnew Label();

            label62->AutoSize = true;
            label62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            label62->ForeColor = System::Drawing::Color::White;
            label62->Location = System::Drawing::Point(407, 61);
            label62->Name = L"label62";
            label62->Size = System::Drawing::Size(74, 20);
            label62->TabIndex = 3;
            label62->Text = "$ " + price.ToString("N0");

            

            Label^ label63 = gcnew Label();

            label63->AutoSize = true;
            label63->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            label63->ForeColor = System::Drawing::Color::White;
            label63->Location = System::Drawing::Point(408, 18);
            label63->Name = L"label63";
            label63->Size = System::Drawing::Size(46, 20);
            label63->TabIndex = 3;
            label63->Text = type;

            // 
            // details_btn
            // 

            Button^ details_btn = gcnew Button();


            details_btn->BackColor = System::Drawing::Color::CadetBlue;
            details_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            details_btn->FlatAppearance->BorderSize = 0;
            details_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            details_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
            details_btn->ForeColor = System::Drawing::Color::WhiteSmoke;
            details_btn->Location = System::Drawing::Point(646, 9);
            details_btn->Name = L"details_btn";
            details_btn->Size = System::Drawing::Size(120, 50);
            details_btn->TabIndex = 15;
            details_btn->Text = L"DETAILS";
            details_btn->UseVisualStyleBackColor = false;
            details_btn->Tag = id;
            details_btn->Click += gcnew EventHandler(this, &AdminForm::DetailsButton_Click);
            // 
            // label64
            //
            //             
            // 
            
            Label^ label64 = gcnew Label();

            label64->AutoSize = true;
            label64->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            label64->ForeColor = System::Drawing::Color::White;
            label64->Location = System::Drawing::Point(338, 61);
            label64->Name = L"label64";
            label64->Size = System::Drawing::Size(59, 20);
            label64->TabIndex = 3;
            label64->Text = L"Price:";
            // 
            // label68
            // 
            Label^ label68 = gcnew Label();

            label68->AutoSize = true;
            label68->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            label68->ForeColor = System::Drawing::Color::White;
            label68->Location = System::Drawing::Point(338, 18);
            label68->Name = L"label68";
            label68->Size = System::Drawing::Size(61, 20);
            label68->TabIndex = 3;
            label68->Text = L"Type: ";

            panel7->Controls->Add(label70);
            panel7->Controls->Add(pictureBox14);
            panel7->Controls->Add(label66);
            panel7->Controls->Add(label71);
            panel7->Controls->Add(delete_btn);
            panel7->Controls->Add(label69);
            panel7->Controls->Add(label62);
            panel7->Controls->Add(label63);
            panel7->Controls->Add(details_btn);
            panel7->Controls->Add(label64);
            panel7->Controls->Add(label68);

            return panel7;
        }

private: System::Windows::Forms::Panel^ Details_Panel;
private: System::Windows::Forms::TextBox^ textBox12;





private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Label^ label79;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Button^ button100;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label78;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ label37;



















private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
private: System::Windows::Forms::TextBox^ textBox4;

private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::TextBox^ destxt;


private: System::Windows::Forms::Label^ statuslbl;

private: System::Windows::Forms::Label^ ownerNamelbl;

private: System::Windows::Forms::Label^ idlbl;

private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::Label^ pricelbl;
private: System::Windows::Forms::Label^ locationlbl;
private: System::Windows::Forms::Label^ numberOFbedroomslbl;
private: System::Windows::Forms::Label^ arealbl;
private: System::Windows::Forms::Label^ typelbl;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel3;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Panel^ New_Property;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
private: System::Windows::Forms::ComboBox^ comboBox2;
private: System::Windows::Forms::TextBox^ admintxtDescription;

private: System::Windows::Forms::TextBox^ txtArea;
private: System::Windows::Forms::TextBox^ txtPrice;
private: System::Windows::Forms::TextBox^ txtLocation;
private: System::Windows::Forms::Label^ label_New_Property;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::Label^ Balance;
private: System::Windows::Forms::Label^ label45;
























    private:

        System::String^ currentField;
    private: System::Void AdminForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e);
    private:
        System::Void Users_Load(System::Object^ sender, System::EventArgs^ e);
        System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e);

    private: System::Windows::Forms::Panel^ Navigationbar_panel;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ Profile;


    private: System::Windows::Forms::Button^ Browse;
    private: System::Windows::Forms::Button^ Dashboard;
    private: System::Windows::Forms::Button^ Requests;
    private: System::Windows::Forms::Button^ Moderate_Users;
    private: System::Windows::Forms::Button^ Add_Admin;

    private: System::Windows::Forms::Panel^ Browse_panel;
    private: System::Windows::Forms::Panel^ Requests_panel;
    private: System::Windows::Forms::Panel^ Moderate_users_panel;
    private: System::Windows::Forms::Panel^ Add_admin_panel;

    private: System::Windows::Forms::Panel^ Dashboard_panel;


    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::TextBox^ phoneTextBox;

    private: System::Windows::Forms::TextBox^ passwordTextBox;

    private: System::Windows::Forms::TextBox^ emailTextBox;

    private: System::Windows::Forms::TextBox^ nameTextBox;

    private: System::Windows::Forms::TextBox^ Search_textbox;



    private: System::Windows::Forms::ComboBox^ Search_combobox;


    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ addAdminButton;












    private: System::Windows::Forms::PictureBox^ pictureBox8;
    private: System::Windows::Forms::PictureBox^ pictureBox6;
    private: System::Windows::Forms::PictureBox^ pictureBox7;
    private: System::Windows::Forms::PictureBox^ pictureBox5;
    private: System::Windows::Forms::Label^ requests_label;
    private: System::Windows::Forms::Label^ soldnum;


    private: System::Windows::Forms::Label^ Sold_label;
    private: System::Windows::Forms::Label^ propertiesnum;

    private: System::Windows::Forms::Label^ Properties_label;
    private: System::Windows::Forms::Label^ usernum;
    private: System::Windows::Forms::Label^ requestNum;


    private: System::Windows::Forms::Label^ user_num;


    private: System::Windows::Forms::PictureBox^ pictureBox9;
    private: System::Windows::Forms::PictureBox^ pictureBox2;
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::TextBox^ textBox5;
    private: System::Windows::Forms::Label^ label15;
    private: System::Windows::Forms::Label^ label16;
    private: System::Windows::Forms::NumericUpDown^ numBedrooms;
    private: System::Windows::Forms::Label^ label17;
    private: System::Windows::Forms::ComboBox^ TypeCompo;
    private: System::Windows::Forms::Label^ label18;
    private: System::Windows::Forms::Label^ label19;
    private: System::Windows::Forms::TextBox^ textBox7;
    private: System::Windows::Forms::TextBox^ textBox6;
    private: System::Windows::Forms::Label^ label20;
    private: System::Windows::Forms::TextBox^ textBox8;
    private: System::Windows::Forms::PictureBox^ pictureBox3;
    private: System::Windows::Forms::PictureBox^ pictureBox10;
    private: System::Windows::Forms::TextBox^ textBox9;
    private: System::Windows::Forms::Label^ label21;
























































































private: System::Windows::Forms::PictureBox^ pictureBox19;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label90;
private: System::Windows::Forms::Label^ user_password;
private: System::Windows::Forms::Label^ user_name;


private: System::Windows::Forms::Label^ user_email;

private: System::Windows::Forms::Label^ user_phone;

private: System::Windows::Forms::Panel^ EditFieldPanel;
private: System::Windows::Forms::Label^ label89;
private: System::Windows::Forms::TextBox^ editBox;
private: System::Windows::Forms::Label^ editLabel;
private: System::Windows::Forms::PictureBox^ pictureBox27;
private: System::Windows::Forms::Panel^ change_password_panel;
private: System::Windows::Forms::TextBox^ new_pass;

private: System::Windows::Forms::Label^ label_new_pass;



private: System::Windows::Forms::Label^ label92;
private: System::Windows::Forms::TextBox^ old_pass;

private: System::Windows::Forms::Label^ label93;
private: System::Windows::Forms::Panel^ Profile_panel;
private: System::Windows::Forms::PictureBox^ pictureBox28;
private: System::Windows::Forms::PictureBox^ pictureBox29;
private: System::Windows::Forms::Button^ cancel_pass;



private: System::Windows::Forms::Button^ save_pass;
private: System::Windows::Forms::PictureBox^ pictureBox30;


private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ save_edit;
private: System::Void DetailsButton_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void DetailsButton_Click2(System::Object^ sender, System::EventArgs^ e);
private: System::Void AprroveBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Rejectbtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void User_moreDetails_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Toggle_freeze_Click(System::Object^ sender, System::EventArgs^ e);




















private: System::Windows::Forms::Panel^ user_details;
private: System::Windows::Forms::Label^ iidlbl;
private: System::Windows::Forms::Label^ boughtlbl;




private: System::Windows::Forms::Label^ Properties_in_Marketlbl;

private: System::Windows::Forms::Label^ phonelbl;

private: System::Windows::Forms::Label^ emaillbl;

private: System::Windows::Forms::Label^ Namelbl;



private: System::Windows::Forms::Label^ label104;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::Label^ label105;

private: System::Windows::Forms::Label^ label107;

private: System::Windows::Forms::Label^ label109;
private: System::Windows::Forms::Label^ label110;
private: System::Windows::Forms::Label^ label111;
private: System::Windows::Forms::Label^ label112;
private: System::Windows::Forms::Label^ label113;
private: System::Windows::Forms::Label^ Balancelbl;

private: System::Windows::Forms::Label^ label103;
















































    private: Form^ parent;
    public:
        AdminForm(Form^ parentForm)
        {
            InitializeComponent();

            this->Load += gcnew System::EventHandler(this, &AdminForm::Form1_Load);
            // initialize dashboard
            int pending = 0 , sold = 0;
            for (auto p : Global::properties) {
                if (!p.getAvailability())
                    pending++;
                else if (p.getAvailability() == 2)
                    sold++;
            }


            int balance = Global::currUser.getcompany_balance();
            std::stringstream sss;
            sss.imbue(std::locale("en_US.UTF-8"));
            sss << balance;

            String^ currBalance = gcnew System::String(sss.str().c_str());
            Balance->Text = currBalance + " $";


            this->requestNum->Text = pending.ToString();
            this->soldnum->Text = sold.ToString();

            this->propertiesnum->Text = Global::properties.size().ToString();
           
            // number of users in the system 
            int count = 0; 
            for (auto p : Global::users) {

                if (!p.second.getAdmin())
                    count++; 
            }
            this->usernum->Text = count.ToString();
            ////////////////
            this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &LoginPage::AdminForm::AdminForm_FormClosed);
            parent = parentForm;
            
            Dashboard_panel->Visible = true;
            Browse_panel->Visible = false;
            Requests_panel->Visible = false;
            Moderate_users_panel->Visible = false;
            Add_admin_panel->Visible = false;
            Profile_panel->Visible = false;

            Search_combobox->Text = "Email";
            Search_textbox->Text = "Search";
            Search_textbox->ForeColor = System::Drawing::Color::LightGray;
            Search_textbox->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold);
            numBedrooms->Text = "";
            //
            //TODO: Add the constructor code here
            //
            Profile->Text = gcnew String(Global::currUser.getName().c_str());
            user_name->Text = gcnew String(Global::currUser.getName().c_str());
            user_email->Text = gcnew String(Global::currUser.getEmail().c_str());
            user_phone->Text = gcnew String(Global::currUser.getPhoneNumber().c_str());
            std::string password = Global::currUser.getPassword();
            std::string masked(password.length(), '*');
            user_password->Text = gcnew String(masked.c_str());

        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~AdminForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminForm::typeid));
            this->Navigationbar_panel = (gcnew System::Windows::Forms::Panel());
            this->Balance = (gcnew System::Windows::Forms::Label());
            this->label45 = (gcnew System::Windows::Forms::Label());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->Profile = (gcnew System::Windows::Forms::Label());
            this->Browse = (gcnew System::Windows::Forms::Button());
            this->Dashboard = (gcnew System::Windows::Forms::Button());
            this->Add_Admin = (gcnew System::Windows::Forms::Button());
            this->Moderate_Users = (gcnew System::Windows::Forms::Button());
            this->Requests = (gcnew System::Windows::Forms::Button());
            this->Dashboard_panel = (gcnew System::Windows::Forms::Panel());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->soldnum = (gcnew System::Windows::Forms::Label());
            this->Sold_label = (gcnew System::Windows::Forms::Label());
            this->propertiesnum = (gcnew System::Windows::Forms::Label());
            this->Properties_label = (gcnew System::Windows::Forms::Label());
            this->usernum = (gcnew System::Windows::Forms::Label());
            this->requestNum = (gcnew System::Windows::Forms::Label());
            this->user_num = (gcnew System::Windows::Forms::Label());
            this->requests_label = (gcnew System::Windows::Forms::Label());
            this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
            this->New_Property = (gcnew System::Windows::Forms::Panel());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
            this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
            this->admintxtDescription = (gcnew System::Windows::Forms::TextBox());
            this->txtArea = (gcnew System::Windows::Forms::TextBox());
            this->txtPrice = (gcnew System::Windows::Forms::TextBox());
            this->txtLocation = (gcnew System::Windows::Forms::TextBox());
            this->label_New_Property = (gcnew System::Windows::Forms::Label());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->label41 = (gcnew System::Windows::Forms::Label());
            this->label42 = (gcnew System::Windows::Forms::Label());
            this->label43 = (gcnew System::Windows::Forms::Label());
            this->label44 = (gcnew System::Windows::Forms::Label());
            this->Browse_panel = (gcnew System::Windows::Forms::Panel());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->numBedrooms = (gcnew System::Windows::Forms::NumericUpDown());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->textBox9 = (gcnew System::Windows::Forms::TextBox());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->TypeCompo = (gcnew System::Windows::Forms::ComboBox());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->Details_Panel = (gcnew System::Windows::Forms::Panel());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox12 = (gcnew System::Windows::Forms::TextBox());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->label79 = (gcnew System::Windows::Forms::Label());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->button100 = (gcnew System::Windows::Forms::Button());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->label78 = (gcnew System::Windows::Forms::Label());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->label33 = (gcnew System::Windows::Forms::Label());
            this->label34 = (gcnew System::Windows::Forms::Label());
            this->label35 = (gcnew System::Windows::Forms::Label());
            this->label36 = (gcnew System::Windows::Forms::Label());
            this->label37 = (gcnew System::Windows::Forms::Label());
            this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->Moderate_users_panel = (gcnew System::Windows::Forms::Panel());
            this->user_details = (gcnew System::Windows::Forms::Panel());
            this->label104 = (gcnew System::Windows::Forms::Label());
            this->iidlbl = (gcnew System::Windows::Forms::Label());
            this->boughtlbl = (gcnew System::Windows::Forms::Label());
            this->Balancelbl = (gcnew System::Windows::Forms::Label());
            this->Properties_in_Marketlbl = (gcnew System::Windows::Forms::Label());
            this->phonelbl = (gcnew System::Windows::Forms::Label());
            this->emaillbl = (gcnew System::Windows::Forms::Label());
            this->Namelbl = (gcnew System::Windows::Forms::Label());
            this->button12 = (gcnew System::Windows::Forms::Button());
            this->label105 = (gcnew System::Windows::Forms::Label());
            this->label107 = (gcnew System::Windows::Forms::Label());
            this->label109 = (gcnew System::Windows::Forms::Label());
            this->label110 = (gcnew System::Windows::Forms::Label());
            this->label111 = (gcnew System::Windows::Forms::Label());
            this->label112 = (gcnew System::Windows::Forms::Label());
            this->label113 = (gcnew System::Windows::Forms::Label());
            this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->Search_textbox = (gcnew System::Windows::Forms::TextBox());
            this->label103 = (gcnew System::Windows::Forms::Label());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->Search_combobox = (gcnew System::Windows::Forms::ComboBox());
            this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
            this->Requests_panel = (gcnew System::Windows::Forms::Panel());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->pricelbl = (gcnew System::Windows::Forms::Label());
            this->locationlbl = (gcnew System::Windows::Forms::Label());
            this->numberOFbedroomslbl = (gcnew System::Windows::Forms::Label());
            this->arealbl = (gcnew System::Windows::Forms::Label());
            this->typelbl = (gcnew System::Windows::Forms::Label());
            this->destxt = (gcnew System::Windows::Forms::TextBox());
            this->statuslbl = (gcnew System::Windows::Forms::Label());
            this->ownerNamelbl = (gcnew System::Windows::Forms::Label());
            this->idlbl = (gcnew System::Windows::Forms::Label());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->label29 = (gcnew System::Windows::Forms::Label());
            this->label30 = (gcnew System::Windows::Forms::Label());
            this->label31 = (gcnew System::Windows::Forms::Label());
            this->label32 = (gcnew System::Windows::Forms::Label());
            this->label38 = (gcnew System::Windows::Forms::Label());
            this->label39 = (gcnew System::Windows::Forms::Label());
            this->label40 = (gcnew System::Windows::Forms::Label());
            this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->Add_admin_panel = (gcnew System::Windows::Forms::Panel());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->addAdminButton = (gcnew System::Windows::Forms::Button());
            this->phoneTextBox = (gcnew System::Windows::Forms::TextBox());
            this->passwordTextBox = (gcnew System::Windows::Forms::TextBox());
            this->emailTextBox = (gcnew System::Windows::Forms::TextBox());
            this->nameTextBox = (gcnew System::Windows::Forms::TextBox());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label90 = (gcnew System::Windows::Forms::Label());
            this->user_password = (gcnew System::Windows::Forms::Label());
            this->user_name = (gcnew System::Windows::Forms::Label());
            this->user_email = (gcnew System::Windows::Forms::Label());
            this->user_phone = (gcnew System::Windows::Forms::Label());
            this->EditFieldPanel = (gcnew System::Windows::Forms::Panel());
            this->save_edit = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->label89 = (gcnew System::Windows::Forms::Label());
            this->editBox = (gcnew System::Windows::Forms::TextBox());
            this->editLabel = (gcnew System::Windows::Forms::Label());
            this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
            this->change_password_panel = (gcnew System::Windows::Forms::Panel());
            this->save_pass = (gcnew System::Windows::Forms::Button());
            this->cancel_pass = (gcnew System::Windows::Forms::Button());
            this->new_pass = (gcnew System::Windows::Forms::TextBox());
            this->label_new_pass = (gcnew System::Windows::Forms::Label());
            this->label92 = (gcnew System::Windows::Forms::Label());
            this->old_pass = (gcnew System::Windows::Forms::TextBox());
            this->label93 = (gcnew System::Windows::Forms::Label());
            this->Profile_panel = (gcnew System::Windows::Forms::Panel());
            this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
            this->Navigationbar_panel->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->Dashboard_panel->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
            this->New_Property->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
            this->Browse_panel->SuspendLayout();
            this->panel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBedrooms))->BeginInit();
            this->Details_Panel->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
            this->Moderate_users_panel->SuspendLayout();
            this->user_details->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
            this->Requests_panel->SuspendLayout();
            this->panel2->SuspendLayout();
            this->Add_admin_panel->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
            this->EditFieldPanel->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
            this->change_password_panel->SuspendLayout();
            this->Profile_panel->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
            this->SuspendLayout();
            // 
            // Navigationbar_panel
            // 
            this->Navigationbar_panel->Controls->Add(this->Balance);
            this->Navigationbar_panel->Controls->Add(this->label45);
            this->Navigationbar_panel->Controls->Add(this->pictureBox1);
            this->Navigationbar_panel->Controls->Add(this->label3);
            this->Navigationbar_panel->Controls->Add(this->Profile);
            this->Navigationbar_panel->Controls->Add(this->Browse);
            this->Navigationbar_panel->Controls->Add(this->Dashboard);
            this->Navigationbar_panel->Controls->Add(this->Add_Admin);
            this->Navigationbar_panel->Controls->Add(this->Moderate_Users);
            this->Navigationbar_panel->Controls->Add(this->Requests);
            this->Navigationbar_panel->Location = System::Drawing::Point(3, 3);
            this->Navigationbar_panel->Name = L"Navigationbar_panel";
            this->Navigationbar_panel->Size = System::Drawing::Size(1205, 74);
            this->Navigationbar_panel->TabIndex = 7;
            this->Navigationbar_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminForm::Navigationbar_panel_Paint);
            // 
            // Balance
            // 
            this->Balance->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->Balance->AutoSize = true;
            this->Balance->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->Balance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Balance->ForeColor = System::Drawing::Color::PaleGreen;
            this->Balance->Location = System::Drawing::Point(35, 38);
            this->Balance->Name = L"Balance";
            this->Balance->Size = System::Drawing::Size(64, 20);
            this->Balance->TabIndex = 3;
            this->Balance->Text = L"10,000";
            // 
            // label45
            // 
            this->label45->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label45->AutoSize = true;
            this->label45->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label45->ForeColor = System::Drawing::Color::White;
            this->label45->Location = System::Drawing::Point(26, 17);
            this->label45->Name = L"label45";
            this->label45->Size = System::Drawing::Size(160, 20);
            this->label45->TabIndex = 4;
            this->label45->Text = L"Company Balance";
            // 
            // pictureBox1
            // 
            this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(1044, 20);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(42, 36);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox1->TabIndex = 2;
            this->pictureBox1->TabStop = false;
            this->pictureBox1->Click += gcnew System::EventHandler(this, &AdminForm::pictureBox1_Click);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::Color::White;
            this->label3->Location = System::Drawing::Point(1093, 42);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(48, 16);
            this->label3->TabIndex = 1;
            this->label3->Text = L"Logout";
            this->label3->Click += gcnew System::EventHandler(this, &AdminForm::label3_Click);
            // 
            // Profile
            // 
            this->Profile->AutoSize = true;
            this->Profile->Cursor = System::Windows::Forms::Cursors::Hand;
            this->Profile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Profile->ForeColor = System::Drawing::Color::White;
            this->Profile->Location = System::Drawing::Point(1092, 20);
            this->Profile->Name = L"Profile";
            this->Profile->Size = System::Drawing::Size(101, 20);
            this->Profile->TabIndex = 1;
            this->Profile->Text = L"user_name";
            this->Profile->Click += gcnew System::EventHandler(this, &AdminForm::Profile_Click);
            // 
            // Browse
            // 
            this->Browse->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->Browse->FlatAppearance->BorderSize = 0;
            this->Browse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->Browse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Browse->ForeColor = System::Drawing::Color::White;
            this->Browse->Location = System::Drawing::Point(378, 11);
            this->Browse->Name = L"Browse";
            this->Browse->Size = System::Drawing::Size(116, 50);
            this->Browse->TabIndex = 0;
            this->Browse->Text = L"Browse";
            this->Browse->UseVisualStyleBackColor = false;
            this->Browse->Click += gcnew System::EventHandler(this, &AdminForm::Browse_Click);
            // 
            // Dashboard
            // 
            this->Dashboard->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->Dashboard->FlatAppearance->BorderSize = 0;
            this->Dashboard->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->Dashboard->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Dashboard->ForeColor = System::Drawing::Color::White;
            this->Dashboard->Location = System::Drawing::Point(224, 11);
            this->Dashboard->Name = L"Dashboard";
            this->Dashboard->Size = System::Drawing::Size(116, 50);
            this->Dashboard->TabIndex = 0;
            this->Dashboard->Text = L"Dashboard";
            this->Dashboard->UseVisualStyleBackColor = false;
            this->Dashboard->Click += gcnew System::EventHandler(this, &AdminForm::Dashboard_Click);
            // 
            // Add_Admin
            // 
            this->Add_Admin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->Add_Admin->FlatAppearance->BorderSize = 0;
            this->Add_Admin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->Add_Admin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Add_Admin->ForeColor = System::Drawing::Color::White;
            this->Add_Admin->Location = System::Drawing::Point(879, 11);
            this->Add_Admin->Name = L"Add_Admin";
            this->Add_Admin->Size = System::Drawing::Size(122, 50);
            this->Add_Admin->TabIndex = 0;
            this->Add_Admin->Text = L"Add Admin";
            this->Add_Admin->UseVisualStyleBackColor = false;
            this->Add_Admin->Click += gcnew System::EventHandler(this, &AdminForm::Add_Admin_Click);
            // 
            // Moderate_Users
            // 
            this->Moderate_Users->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->Moderate_Users->FlatAppearance->BorderSize = 0;
            this->Moderate_Users->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->Moderate_Users->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Moderate_Users->ForeColor = System::Drawing::Color::White;
            this->Moderate_Users->Location = System::Drawing::Point(685, 11);
            this->Moderate_Users->Name = L"Moderate_Users";
            this->Moderate_Users->Size = System::Drawing::Size(159, 50);
            this->Moderate_Users->TabIndex = 0;
            this->Moderate_Users->Text = L"Moderate Users";
            this->Moderate_Users->UseVisualStyleBackColor = false;
            this->Moderate_Users->Click += gcnew System::EventHandler(this, &AdminForm::Moderate_Users_Click);
            // 
            // Requests
            // 
            this->Requests->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->Requests->FlatAppearance->BorderSize = 0;
            this->Requests->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->Requests->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Requests->ForeColor = System::Drawing::Color::White;
            this->Requests->Location = System::Drawing::Point(531, 11);
            this->Requests->Name = L"Requests";
            this->Requests->Size = System::Drawing::Size(122, 50);
            this->Requests->TabIndex = 0;
            this->Requests->Text = L"Requests";
            this->Requests->UseVisualStyleBackColor = false;
            this->Requests->Click += gcnew System::EventHandler(this, &AdminForm::Requests_Click);
            // 
            // Dashboard_panel
            // 
            this->Dashboard_panel->AutoScroll = true;
            this->Dashboard_panel->Controls->Add(this->New_Property);
            this->Dashboard_panel->Controls->Add(this->button4);
            this->Dashboard_panel->Controls->Add(this->soldnum);
            this->Dashboard_panel->Controls->Add(this->Sold_label);
            this->Dashboard_panel->Controls->Add(this->propertiesnum);
            this->Dashboard_panel->Controls->Add(this->Properties_label);
            this->Dashboard_panel->Controls->Add(this->usernum);
            this->Dashboard_panel->Controls->Add(this->requestNum);
            this->Dashboard_panel->Controls->Add(this->user_num);
            this->Dashboard_panel->Controls->Add(this->requests_label);
            this->Dashboard_panel->Controls->Add(this->pictureBox8);
            this->Dashboard_panel->Controls->Add(this->pictureBox6);
            this->Dashboard_panel->Controls->Add(this->pictureBox7);
            this->Dashboard_panel->Controls->Add(this->pictureBox5);
            this->Dashboard_panel->Location = System::Drawing::Point(1, 83);
            this->Dashboard_panel->Name = L"Dashboard_panel";
            this->Dashboard_panel->Size = System::Drawing::Size(1205, 728);
            this->Dashboard_panel->TabIndex = 8;
            this->Dashboard_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminForm::Dashboard_panel_Paint);
            // 
            // button4
            // 
            this->button4->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
                static_cast<System::Int32>(static_cast<System::Byte>(122)));
            this->button4->FlatAppearance->BorderSize = 0;
            this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button4->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->button4->Location = System::Drawing::Point(502, 320);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(207, 90);
            this->button4->TabIndex = 8;
            this->button4->Text = L"Add Property\r\n";
            this->button4->UseVisualStyleBackColor = false;
            this->button4->Click += gcnew System::EventHandler(this, &AdminForm::button4_Click_1);
            // 
            // soldnum
            // 
            this->soldnum->AutoSize = true;
            this->soldnum->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->soldnum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold));
            this->soldnum->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->soldnum->Location = System::Drawing::Point(927, 570);
            this->soldnum->Name = L"soldnum";
            this->soldnum->Size = System::Drawing::Size(54, 58);
            this->soldnum->TabIndex = 2;
            this->soldnum->Text = L"1";
            // 
            // Sold_label
            // 
            this->Sold_label->AutoSize = true;
            this->Sold_label->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->Sold_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold));
            this->Sold_label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->Sold_label->Location = System::Drawing::Point(886, 452);
            this->Sold_label->Name = L"Sold_label";
            this->Sold_label->Size = System::Drawing::Size(129, 58);
            this->Sold_label->TabIndex = 2;
            this->Sold_label->Text = L"Sold";
            // 
            // propertiesnum
            // 
            this->propertiesnum->AutoSize = true;
            this->propertiesnum->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->propertiesnum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold));
            this->propertiesnum->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->propertiesnum->Location = System::Drawing::Point(227, 570);
            this->propertiesnum->Name = L"propertiesnum";
            this->propertiesnum->Size = System::Drawing::Size(54, 58);
            this->propertiesnum->TabIndex = 2;
            this->propertiesnum->Text = L"1";
            // 
            // Properties_label
            // 
            this->Properties_label->AutoSize = true;
            this->Properties_label->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->Properties_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold));
            this->Properties_label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->Properties_label->Location = System::Drawing::Point(133, 448);
            this->Properties_label->Name = L"Properties_label";
            this->Properties_label->Size = System::Drawing::Size(264, 58);
            this->Properties_label->TabIndex = 2;
            this->Properties_label->Text = L"Properties";
            // 
            // usernum
            // 
            this->usernum->AutoSize = true;
            this->usernum->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->usernum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold));
            this->usernum->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->usernum->Location = System::Drawing::Point(928, 201);
            this->usernum->Name = L"usernum";
            this->usernum->Size = System::Drawing::Size(54, 58);
            this->usernum->TabIndex = 2;
            this->usernum->Text = L"1";
            // 
            // requestNum
            // 
            this->requestNum->AutoSize = true;
            this->requestNum->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->requestNum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->requestNum->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->requestNum->Location = System::Drawing::Point(230, 193);
            this->requestNum->Name = L"requestNum";
            this->requestNum->Size = System::Drawing::Size(54, 58);
            this->requestNum->TabIndex = 2;
            this->requestNum->Text = L"1";
            // 
            // user_num
            // 
            this->user_num->AutoSize = true;
            this->user_num->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->user_num->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold));
            this->user_num->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->user_num->Location = System::Drawing::Point(876, 76);
            this->user_num->Name = L"user_num";
            this->user_num->Size = System::Drawing::Size(161, 58);
            this->user_num->TabIndex = 2;
            this->user_num->Text = L"Users";
            // 
            // requests_label
            // 
            this->requests_label->AutoSize = true;
            this->requests_label->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->requests_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->requests_label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->requests_label->Location = System::Drawing::Point(137, 77);
            this->requests_label->Name = L"requests_label";
            this->requests_label->Size = System::Drawing::Size(245, 58);
            this->requests_label->TabIndex = 2;
            this->requests_label->Text = L"Requests";
            // 
            // pictureBox8
            // 
            this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
            this->pictureBox8->Location = System::Drawing::Point(776, 412);
            this->pictureBox8->Name = L"pictureBox8";
            this->pictureBox8->Size = System::Drawing::Size(340, 291);
            this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox8->TabIndex = 0;
            this->pictureBox8->TabStop = false;
            // 
            // pictureBox6
            // 
            this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
            this->pictureBox6->Location = System::Drawing::Point(84, 408);
            this->pictureBox6->Name = L"pictureBox6";
            this->pictureBox6->Size = System::Drawing::Size(340, 291);
            this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox6->TabIndex = 0;
            this->pictureBox6->TabStop = false;
            // 
            // pictureBox7
            // 
            this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
            this->pictureBox7->Location = System::Drawing::Point(776, 34);
            this->pictureBox7->Name = L"pictureBox7";
            this->pictureBox7->Size = System::Drawing::Size(340, 291);
            this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox7->TabIndex = 0;
            this->pictureBox7->TabStop = false;
            // 
            // pictureBox5
            // 
            this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
            this->pictureBox5->Location = System::Drawing::Point(84, 30);
            this->pictureBox5->Name = L"pictureBox5";
            this->pictureBox5->Size = System::Drawing::Size(340, 291);
            this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox5->TabIndex = 0;
            this->pictureBox5->TabStop = false;
            // 
            // New_Property
            // 
            this->New_Property->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->New_Property->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
                static_cast<System::Int32>(static_cast<System::Byte>(122)));
            this->New_Property->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->New_Property->Controls->Add(this->button6);
            this->New_Property->Controls->Add(this->numericUpDown2);
            this->New_Property->Controls->Add(this->comboBox2);
            this->New_Property->Controls->Add(this->admintxtDescription);
            this->New_Property->Controls->Add(this->txtArea);
            this->New_Property->Controls->Add(this->txtPrice);
            this->New_Property->Controls->Add(this->txtLocation);
            this->New_Property->Controls->Add(this->label_New_Property);
            this->New_Property->Controls->Add(this->button7);
            this->New_Property->Controls->Add(this->label12);
            this->New_Property->Controls->Add(this->label11);
            this->New_Property->Controls->Add(this->label41);
            this->New_Property->Controls->Add(this->label42);
            this->New_Property->Controls->Add(this->label43);
            this->New_Property->Controls->Add(this->label44);
            this->New_Property->Location = System::Drawing::Point(279, 90);
            this->New_Property->Name = L"New_Property";
            this->New_Property->Size = System::Drawing::Size(662, 482);
            this->New_Property->TabIndex = 10;
            this->New_Property->Visible = false;
            // 
            // button6
            // 
            this->button6->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button6->BackColor = System::Drawing::Color::CadetBlue;
            this->button6->FlatAppearance->BorderSize = 0;
            this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button6->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->button6->Location = System::Drawing::Point(165, 420);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(142, 44);
            this->button6->TabIndex = 13;
            this->button6->Text = L"CANCEL";
            this->button6->UseVisualStyleBackColor = false;
            this->button6->Click += gcnew System::EventHandler(this, &AdminForm::button6_Click);
            // 
            // numericUpDown2
            // 
            this->numericUpDown2->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->numericUpDown2->Location = System::Drawing::Point(350, 174);
            this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
            this->numericUpDown2->Name = L"numericUpDown2";
            this->numericUpDown2->Size = System::Drawing::Size(122, 24);
            this->numericUpDown2->TabIndex = 12;
            // 
            // comboBox2
            // 
            this->comboBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->comboBox2->FormattingEnabled = true;
            this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
                L"Apartment", L"Condominium", L"Townhouse", L"Duplex",
                    L"Villa"
            });
            this->comboBox2->Location = System::Drawing::Point(71, 101);
            this->comboBox2->Name = L"comboBox2";
            this->comboBox2->Size = System::Drawing::Size(121, 24);
            this->comboBox2->TabIndex = 11;
            // 
            // admintxtDescription
            // 
            this->admintxtDescription->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->admintxtDescription->Location = System::Drawing::Point(165, 300);
            this->admintxtDescription->Multiline = true;
            this->admintxtDescription->Name = L"admintxtDescription";
            this->admintxtDescription->Size = System::Drawing::Size(356, 95);
            this->admintxtDescription->TabIndex = 10;
            // 
            // txtArea
            // 
            this->txtArea->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->txtArea->Location = System::Drawing::Point(71, 174);
            this->txtArea->Name = L"txtArea";
            this->txtArea->Size = System::Drawing::Size(121, 24);
            this->txtArea->TabIndex = 9;
            // 
            // txtPrice
            // 
            this->txtPrice->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->txtPrice->Location = System::Drawing::Point(350, 101);
            this->txtPrice->Name = L"txtPrice";
            this->txtPrice->Size = System::Drawing::Size(122, 24);
            this->txtPrice->TabIndex = 9;
            // 
            // txtLocation
            // 
            this->txtLocation->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->txtLocation->Location = System::Drawing::Point(71, 241);
            this->txtLocation->Name = L"txtLocation";
            this->txtLocation->Size = System::Drawing::Size(450, 24);
            this->txtLocation->TabIndex = 8;
            this->txtLocation->TextChanged += gcnew System::EventHandler(this, &AdminForm::txtLocation_TextChanged);
            // 
            // label_New_Property
            // 
            this->label_New_Property->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label_New_Property->AutoSize = true;
            this->label_New_Property->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label_New_Property->ForeColor = System::Drawing::Color::White;
            this->label_New_Property->Location = System::Drawing::Point(203, 17);
            this->label_New_Property->Name = L"label_New_Property";
            this->label_New_Property->Size = System::Drawing::Size(228, 38);
            this->label_New_Property->TabIndex = 1;
            this->label_New_Property->Text = L"New Property";
            // 
            // button7
            // 
            this->button7->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button7->BackColor = System::Drawing::Color::CadetBlue;
            this->button7->FlatAppearance->BorderSize = 0;
            this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button7->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->button7->Location = System::Drawing::Point(379, 420);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(142, 44);
            this->button7->TabIndex = 7;
            this->button7->Text = L"ADD";
            this->button7->UseVisualStyleBackColor = false;
            this->button7->Click += gcnew System::EventHandler(this, &AdminForm::button7_Click);
            // 
            // label12
            // 
            this->label12->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label12->ForeColor = System::Drawing::Color::White;
            this->label12->Location = System::Drawing::Point(54, 300);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(112, 20);
            this->label12->TabIndex = 1;
            this->label12->Text = L"Description:";
            // 
            // label11
            // 
            this->label11->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label11->AutoSize = true;
            this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label11->ForeColor = System::Drawing::Color::White;
            this->label11->Location = System::Drawing::Point(57, 214);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(87, 20);
            this->label11->TabIndex = 1;
            this->label11->Text = L"Location:";
            // 
            // label41
            // 
            this->label41->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label41->AutoSize = true;
            this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label41->ForeColor = System::Drawing::Color::White;
            this->label41->Location = System::Drawing::Point(57, 75);
            this->label41->Name = L"label41";
            this->label41->Size = System::Drawing::Size(55, 20);
            this->label41->TabIndex = 1;
            this->label41->Text = L"Type:";
            // 
            // label42
            // 
            this->label42->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label42->AutoSize = true;
            this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label42->ForeColor = System::Drawing::Color::White;
            this->label42->Location = System::Drawing::Point(337, 145);
            this->label42->Name = L"label42";
            this->label42->Size = System::Drawing::Size(190, 20);
            this->label42->TabIndex = 1;
            this->label42->Text = L"Number of bedrooms:";
            // 
            // label43
            // 
            this->label43->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label43->AutoSize = true;
            this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label43->ForeColor = System::Drawing::Color::White;
            this->label43->Location = System::Drawing::Point(58, 145);
            this->label43->Name = L"label43";
            this->label43->Size = System::Drawing::Size(54, 20);
            this->label43->TabIndex = 1;
            this->label43->Text = L"Area:";
            // 
            // label44
            // 
            this->label44->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label44->AutoSize = true;
            this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label44->ForeColor = System::Drawing::Color::White;
            this->label44->Location = System::Drawing::Point(337, 75);
            this->label44->Name = L"label44";
            this->label44->Size = System::Drawing::Size(59, 20);
            this->label44->TabIndex = 1;
            this->label44->Text = L"Price:";
            // 
            // Browse_panel
            // 
            this->Browse_panel->Controls->Add(this->panel1);
            this->Browse_panel->Controls->Add(this->Details_Panel);
            this->Browse_panel->Controls->Add(this->flowLayoutPanel1);
            this->Browse_panel->Location = System::Drawing::Point(3, 92);
            this->Browse_panel->Name = L"Browse_panel";
            this->Browse_panel->Size = System::Drawing::Size(1205, 719);
            this->Browse_panel->TabIndex = 0;
            this->Browse_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminForm::Browse_panel_Paint);
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
                static_cast<System::Int32>(static_cast<System::Byte>(152)));
            this->panel1->Controls->Add(this->pictureBox10);
            this->panel1->Controls->Add(this->pictureBox3);
            this->panel1->Controls->Add(this->numBedrooms);
            this->panel1->Controls->Add(this->label19);
            this->panel1->Controls->Add(this->label20);
            this->panel1->Controls->Add(this->label18);
            this->panel1->Controls->Add(this->label17);
            this->panel1->Controls->Add(this->textBox7);
            this->panel1->Controls->Add(this->textBox6);
            this->panel1->Controls->Add(this->textBox8);
            this->panel1->Controls->Add(this->textBox9);
            this->panel1->Controls->Add(this->textBox5);
            this->panel1->Controls->Add(this->TypeCompo);
            this->panel1->Controls->Add(this->label21);
            this->panel1->Controls->Add(this->label16);
            this->panel1->Controls->Add(this->label15);
            this->panel1->Location = System::Drawing::Point(2, 18);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(221, 704);
            this->panel1->TabIndex = 0;
            // 
            // pictureBox10
            // 
            this->pictureBox10->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
            this->pictureBox10->Location = System::Drawing::Point(131, 541);
            this->pictureBox10->Name = L"pictureBox10";
            this->pictureBox10->Size = System::Drawing::Size(75, 47);
            this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox10->TabIndex = 1;
            this->pictureBox10->TabStop = false;
            this->pictureBox10->Click += gcnew System::EventHandler(this, &AdminForm::pictureBox10_Click);
            // 
            // pictureBox3
            // 
            this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
            this->pictureBox3->Location = System::Drawing::Point(7, 541);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(75, 47);
            this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox3->TabIndex = 1;
            this->pictureBox3->TabStop = false;
            this->pictureBox3->Click += gcnew System::EventHandler(this, &AdminForm::pictureBox3_Click_1);
            // 
            // numBedrooms
            // 
            this->numBedrooms->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
                static_cast<System::Int32>(static_cast<System::Byte>(152)));
            this->numBedrooms->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.999999F));
            this->numBedrooms->ForeColor = System::Drawing::Color::White;
            this->numBedrooms->Location = System::Drawing::Point(43, 393);
            this->numBedrooms->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
            this->numBedrooms->Name = L"numBedrooms";
            this->numBedrooms->Size = System::Drawing::Size(143, 24);
            this->numBedrooms->TabIndex = 15;
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label19->ForeColor = System::Drawing::Color::White;
            this->label19->Location = System::Drawing::Point(100, 237);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(30, 20);
            this->label19->TabIndex = 13;
            this->label19->Text = L"To";
            this->label19->Click += gcnew System::EventHandler(this, &AdminForm::label17_Click);
            // 
            // label20
            // 
            this->label20->AutoSize = true;
            this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label20->ForeColor = System::Drawing::Color::White;
            this->label20->Location = System::Drawing::Point(15, 284);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(48, 20);
            this->label20->TabIndex = 13;
            this->label20->Text = L"Area";
            this->label20->Click += gcnew System::EventHandler(this, &AdminForm::label17_Click);
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label18->ForeColor = System::Drawing::Color::White;
            this->label18->Location = System::Drawing::Point(15, 204);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(112, 20);
            this->label18->TabIndex = 13;
            this->label18->Text = L"Price Range";
            this->label18->Click += gcnew System::EventHandler(this, &AdminForm::label17_Click);
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label17->ForeColor = System::Drawing::Color::White;
            this->label17->Location = System::Drawing::Point(9, 359);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(187, 20);
            this->label17->TabIndex = 13;
            this->label17->Text = L"Number of Bedrooms";
            this->label17->Click += gcnew System::EventHandler(this, &AdminForm::label17_Click);
            // 
            // textBox7
            // 
            this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
                static_cast<System::Int32>(static_cast<System::Byte>(152)));
            this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.999999F));
            this->textBox7->ForeColor = System::Drawing::Color::White;
            this->textBox7->Location = System::Drawing::Point(136, 236);
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(50, 24);
            this->textBox7->TabIndex = 4;
            // 
            // textBox6
            // 
            this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
                static_cast<System::Int32>(static_cast<System::Byte>(152)));
            this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.999999F));
            this->textBox6->ForeColor = System::Drawing::Color::White;
            this->textBox6->Location = System::Drawing::Point(43, 236);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(50, 24);
            this->textBox6->TabIndex = 4;
            // 
            // textBox8
            // 
            this->textBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
                static_cast<System::Int32>(static_cast<System::Byte>(152)));
            this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.999999F));
            this->textBox8->ForeColor = System::Drawing::Color::White;
            this->textBox8->Location = System::Drawing::Point(41, 310);
            this->textBox8->Name = L"textBox8";
            this->textBox8->Size = System::Drawing::Size(145, 24);
            this->textBox8->TabIndex = 4;
            // 
            // textBox9
            // 
            this->textBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
                static_cast<System::Int32>(static_cast<System::Byte>(152)));
            this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.999999F));
            this->textBox9->ForeColor = System::Drawing::Color::White;
            this->textBox9->Location = System::Drawing::Point(48, 475);
            this->textBox9->Name = L"textBox9";
            this->textBox9->Size = System::Drawing::Size(138, 24);
            this->textBox9->TabIndex = 4;
            // 
            // textBox5
            // 
            this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
                static_cast<System::Int32>(static_cast<System::Byte>(152)));
            this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox5->ForeColor = System::Drawing::Color::White;
            this->textBox5->Location = System::Drawing::Point(48, 81);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(138, 24);
            this->textBox5->TabIndex = 4;
            // 
            // TypeCompo
            // 
            this->TypeCompo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
                static_cast<System::Int32>(static_cast<System::Byte>(152)));
            this->TypeCompo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->TypeCompo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->TypeCompo->ForeColor = System::Drawing::Color::White;
            this->TypeCompo->FormattingEnabled = true;
            this->TypeCompo->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
                L"Apartment", L"Condominium", L"Townhouse", L"Duplex",
                    L"Villa"
            });
            this->TypeCompo->Location = System::Drawing::Point(48, 152);
            this->TypeCompo->Name = L"TypeCompo";
            this->TypeCompo->Size = System::Drawing::Size(138, 26);
            this->TypeCompo->TabIndex = 14;
            // 
            // label21
            // 
            this->label21->AutoSize = true;
            this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label21->ForeColor = System::Drawing::Color::White;
            this->label21->Location = System::Drawing::Point(14, 445);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(117, 20);
            this->label21->TabIndex = 3;
            this->label21->Text = L"Owner Name";
            this->label21->Click += gcnew System::EventHandler(this, &AdminForm::label15_Click);
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label16->ForeColor = System::Drawing::Color::White;
            this->label16->Location = System::Drawing::Point(14, 120);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(49, 20);
            this->label16->TabIndex = 3;
            this->label16->Text = L"Type";
            this->label16->Click += gcnew System::EventHandler(this, &AdminForm::label15_Click);
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label15->ForeColor = System::Drawing::Color::White;
            this->label15->Location = System::Drawing::Point(14, 51);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(81, 20);
            this->label15->TabIndex = 3;
            this->label15->Text = L"Location";
            this->label15->Click += gcnew System::EventHandler(this, &AdminForm::label15_Click);
            // 
            // Details_Panel
            // 
            this->Details_Panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
                static_cast<System::Int32>(static_cast<System::Byte>(122)));
            this->Details_Panel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->Details_Panel->Controls->Add(this->button2);
            this->Details_Panel->Controls->Add(this->comboBox1);
            this->Details_Panel->Controls->Add(this->numericUpDown1);
            this->Details_Panel->Controls->Add(this->textBox4);
            this->Details_Panel->Controls->Add(this->textBox2);
            this->Details_Panel->Controls->Add(this->textBox1);
            this->Details_Panel->Controls->Add(this->textBox12);
            this->Details_Panel->Controls->Add(this->label24);
            this->Details_Panel->Controls->Add(this->label79);
            this->Details_Panel->Controls->Add(this->label27);
            this->Details_Panel->Controls->Add(this->label22);
            this->Details_Panel->Controls->Add(this->button100);
            this->Details_Panel->Controls->Add(this->label23);
            this->Details_Panel->Controls->Add(this->label78);
            this->Details_Panel->Controls->Add(this->label25);
            this->Details_Panel->Controls->Add(this->label26);
            this->Details_Panel->Controls->Add(this->label33);
            this->Details_Panel->Controls->Add(this->label34);
            this->Details_Panel->Controls->Add(this->label35);
            this->Details_Panel->Controls->Add(this->label36);
            this->Details_Panel->Controls->Add(this->label37);
            this->Details_Panel->Location = System::Drawing::Point(348, 86);
            this->Details_Panel->Name = L"Details_Panel";
            this->Details_Panel->Size = System::Drawing::Size(662, 482);
            this->Details_Panel->TabIndex = 21;
            this->Details_Panel->Visible = false;
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::CadetBlue;
            this->button2->FlatAppearance->BorderSize = 0;
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->button2->Location = System::Drawing::Point(388, 412);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(142, 44);
            this->button2->TabIndex = 16;
            this->button2->Text = L"Save Changes";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &AdminForm::button2_Click_1);
            // 
            // comboBox1
            // 
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
                L"Apartment", L"Condominium", L"Townhouse", L"Duplex",
                    L"Villa"
            });
            this->comboBox1->Location = System::Drawing::Point(363, 105);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(106, 24);
            this->comboBox1->TabIndex = 15;
            // 
            // numericUpDown1
            // 
            this->numericUpDown1->Location = System::Drawing::Point(362, 182);
            this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
            this->numericUpDown1->Name = L"numericUpDown1";
            this->numericUpDown1->Size = System::Drawing::Size(107, 24);
            this->numericUpDown1->TabIndex = 14;
            // 
            // textBox4
            // 
            this->textBox4->Location = System::Drawing::Point(362, 247);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(88, 24);
            this->textBox4->TabIndex = 13;
            // 
            // textBox2
            // 
            this->textBox2->Location = System::Drawing::Point(81, 250);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(88, 24);
            this->textBox2->TabIndex = 11;
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(81, 179);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(88, 24);
            this->textBox1->TabIndex = 10;
            // 
            // textBox12
            // 
            this->textBox12->Location = System::Drawing::Point(166, 300);
            this->textBox12->Multiline = true;
            this->textBox12->Name = L"textBox12";
            this->textBox12->Size = System::Drawing::Size(402, 97);
            this->textBox12->TabIndex = 9;
            // 
            // label24
            // 
            this->label24->AutoSize = true;
            this->label24->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label24->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->label24->Location = System::Drawing::Point(70, 102);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(85, 17);
            this->label24->TabIndex = 8;
            this->label24->Text = L"Place_holder";
            // 
            // label79
            // 
            this->label79->AutoSize = true;
            this->label79->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label79->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->label79->Location = System::Drawing::Point(543, 42);
            this->label79->Name = L"label79";
            this->label79->Size = System::Drawing::Size(85, 17);
            this->label79->TabIndex = 8;
            this->label79->Text = L"Place_holder";
            // 
            // label27
            // 
            this->label27->AutoSize = true;
            this->label27->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label27->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->label27->Location = System::Drawing::Point(45, 28);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(85, 17);
            this->label27->TabIndex = 8;
            this->label27->Text = L"Place_holder";
            // 
            // label22
            // 
            this->label22->AutoSize = true;
            this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label22->ForeColor = System::Drawing::Color::White;
            this->label22->Location = System::Drawing::Point(262, 9);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(124, 38);
            this->label22->TabIndex = 1;
            this->label22->Text = L"Details";
            // 
            // button100
            // 
            this->button100->BackColor = System::Drawing::Color::CadetBlue;
            this->button100->FlatAppearance->BorderSize = 0;
            this->button100->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button100->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button100->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->button100->Location = System::Drawing::Point(201, 412);
            this->button100->Name = L"button100";
            this->button100->Size = System::Drawing::Size(142, 44);
            this->button100->TabIndex = 7;
            this->button100->Text = L"Close";
            this->button100->UseVisualStyleBackColor = false;
            this->button100->Click += gcnew System::EventHandler(this, &AdminForm::button100_Click_2);
            // 
            // label23
            // 
            this->label23->AutoSize = true;
            this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label23->ForeColor = System::Drawing::Color::White;
            this->label23->Location = System::Drawing::Point(54, 300);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(112, 20);
            this->label23->TabIndex = 1;
            this->label23->Text = L"Description:";
            // 
            // label78
            // 
            this->label78->AutoSize = true;
            this->label78->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label78->ForeColor = System::Drawing::Color::White;
            this->label78->Location = System::Drawing::Point(514, 19);
            this->label78->Name = L"label78";
            this->label78->Size = System::Drawing::Size(123, 20);
            this->label78->TabIndex = 1;
            this->label78->Text = L"Owner Name:";
            // 
            // label25
            // 
            this->label25->AutoSize = true;
            this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label25->ForeColor = System::Drawing::Color::White;
            this->label25->Location = System::Drawing::Point(57, 214);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(87, 20);
            this->label25->TabIndex = 1;
            this->label25->Text = L"Location:";
            // 
            // label26
            // 
            this->label26->AutoSize = true;
            this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label26->ForeColor = System::Drawing::Color::White;
            this->label26->Location = System::Drawing::Point(19, 25);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(30, 20);
            this->label26->TabIndex = 1;
            this->label26->Text = L"Id:";
            // 
            // label33
            // 
            this->label33->AutoSize = true;
            this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label33->ForeColor = System::Drawing::Color::White;
            this->label33->Location = System::Drawing::Point(337, 145);
            this->label33->Name = L"label33";
            this->label33->Size = System::Drawing::Size(190, 20);
            this->label33->TabIndex = 1;
            this->label33->Text = L"Number of bedrooms:";
            // 
            // label34
            // 
            this->label34->AutoSize = true;
            this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label34->ForeColor = System::Drawing::Color::White;
            this->label34->Location = System::Drawing::Point(58, 145);
            this->label34->Name = L"label34";
            this->label34->Size = System::Drawing::Size(54, 20);
            this->label34->TabIndex = 1;
            this->label34->Text = L"Area:";
            // 
            // label35
            // 
            this->label35->AutoSize = true;
            this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label35->ForeColor = System::Drawing::Color::White;
            this->label35->Location = System::Drawing::Point(337, 214);
            this->label35->Name = L"label35";
            this->label35->Size = System::Drawing::Size(59, 20);
            this->label35->TabIndex = 1;
            this->label35->Text = L"Price:";
            // 
            // label36
            // 
            this->label36->AutoSize = true;
            this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label36->ForeColor = System::Drawing::Color::White;
            this->label36->Location = System::Drawing::Point(54, 75);
            this->label36->Name = L"label36";
            this->label36->Size = System::Drawing::Size(69, 20);
            this->label36->TabIndex = 1;
            this->label36->Text = L"Status:";
            // 
            // label37
            // 
            this->label37->AutoSize = true;
            this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label37->ForeColor = System::Drawing::Color::White;
            this->label37->Location = System::Drawing::Point(337, 75);
            this->label37->Name = L"label37";
            this->label37->Size = System::Drawing::Size(55, 20);
            this->label37->TabIndex = 1;
            this->label37->Text = L"Type:";
            // 
            // flowLayoutPanel1
            // 
            this->flowLayoutPanel1->AutoScroll = true;
            this->flowLayoutPanel1->Location = System::Drawing::Point(232, 18);
            this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
            this->flowLayoutPanel1->Size = System::Drawing::Size(963, 704);
            this->flowLayoutPanel1->TabIndex = 20;
            this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminForm::flowLayoutPanel1_Paint_1);
            // 
            // Moderate_users_panel
            // 
            this->Moderate_users_panel->Controls->Add(this->user_details);
            this->Moderate_users_panel->Controls->Add(this->flowLayoutPanel3);
            this->Moderate_users_panel->Controls->Add(this->Search_textbox);
            this->Moderate_users_panel->Controls->Add(this->label103);
            this->Moderate_users_panel->Controls->Add(this->pictureBox2);
            this->Moderate_users_panel->Controls->Add(this->Search_combobox);
            this->Moderate_users_panel->Controls->Add(this->pictureBox9);
            this->Moderate_users_panel->Location = System::Drawing::Point(3, 88);
            this->Moderate_users_panel->Name = L"Moderate_users_panel";
            this->Moderate_users_panel->Size = System::Drawing::Size(1187, 717);
            this->Moderate_users_panel->TabIndex = 3;
            this->Moderate_users_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminForm::Moderate_users_panel_Paint);
            // 
            // user_details
            // 
            this->user_details->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
                static_cast<System::Int32>(static_cast<System::Byte>(122)));
            this->user_details->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->user_details->Controls->Add(this->label104);
            this->user_details->Controls->Add(this->iidlbl);
            this->user_details->Controls->Add(this->boughtlbl);
            this->user_details->Controls->Add(this->Balancelbl);
            this->user_details->Controls->Add(this->Properties_in_Marketlbl);
            this->user_details->Controls->Add(this->phonelbl);
            this->user_details->Controls->Add(this->emaillbl);
            this->user_details->Controls->Add(this->Namelbl);
            this->user_details->Controls->Add(this->button12);
            this->user_details->Controls->Add(this->label105);
            this->user_details->Controls->Add(this->label107);
            this->user_details->Controls->Add(this->label109);
            this->user_details->Controls->Add(this->label110);
            this->user_details->Controls->Add(this->label111);
            this->user_details->Controls->Add(this->label112);
            this->user_details->Controls->Add(this->label113);
            this->user_details->Location = System::Drawing::Point(282, 114);
            this->user_details->Name = L"user_details";
            this->user_details->Size = System::Drawing::Size(662, 482);
            this->user_details->TabIndex = 20;
            this->user_details->Visible = false;
            // 
            // label104
            // 
            this->label104->AutoSize = true;
            this->label104->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label104->ForeColor = System::Drawing::Color::LightGray;
            this->label104->Location = System::Drawing::Point(223, 10);
            this->label104->Name = L"label104";
            this->label104->Size = System::Drawing::Size(208, 38);
            this->label104->TabIndex = 1;
            this->label104->Text = L"User Details";
            // 
            // iidlbl
            // 
            this->iidlbl->AutoSize = true;
            this->iidlbl->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10, System::Drawing::FontStyle::Bold));
            this->iidlbl->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->iidlbl->Location = System::Drawing::Point(351, 102);
            this->iidlbl->Name = L"iidlbl";
            this->iidlbl->Size = System::Drawing::Size(110, 23);
            this->iidlbl->TabIndex = 8;
            this->iidlbl->Text = L"Place_holder";
            // 
            // boughtlbl
            // 
            this->boughtlbl->AutoSize = true;
            this->boughtlbl->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10, System::Drawing::FontStyle::Bold));
            this->boughtlbl->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->boughtlbl->Location = System::Drawing::Point(351, 246);
            this->boughtlbl->Name = L"boughtlbl";
            this->boughtlbl->Size = System::Drawing::Size(110, 23);
            this->boughtlbl->TabIndex = 8;
            this->boughtlbl->Text = L"Place_holder";
            this->boughtlbl->Click += gcnew System::EventHandler(this, &AdminForm::label97_Click);
            // 
            // Balancelbl
            // 
            this->Balancelbl->AutoSize = true;
            this->Balancelbl->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10, System::Drawing::FontStyle::Bold));
            this->Balancelbl->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->Balancelbl->Location = System::Drawing::Point(71, 327);
            this->Balancelbl->Name = L"Balancelbl";
            this->Balancelbl->Size = System::Drawing::Size(110, 23);
            this->Balancelbl->TabIndex = 8;
            this->Balancelbl->Text = L"Place_holder";
            // 
            // Properties_in_Marketlbl
            // 
            this->Properties_in_Marketlbl->AutoSize = true;
            this->Properties_in_Marketlbl->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10, System::Drawing::FontStyle::Bold));
            this->Properties_in_Marketlbl->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->Properties_in_Marketlbl->Location = System::Drawing::Point(70, 246);
            this->Properties_in_Marketlbl->Name = L"Properties_in_Marketlbl";
            this->Properties_in_Marketlbl->Size = System::Drawing::Size(110, 23);
            this->Properties_in_Marketlbl->TabIndex = 8;
            this->Properties_in_Marketlbl->Text = L"Place_holder";
            // 
            // phonelbl
            // 
            this->phonelbl->AutoSize = true;
            this->phonelbl->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10, System::Drawing::FontStyle::Bold));
            this->phonelbl->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->phonelbl->Location = System::Drawing::Point(351, 177);
            this->phonelbl->Name = L"phonelbl";
            this->phonelbl->Size = System::Drawing::Size(110, 23);
            this->phonelbl->TabIndex = 8;
            this->phonelbl->Text = L"Place_holder";
            // 
            // emaillbl
            // 
            this->emaillbl->AutoSize = true;
            this->emaillbl->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10, System::Drawing::FontStyle::Bold));
            this->emaillbl->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->emaillbl->Location = System::Drawing::Point(70, 177);
            this->emaillbl->Name = L"emaillbl";
            this->emaillbl->Size = System::Drawing::Size(110, 23);
            this->emaillbl->TabIndex = 8;
            this->emaillbl->Text = L"Place_holder";
            // 
            // Namelbl
            // 
            this->Namelbl->AutoSize = true;
            this->Namelbl->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10, System::Drawing::FontStyle::Bold));
            this->Namelbl->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->Namelbl->Location = System::Drawing::Point(70, 102);
            this->Namelbl->Name = L"Namelbl";
            this->Namelbl->Size = System::Drawing::Size(110, 23);
            this->Namelbl->TabIndex = 8;
            this->Namelbl->Text = L"Place_holder";
            // 
            // button12
            // 
            this->button12->BackColor = System::Drawing::Color::CadetBlue;
            this->button12->FlatAppearance->BorderSize = 0;
            this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button12->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->button12->Location = System::Drawing::Point(263, 420);
            this->button12->Name = L"button12";
            this->button12->Size = System::Drawing::Size(142, 44);
            this->button12->TabIndex = 7;
            this->button12->Text = L"Close";
            this->button12->UseVisualStyleBackColor = false;
            this->button12->Click += gcnew System::EventHandler(this, &AdminForm::button12_Click);
            // 
            // label105
            // 
            this->label105->AutoSize = true;
            this->label105->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
            this->label105->ForeColor = System::Drawing::Color::White;
            this->label105->Location = System::Drawing::Point(54, 300);
            this->label105->Name = L"label105";
            this->label105->Size = System::Drawing::Size(97, 25);
            this->label105->TabIndex = 1;
            this->label105->Text = L"Balance:";
            // 
            // label107
            // 
            this->label107->AutoSize = true;
            this->label107->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
            this->label107->ForeColor = System::Drawing::Color::White;
            this->label107->Location = System::Drawing::Point(57, 214);
            this->label107->Name = L"label107";
            this->label107->Size = System::Drawing::Size(212, 25);
            this->label107->TabIndex = 1;
            this->label107->Text = L"Properties in Market:";
            // 
            // label109
            // 
            this->label109->AutoSize = true;
            this->label109->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
            this->label109->ForeColor = System::Drawing::Color::White;
            this->label109->Location = System::Drawing::Point(337, 145);
            this->label109->Name = L"label109";
            this->label109->Size = System::Drawing::Size(81, 25);
            this->label109->TabIndex = 1;
            this->label109->Text = L"Phone:";
            // 
            // label110
            // 
            this->label110->AutoSize = true;
            this->label110->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
            this->label110->ForeColor = System::Drawing::Color::White;
            this->label110->Location = System::Drawing::Point(58, 145);
            this->label110->Name = L"label110";
            this->label110->Size = System::Drawing::Size(72, 25);
            this->label110->TabIndex = 1;
            this->label110->Text = L"Email:";
            // 
            // label111
            // 
            this->label111->AutoSize = true;
            this->label111->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
            this->label111->ForeColor = System::Drawing::Color::White;
            this->label111->Location = System::Drawing::Point(337, 214);
            this->label111->Name = L"label111";
            this->label111->Size = System::Drawing::Size(184, 25);
            this->label111->TabIndex = 1;
            this->label111->Text = L"Bought Properties";
            // 
            // label112
            // 
            this->label112->AutoSize = true;
            this->label112->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
            this->label112->ForeColor = System::Drawing::Color::White;
            this->label112->Location = System::Drawing::Point(54, 75);
            this->label112->Name = L"label112";
            this->label112->Size = System::Drawing::Size(75, 25);
            this->label112->TabIndex = 1;
            this->label112->Text = L"Name:";
            // 
            // label113
            // 
            this->label113->AutoSize = true;
            this->label113->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
            this->label113->ForeColor = System::Drawing::Color::White;
            this->label113->Location = System::Drawing::Point(337, 75);
            this->label113->Name = L"label113";
            this->label113->Size = System::Drawing::Size(37, 25);
            this->label113->TabIndex = 1;
            this->label113->Text = L"Id:";
            // 
            // flowLayoutPanel3
            // 
            this->flowLayoutPanel3->AutoScroll = true;
            this->flowLayoutPanel3->Location = System::Drawing::Point(78, 90);
            this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
            this->flowLayoutPanel3->Size = System::Drawing::Size(1043, 548);
            this->flowLayoutPanel3->TabIndex = 22;
            // 
            // Search_textbox
            // 
            this->Search_textbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->Search_textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Search_textbox->ForeColor = System::Drawing::Color::SlateGray;
            this->Search_textbox->Location = System::Drawing::Point(389, 25);
            this->Search_textbox->Name = L"Search_textbox";
            this->Search_textbox->Size = System::Drawing::Size(365, 19);
            this->Search_textbox->TabIndex = 1;
            this->Search_textbox->TextChanged += gcnew System::EventHandler(this, &AdminForm::Search_textbox_TextChanged);
            // 
            // label103
            // 
            this->label103->AutoSize = true;
            this->label103->BackColor = System::Drawing::Color::White;
            this->label103->Font = (gcnew System::Drawing::Font(L"Tahoma", 15));
            this->label103->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->label103->Location = System::Drawing::Point(368, 19);
            this->label103->Name = L"label103";
            this->label103->Size = System::Drawing::Size(23, 30);
            this->label103->TabIndex = 21;
            this->label103->Text = L"|";
            // 
            // pictureBox2
            // 
            this->pictureBox2->BackColor = System::Drawing::Color::White;
            this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(803, 18);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(42, 33);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox2->TabIndex = 3;
            this->pictureBox2->TabStop = false;
            this->pictureBox2->Click += gcnew System::EventHandler(this, &AdminForm::pictureBox2_Click_1);
            // 
            // Search_combobox
            // 
            this->Search_combobox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->Search_combobox->FormattingEnabled = true;
            this->Search_combobox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Email", L"Name" });
            this->Search_combobox->Location = System::Drawing::Point(316, 22);
            this->Search_combobox->Name = L"Search_combobox";
            this->Search_combobox->Size = System::Drawing::Size(58, 24);
            this->Search_combobox->TabIndex = 2;
            this->Search_combobox->SelectedIndexChanged += gcnew System::EventHandler(this, &AdminForm::comboBox1_SelectedIndexChanged);
            // 
            // pictureBox9
            // 
            this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
            this->pictureBox9->Location = System::Drawing::Point(302, 15);
            this->pictureBox9->Name = L"pictureBox9";
            this->pictureBox9->Size = System::Drawing::Size(561, 39);
            this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox9->TabIndex = 0;
            this->pictureBox9->TabStop = false;
            // 
            // Requests_panel
            // 
            this->Requests_panel->Controls->Add(this->label10);
            this->Requests_panel->Controls->Add(this->panel2);
            this->Requests_panel->Controls->Add(this->flowLayoutPanel2);
            this->Requests_panel->Location = System::Drawing::Point(3, 88);
            this->Requests_panel->Name = L"Requests_panel";
            this->Requests_panel->Size = System::Drawing::Size(1180, 717);
            this->Requests_panel->TabIndex = 9;
            this->Requests_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminForm::Requests_panel_Paint);
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
            this->label10->ForeColor = System::Drawing::Color::White;
            this->label10->Location = System::Drawing::Point(28, 29);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(288, 36);
            this->label10->TabIndex = 23;
            this->label10->Text = L"Pending Properties";
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
                static_cast<System::Int32>(static_cast<System::Byte>(122)));
            this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->panel2->Controls->Add(this->pricelbl);
            this->panel2->Controls->Add(this->locationlbl);
            this->panel2->Controls->Add(this->numberOFbedroomslbl);
            this->panel2->Controls->Add(this->arealbl);
            this->panel2->Controls->Add(this->typelbl);
            this->panel2->Controls->Add(this->destxt);
            this->panel2->Controls->Add(this->statuslbl);
            this->panel2->Controls->Add(this->ownerNamelbl);
            this->panel2->Controls->Add(this->idlbl);
            this->panel2->Controls->Add(this->label13);
            this->panel2->Controls->Add(this->button5);
            this->panel2->Controls->Add(this->label14);
            this->panel2->Controls->Add(this->label28);
            this->panel2->Controls->Add(this->label29);
            this->panel2->Controls->Add(this->label30);
            this->panel2->Controls->Add(this->label31);
            this->panel2->Controls->Add(this->label32);
            this->panel2->Controls->Add(this->label38);
            this->panel2->Controls->Add(this->label39);
            this->panel2->Controls->Add(this->label40);
            this->panel2->Location = System::Drawing::Point(283, 117);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(662, 482);
            this->panel2->TabIndex = 22;
            this->panel2->Visible = false;
            // 
            // pricelbl
            // 
            this->pricelbl->AutoSize = true;
            this->pricelbl->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10, System::Drawing::FontStyle::Bold));
            this->pricelbl->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->pricelbl->Location = System::Drawing::Point(358, 248);
            this->pricelbl->Name = L"pricelbl";
            this->pricelbl->Size = System::Drawing::Size(110, 23);
            this->pricelbl->TabIndex = 14;
            this->pricelbl->Text = L"Place_holder";
            // 
            // locationlbl
            // 
            this->locationlbl->AutoSize = true;
            this->locationlbl->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10, System::Drawing::FontStyle::Bold));
            this->locationlbl->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->locationlbl->Location = System::Drawing::Point(72, 245);
            this->locationlbl->Name = L"locationlbl";
            this->locationlbl->Size = System::Drawing::Size(110, 23);
            this->locationlbl->TabIndex = 13;
            this->locationlbl->Text = L"Place_holder";
            // 
            // numberOFbedroomslbl
            // 
            this->numberOFbedroomslbl->AutoSize = true;
            this->numberOFbedroomslbl->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10, System::Drawing::FontStyle::Bold));
            this->numberOFbedroomslbl->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->numberOFbedroomslbl->Location = System::Drawing::Point(358, 174);
            this->numberOFbedroomslbl->Name = L"numberOFbedroomslbl";
            this->numberOFbedroomslbl->Size = System::Drawing::Size(110, 23);
            this->numberOFbedroomslbl->TabIndex = 12;
            this->numberOFbedroomslbl->Text = L"Place_holder";
            // 
            // arealbl
            // 
            this->arealbl->AutoSize = true;
            this->arealbl->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10, System::Drawing::FontStyle::Bold));
            this->arealbl->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->arealbl->Location = System::Drawing::Point(70, 174);
            this->arealbl->Name = L"arealbl";
            this->arealbl->Size = System::Drawing::Size(110, 23);
            this->arealbl->TabIndex = 11;
            this->arealbl->Text = L"Place_holder";
            // 
            // typelbl
            // 
            this->typelbl->AutoSize = true;
            this->typelbl->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10, System::Drawing::FontStyle::Bold));
            this->typelbl->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->typelbl->Location = System::Drawing::Point(354, 104);
            this->typelbl->Name = L"typelbl";
            this->typelbl->Size = System::Drawing::Size(110, 23);
            this->typelbl->TabIndex = 10;
            this->typelbl->Text = L"Place_holder";
            // 
            // destxt
            // 
            this->destxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
            this->destxt->Location = System::Drawing::Point(166, 300);
            this->destxt->Multiline = true;
            this->destxt->Name = L"destxt";
            this->destxt->ReadOnly = true;
            this->destxt->Size = System::Drawing::Size(402, 97);
            this->destxt->TabIndex = 9;
            // 
            // statuslbl
            // 
            this->statuslbl->AutoSize = true;
            this->statuslbl->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10, System::Drawing::FontStyle::Bold));
            this->statuslbl->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->statuslbl->Location = System::Drawing::Point(70, 102);
            this->statuslbl->Name = L"statuslbl";
            this->statuslbl->Size = System::Drawing::Size(110, 23);
            this->statuslbl->TabIndex = 8;
            this->statuslbl->Text = L"Place_holder";
            // 
            // ownerNamelbl
            // 
            this->ownerNamelbl->AutoSize = true;
            this->ownerNamelbl->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ownerNamelbl->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->ownerNamelbl->Location = System::Drawing::Point(543, 42);
            this->ownerNamelbl->Name = L"ownerNamelbl";
            this->ownerNamelbl->Size = System::Drawing::Size(85, 17);
            this->ownerNamelbl->TabIndex = 8;
            this->ownerNamelbl->Text = L"Place_holder";
            // 
            // idlbl
            // 
            this->idlbl->AutoSize = true;
            this->idlbl->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->idlbl->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->idlbl->Location = System::Drawing::Point(45, 28);
            this->idlbl->Name = L"idlbl";
            this->idlbl->Size = System::Drawing::Size(85, 17);
            this->idlbl->TabIndex = 8;
            this->idlbl->Text = L"Place_holder";
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label13->ForeColor = System::Drawing::Color::White;
            this->label13->Location = System::Drawing::Point(262, 9);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(124, 38);
            this->label13->TabIndex = 1;
            this->label13->Text = L"Details";
            // 
            // button5
            // 
            this->button5->BackColor = System::Drawing::Color::CadetBlue;
            this->button5->FlatAppearance->BorderSize = 0;
            this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button5->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->button5->Location = System::Drawing::Point(276, 413);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(142, 44);
            this->button5->TabIndex = 7;
            this->button5->Text = L"Close";
            this->button5->UseVisualStyleBackColor = false;
            this->button5->Click += gcnew System::EventHandler(this, &AdminForm::button5_Click);
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label14->ForeColor = System::Drawing::Color::White;
            this->label14->Location = System::Drawing::Point(54, 300);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(112, 20);
            this->label14->TabIndex = 1;
            this->label14->Text = L"Description:";
            // 
            // label28
            // 
            this->label28->AutoSize = true;
            this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label28->ForeColor = System::Drawing::Color::White;
            this->label28->Location = System::Drawing::Point(514, 19);
            this->label28->Name = L"label28";
            this->label28->Size = System::Drawing::Size(123, 20);
            this->label28->TabIndex = 1;
            this->label28->Text = L"Owner Name:";
            // 
            // label29
            // 
            this->label29->AutoSize = true;
            this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label29->ForeColor = System::Drawing::Color::White;
            this->label29->Location = System::Drawing::Point(57, 214);
            this->label29->Name = L"label29";
            this->label29->Size = System::Drawing::Size(87, 20);
            this->label29->TabIndex = 1;
            this->label29->Text = L"Location:";
            // 
            // label30
            // 
            this->label30->AutoSize = true;
            this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label30->ForeColor = System::Drawing::Color::White;
            this->label30->Location = System::Drawing::Point(19, 25);
            this->label30->Name = L"label30";
            this->label30->Size = System::Drawing::Size(30, 20);
            this->label30->TabIndex = 1;
            this->label30->Text = L"Id:";
            // 
            // label31
            // 
            this->label31->AutoSize = true;
            this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label31->ForeColor = System::Drawing::Color::White;
            this->label31->Location = System::Drawing::Point(337, 145);
            this->label31->Name = L"label31";
            this->label31->Size = System::Drawing::Size(190, 20);
            this->label31->TabIndex = 1;
            this->label31->Text = L"Number of bedrooms:";
            // 
            // label32
            // 
            this->label32->AutoSize = true;
            this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label32->ForeColor = System::Drawing::Color::White;
            this->label32->Location = System::Drawing::Point(58, 145);
            this->label32->Name = L"label32";
            this->label32->Size = System::Drawing::Size(54, 20);
            this->label32->TabIndex = 1;
            this->label32->Text = L"Area:";
            // 
            // label38
            // 
            this->label38->AutoSize = true;
            this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label38->ForeColor = System::Drawing::Color::White;
            this->label38->Location = System::Drawing::Point(337, 214);
            this->label38->Name = L"label38";
            this->label38->Size = System::Drawing::Size(59, 20);
            this->label38->TabIndex = 1;
            this->label38->Text = L"Price:";
            // 
            // label39
            // 
            this->label39->AutoSize = true;
            this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label39->ForeColor = System::Drawing::Color::White;
            this->label39->Location = System::Drawing::Point(54, 75);
            this->label39->Name = L"label39";
            this->label39->Size = System::Drawing::Size(69, 20);
            this->label39->TabIndex = 1;
            this->label39->Text = L"Status:";
            // 
            // label40
            // 
            this->label40->AutoSize = true;
            this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label40->ForeColor = System::Drawing::Color::White;
            this->label40->Location = System::Drawing::Point(337, 75);
            this->label40->Name = L"label40";
            this->label40->Size = System::Drawing::Size(55, 20);
            this->label40->TabIndex = 1;
            this->label40->Text = L"Type:";
            // 
            // flowLayoutPanel2
            // 
            this->flowLayoutPanel2->AutoScroll = true;
            this->flowLayoutPanel2->Location = System::Drawing::Point(129, 81);
            this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
            this->flowLayoutPanel2->Size = System::Drawing::Size(962, 631);
            this->flowLayoutPanel2->TabIndex = 3;
            // 
            // Add_admin_panel
            // 
            this->Add_admin_panel->Controls->Add(this->button1);
            this->Add_admin_panel->Controls->Add(this->addAdminButton);
            this->Add_admin_panel->Controls->Add(this->phoneTextBox);
            this->Add_admin_panel->Controls->Add(this->passwordTextBox);
            this->Add_admin_panel->Controls->Add(this->emailTextBox);
            this->Add_admin_panel->Controls->Add(this->nameTextBox);
            this->Add_admin_panel->Controls->Add(this->label7);
            this->Add_admin_panel->Controls->Add(this->label6);
            this->Add_admin_panel->Controls->Add(this->label5);
            this->Add_admin_panel->Controls->Add(this->label4);
            this->Add_admin_panel->Controls->Add(this->label1);
            this->Add_admin_panel->Controls->Add(this->pictureBox19);
            this->Add_admin_panel->Location = System::Drawing::Point(2, 83);
            this->Add_admin_panel->Name = L"Add_admin_panel";
            this->Add_admin_panel->Size = System::Drawing::Size(1206, 731);
            this->Add_admin_panel->TabIndex = 10;
            this->Add_admin_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminForm::Add_admin_panel_Paint);
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::CadetBlue;
            this->button1->FlatAppearance->BorderSize = 0;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->button1->Location = System::Drawing::Point(949, 505);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(161, 61);
            this->button1->TabIndex = 8;
            this->button1->Text = L"Clear";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &AdminForm::button1_Click);
            // 
            // addAdminButton
            // 
            this->addAdminButton->BackColor = System::Drawing::Color::CadetBlue;
            this->addAdminButton->FlatAppearance->BorderSize = 0;
            this->addAdminButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->addAdminButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->addAdminButton->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->addAdminButton->Location = System::Drawing::Point(756, 505);
            this->addAdminButton->Name = L"addAdminButton";
            this->addAdminButton->Size = System::Drawing::Size(161, 61);
            this->addAdminButton->TabIndex = 8;
            this->addAdminButton->Text = L"ADD";
            this->addAdminButton->UseVisualStyleBackColor = false;
            this->addAdminButton->Click += gcnew System::EventHandler(this, &AdminForm::button4_Click);
            // 
            // phoneTextBox
            // 
            this->phoneTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
            this->phoneTextBox->Location = System::Drawing::Point(105, 608);
            this->phoneTextBox->Name = L"phoneTextBox";
            this->phoneTextBox->Size = System::Drawing::Size(327, 27);
            this->phoneTextBox->TabIndex = 1;
            // 
            // passwordTextBox
            // 
            this->passwordTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
            this->passwordTextBox->Location = System::Drawing::Point(103, 454);
            this->passwordTextBox->Name = L"passwordTextBox";
            this->passwordTextBox->Size = System::Drawing::Size(327, 27);
            this->passwordTextBox->TabIndex = 1;
            // 
            // emailTextBox
            // 
            this->emailTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
            this->emailTextBox->Location = System::Drawing::Point(105, 298);
            this->emailTextBox->Name = L"emailTextBox";
            this->emailTextBox->Size = System::Drawing::Size(327, 27);
            this->emailTextBox->TabIndex = 1;
            this->emailTextBox->TextChanged += gcnew System::EventHandler(this, &AdminForm::emailTextBox_TextChanged);
            // 
            // nameTextBox
            // 
            this->nameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->nameTextBox->Location = System::Drawing::Point(105, 158);
            this->nameTextBox->Name = L"nameTextBox";
            this->nameTextBox->Size = System::Drawing::Size(327, 27);
            this->nameTextBox->TabIndex = 1;
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold));
            this->label7->ForeColor = System::Drawing::Color::White;
            this->label7->Location = System::Drawing::Point(69, 556);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(102, 29);
            this->label7->TabIndex = 0;
            this->label7->Text = L"Phone: ";
            this->label7->Click += gcnew System::EventHandler(this, &AdminForm::label4_Click);
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold));
            this->label6->ForeColor = System::Drawing::Color::White;
            this->label6->Location = System::Drawing::Point(67, 399);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(142, 29);
            this->label6->TabIndex = 0;
            this->label6->Text = L"Password: ";
            this->label6->Click += gcnew System::EventHandler(this, &AdminForm::label4_Click);
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold));
            this->label5->ForeColor = System::Drawing::Color::White;
            this->label5->Location = System::Drawing::Point(69, 245);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(93, 29);
            this->label5->TabIndex = 0;
            this->label5->Text = L"Email: ";
            this->label5->Click += gcnew System::EventHandler(this, &AdminForm::label4_Click);
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::Color::White;
            this->label4->Location = System::Drawing::Point(69, 105);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(96, 29);
            this->label4->TabIndex = 0;
            this->label4->Text = L"Name: ";
            this->label4->Click += gcnew System::EventHandler(this, &AdminForm::label4_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::White;
            this->label1->Location = System::Drawing::Point(436, 20);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(331, 48);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Add New Admin";
            // 
            // pictureBox19
            // 
            this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
            this->pictureBox19->Location = System::Drawing::Point(780, 167);
            this->pictureBox19->Name = L"pictureBox19";
            this->pictureBox19->Size = System::Drawing::Size(330, 310);
            this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox19->TabIndex = 9;
            this->pictureBox19->TabStop = false;
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->ForeColor = System::Drawing::Color::White;
            this->label9->Location = System::Drawing::Point(55, 90);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(101, 29);
            this->label9->TabIndex = 26;
            this->label9->Text = L"Name: ";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold));
            this->label8->ForeColor = System::Drawing::Color::White;
            this->label8->Location = System::Drawing::Point(55, 251);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(99, 29);
            this->label8->TabIndex = 25;
            this->label8->Text = L"Email: ";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold));
            this->label2->ForeColor = System::Drawing::Color::White;
            this->label2->Location = System::Drawing::Point(46, 416);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(107, 29);
            this->label2->TabIndex = 21;
            this->label2->Text = L"Phone: ";
            // 
            // label90
            // 
            this->label90->AutoSize = true;
            this->label90->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold));
            this->label90->ForeColor = System::Drawing::Color::White;
            this->label90->Location = System::Drawing::Point(53, 572);
            this->label90->Name = L"label90";
            this->label90->Size = System::Drawing::Size(140, 29);
            this->label90->TabIndex = 23;
            this->label90->Text = L"Password:";
            // 
            // user_password
            // 
            this->user_password->AutoSize = true;
            this->user_password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold));
            this->user_password->ForeColor = System::Drawing::Color::White;
            this->user_password->Location = System::Drawing::Point(198, 575);
            this->user_password->Name = L"user_password";
            this->user_password->Size = System::Drawing::Size(156, 29);
            this->user_password->TabIndex = 24;
            this->user_password->Text = L"*************";
            this->user_password->Click += gcnew System::EventHandler(this, &AdminForm::user_password_Click);
            // 
            // user_name
            // 
            this->user_name->AutoSize = true;
            this->user_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold));
            this->user_name->ForeColor = System::Drawing::Color::White;
            this->user_name->Location = System::Drawing::Point(151, 90);
            this->user_name->Name = L"user_name";
            this->user_name->Size = System::Drawing::Size(158, 29);
            this->user_name->TabIndex = 20;
            this->user_name->Text = L"Placeholder";
            // 
            // user_email
            // 
            this->user_email->AutoSize = true;
            this->user_email->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold));
            this->user_email->ForeColor = System::Drawing::Color::White;
            this->user_email->Location = System::Drawing::Point(151, 251);
            this->user_email->Name = L"user_email";
            this->user_email->Size = System::Drawing::Size(158, 29);
            this->user_email->TabIndex = 19;
            this->user_email->Text = L"Placeholder";
            // 
            // user_phone
            // 
            this->user_phone->AutoSize = true;
            this->user_phone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold));
            this->user_phone->ForeColor = System::Drawing::Color::White;
            this->user_phone->Location = System::Drawing::Point(146, 416);
            this->user_phone->Name = L"user_phone";
            this->user_phone->Size = System::Drawing::Size(158, 29);
            this->user_phone->TabIndex = 17;
            this->user_phone->Text = L"Placeholder";
            // 
            // EditFieldPanel
            // 
            this->EditFieldPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
                static_cast<System::Int32>(static_cast<System::Byte>(122)));
            this->EditFieldPanel->Controls->Add(this->save_edit);
            this->EditFieldPanel->Controls->Add(this->button3);
            this->EditFieldPanel->Controls->Add(this->label89);
            this->EditFieldPanel->Controls->Add(this->editBox);
            this->EditFieldPanel->Controls->Add(this->editLabel);
            this->EditFieldPanel->Location = System::Drawing::Point(621, 203);
            this->EditFieldPanel->Name = L"EditFieldPanel";
            this->EditFieldPanel->Size = System::Drawing::Size(453, 264);
            this->EditFieldPanel->TabIndex = 30;
            // 
            // save_edit
            // 
            this->save_edit->BackColor = System::Drawing::Color::CadetBlue;
            this->save_edit->FlatAppearance->BorderSize = 0;
            this->save_edit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->save_edit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
            this->save_edit->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->save_edit->Location = System::Drawing::Point(284, 204);
            this->save_edit->Name = L"save_edit";
            this->save_edit->Size = System::Drawing::Size(141, 44);
            this->save_edit->TabIndex = 42;
            this->save_edit->Text = L"SAVE";
            this->save_edit->UseVisualStyleBackColor = false;
            this->save_edit->Click += gcnew System::EventHandler(this, &AdminForm::save_edit_Click);
            // 
            // button3
            // 
            this->button3->BackColor = System::Drawing::Color::CadetBlue;
            this->button3->FlatAppearance->BorderSize = 0;
            this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
            this->button3->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->button3->Location = System::Drawing::Point(39, 204);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(141, 44);
            this->button3->TabIndex = 41;
            this->button3->Text = L"CANCEL";
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Click += gcnew System::EventHandler(this, &AdminForm::button3_Click);
            // 
            // label89
            // 
            this->label89->AutoSize = true;
            this->label89->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label89->ForeColor = System::Drawing::Color::White;
            this->label89->Location = System::Drawing::Point(185, 22);
            this->label89->Name = L"label89";
            this->label89->Size = System::Drawing::Size(61, 29);
            this->label89->TabIndex = 15;
            this->label89->Text = L"Edit";
            // 
            // editBox
            // 
            this->editBox->Location = System::Drawing::Point(166, 125);
            this->editBox->Name = L"editBox";
            this->editBox->Size = System::Drawing::Size(250, 24);
            this->editBox->TabIndex = 11;
            this->editBox->TextChanged += gcnew System::EventHandler(this, &AdminForm::editBox_TextChanged);
            // 
            // editLabel
            // 
            this->editLabel->AutoSize = true;
            this->editLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->editLabel->ForeColor = System::Drawing::Color::White;
            this->editLabel->Location = System::Drawing::Point(32, 122);
            this->editLabel->Name = L"editLabel";
            this->editLabel->Size = System::Drawing::Size(101, 29);
            this->editLabel->TabIndex = 10;
            this->editLabel->Text = L"Name: ";
            // 
            // pictureBox27
            // 
            this->pictureBox27->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.Image")));
            this->pictureBox27->Location = System::Drawing::Point(352, 81);
            this->pictureBox27->Name = L"pictureBox27";
            this->pictureBox27->Size = System::Drawing::Size(80, 47);
            this->pictureBox27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox27->TabIndex = 34;
            this->pictureBox27->TabStop = false;
            this->pictureBox27->Click += gcnew System::EventHandler(this, &AdminForm::pictureBox27_Click);
            // 
            // change_password_panel
            // 
            this->change_password_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)),
                static_cast<System::Int32>(static_cast<System::Byte>(103)), static_cast<System::Int32>(static_cast<System::Byte>(122)));
            this->change_password_panel->Controls->Add(this->save_pass);
            this->change_password_panel->Controls->Add(this->cancel_pass);
            this->change_password_panel->Controls->Add(this->new_pass);
            this->change_password_panel->Controls->Add(this->label_new_pass);
            this->change_password_panel->Controls->Add(this->label92);
            this->change_password_panel->Controls->Add(this->old_pass);
            this->change_password_panel->Controls->Add(this->label93);
            this->change_password_panel->Location = System::Drawing::Point(611, 218);
            this->change_password_panel->Name = L"change_password_panel";
            this->change_password_panel->Size = System::Drawing::Size(453, 288);
            this->change_password_panel->TabIndex = 33;
            // 
            // save_pass
            // 
            this->save_pass->BackColor = System::Drawing::Color::CadetBlue;
            this->save_pass->FlatAppearance->BorderSize = 0;
            this->save_pass->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->save_pass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
            this->save_pass->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->save_pass->Location = System::Drawing::Point(285, 232);
            this->save_pass->Name = L"save_pass";
            this->save_pass->Size = System::Drawing::Size(141, 44);
            this->save_pass->TabIndex = 39;
            this->save_pass->Text = L"SAVE";
            this->save_pass->UseVisualStyleBackColor = false;
            this->save_pass->Click += gcnew System::EventHandler(this, &AdminForm::save_pass_Click);
            // 
            // cancel_pass
            // 
            this->cancel_pass->BackColor = System::Drawing::Color::CadetBlue;
            this->cancel_pass->FlatAppearance->BorderSize = 0;
            this->cancel_pass->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cancel_pass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
            this->cancel_pass->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->cancel_pass->Location = System::Drawing::Point(41, 234);
            this->cancel_pass->Name = L"cancel_pass";
            this->cancel_pass->Size = System::Drawing::Size(141, 44);
            this->cancel_pass->TabIndex = 38;
            this->cancel_pass->Text = L"CANCEL";
            this->cancel_pass->UseVisualStyleBackColor = false;
            this->cancel_pass->Click += gcnew System::EventHandler(this, &AdminForm::cancel_pass_Click);
            // 
            // new_pass
            // 
            this->new_pass->Location = System::Drawing::Point(234, 163);
            this->new_pass->Name = L"new_pass";
            this->new_pass->Size = System::Drawing::Size(197, 24);
            this->new_pass->TabIndex = 17;
            // 
            // label_new_pass
            // 
            this->label_new_pass->AutoSize = true;
            this->label_new_pass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label_new_pass->ForeColor = System::Drawing::Color::White;
            this->label_new_pass->Location = System::Drawing::Point(26, 162);
            this->label_new_pass->Name = L"label_new_pass";
            this->label_new_pass->Size = System::Drawing::Size(201, 29);
            this->label_new_pass->TabIndex = 16;
            this->label_new_pass->Text = L"New Password:";
            // 
            // label92
            // 
            this->label92->AutoSize = true;
            this->label92->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label92->ForeColor = System::Drawing::Color::White;
            this->label92->Location = System::Drawing::Point(120, 21);
            this->label92->Name = L"label92";
            this->label92->Size = System::Drawing::Size(234, 29);
            this->label92->TabIndex = 15;
            this->label92->Text = L"Change Password";
            // 
            // old_pass
            // 
            this->old_pass->Location = System::Drawing::Point(234, 97);
            this->old_pass->Name = L"old_pass";
            this->old_pass->Size = System::Drawing::Size(197, 24);
            this->old_pass->TabIndex = 11;
            // 
            // label93
            // 
            this->label93->AutoSize = true;
            this->label93->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label93->ForeColor = System::Drawing::Color::White;
            this->label93->Location = System::Drawing::Point(27, 94);
            this->label93->Name = L"label93";
            this->label93->Size = System::Drawing::Size(190, 29);
            this->label93->TabIndex = 10;
            this->label93->Text = L"Old Password:";
            // 
            // Profile_panel
            // 
            this->Profile_panel->Controls->Add(this->pictureBox30);
            this->Profile_panel->Controls->Add(this->pictureBox29);
            this->Profile_panel->Controls->Add(this->pictureBox28);
            this->Profile_panel->Controls->Add(this->pictureBox27);
            this->Profile_panel->Controls->Add(this->user_phone);
            this->Profile_panel->Controls->Add(this->user_email);
            this->Profile_panel->Controls->Add(this->user_name);
            this->Profile_panel->Controls->Add(this->user_password);
            this->Profile_panel->Controls->Add(this->label90);
            this->Profile_panel->Controls->Add(this->label2);
            this->Profile_panel->Controls->Add(this->label8);
            this->Profile_panel->Controls->Add(this->label9);
            this->Profile_panel->Controls->Add(this->change_password_panel);
            this->Profile_panel->Controls->Add(this->EditFieldPanel);
            this->Profile_panel->Location = System::Drawing::Point(4, 88);
            this->Profile_panel->Name = L"Profile_panel";
            this->Profile_panel->Size = System::Drawing::Size(1202, 717);
            this->Profile_panel->TabIndex = 11;
            this->Profile_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminForm::Profile_panel_Paint);
            // 
            // pictureBox30
            // 
            this->pictureBox30->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.Image")));
            this->pictureBox30->Location = System::Drawing::Point(350, 559);
            this->pictureBox30->Name = L"pictureBox30";
            this->pictureBox30->Size = System::Drawing::Size(80, 47);
            this->pictureBox30->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox30->TabIndex = 38;
            this->pictureBox30->TabStop = false;
            this->pictureBox30->Click += gcnew System::EventHandler(this, &AdminForm::pictureBox30_Click);
            // 
            // pictureBox29
            // 
            this->pictureBox29->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.Image")));
            this->pictureBox29->Location = System::Drawing::Point(345, 402);
            this->pictureBox29->Name = L"pictureBox29";
            this->pictureBox29->Size = System::Drawing::Size(80, 47);
            this->pictureBox29->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox29->TabIndex = 36;
            this->pictureBox29->TabStop = false;
            this->pictureBox29->Click += gcnew System::EventHandler(this, &AdminForm::pictureBox29_Click);
            // 
            // pictureBox28
            // 
            this->pictureBox28->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.Image")));
            this->pictureBox28->Location = System::Drawing::Point(350, 235);
            this->pictureBox28->Name = L"pictureBox28";
            this->pictureBox28->Size = System::Drawing::Size(80, 47);
            this->pictureBox28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox28->TabIndex = 35;
            this->pictureBox28->TabStop = false;
            this->pictureBox28->Click += gcnew System::EventHandler(this, &AdminForm::pictureBox28_Click);
            // 
            // AdminForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->ClientSize = System::Drawing::Size(1218, 823);
            this->Controls->Add(this->Navigationbar_panel);
            this->Controls->Add(this->Dashboard_panel);
            this->Controls->Add(this->Browse_panel);
            this->Controls->Add(this->Requests_panel);
            this->Controls->Add(this->Profile_panel);
            this->Controls->Add(this->Moderate_users_panel);
            this->Controls->Add(this->Add_admin_panel);
            this->Name = L"AdminForm";
            this->Text = L"AdminForm";
            this->Load += gcnew System::EventHandler(this, &AdminForm::AdminForm_Load);
            this->Navigationbar_panel->ResumeLayout(false);
            this->Navigationbar_panel->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->Dashboard_panel->ResumeLayout(false);
            this->Dashboard_panel->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
            this->New_Property->ResumeLayout(false);
            this->New_Property->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
            this->Browse_panel->ResumeLayout(false);
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBedrooms))->EndInit();
            this->Details_Panel->ResumeLayout(false);
            this->Details_Panel->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
            this->Moderate_users_panel->ResumeLayout(false);
            this->Moderate_users_panel->PerformLayout();
            this->user_details->ResumeLayout(false);
            this->user_details->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
            this->Requests_panel->ResumeLayout(false);
            this->Requests_panel->PerformLayout();
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            this->Add_admin_panel->ResumeLayout(false);
            this->Add_admin_panel->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
            this->EditFieldPanel->ResumeLayout(false);
            this->EditFieldPanel->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
            this->change_password_panel->ResumeLayout(false);
            this->change_password_panel->PerformLayout();
            this->Profile_panel->ResumeLayout(false);
            this->Profile_panel->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion
    private: System::Void AdminForm_Load(System::Object^ sender, System::EventArgs^ e) {

        change_password_panel->Visible = false; 
        EditFieldPanel->Visible = false; 
        Details_Panel->Visible = false;
        user_details->Visible = false;
        Dashboard->BackColor = System::Drawing::Color::FromArgb(159, 201, 191);
    }
    private: System::Void Requests_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }
private: System::Void Navigationbar_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
    ChangePanelAndButtonColor((Control^)sender);
    }
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
           
       }
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
    System::Windows::Forms::DialogResult result = MessageBox::Show(
        "Are you sure you want to logout?",
        "Confirm Logout",
        MessageBoxButtons::YesNo,
        MessageBoxIcon::Warning
    );

    if (result == System::Windows::Forms::DialogResult::Yes) {
        this->Hide();
        parent->Show();
    }
    }
private: System::Void Profile_Click(System::Object^ sender, System::EventArgs^ e) {
    ChangePanelAndButtonColor((Control^)sender);
    }
private: System::Void Browse_Click(System::Object^ sender, System::EventArgs^ e) {
    ChangePanelAndButtonColor((Control^)sender);
    }
private: System::Void Dashboard_Click(System::Object^ sender, System::EventArgs^ e) {
    ChangePanelAndButtonColor((Control^)sender);
    }
private: System::Void Requests_Click(System::Object^ sender, System::EventArgs^ e) {
    ChangePanelAndButtonColor((Control^)sender);
    }
private: System::Void Moderate_Users_Click(System::Object^ sender, System::EventArgs^ e) {
    ChangePanelAndButtonColor((Control^)sender);
    }
private: System::Void Add_Admin_Click(System::Object^ sender, System::EventArgs^ e) {
    ChangePanelAndButtonColor((Control^)sender);
    }
private: System::Void Browse_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }
private: System::Void Dashboard_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }
private: System::Void Moderate_users_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }
private: System::Void Add_admin_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }
private: System::Void Profile_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }

       void ChangePanelAndButtonColor(Control^ clickedControl)
       {
           // Hide all panels
           Dashboard_panel->Visible = false;
           Browse_panel->Visible = false;
           Requests_panel->Visible = false;
           Moderate_users_panel->Visible = false;
           Add_admin_panel->Visible = false;
           Profile_panel->Visible = false;

           Dashboard->BackColor = System::Drawing::Color::Transparent;
           Browse->BackColor = System::Drawing::Color::Transparent;
           Requests->BackColor = System::Drawing::Color::Transparent;
           Moderate_Users->BackColor = System::Drawing::Color::Transparent;
           Add_Admin->BackColor = System::Drawing::Color::Transparent;

           if (clickedControl == Dashboard)
           {
               Dashboard_panel->Visible = true;
               Dashboard->BackColor = System::Drawing::Color::FromArgb(159, 201, 191);
           }
           else if (clickedControl == Browse)
           {
               Browse_panel->Visible = true;
               Browse->BackColor = System::Drawing::Color::FromArgb(159, 201, 191);
           }
           else if (clickedControl == Requests)
           {
               Requests_panel->Visible = true;
               Requests->BackColor = System::Drawing::Color::FromArgb(159, 201, 191);
           }
           else if (clickedControl == Moderate_Users)
           {
               Moderate_users_panel->Visible = true;
               Moderate_Users->BackColor = System::Drawing::Color::FromArgb(159, 201, 191);
           }
           else if (clickedControl == Add_Admin)
           {
               Add_admin_panel->Visible = true;
               Add_Admin->BackColor = System::Drawing::Color::FromArgb(159, 201, 191);
           }

           
           if (clickedControl == Profile || clickedControl == pictureBox1)
           {
               Profile_panel->Visible = true;
           }
       }
       // word search appear and disappear
       private: System::Void Search_textbox_Enter(System::Object^ sender, System::EventArgs^ e) {
           if (Search_textbox->Text == "Search") {
               Search_textbox->Text = "";
               Search_textbox->ForeColor = System::Drawing::Color::SlateGray; // Or any typing color you prefer
           }
       }

       private: System::Void Search_textbox_Leave(System::Object^ sender, System::EventArgs^ e) {
           if (String::IsNullOrWhiteSpace(Search_textbox->Text)) {
               Search_textbox->Text = "Search";
               Search_textbox->ForeColor = System::Drawing::Color::SlateGray;
           }
       }



private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Search_textbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    this->Search_textbox->Enter += gcnew System::EventHandler(this, &AdminForm::Search_textbox_Enter);
    this->Search_textbox->Leave += gcnew System::EventHandler(this, &AdminForm::Search_textbox_Leave);

}
private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    ResetControlsInPanel(Add_admin_panel);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {


    std::string name = msclr::interop::marshal_as<std::string>(nameTextBox->Text);
    std::string email = msclr::interop::marshal_as<std::string>(emailTextBox->Text);
    std::string password = msclr::interop::marshal_as<std::string>(passwordTextBox->Text);
    std::string phone = msclr::interop::marshal_as<std::string>(phoneTextBox->Text);

    // Call the function
    int result = Global::currUser.add_admin(name, email, password, phone);

    // Show feedback to the user
    switch (result) {
    case 0:
        MessageBox::Show("Admin added successfully!");
        break;
    case 1:
        MessageBox::Show("Password must be at least 8 characters.");
        break;
    case 2:
        MessageBox::Show("Email already in use.");
        break;
    default:
        MessageBox::Show("Unknown error.");
        break;
    }
}


private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox3_Click_1(System::Object^ sender, System::EventArgs^ e) {
    textBox5->Clear();
    TypeCompo->Text = ""; 
    textBox6->Clear();
    textBox7->Clear();
    textBox8->Clear();
    numBedrooms->Text = "";
    textBox9->Clear(); 
    this->Form1_Load(sender, e);

}
private: System::Void label41_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label38_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label39_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label43_Click(System::Object^ sender, System::EventArgs^ e) {
}


/////////////////////////////////////////////////////////////////////////////////////////////////////
        private: void ShowEditFieldPanel(String^ fieldName, String^ currentValue) {
            currentField = fieldName;  // track the current field being edited
            editLabel->Text = "Edit " + fieldName + ":";  // set label text
            editBox->Text = currentValue;  // set the textbox with the current value
            editBox->Focus();  // optional: focus on the textbox
            EditFieldPanel->Visible = true;  // make the Edit Field Panel visible
        }

         //make all controllers empty  
       void ResetControlsInPanel(System::Windows::Forms::Panel^ panel) {
           for each (Control ^ ctrl in panel->Controls) {
               // Reset TextBox to empty
               if (dynamic_cast<System::Windows::Forms::TextBox^>(ctrl)) {
                   ((System::Windows::Forms::TextBox^)ctrl)->Text = ""; // Clear text
               }
               // Reset ComboBox to its default (first item or empty)
               else if (dynamic_cast<System::Windows::Forms::ComboBox^>(ctrl)) {
                   ((System::Windows::Forms::ComboBox^)ctrl)->SelectedIndex = -1; // Default to no selection (empty)
               }
               // Reset NumericUpDown to default value (usually 0 or the Min value)
               else if (dynamic_cast<System::Windows::Forms::NumericUpDown^>(ctrl)) {
                   ((System::Windows::Forms::NumericUpDown^)ctrl)->Value = ((System::Windows::Forms::NumericUpDown^)ctrl)->Minimum; // Set to minimum (0 or defined Min)
               }
           }
       }


private: System::Void pictureBox27_Click(System::Object^ sender, System::EventArgs^ e) {
    EditFieldPanel->Visible = true;
       ShowEditFieldPanel("Name", marshal_as<String^>(Global::currUser.getName()));

}
private: System::Void pictureBox28_Click(System::Object^ sender, System::EventArgs^ e) {
    EditFieldPanel->Visible = true;
        ShowEditFieldPanel("Email", marshal_as<String^>(Global::currUser.getEmail()));

}
private: System::Void pictureBox29_Click(System::Object^ sender, System::EventArgs^ e) {
    EditFieldPanel->Visible = true;
        ShowEditFieldPanel("Phone", marshal_as<String^>(Global::currUser.getPhoneNumber()));
}
private: System::Void cancel_pass_Click(System::Object^ sender, System::EventArgs^ e) {
    ResetControlsInPanel(change_password_panel);
    change_password_panel->Visible = false;
}
private: System::Void pictureBox30_Click(System::Object^ sender, System::EventArgs^ e) {
    change_password_panel->Visible = true;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
    ResetControlsInPanel(EditFieldPanel);
    EditFieldPanel->Visible = false;
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}

       // Save button click event to save the edited values
    private: System::Void save_edit_Click(System::Object^ sender, System::EventArgs^ e) {
        String^ newValue = editBox->Text;  // Get new value from TextBox
        int id = Global::currUser.getId(); // Current user ID

        if (currentField == "Name") {
            std::string name = marshal_as<std::string>(newValue);
            Global::currUser.setName(name);
            Global::users[id].setName(name);
            Profile->Text = newValue;
            user_name->Text = newValue;
        }
        else if (currentField == "Email") {
            std::string email = marshal_as<std::string>(newValue);
            Global::currUser.setEmail(email);
            Global::users[id].setEmail(email);
            user_email->Text = newValue;

        }

        else if (currentField == "Phone") {
            try {
                int phoneInt = System::Convert::ToInt32(newValue);
                Global::currUser.setPhoneNumber(phoneInt);
                Global::users[id].setPhoneNumber(phoneInt);
                user_phone->Text = newValue;
            }
            catch (FormatException^) {
                MessageBox::Show("Please enter a valid phone number.", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);
                return;
            }
        }

        // Show a success message
        MessageBox::Show(currentField + " updated successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

        // Hide the edit panel
        EditFieldPanel->Visible = false;
    }

private: System::Void delete_btn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void HighlightProperty(System::Object^ sender, System::EventArgs^ e);

private: System::Void label79_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button100_Click(System::Object^ sender, System::EventArgs^ e) {
    Details_Panel->Visible = false; 
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
    user_details->Visible = false;
}
private: System::Void label97_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void save_pass_Click(System::Object^ sender, System::EventArgs^ e) {
    // Get values from textboxes
    String^ oldPassStr = old_pass->Text;
    String^ newPassStr = new_pass->Text;

    std::string oldPass = marshal_as<std::string>(oldPassStr);
    std::string newPass = marshal_as<std::string>(newPassStr);

    // Get current user ID
    int id = Global::currUser.getId();

    // Check if old password matches
    if (oldPass != Global::currUser.getPassword()) {
        MessageBox::Show("Old password is incorrect.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }

    // Check if new password is valid (at least 8 characters long)
    if (newPass.length() < 8) {
        MessageBox::Show("New password must be at least 8 characters long.", "Invalid Password", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        return;
    }

    // Update password
    Global::currUser.setPassword(newPass);
    Global::users[id].setPassword(newPass);
    std::string password = Global::currUser.getPassword();
    std::string masked(password.length(), '*');
    user_password->Text = gcnew String(masked.c_str());
    // Success message
    MessageBox::Show("Password updated successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

    // Clear fields (optional)
    old_pass->Text = "";
    new_pass->Text = "";
    change_password_panel->Visible = false; 
}
       

private: System::Void user_password_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void editBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button100_Click_2(System::Object^ sender, System::EventArgs^ e) {
    this->Details_Panel->Visible = 0;
}
       /*std::string name = Global::users[p.getOwnerId()].getName();
       this->label24->Text = status;
       this->label79->Text = gcnew System::String(name.c_str());
       this->label27->Text = id.ToString();
       this->textBox1->Text = p.getArea().ToString();
       this->textBox2->Text = gcnew System::String(p.getLocation().c_str());
       this->comboBox1->Text = gcnew System::String(p.getType().c_str());
       this->numericUpDown1->Value = p.getNumBedrooms();
       this->textBox4->Text = p.getPrice().ToString();
       this->textBox12->Text = gcnew System::String(p.getDescription().c_str());*/
private: System::Void pictureBox10_Click(System::Object^ sender, System::EventArgs^ e);


       //save changes
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
    int id = System::Convert::ToInt32(this->label27->Text);
    for (auto& p : Global::properties) {
        if (p.getId() == id) {

            System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show(
                "Do you want to save changes?",
                "Confirmation",
                System::Windows::Forms::MessageBoxButtons::OKCancel,
                System::Windows::Forms::MessageBoxIcon::Question
            );

            if (result == System::Windows::Forms::DialogResult::OK) {

                std::string type = msclr::interop::marshal_as<std::string>(this->comboBox1->Text);
                std::string location = msclr::interop::marshal_as<std::string>(this->textBox2->Text);
                std::string des = msclr::interop::marshal_as<std::string>(this->textBox12->Text);


                double Price;
                try {
                    Price = Convert::ToDouble(textBox4->Text); // Convert to double
                }
                catch (FormatException^ ex) {
                    MessageBox::Show("Invalid price format.");
                    return; // Exit early if price format is invalid
                }

                // Convert Area to double
                double Area;
                try {
                    Area = Convert::ToDouble(textBox1->Text); // Convert to double
                }
                catch (FormatException^ ex) {
                    MessageBox::Show("Invalid area format.");
                    return; // Exit early if area format is invalid
                }

                // Convert Bedrooms to integer (if it represents an integer value)
                int Bedrooms;
                try {
                    Bedrooms = Convert::ToInt32(numericUpDown1->Text); // Convert to integer
                }
                catch (FormatException^ ex) {
                    MessageBox::Show("Invalid bedrooms format.");
                    return; // Exit early if bedrooms format is invalid
                }
                Property pr = Property(id, type, location, Price, p.getOwnerId(), p.getAvailability(), Bedrooms, Area, p.getHighlight(), des);
                Global::currUser.editProperty(id , pr);

                Form1_Load(sender, e);
                this->Details_Panel->Visible = 0;
            }
            else {
                this->Details_Panel->Visible = 0;
            }
            break;
        
        
        }
    }
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
    this->panel2->Visible = 0;
}
private: System::Void pictureBox2_Click_1(System::Object^ sender, System::EventArgs^ e);

private: System::Void flowLayoutPanel1_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void emailTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
    New_Property->BringToFront();
    New_Property->Visible = true; 
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
    ResetControlsInPanel(New_Property); 
    New_Property->Visible = false;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

    System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show(
        "Do you want to save changes?",
        "Confirmation",
        System::Windows::Forms::MessageBoxButtons::OKCancel,
        System::Windows::Forms::MessageBoxIcon::Question
    );

    if (result == System::Windows::Forms::DialogResult::OK) {

        std::string Type = msclr::interop::marshal_as<std::string>(comboBox2->Text);
        std::string Location = msclr::interop::marshal_as<std::string>(txtLocation->Text);
        std::string Des = msclr::interop::marshal_as<std::string>(admintxtDescription->Text);


        double Price;
        try {
            Price = Convert::ToDouble(txtPrice->Text); // Convert to double
        }
        catch (FormatException^ ex) {
            MessageBox::Show("Invalid price format.");
            return; // Exit early if price format is invalid
        }

        // Convert Area to double
        double Area;
        try {
            Area = Convert::ToDouble(txtArea->Text); // Convert to double
        }
        catch (FormatException^ ex) {
            MessageBox::Show("Invalid area format.");
            return; // Exit early if area format is invalid
        }

        // Convert Bedrooms to integer (if it represents an integer value)
        int Bedrooms;
        try {
            Bedrooms = Convert::ToInt32(numericUpDown2->Text); // Convert to integer
        }
        catch (FormatException^ ex) {
            MessageBox::Show("Invalid bedrooms format.");
            return; // Exit early if bedrooms format is invalid
        }

        Global::currUser.addProperty(Type, Location, Price, Bedrooms, Area, Des);
        this->Form1_Load(sender, e);
        /*    Property& p = Global::properties.back();

        System::String^ idStr = p.getId().ToString();
        System::String^ typeStr = gcnew System::String(p.getType().c_str());
        System::String^ priceStr = "$ " + p.getPrice().ToString("N0");
        System::String^ statusStr = gcnew System::String("Available"); // Since availability = 0

        //Panel^ panel = CreatePropertyPanel(idStr, typeStr, priceStr, statusStr);
        //flowLayoutPanel1->Controls->Add(panel); // <== THIS is the key to show it immediately

        //flowLayoutPanel1->ScrollControlIntoView(panel);
      */
        System::Windows::Forms::MessageBox::Show("Property is added successfully");
        New_Property->Visible = false;
        this->ResetControlsInPanel(this->New_Property);
    }
    else {
        ResetControlsInPanel(New_Property);
        New_Property->Visible = false;
    }


}
private: System::Void txtLocation_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
