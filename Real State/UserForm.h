#pragma once
#include "Global.h"
#include <msclr/marshal_cppstd.h>
#include <sstream>
using namespace msclr::interop;
using namespace System;

namespace LoginPage {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;



    public ref class UserForm : public System::Windows::Forms::Form
    {
    public:
        UserForm(Form^ parentForm)
        {
            InitializeComponent();
            this->Load += gcnew System::EventHandler(this, &UserForm::Form1_Load);

            this->parent = parentForm;
            currentUserName = gcnew System::String(Global::currUser.getName().c_str());
            Profile->Text = currentUserName;
           

            int balance = Global::currUser.getBalance();
            std::stringstream ss;
            ss.imbue(std::locale("en_US.UTF-8"));
            ss << balance;
                    
            String^ currBalance = gcnew System::String(ss.str().c_str());
            Balance->Text = currBalance + " $";
            label82->Text = currBalance + "$";
           

            user_name->Text = gcnew String(Global::currUser.getName().c_str());
            user_email->Text = gcnew String(Global::currUser.getEmail().c_str());
            user_phone->Text = gcnew String(Global::currUser.getPhoneNumber().c_str());
            std::string password = Global::currUser.getPassword();
            std::string masked(password.length(), '*');
            user_password->Text = gcnew String(masked.c_str());
            user_balance->Text= currBalance + " $";

           

        }

    protected:
        ~UserForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Panel^ EditFieldPanel;
    private: System::Windows::Forms::Label^ editLabel;
    private: System::Windows::Forms::TextBox^ editBox;
    private: System::Windows::Forms::Button^ button8;
    private: System::Windows::Forms::Button^ saveButton;
    private: System::Windows::Forms::Label^ label89;
    private: System::Windows::Forms::PictureBox^ pictureBox32;
    private: System::Windows::Forms::Panel^ change_password_panel;


    private: System::Windows::Forms::Label^ label94;
    private: System::Windows::Forms::Label^ label92;
    private: System::Windows::Forms::Button^ button7;
    private: System::Windows::Forms::Button^ save_pass;

    private: System::Windows::Forms::TextBox^ old_pass;

    private: System::Windows::Forms::Label^ label93;
    private: System::Windows::Forms::PictureBox^ pictureBox33;
    private: System::Windows::Forms::Label^ user_password;

    private: System::Windows::Forms::Label^ label90;
    private: System::Windows::Forms::TextBox^ new_pass;

    private: System::Windows::Forms::Button^ button11;
    private: System::Windows::Forms::Button^ button10;










































    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::Button^ button18;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Button^ button19;
    private: System::Windows::Forms::Label^ label35;
    private: System::Windows::Forms::Button^ button20;
    private: System::Windows::Forms::Label^ label36;
    private: System::Windows::Forms::Label^ label37;
    private: System::Windows::Forms::Label^ label38;
    private: System::Windows::Forms::Label^ label39;
    private: System::Windows::Forms::Label^ label40;
    private: System::Windows::Forms::Label^ label41;

private: System::Windows::Forms::PictureBox^ pictureBox8;
private: System::Windows::Forms::Button^ start_btn;












private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::Label^ label48;





private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Button^ button22;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::Label^ label46;
private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::Label^ label50;
private: System::Windows::Forms::Label^ label49;
private: System::Windows::Forms::TextBox^ textBox18;
private: System::Windows::Forms::Label^ label52;

private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel3;
private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::Label^ numberOFbedroomslbl;


private: System::Windows::Forms::Label^ typelbl;
private: System::Windows::Forms::Label^ locationlbl;
private: System::Windows::Forms::Label^ pricelbl;



private: System::Windows::Forms::Label^ arealbl;
private: System::Windows::Forms::TextBox^ deslbl;


private: System::Windows::Forms::Label^ statuslbl;
private: System::Windows::Forms::Label^ idlbl;


private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label53;
private: System::Windows::Forms::Label^ label54;
private: System::Windows::Forms::Label^ label55;
private: System::Windows::Forms::Label^ label56;
private: System::Windows::Forms::Label^ label57;






































private: System::Windows::Forms::Label^ label51;
private: System::Void addToComparison_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void RemoveFromComparison_Click(System::Object^ sender, System::EventArgs^ e);



















private: System::Windows::Forms::Label^ label63;
private: System::Windows::Forms::Label^ label64;
private: System::Windows::Forms::Label^ label65;
private: System::Windows::Forms::Label^ label66;
private: System::Windows::Forms::Label^ label67;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::TextBox^ textBox16;
private: System::Windows::Forms::Label^ label68;
private: System::Windows::Forms::Label^ label69;
private: System::Windows::Forms::Label^ label80;
private: System::Windows::Forms::Label^ label91;
private: System::Windows::Forms::Label^ label95;
private: System::Windows::Forms::Label^ label96;
private: System::Windows::Forms::Label^ label97;
private: System::Windows::Forms::Label^ label98;
private: System::Windows::Forms::Label^ label99;













    protected:

    protected:


    private:

     System::String^ currentField;

        /// Ammar panels
        Panel^ CreatePropertyPanel(String^ id, String^ type, String^ price, String^ status) {
            Panel^ panel = gcnew Panel();
            panel->Size = System::Drawing::Size(900, 150);
            panel->BackColor = Color::FromArgb(44, 103, 122);
            panel->BorderStyle = BorderStyle::FixedSingle;

            // 
            // label8
            // 
            Label^ label8 = gcnew Label();
            label8->AutoSize = true;
            label8->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.2F, System::Drawing::FontStyle::Bold);
            label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            label8->Location = System::Drawing::Point(332, 83);
            label8->Name = L"label8";
            label8->Size = System::Drawing::Size(75, 25);
            label8->TabIndex = 13;
            label8->Text = L"Status : " + status;

            // 
            // label7
            // 
            Label^ label7 = gcnew Label();
            label7->AutoSize = true;
            label7->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.2F, System::Drawing::FontStyle::Bold);
            label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            label7->Location = System::Drawing::Point(332, 32);
            label7->Name = L"label7";
            label7->Size = System::Drawing::Size(85, 25);
            label7->TabIndex = 13;
            label7->Text = L"Type : " + type;

            // 
            // label6
            // 
            Label^ label6 = gcnew Label();
            label6->AutoSize = true;
            label6->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.2F, System::Drawing::FontStyle::Bold);
            label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            label6->Location = System::Drawing::Point(23, 83);
            label6->Name = L"label6";
            label6->Size = System::Drawing::Size(80, 25);
            label6->TabIndex = 13;
            label6->Text = L"Price : " + price;

            // 
            // label4
            // 
            Label^ label4 = gcnew Label();
            label4->AutoSize = true;
            label4->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.2F, System::Drawing::FontStyle::Bold);
            label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            label4->Location = System::Drawing::Point(23, 32);
            label4->Name = L"label4";
            label4->Size = System::Drawing::Size(52, 25);
            label4->TabIndex = 13;
            label4->Text = L"Id : " + id;

            // 
            // button2
            // 
            Button^ button2 = gcnew Button();
            button2->BackColor = System::Drawing::Color::FromArgb(163, 201, 188);
            button2->FlatAppearance->BorderSize = 0;
            button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            button2->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold);
            button2->ForeColor = System::Drawing::Color::WhiteSmoke;
            button2->Location = System::Drawing::Point(739, 81);
            button2->Name = L"button2";
            button2->Size = System::Drawing::Size(150, 33);
            button2->TabIndex = 12;
            button2->Text = L"Delete Property";
            button2->Tag = id; // Store the ID to use in handler
            button2->Click += gcnew EventHandler(this, &UserForm::DeleteProperty_Click);
            button2->UseVisualStyleBackColor = false;

            // 
            // button1
            // 
            Button^ button1 = gcnew Button();
            button1->BackColor = System::Drawing::Color::FromArgb(163, 201, 188);
            button1->FlatAppearance->BorderSize = 0;
            button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            button1->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold);
            button1->ForeColor = System::Drawing::Color::WhiteSmoke;
            button1->Location = System::Drawing::Point(739, 20);
            button1->Name = L"button1";
            button1->Size = System::Drawing::Size(150, 36);
            button1->TabIndex = 11;
            button1->Text = L"More Details";
            button1->UseVisualStyleBackColor = false;
            button1->Click += gcnew EventHandler(this, &UserForm::MoreDetails_Click);
            button1->Tag = id; 


            // Add controls
            panel->Controls->Add(label8);
            panel->Controls->Add(label7);
            panel->Controls->Add(label6);
            panel->Controls->Add(label4);
            panel->Controls->Add(button1);
            panel->Controls->Add(button2);

            return panel;
        }





        Panel^ CreatePropertyBrowsePanel(String^ id, String^ type, String^ price, String^ status, String^ area , bool highlighted , bool inComp) {
            Panel^ panel = gcnew Panel();

            // 
            // panel
            // 
            panel->BackColor = System::Drawing::Color::FromArgb(44, 103, 122);
            panel->Location = System::Drawing::Point(245, 54);
            panel->Name = L"panel";
            panel->Size = System::Drawing::Size(682, 119);
            panel->TabIndex = 4;

            // BUY button
            Button^ button18 = gcnew Button();
            button18->BackColor = System::Drawing::Color::CadetBlue;
            button18->Cursor = System::Windows::Forms::Cursors::Hand;
            button18->FlatAppearance->BorderSize = 0;
            button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            button18->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold);
            button18->ForeColor = System::Drawing::Color::WhiteSmoke;
            button18->Location = System::Drawing::Point(516, 81);
            button18->Size = System::Drawing::Size(148, 30);
            button18->Text = L"BUY";
            button18->Click += gcnew EventHandler(this, &UserForm::Buy_click);
            button18->Tag = id;

            // COMPARISON button
            Button^ button19 = gcnew Button();
            button19->BackColor = System::Drawing::Color::CadetBlue;
            button19->Cursor = System::Windows::Forms::Cursors::Hand;
            button19->FlatAppearance->BorderSize = 0;
            button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            button19->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold);
            button19->ForeColor = System::Drawing::Color::WhiteSmoke;
            button19->Location = System::Drawing::Point(516, 46);
            button19->Size = System::Drawing::Size(146, 30);
            button19->Text = L"COMPARISON";
            button19->Click += gcnew EventHandler(this, &UserForm::addToComparison_Click);
            button19->Tag = id;

            // DETAILS button
            Button^ button20 = gcnew Button();
            button20->BackColor = System::Drawing::Color::CadetBlue;
            button20->Cursor = System::Windows::Forms::Cursors::Hand;
            button20->FlatAppearance->BorderSize = 0;
            button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            button20->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold);
            button20->ForeColor = System::Drawing::Color::WhiteSmoke;
            button20->Location = System::Drawing::Point(516, 9);
            button20->Size = System::Drawing::Size(146, 30);
            button20->Text = L"DETAILS";
            button20->Click += gcnew EventHandler(this, &UserForm::MoreDetails_Click2);
            button20->Tag = id;
            // Labels
            Label^ label9 = gcnew Label();     // Price Value
            label9->AutoSize = true;
            label9->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold);
            label9->ForeColor = System::Drawing::Color::White;
            label9->Location = System::Drawing::Point(356, 61);
            label9->Text = price;

            Label^ label35 = gcnew Label();    // Type Value
            label35->AutoSize = true;
            label35->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold);
            label35->ForeColor = System::Drawing::Color::White;
            label35->Location = System::Drawing::Point(357, 18);
            label35->Text = type;

            Label^ label36 = gcnew Label();    // "Price:"
            label36->AutoSize = true;
            label36->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold);
            label36->ForeColor = System::Drawing::Color::White;
            label36->Location = System::Drawing::Point(296, 61);
            label36->Text = L"Price:";

            Label^ label40 = gcnew Label();    // "Type:"
            label40->AutoSize = true;
            label40->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold);
            label40->ForeColor = System::Drawing::Color::White;
            label40->Location = System::Drawing::Point(296, 18);
            label40->Text = L"Type:";

            Label^ label38 = gcnew Label();    // ID Value
            label38->AutoSize = true;
            label38->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold);
            label38->ForeColor = System::Drawing::Color::White;
            label38->Location = System::Drawing::Point(43, 21);
            label38->Text = id;

            Label^ label41 = gcnew Label();    // "Id:"
            label41->AutoSize = true;
            label41->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold);
            label41->ForeColor = System::Drawing::Color::White;
            label41->Location = System::Drawing::Point(17, 21);
            label41->Text = L"Id:";

            Label^ label37 = gcnew Label();    // Area Value 
            label37->AutoSize = true;
            label37->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold);
            label37->ForeColor = System::Drawing::Color::White;
            label37->Location = System::Drawing::Point(74, 64);
            label37->Text = area;

            Label^ label39 = gcnew Label();    // "Area:"
            label39->AutoSize = true;
            label39->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold);
            label39->ForeColor = System::Drawing::Color::White;
            label39->Location = System::Drawing::Point(17, 64);
            label39->Text = L"Area:";

            // Optional highlight label
            Label^ label58 = gcnew Label();// Allocate memory
            PictureBox^ picture = gcnew PictureBox();
            if (highlighted) {
                // ammar's star location
                picture->Image = Image::FromFile("E:\\2nd FCIS\\Fourth term\\Data Structure\\Project\\Project Versions\\V4\\Login_Page\\star.png");
                picture->Location = System::Drawing::Point(5, 86);
                picture->Size = System::Drawing::Size(38, 31);
                picture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
                picture->TabIndex = 8;
                picture->TabStop = false;

                label58->AutoSize = true;
                label58->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold);
                label58->ForeColor = System::Drawing::Color::FromArgb(255, 220, 100);
                label58->Location = System::Drawing::Point(41, 90);
                label58->Text = L"Highlighted By Admin";

                panel->Controls->Add(picture); // Add the picture box to the panel
                panel->Controls->Add(label58);     // Add the label to the panel
            }

            // Add controls to panel
            
            if (inComp) {
                button19->Text = L"IN COMPARISON";
                button19->BackColor = System::Drawing::Color::FromArgb(204, 172, 105);
                button19->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold);
                button19->Click -= gcnew EventHandler(this, &UserForm::addToComparison_Click);
                button19->Click += gcnew EventHandler(this, &UserForm::RemoveFromComparison_Click);
            }
            panel->Controls->Add(button18);
            panel->Controls->Add(button19);
            panel->Controls->Add(button20);
            panel->Controls->Add(label9);
            panel->Controls->Add(label35);
            panel->Controls->Add(label36);
            panel->Controls->Add(label37);
            panel->Controls->Add(label38);
            panel->Controls->Add(label39);
            panel->Controls->Add(label40);
            panel->Controls->Add(label41);

            return panel;
        }

        Panel^ CreatePropertyComparisonPanel(String^ id,String^ type , int area ,String^ loc , int bedrooms , String^ price , String^ des , bool highlighted) {
            Panel^ panel = gcnew Panel();
            panel->BackColor = System::Drawing::Color::FromArgb(44, 103, 122);
            panel->Location = System::Drawing::Point(259, 32);
            panel->Size = System::Drawing::Size(210, 483);
            panel->Name = "propertyComparisonPanel";

            // Example label controls
            Label^ labelId = gcnew Label();
            labelId->Text = id;
            labelId->ForeColor = System::Drawing::Color::White;
            labelId->Location = System::Drawing::Point(97, 12);
            labelId->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold);
            panel->Controls->Add(labelId);

            Label^ labelIdTitle = gcnew Label();
            labelIdTitle->Text = "Id:";
            labelIdTitle->ForeColor = System::Drawing::Color::White;
            labelIdTitle->Location = System::Drawing::Point(71, 12);
            labelIdTitle->Font = labelId->Font;
            panel->Controls->Add(labelIdTitle);

            Label^ labelType = gcnew Label();
            labelType->Text = type;
            labelType->ForeColor = System::Drawing::Color::White;
            labelType->Location = System::Drawing::Point(66, 60);
            labelType->Font = labelId->Font;
            panel->Controls->Add(labelType);

            Label^ labelTypeTitle = gcnew Label();
            labelTypeTitle->Text = "Type:";
            labelTypeTitle->ForeColor = System::Drawing::Color::White;
            labelTypeTitle->Location = System::Drawing::Point(14, 60);
            labelTypeTitle->Font = labelId->Font;
            panel->Controls->Add(labelTypeTitle);

            Label^ labelArea = gcnew Label();
            labelArea->Text = area.ToString();
            labelArea->ForeColor = System::Drawing::Color::White;
            labelArea->Location = System::Drawing::Point(63, 96);
            labelArea->Font = labelId->Font;
            panel->Controls->Add(labelArea);

            Label^ labelAreaTitle = gcnew Label();
            labelAreaTitle->Text = "Area:";
            labelAreaTitle->ForeColor = System::Drawing::Color::White;
            labelAreaTitle->Location = System::Drawing::Point(15, 96);
            labelAreaTitle->Font = labelId->Font;
            panel->Controls->Add(labelAreaTitle);



            TextBox^ textBox2 = gcnew TextBox();

            textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
                static_cast<System::Int32>(static_cast<System::Byte>(122)));
            textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
            textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
            textBox2->ForeColor = System::Drawing::Color::White;
            textBox2->Location = System::Drawing::Point(108, 133);
            textBox2->Multiline = true;
            textBox2->Name = L"textBox2";
            textBox2->Size = System::Drawing::Size(70, 30);
            textBox2->TabIndex = 20;
            textBox2->Text = loc;
            textBox2->ReadOnly = true;
            panel->Controls->Add(textBox2);
            

            Label^ labelLocationTitle = gcnew Label();
            labelLocationTitle->Text = "Location:";
            labelLocationTitle->ForeColor = System::Drawing::Color::White;
            labelLocationTitle->Location = System::Drawing::Point(15, 131);
            labelLocationTitle->Font = labelId->Font;
            panel->Controls->Add(labelLocationTitle);

            Label^ labelBedrooms = gcnew Label();
            labelBedrooms->Text = bedrooms.ToString();
            labelBedrooms->ForeColor = System::Drawing::Color::White;
            labelBedrooms->Location = System::Drawing::Point(114, 167);
            labelBedrooms->Font = labelId->Font;
            panel->Controls->Add(labelBedrooms);

            Label^ labelBedroomsTitle = gcnew Label();
            labelBedroomsTitle->Text = "Bedrooms:";
            labelBedroomsTitle->ForeColor = System::Drawing::Color::White;
            labelBedroomsTitle->Location = System::Drawing::Point(14, 167);
            labelBedroomsTitle->Font = labelId->Font;
            panel->Controls->Add(labelBedroomsTitle);

            Label^ labelPrice = gcnew Label();
            labelPrice->Text = price;
            labelPrice->ForeColor = System::Drawing::Color::White;
            labelPrice->Location = System::Drawing::Point(70, 207);
            labelPrice->Font = labelId->Font;
            panel->Controls->Add(labelPrice);

            Label^ labelPriceTitle = gcnew Label();
            labelPriceTitle->Text = "Price:";
            labelPriceTitle->ForeColor = System::Drawing::Color::White;
            labelPriceTitle->Location = System::Drawing::Point(14, 207);
            labelPriceTitle->Font = labelId->Font;
            panel->Controls->Add(labelPriceTitle);

            Label^ labelDescriptionTitle = gcnew Label();
            labelDescriptionTitle->Text = "Description:";
            labelDescriptionTitle->ForeColor = System::Drawing::Color::White;
            labelDescriptionTitle->Location = System::Drawing::Point(15, 246);
            labelDescriptionTitle->Font = labelId->Font;
            panel->Controls->Add(labelDescriptionTitle);

            TextBox^ descriptionBox = gcnew TextBox();
            descriptionBox->Text = des;
            descriptionBox->Multiline = true;
            descriptionBox->ReadOnly = true;
            descriptionBox->BackColor = panel->BackColor;
            descriptionBox->ForeColor = System::Drawing::Color::White;
            descriptionBox->Location = System::Drawing::Point(41, 276);
            descriptionBox->Size = System::Drawing::Size(135, 61);
            panel->Controls->Add(descriptionBox);

            Button^ removeButton = gcnew Button();
            removeButton->Text = "Remove";
            removeButton->Location = System::Drawing::Point(25, 390);
            removeButton->Size = System::Drawing::Size(146, 30);
            removeButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            removeButton->BackColor = System::Drawing::Color::Crimson;
            removeButton->ForeColor = System::Drawing::Color::WhiteSmoke;
            removeButton->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold);
            removeButton->FlatAppearance->BorderSize = 0;
            removeButton->Cursor = System::Windows::Forms::Cursors::Hand;
            removeButton->Click += gcnew EventHandler(this, &UserForm::RemoveFromComparison_Click);
            removeButton->Tag = id;
            panel->Controls->Add(removeButton);

            Button^ buyButton = gcnew Button();
            buyButton->Text = "BUY";
            buyButton->Location = System::Drawing::Point(25, 434);
            buyButton->Size = System::Drawing::Size(148, 30);
            buyButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            buyButton->BackColor = System::Drawing::Color::CadetBlue;
            buyButton->ForeColor = System::Drawing::Color::WhiteSmoke;
            buyButton->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold);
            buyButton->FlatAppearance->BorderSize = 0;
            buyButton->Cursor = System::Windows::Forms::Cursors::Hand;
            buyButton->Tag = id;
            buyButton->Click += gcnew EventHandler(this, &UserForm::Buy_click);
            panel->Controls->Add(buyButton);

            Label^ label58 = gcnew Label();// Allocate memory
            PictureBox^ picture = gcnew PictureBox();
            if (highlighted) {
                // ammar's star location
                picture->Image = Image::FromFile("E:\\2nd FCIS\\Fourth term\\Data Structure\\Project\\Project Versions\\V4\\Login_Page\\star.png");
                picture->Location = System::Drawing::Point(6, 353);
                picture->Size = System::Drawing::Size(38, 31);
                picture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
                picture->TabIndex = 8;
                picture->TabStop = false;

                label58->AutoSize = true;
                label58->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold);
                label58->ForeColor = System::Drawing::Color::FromArgb(255, 220, 100);
                label58->Location = System::Drawing::Point(41, 361);
                label58->Text = L"Highlighted By Admin";

                panel->Controls->Add(picture); // Add the picture box to the panel
                panel->Controls->Add(label58);     // Add the label to the panel
            }
            panel->Margin = System::Windows::Forms::Padding(0, 0, 10, 0); // Only right margin (10px)

            return panel;
        }






private: System::Windows::Forms::PictureBox^ pictureBox4;
private: System::Windows::Forms::PictureBox^ pictureBox5;
private: System::Windows::Forms::PictureBox^ pictureBox3;
private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::PictureBox^ pictureBox10;
private: System::Windows::Forms::PictureBox^ pictureBox6;
private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Label^ user_phone;













































private: System::Windows::Forms::Label^ user_email;

private: System::Windows::Forms::Label^ user_name;

private: System::Windows::Forms::Label^ label59;
private: System::Windows::Forms::Label^ label60;
private: System::Windows::Forms::Label^ label61;

private: System::Windows::Forms::PictureBox^ pictureBox19;





























private: System::Windows::Forms::PictureBox^ pictureBox30;
private: System::Windows::Forms::PictureBox^ pictureBox18;
private: System::Windows::Forms::Label^ user_balance;

private: System::Windows::Forms::Label^ label79;
private: System::Windows::Forms::Panel^ payement_panel;

private: System::Windows::Forms::Label^ label81;
private: System::Windows::Forms::Label^ label82;
private: System::Windows::Forms::Label^ label84;
private: System::Windows::Forms::Label^ label86;
private: System::Windows::Forms::Label^ label85;
private: System::Windows::Forms::Label^ label83;
private: System::Windows::Forms::TextBox^ card_holder;
private: System::Windows::Forms::TextBox^ cvv;



private: System::Windows::Forms::TextBox^ card_number;

private: System::Windows::Forms::TextBox^ expiryBox;
private: System::Windows::Forms::Label^ label87;
private: System::Windows::Forms::TextBox^ ammount_to_add;

private: System::Windows::Forms::PictureBox^ pictureBox20;
private: System::Windows::Forms::Label^ label88;
private: System::Windows::Forms::PictureBox^ pictureBox31;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Button^ proceed_transaction;






















    private: Form^ parent;
    private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e);
    private: System::Void MoreDetails_Click(System::Object^ sender, System::EventArgs^ e);
    private:System::Void MoreDetails_Click2(System::Object^ sender, System::EventArgs^ e);
    private: System::Void DeleteProperty_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Windows::Forms::Button^ button6;
    private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
    private: System::String^ currentUserName;
    private: System::Void UserForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e);
    private: System::Windows::Forms::Button^ Home;
    protected:
    private: System::Windows::Forms::Button^ Browse;
    private: System::Windows::Forms::Button^ Comparison;

    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::Label^ Profile;

    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::Label^ Balance;

    private: System::Windows::Forms::TextBox^ intro_paragraph;


    private: System::Windows::Forms::Panel^ Welcome_panel;
    private: System::Windows::Forms::Panel^ Navigationbar_panel;


    private: System::Windows::Forms::Label^ label5;



    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Panel^ New_Property;

    private: System::Windows::Forms::Label^ label_New_Property;


    private: System::Windows::Forms::Button^ button4;

    private: System::Windows::Forms::Label^ label15;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::Label^ label17;
    private: System::Windows::Forms::Label^ label16;
    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::TextBox^ txtPrice;
    private: System::Windows::Forms::TextBox^ txtLocation;


    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::TextBox^ txtDescription;

    private: System::Windows::Forms::ComboBox^ TypeCompo;
    private: System::Windows::Forms::NumericUpDown^ numBedrooms;


    private: System::Windows::Forms::TextBox^ txtArea;























    private: System::Windows::Forms::Panel^ Home_panel;


    private: System::Windows::Forms::Panel^ Profile_panel;
    private: System::Windows::Forms::Panel^ Browse_panel;
    private: System::Windows::Forms::Panel^ Comparison_panel;
    private: System::Windows::Forms::Label^ label1;


    protected:

    private:
        System::ComponentModel::Container^ components;

        // Declare controls


#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UserForm::typeid));
            this->Home = (gcnew System::Windows::Forms::Button());
            this->Browse = (gcnew System::Windows::Forms::Button());
            this->Comparison = (gcnew System::Windows::Forms::Button());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->Profile = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->Balance = (gcnew System::Windows::Forms::Label());
            this->intro_paragraph = (gcnew System::Windows::Forms::TextBox());
            this->Welcome_panel = (gcnew System::Windows::Forms::Panel());
            this->start_btn = (gcnew System::Windows::Forms::Button());
            this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->Profile_panel = (gcnew System::Windows::Forms::Panel());
            this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
            this->user_balance = (gcnew System::Windows::Forms::Label());
            this->user_phone = (gcnew System::Windows::Forms::Label());
            this->user_email = (gcnew System::Windows::Forms::Label());
            this->user_name = (gcnew System::Windows::Forms::Label());
            this->user_password = (gcnew System::Windows::Forms::Label());
            this->label90 = (gcnew System::Windows::Forms::Label());
            this->label79 = (gcnew System::Windows::Forms::Label());
            this->label59 = (gcnew System::Windows::Forms::Label());
            this->label60 = (gcnew System::Windows::Forms::Label());
            this->label61 = (gcnew System::Windows::Forms::Label());
            this->change_password_panel = (gcnew System::Windows::Forms::Panel());
            this->new_pass = (gcnew System::Windows::Forms::TextBox());
            this->label94 = (gcnew System::Windows::Forms::Label());
            this->label92 = (gcnew System::Windows::Forms::Label());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->save_pass = (gcnew System::Windows::Forms::Button());
            this->old_pass = (gcnew System::Windows::Forms::TextBox());
            this->label93 = (gcnew System::Windows::Forms::Label());
            this->EditFieldPanel = (gcnew System::Windows::Forms::Panel());
            this->label89 = (gcnew System::Windows::Forms::Label());
            this->button8 = (gcnew System::Windows::Forms::Button());
            this->saveButton = (gcnew System::Windows::Forms::Button());
            this->editBox = (gcnew System::Windows::Forms::TextBox());
            this->editLabel = (gcnew System::Windows::Forms::Label());
            this->Navigationbar_panel = (gcnew System::Windows::Forms::Panel());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->New_Property = (gcnew System::Windows::Forms::Panel());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->numBedrooms = (gcnew System::Windows::Forms::NumericUpDown());
            this->TypeCompo = (gcnew System::Windows::Forms::ComboBox());
            this->txtDescription = (gcnew System::Windows::Forms::TextBox());
            this->txtArea = (gcnew System::Windows::Forms::TextBox());
            this->txtPrice = (gcnew System::Windows::Forms::TextBox());
            this->txtLocation = (gcnew System::Windows::Forms::TextBox());
            this->label_New_Property = (gcnew System::Windows::Forms::Label());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->Home_panel = (gcnew System::Windows::Forms::Panel());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->numberOFbedroomslbl = (gcnew System::Windows::Forms::Label());
            this->typelbl = (gcnew System::Windows::Forms::Label());
            this->locationlbl = (gcnew System::Windows::Forms::Label());
            this->pricelbl = (gcnew System::Windows::Forms::Label());
            this->arealbl = (gcnew System::Windows::Forms::Label());
            this->deslbl = (gcnew System::Windows::Forms::TextBox());
            this->statuslbl = (gcnew System::Windows::Forms::Label());
            this->idlbl = (gcnew System::Windows::Forms::Label());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->label53 = (gcnew System::Windows::Forms::Label());
            this->label54 = (gcnew System::Windows::Forms::Label());
            this->label55 = (gcnew System::Windows::Forms::Label());
            this->label56 = (gcnew System::Windows::Forms::Label());
            this->label57 = (gcnew System::Windows::Forms::Label());
            this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->label51 = (gcnew System::Windows::Forms::Label());
            this->label52 = (gcnew System::Windows::Forms::Label());
            this->label50 = (gcnew System::Windows::Forms::Label());
            this->label49 = (gcnew System::Windows::Forms::Label());
            this->label48 = (gcnew System::Windows::Forms::Label());
            this->textBox18 = (gcnew System::Windows::Forms::TextBox());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->label29 = (gcnew System::Windows::Forms::Label());
            this->label30 = (gcnew System::Windows::Forms::Label());
            this->button22 = (gcnew System::Windows::Forms::Button());
            this->label31 = (gcnew System::Windows::Forms::Label());
            this->label32 = (gcnew System::Windows::Forms::Label());
            this->label42 = (gcnew System::Windows::Forms::Label());
            this->label43 = (gcnew System::Windows::Forms::Label());
            this->label44 = (gcnew System::Windows::Forms::Label());
            this->label45 = (gcnew System::Windows::Forms::Label());
            this->label46 = (gcnew System::Windows::Forms::Label());
            this->label47 = (gcnew System::Windows::Forms::Label());
            this->Browse_panel = (gcnew System::Windows::Forms::Panel());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
            this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->label33 = (gcnew System::Windows::Forms::Label());
            this->label34 = (gcnew System::Windows::Forms::Label());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->button18 = (gcnew System::Windows::Forms::Button());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->button19 = (gcnew System::Windows::Forms::Button());
            this->label35 = (gcnew System::Windows::Forms::Label());
            this->button20 = (gcnew System::Windows::Forms::Button());
            this->label36 = (gcnew System::Windows::Forms::Label());
            this->label37 = (gcnew System::Windows::Forms::Label());
            this->label38 = (gcnew System::Windows::Forms::Label());
            this->label39 = (gcnew System::Windows::Forms::Label());
            this->label40 = (gcnew System::Windows::Forms::Label());
            this->label41 = (gcnew System::Windows::Forms::Label());
            this->Comparison_panel = (gcnew System::Windows::Forms::Panel());
            this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->button11 = (gcnew System::Windows::Forms::Button());
            this->button10 = (gcnew System::Windows::Forms::Button());
            this->label63 = (gcnew System::Windows::Forms::Label());
            this->label64 = (gcnew System::Windows::Forms::Label());
            this->label65 = (gcnew System::Windows::Forms::Label());
            this->label66 = (gcnew System::Windows::Forms::Label());
            this->label67 = (gcnew System::Windows::Forms::Label());
            this->button12 = (gcnew System::Windows::Forms::Button());
            this->button13 = (gcnew System::Windows::Forms::Button());
            this->textBox16 = (gcnew System::Windows::Forms::TextBox());
            this->label68 = (gcnew System::Windows::Forms::Label());
            this->label69 = (gcnew System::Windows::Forms::Label());
            this->label80 = (gcnew System::Windows::Forms::Label());
            this->label91 = (gcnew System::Windows::Forms::Label());
            this->label95 = (gcnew System::Windows::Forms::Label());
            this->label96 = (gcnew System::Windows::Forms::Label());
            this->label97 = (gcnew System::Windows::Forms::Label());
            this->label98 = (gcnew System::Windows::Forms::Label());
            this->label99 = (gcnew System::Windows::Forms::Label());
            this->payement_panel = (gcnew System::Windows::Forms::Panel());
            this->proceed_transaction = (gcnew System::Windows::Forms::Button());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
            this->label87 = (gcnew System::Windows::Forms::Label());
            this->label84 = (gcnew System::Windows::Forms::Label());
            this->label86 = (gcnew System::Windows::Forms::Label());
            this->label85 = (gcnew System::Windows::Forms::Label());
            this->label83 = (gcnew System::Windows::Forms::Label());
            this->label88 = (gcnew System::Windows::Forms::Label());
            this->label81 = (gcnew System::Windows::Forms::Label());
            this->label82 = (gcnew System::Windows::Forms::Label());
            this->ammount_to_add = (gcnew System::Windows::Forms::TextBox());
            this->card_holder = (gcnew System::Windows::Forms::TextBox());
            this->expiryBox = (gcnew System::Windows::Forms::TextBox());
            this->cvv = (gcnew System::Windows::Forms::TextBox());
            this->card_number = (gcnew System::Windows::Forms::TextBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->Welcome_panel->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            this->Profile_panel->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
            this->change_password_panel->SuspendLayout();
            this->EditFieldPanel->SuspendLayout();
            this->Navigationbar_panel->SuspendLayout();
            this->New_Property->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBedrooms))->BeginInit();
            this->Home_panel->SuspendLayout();
            this->panel4->SuspendLayout();
            this->panel3->SuspendLayout();
            this->Browse_panel->SuspendLayout();
            this->panel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
            this->Comparison_panel->SuspendLayout();
            this->payement_panel->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
            this->SuspendLayout();
            // 
            // Home
            // 
            this->Home->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->Home->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->Home->FlatAppearance->BorderSize = 0;
            this->Home->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->Home->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Home->ForeColor = System::Drawing::Color::White;
            this->Home->Location = System::Drawing::Point(278, 14);
            this->Home->Name = L"Home";
            this->Home->Size = System::Drawing::Size(116, 50);
            this->Home->TabIndex = 0;
            this->Home->Text = L"Home";
            this->Home->UseVisualStyleBackColor = false;
            this->Home->Click += gcnew System::EventHandler(this, &UserForm::Home_Click);
            // 
            // Browse
            // 
            this->Browse->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->Browse->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->Browse->FlatAppearance->BorderSize = 0;
            this->Browse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->Browse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Browse->ForeColor = System::Drawing::Color::White;
            this->Browse->Location = System::Drawing::Point(400, 14);
            this->Browse->Name = L"Browse";
            this->Browse->Size = System::Drawing::Size(116, 50);
            this->Browse->TabIndex = 0;
            this->Browse->Text = L"Browse";
            this->Browse->UseVisualStyleBackColor = false;
            this->Browse->Click += gcnew System::EventHandler(this, &UserForm::Browse_Click);
            // 
            // Comparison
            // 
            this->Comparison->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->Comparison->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->Comparison->FlatAppearance->BorderSize = 0;
            this->Comparison->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->Comparison->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Comparison->ForeColor = System::Drawing::Color::White;
            this->Comparison->Location = System::Drawing::Point(522, 14);
            this->Comparison->Name = L"Comparison";
            this->Comparison->Size = System::Drawing::Size(122, 50);
            this->Comparison->TabIndex = 0;
            this->Comparison->Text = L"Comparison";
            this->Comparison->UseVisualStyleBackColor = false;
            this->Comparison->Click += gcnew System::EventHandler(this, &UserForm::Comparison_Click);
            // 
            // label2
            // 
            this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 49.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(202)),
                static_cast<System::Int32>(static_cast<System::Byte>(191)));
            this->label2->Location = System::Drawing::Point(82, 203);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(585, 95);
            this->label2->TabIndex = 1;
            this->label2->Text = L"Dream House ";
            // 
            // pictureBox1
            // 
            this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(772, 23);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(42, 36);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox1->TabIndex = 2;
            this->pictureBox1->TabStop = false;
            this->pictureBox1->Click += gcnew System::EventHandler(this, &UserForm::pictureBox1_Click);
            // 
            // Profile
            // 
            this->Profile->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->Profile->AutoSize = true;
            this->Profile->Cursor = System::Windows::Forms::Cursors::Hand;
            this->Profile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Profile->ForeColor = System::Drawing::Color::White;
            this->Profile->Location = System::Drawing::Point(820, 24);
            this->Profile->Name = L"Profile";
            this->Profile->Size = System::Drawing::Size(101, 20);
            this->Profile->TabIndex = 1;
            this->Profile->Text = L"user_name";
            this->Profile->Click += gcnew System::EventHandler(this, &UserForm::Profile_Click_1);
            // 
            // label3
            // 
            this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label3->AutoSize = true;
            this->label3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::Color::White;
            this->label3->Location = System::Drawing::Point(821, 45);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(48, 16);
            this->label3->TabIndex = 1;
            this->label3->Text = L"Logout";
            this->label3->Click += gcnew System::EventHandler(this, &UserForm::label3_Click);
            // 
            // label11
            // 
            this->label11->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label11->AutoSize = true;
            this->label11->Cursor = System::Windows::Forms::Cursors::Hand;
            this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label11->ForeColor = System::Drawing::Color::White;
            this->label11->Location = System::Drawing::Point(18, 16);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(77, 20);
            this->label11->TabIndex = 1;
            this->label11->Text = L"Balance";
            this->label11->Click += gcnew System::EventHandler(this, &UserForm::label11_Click);
            // 
            // Balance
            // 
            this->Balance->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->Balance->AutoSize = true;
            this->Balance->Cursor = System::Windows::Forms::Cursors::Hand;
            this->Balance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Balance->ForeColor = System::Drawing::Color::PaleGreen;
            this->Balance->Location = System::Drawing::Point(18, 37);
            this->Balance->Name = L"Balance";
            this->Balance->Size = System::Drawing::Size(64, 20);
            this->Balance->TabIndex = 1;
            this->Balance->Text = L"10,000";
            this->Balance->Click += gcnew System::EventHandler(this, &UserForm::Balance_Click);
            // 
            // intro_paragraph
            // 
            this->intro_paragraph->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->intro_paragraph->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->intro_paragraph->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->intro_paragraph->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
            this->intro_paragraph->ForeColor = System::Drawing::Color::White;
            this->intro_paragraph->Location = System::Drawing::Point(97, 283);
            this->intro_paragraph->Multiline = true;
            this->intro_paragraph->Name = L"intro_paragraph";
            this->intro_paragraph->ReadOnly = true;
            this->intro_paragraph->Size = System::Drawing::Size(562, 130);
            this->intro_paragraph->TabIndex = 3;
            this->intro_paragraph->Text = resources->GetString(L"intro_paragraph.Text");
            // 
            // Welcome_panel
            // 
            this->Welcome_panel->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->Welcome_panel->Controls->Add(this->start_btn);
            this->Welcome_panel->Controls->Add(this->pictureBox8);
            this->Welcome_panel->Controls->Add(this->pictureBox4);
            this->Welcome_panel->Controls->Add(this->pictureBox5);
            this->Welcome_panel->Controls->Add(this->pictureBox3);
            this->Welcome_panel->Controls->Add(this->label1);
            this->Welcome_panel->Controls->Add(this->label2);
            this->Welcome_panel->Controls->Add(this->intro_paragraph);
            this->Welcome_panel->Controls->Add(this->pictureBox2);
            this->Welcome_panel->Location = System::Drawing::Point(5, 93);
            this->Welcome_panel->Name = L"Welcome_panel";
            this->Welcome_panel->Size = System::Drawing::Size(987, 633);
            this->Welcome_panel->TabIndex = 5;
            this->Welcome_panel->Visible = false;
            this->Welcome_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &UserForm::Welcome_panel_Paint);
            // 
            // start_btn
            // 
            this->start_btn->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->start_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(171)),
                static_cast<System::Int32>(static_cast<System::Byte>(47)));
            this->start_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->start_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(171)), static_cast<System::Int32>(static_cast<System::Byte>(47)));
            this->start_btn->FlatAppearance->BorderSize = 0;
            this->start_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(171)), static_cast<System::Int32>(static_cast<System::Byte>(47)));
            this->start_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(171)), static_cast<System::Int32>(static_cast<System::Byte>(47)));
            this->start_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->start_btn->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
            this->start_btn->ForeColor = System::Drawing::Color::White;
            this->start_btn->Location = System::Drawing::Point(251, 451);
            this->start_btn->Name = L"start_btn";
            this->start_btn->Size = System::Drawing::Size(156, 44);
            this->start_btn->TabIndex = 14;
            this->start_btn->Text = L"Let\'s Start";
            this->start_btn->UseVisualStyleBackColor = false;
            this->start_btn->Click += gcnew System::EventHandler(this, &UserForm::start_btn_Click);
            // 
            // pictureBox8
            // 
            this->pictureBox8->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
            this->pictureBox8->Location = System::Drawing::Point(241, 439);
            this->pictureBox8->Name = L"pictureBox8";
            this->pictureBox8->Size = System::Drawing::Size(177, 69);
            this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox8->TabIndex = 13;
            this->pictureBox8->TabStop = false;
            // 
            // pictureBox4
            // 
            this->pictureBox4->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
            this->pictureBox4->Location = System::Drawing::Point(908, 144);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(104, 68);
            this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox4->TabIndex = 5;
            this->pictureBox4->TabStop = false;
            // 
            // pictureBox5
            // 
            this->pictureBox5->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
            this->pictureBox5->Location = System::Drawing::Point(-81, 507);
            this->pictureBox5->Name = L"pictureBox5";
            this->pictureBox5->Size = System::Drawing::Size(245, 155);
            this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox5->TabIndex = 5;
            this->pictureBox5->TabStop = false;
            // 
            // pictureBox3
            // 
            this->pictureBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
            this->pictureBox3->Location = System::Drawing::Point(-61, 14);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(132, 112);
            this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox3->TabIndex = 5;
            this->pictureBox3->TabStop = false;
            // 
            // label1
            // 
            this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::White;
            this->label1->Location = System::Drawing::Point(85, 143);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(348, 76);
            this->label1->TabIndex = 1;
            this->label1->Text = L"Find Your ";
            // 
            // pictureBox2
            // 
            this->pictureBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(552, 214);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(485, 496);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox2->TabIndex = 4;
            this->pictureBox2->TabStop = false;
            // 
            // Profile_panel
            // 
            this->Profile_panel->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->Profile_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->Profile_panel->Controls->Add(this->pictureBox33);
            this->Profile_panel->Controls->Add(this->pictureBox32);
            this->Profile_panel->Controls->Add(this->pictureBox30);
            this->Profile_panel->Controls->Add(this->pictureBox18);
            this->Profile_panel->Controls->Add(this->pictureBox19);
            this->Profile_panel->Controls->Add(this->user_balance);
            this->Profile_panel->Controls->Add(this->user_phone);
            this->Profile_panel->Controls->Add(this->user_email);
            this->Profile_panel->Controls->Add(this->user_name);
            this->Profile_panel->Controls->Add(this->user_password);
            this->Profile_panel->Controls->Add(this->label90);
            this->Profile_panel->Controls->Add(this->label79);
            this->Profile_panel->Controls->Add(this->label59);
            this->Profile_panel->Controls->Add(this->label60);
            this->Profile_panel->Controls->Add(this->label61);
            this->Profile_panel->Controls->Add(this->change_password_panel);
            this->Profile_panel->Controls->Add(this->EditFieldPanel);
            this->Profile_panel->Location = System::Drawing::Point(-1, 92);
            this->Profile_panel->Name = L"Profile_panel";
            this->Profile_panel->Size = System::Drawing::Size(991, 628);
            this->Profile_panel->TabIndex = 8;
            this->Profile_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &UserForm::Profile_panel_Paint);
            // 
            // pictureBox33
            // 
            this->pictureBox33->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->pictureBox33->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox33.Image")));
            this->pictureBox33->Location = System::Drawing::Point(328, 467);
            this->pictureBox33->Name = L"pictureBox33";
            this->pictureBox33->Size = System::Drawing::Size(76, 47);
            this->pictureBox33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox33->TabIndex = 11;
            this->pictureBox33->TabStop = false;
            this->pictureBox33->Click += gcnew System::EventHandler(this, &UserForm::pictureBox33_Click);
            // 
            // pictureBox32
            // 
            this->pictureBox32->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->pictureBox32->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.Image")));
            this->pictureBox32->Location = System::Drawing::Point(328, 359);
            this->pictureBox32->Name = L"pictureBox32";
            this->pictureBox32->Size = System::Drawing::Size(76, 47);
            this->pictureBox32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox32->TabIndex = 10;
            this->pictureBox32->TabStop = false;
            this->pictureBox32->Click += gcnew System::EventHandler(this, &UserForm::pictureBox32_Click);
            // 
            // pictureBox30
            // 
            this->pictureBox30->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->pictureBox30->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.Image")));
            this->pictureBox30->Location = System::Drawing::Point(328, 260);
            this->pictureBox30->Name = L"pictureBox30";
            this->pictureBox30->Size = System::Drawing::Size(76, 47);
            this->pictureBox30->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox30->TabIndex = 8;
            this->pictureBox30->TabStop = false;
            this->pictureBox30->Click += gcnew System::EventHandler(this, &UserForm::pictureBox30_Click_1);
            // 
            // pictureBox18
            // 
            this->pictureBox18->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->pictureBox18->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
            this->pictureBox18->Location = System::Drawing::Point(332, 71);
            this->pictureBox18->Name = L"pictureBox18";
            this->pictureBox18->Size = System::Drawing::Size(76, 47);
            this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox18->TabIndex = 8;
            this->pictureBox18->TabStop = false;
            this->pictureBox18->Click += gcnew System::EventHandler(this, &UserForm::pictureBox18_Click_1);
            // 
            // pictureBox19
            // 
            this->pictureBox19->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->pictureBox19->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
            this->pictureBox19->Location = System::Drawing::Point(332, 168);
            this->pictureBox19->Name = L"pictureBox19";
            this->pictureBox19->Size = System::Drawing::Size(76, 47);
            this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox19->TabIndex = 8;
            this->pictureBox19->TabStop = false;
            this->pictureBox19->Click += gcnew System::EventHandler(this, &UserForm::pictureBox19_Click_1);
            // 
            // user_balance
            // 
            this->user_balance->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->user_balance->AutoSize = true;
            this->user_balance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold));
            this->user_balance->ForeColor = System::Drawing::Color::White;
            this->user_balance->Location = System::Drawing::Point(150, 371);
            this->user_balance->Name = L"user_balance";
            this->user_balance->Size = System::Drawing::Size(158, 29);
            this->user_balance->TabIndex = 2;
            this->user_balance->Text = L"Placeholder";
            // 
            // user_phone
            // 
            this->user_phone->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->user_phone->AutoSize = true;
            this->user_phone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold));
            this->user_phone->ForeColor = System::Drawing::Color::White;
            this->user_phone->Location = System::Drawing::Point(131, 268);
            this->user_phone->Name = L"user_phone";
            this->user_phone->Size = System::Drawing::Size(158, 29);
            this->user_phone->TabIndex = 2;
            this->user_phone->Text = L"Placeholder";
            // 
            // user_email
            // 
            this->user_email->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->user_email->AutoSize = true;
            this->user_email->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold));
            this->user_email->ForeColor = System::Drawing::Color::White;
            this->user_email->Location = System::Drawing::Point(131, 171);
            this->user_email->Name = L"user_email";
            this->user_email->Size = System::Drawing::Size(158, 29);
            this->user_email->TabIndex = 3;
            this->user_email->Text = L"Placeholder";
            // 
            // user_name
            // 
            this->user_name->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->user_name->AutoSize = true;
            this->user_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold));
            this->user_name->ForeColor = System::Drawing::Color::White;
            this->user_name->Location = System::Drawing::Point(131, 79);
            this->user_name->Name = L"user_name";
            this->user_name->Size = System::Drawing::Size(158, 29);
            this->user_name->TabIndex = 4;
            this->user_name->Text = L"Placeholder";
            // 
            // user_password
            // 
            this->user_password->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->user_password->AutoSize = true;
            this->user_password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold));
            this->user_password->ForeColor = System::Drawing::Color::White;
            this->user_password->Location = System::Drawing::Point(169, 483);
            this->user_password->Name = L"user_password";
            this->user_password->Size = System::Drawing::Size(35, 29);
            this->user_password->TabIndex = 5;
            this->user_password->Text = L"**";
            // 
            // label90
            // 
            this->label90->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label90->AutoSize = true;
            this->label90->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold));
            this->label90->ForeColor = System::Drawing::Color::White;
            this->label90->Location = System::Drawing::Point(31, 476);
            this->label90->Name = L"label90";
            this->label90->Size = System::Drawing::Size(140, 29);
            this->label90->TabIndex = 5;
            this->label90->Text = L"Password:";
            // 
            // label79
            // 
            this->label79->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label79->AutoSize = true;
            this->label79->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold));
            this->label79->ForeColor = System::Drawing::Color::White;
            this->label79->Location = System::Drawing::Point(31, 369);
            this->label79->Name = L"label79";
            this->label79->Size = System::Drawing::Size(128, 29);
            this->label79->TabIndex = 5;
            this->label79->Text = L"Balance: ";
            // 
            // label59
            // 
            this->label59->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label59->AutoSize = true;
            this->label59->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold));
            this->label59->ForeColor = System::Drawing::Color::White;
            this->label59->Location = System::Drawing::Point(31, 268);
            this->label59->Name = L"label59";
            this->label59->Size = System::Drawing::Size(107, 29);
            this->label59->TabIndex = 5;
            this->label59->Text = L"Phone: ";
            // 
            // label60
            // 
            this->label60->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label60->AutoSize = true;
            this->label60->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold));
            this->label60->ForeColor = System::Drawing::Color::White;
            this->label60->Location = System::Drawing::Point(35, 171);
            this->label60->Name = L"label60";
            this->label60->Size = System::Drawing::Size(99, 29);
            this->label60->TabIndex = 6;
            this->label60->Text = L"Email: ";
            // 
            // label61
            // 
            this->label61->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label61->AutoSize = true;
            this->label61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label61->ForeColor = System::Drawing::Color::White;
            this->label61->Location = System::Drawing::Point(35, 79);
            this->label61->Name = L"label61";
            this->label61->Size = System::Drawing::Size(101, 29);
            this->label61->TabIndex = 7;
            this->label61->Text = L"Name: ";
            // 
            // change_password_panel
            // 
            this->change_password_panel->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->change_password_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)),
                static_cast<System::Int32>(static_cast<System::Byte>(103)), static_cast<System::Int32>(static_cast<System::Byte>(122)));
            this->change_password_panel->Controls->Add(this->new_pass);
            this->change_password_panel->Controls->Add(this->label94);
            this->change_password_panel->Controls->Add(this->label92);
            this->change_password_panel->Controls->Add(this->button7);
            this->change_password_panel->Controls->Add(this->save_pass);
            this->change_password_panel->Controls->Add(this->old_pass);
            this->change_password_panel->Controls->Add(this->label93);
            this->change_password_panel->Location = System::Drawing::Point(445, 140);
            this->change_password_panel->Name = L"change_password_panel";
            this->change_password_panel->Size = System::Drawing::Size(453, 288);
            this->change_password_panel->TabIndex = 16;
            // 
            // new_pass
            // 
            this->new_pass->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->new_pass->Location = System::Drawing::Point(234, 163);
            this->new_pass->Name = L"new_pass";
            this->new_pass->Size = System::Drawing::Size(197, 24);
            this->new_pass->TabIndex = 17;
            // 
            // label94
            // 
            this->label94->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label94->AutoSize = true;
            this->label94->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label94->ForeColor = System::Drawing::Color::White;
            this->label94->Location = System::Drawing::Point(26, 162);
            this->label94->Name = L"label94";
            this->label94->Size = System::Drawing::Size(201, 29);
            this->label94->TabIndex = 16;
            this->label94->Text = L"New Password:";
            // 
            // label92
            // 
            this->label92->Anchor = System::Windows::Forms::AnchorStyles::None;
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
            // button7
            // 
            this->button7->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button7->BackColor = System::Drawing::Color::CadetBlue;
            this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button7->FlatAppearance->BorderSize = 0;
            this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
            this->button7->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->button7->Location = System::Drawing::Point(33, 223);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(143, 44);
            this->button7->TabIndex = 14;
            this->button7->Text = L"CANCEL";
            this->button7->UseVisualStyleBackColor = false;
            this->button7->Click += gcnew System::EventHandler(this, &UserForm::button7_Click);
            // 
            // save_pass
            // 
            this->save_pass->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->save_pass->BackColor = System::Drawing::Color::CadetBlue;
            this->save_pass->Cursor = System::Windows::Forms::Cursors::Hand;
            this->save_pass->FlatAppearance->BorderSize = 0;
            this->save_pass->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->save_pass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
            this->save_pass->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->save_pass->Location = System::Drawing::Point(294, 226);
            this->save_pass->Name = L"save_pass";
            this->save_pass->Size = System::Drawing::Size(143, 44);
            this->save_pass->TabIndex = 13;
            this->save_pass->Text = L"SAVE";
            this->save_pass->UseVisualStyleBackColor = false;
            this->save_pass->Click += gcnew System::EventHandler(this, &UserForm::save_pass_Click);
            // 
            // old_pass
            // 
            this->old_pass->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->old_pass->Location = System::Drawing::Point(234, 97);
            this->old_pass->Name = L"old_pass";
            this->old_pass->Size = System::Drawing::Size(197, 24);
            this->old_pass->TabIndex = 11;
            // 
            // label93
            // 
            this->label93->Anchor = System::Windows::Forms::AnchorStyles::None;
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
            // EditFieldPanel
            // 
            this->EditFieldPanel->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->EditFieldPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
                static_cast<System::Int32>(static_cast<System::Byte>(122)));
            this->EditFieldPanel->Controls->Add(this->label89);
            this->EditFieldPanel->Controls->Add(this->button8);
            this->EditFieldPanel->Controls->Add(this->saveButton);
            this->EditFieldPanel->Controls->Add(this->editBox);
            this->EditFieldPanel->Controls->Add(this->editLabel);
            this->EditFieldPanel->Location = System::Drawing::Point(455, 125);
            this->EditFieldPanel->Name = L"EditFieldPanel";
            this->EditFieldPanel->Size = System::Drawing::Size(453, 264);
            this->EditFieldPanel->TabIndex = 9;
            // 
            // label89
            // 
            this->label89->Anchor = System::Windows::Forms::AnchorStyles::None;
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
            // button8
            // 
            this->button8->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button8->BackColor = System::Drawing::Color::CadetBlue;
            this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button8->FlatAppearance->BorderSize = 0;
            this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
            this->button8->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->button8->Location = System::Drawing::Point(38, 200);
            this->button8->Name = L"button8";
            this->button8->Size = System::Drawing::Size(143, 44);
            this->button8->TabIndex = 14;
            this->button8->Text = L"CANCEL";
            this->button8->UseVisualStyleBackColor = false;
            this->button8->Click += gcnew System::EventHandler(this, &UserForm::button8_Click);
            // 
            // saveButton
            // 
            this->saveButton->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->saveButton->BackColor = System::Drawing::Color::CadetBlue;
            this->saveButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->saveButton->FlatAppearance->BorderSize = 0;
            this->saveButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->saveButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
            this->saveButton->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->saveButton->Location = System::Drawing::Point(288, 200);
            this->saveButton->Name = L"saveButton";
            this->saveButton->Size = System::Drawing::Size(143, 44);
            this->saveButton->TabIndex = 13;
            this->saveButton->Text = L"SAVE";
            this->saveButton->UseVisualStyleBackColor = false;
            this->saveButton->Click += gcnew System::EventHandler(this, &UserForm::saveButton_Click_1);
            // 
            // editBox
            // 
            this->editBox->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->editBox->Location = System::Drawing::Point(166, 101);
            this->editBox->Name = L"editBox";
            this->editBox->Size = System::Drawing::Size(250, 24);
            this->editBox->TabIndex = 11;
            // 
            // editLabel
            // 
            this->editLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->editLabel->AutoSize = true;
            this->editLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->editLabel->ForeColor = System::Drawing::Color::White;
            this->editLabel->Location = System::Drawing::Point(32, 98);
            this->editLabel->Name = L"editLabel";
            this->editLabel->Size = System::Drawing::Size(101, 29);
            this->editLabel->TabIndex = 10;
            this->editLabel->Text = L"Name: ";
            // 
            // Navigationbar_panel
            // 
            this->Navigationbar_panel->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->Navigationbar_panel->Controls->Add(this->pictureBox1);
            this->Navigationbar_panel->Controls->Add(this->label3);
            this->Navigationbar_panel->Controls->Add(this->Profile);
            this->Navigationbar_panel->Controls->Add(this->Balance);
            this->Navigationbar_panel->Controls->Add(this->label11);
            this->Navigationbar_panel->Controls->Add(this->Browse);
            this->Navigationbar_panel->Controls->Add(this->Home);
            this->Navigationbar_panel->Controls->Add(this->Comparison);
            this->Navigationbar_panel->Location = System::Drawing::Point(12, 6);
            this->Navigationbar_panel->Name = L"Navigationbar_panel";
            this->Navigationbar_panel->Size = System::Drawing::Size(969, 74);
            this->Navigationbar_panel->TabIndex = 6;
            // 
            // label5
            // 
            this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->ForeColor = System::Drawing::Color::White;
            this->label5->Location = System::Drawing::Point(16, 16);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(202, 29);
            this->label5->TabIndex = 1;
            this->label5->Text = L"Your Properties";
            // 
            // button3
            // 
            this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
                static_cast<System::Int32>(static_cast<System::Byte>(122)));
            this->button3->FlatAppearance->BorderSize = 0;
            this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button3->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->button3->Location = System::Drawing::Point(406, 547);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(142, 52);
            this->button3->TabIndex = 7;
            this->button3->Text = L"Add Property";
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Click += gcnew System::EventHandler(this, &UserForm::button3_Click);
            // 
            // New_Property
            // 
            this->New_Property->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->New_Property->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
                static_cast<System::Int32>(static_cast<System::Byte>(122)));
            this->New_Property->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->New_Property->Controls->Add(this->button6);
            this->New_Property->Controls->Add(this->numBedrooms);
            this->New_Property->Controls->Add(this->TypeCompo);
            this->New_Property->Controls->Add(this->txtDescription);
            this->New_Property->Controls->Add(this->txtArea);
            this->New_Property->Controls->Add(this->txtPrice);
            this->New_Property->Controls->Add(this->txtLocation);
            this->New_Property->Controls->Add(this->label_New_Property);
            this->New_Property->Controls->Add(this->button4);
            this->New_Property->Controls->Add(this->label12);
            this->New_Property->Controls->Add(this->label15);
            this->New_Property->Controls->Add(this->label14);
            this->New_Property->Controls->Add(this->label17);
            this->New_Property->Controls->Add(this->label16);
            this->New_Property->Controls->Add(this->label13);
            this->New_Property->Location = System::Drawing::Point(169, 42);
            this->New_Property->Name = L"New_Property";
            this->New_Property->Size = System::Drawing::Size(662, 482);
            this->New_Property->TabIndex = 9;
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
            this->button6->Click += gcnew System::EventHandler(this, &UserForm::button6_Click);
            // 
            // numBedrooms
            // 
            this->numBedrooms->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->numBedrooms->Location = System::Drawing::Point(350, 174);
            this->numBedrooms->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
            this->numBedrooms->Name = L"numBedrooms";
            this->numBedrooms->Size = System::Drawing::Size(122, 24);
            this->numBedrooms->TabIndex = 12;
            // 
            // TypeCompo
            // 
            this->TypeCompo->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->TypeCompo->FormattingEnabled = true;
            this->TypeCompo->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
                L"Apartment", L"Condominium", L"Townhouse", L"Duplex",
                    L"Villa"
            });
            this->TypeCompo->Location = System::Drawing::Point(71, 101);
            this->TypeCompo->Name = L"TypeCompo";
            this->TypeCompo->Size = System::Drawing::Size(121, 24);
            this->TypeCompo->TabIndex = 11;
            this->TypeCompo->SelectedIndexChanged += gcnew System::EventHandler(this, &UserForm::comboBox1_SelectedIndexChanged);
            // 
            // txtDescription
            // 
            this->txtDescription->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->txtDescription->Location = System::Drawing::Point(165, 300);
            this->txtDescription->Multiline = true;
            this->txtDescription->Name = L"txtDescription";
            this->txtDescription->Size = System::Drawing::Size(356, 95);
            this->txtDescription->TabIndex = 10;
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
            // button4
            // 
            this->button4->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button4->BackColor = System::Drawing::Color::CadetBlue;
            this->button4->FlatAppearance->BorderSize = 0;
            this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button4->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->button4->Location = System::Drawing::Point(379, 420);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(142, 44);
            this->button4->TabIndex = 7;
            this->button4->Text = L"ADD";
            this->button4->UseVisualStyleBackColor = false;
            this->button4->Click += gcnew System::EventHandler(this, &UserForm::button4_Click);
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
            // label15
            // 
            this->label15->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label15->ForeColor = System::Drawing::Color::White;
            this->label15->Location = System::Drawing::Point(57, 214);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(87, 20);
            this->label15->TabIndex = 1;
            this->label15->Text = L"Location:";
            // 
            // label14
            // 
            this->label14->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label14->ForeColor = System::Drawing::Color::White;
            this->label14->Location = System::Drawing::Point(57, 75);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(55, 20);
            this->label14->TabIndex = 1;
            this->label14->Text = L"Type:";
            // 
            // label17
            // 
            this->label17->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label17->AutoSize = true;
            this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label17->ForeColor = System::Drawing::Color::White;
            this->label17->Location = System::Drawing::Point(337, 145);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(190, 20);
            this->label17->TabIndex = 1;
            this->label17->Text = L"Number of bedrooms:";
            this->label17->Click += gcnew System::EventHandler(this, &UserForm::label17_Click);
            // 
            // label16
            // 
            this->label16->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label16->AutoSize = true;
            this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label16->ForeColor = System::Drawing::Color::White;
            this->label16->Location = System::Drawing::Point(58, 145);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(54, 20);
            this->label16->TabIndex = 1;
            this->label16->Text = L"Area:";
            // 
            // label13
            // 
            this->label13->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label13->AutoSize = true;
            this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label13->ForeColor = System::Drawing::Color::White;
            this->label13->Location = System::Drawing::Point(337, 75);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(59, 20);
            this->label13->TabIndex = 1;
            this->label13->Text = L"Price:";
            // 
            // Home_panel
            // 
            this->Home_panel->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->Home_panel->Controls->Add(this->New_Property);
            this->Home_panel->Controls->Add(this->button3);
            this->Home_panel->Controls->Add(this->label5);
            this->Home_panel->Controls->Add(this->flowLayoutPanel1);
            this->Home_panel->Controls->Add(this->panel4);
            this->Home_panel->Location = System::Drawing::Point(6, 92);
            this->Home_panel->Name = L"Home_panel";
            this->Home_panel->Size = System::Drawing::Size(984, 631);
            this->Home_panel->TabIndex = 0;
            this->Home_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &UserForm::Home_panel_Paint);
            // 
            // panel4
            // 
            this->panel4->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
                static_cast<System::Int32>(static_cast<System::Byte>(122)));
            this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->panel4->Controls->Add(this->numberOFbedroomslbl);
            this->panel4->Controls->Add(this->typelbl);
            this->panel4->Controls->Add(this->locationlbl);
            this->panel4->Controls->Add(this->pricelbl);
            this->panel4->Controls->Add(this->arealbl);
            this->panel4->Controls->Add(this->deslbl);
            this->panel4->Controls->Add(this->statuslbl);
            this->panel4->Controls->Add(this->idlbl);
            this->panel4->Controls->Add(this->label24);
            this->panel4->Controls->Add(this->button2);
            this->panel4->Controls->Add(this->label25);
            this->panel4->Controls->Add(this->label26);
            this->panel4->Controls->Add(this->label27);
            this->panel4->Controls->Add(this->label53);
            this->panel4->Controls->Add(this->label54);
            this->panel4->Controls->Add(this->label55);
            this->panel4->Controls->Add(this->label56);
            this->panel4->Controls->Add(this->label57);
            this->panel4->Location = System::Drawing::Point(139, 51);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(662, 482);
            this->panel4->TabIndex = 11;
            this->panel4->Visible = false;
            // 
            // numberOFbedroomslbl
            // 
            this->numberOFbedroomslbl->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->numberOFbedroomslbl->AutoSize = true;
            this->numberOFbedroomslbl->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10, System::Drawing::FontStyle::Bold));
            this->numberOFbedroomslbl->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->numberOFbedroomslbl->Location = System::Drawing::Point(351, 178);
            this->numberOFbedroomslbl->Name = L"numberOFbedroomslbl";
            this->numberOFbedroomslbl->Size = System::Drawing::Size(110, 23);
            this->numberOFbedroomslbl->TabIndex = 26;
            this->numberOFbedroomslbl->Text = L"Place_holder";
            // 
            // typelbl
            // 
            this->typelbl->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->typelbl->AutoSize = true;
            this->typelbl->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10, System::Drawing::FontStyle::Bold));
            this->typelbl->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->typelbl->Location = System::Drawing::Point(349, 109);
            this->typelbl->Name = L"typelbl";
            this->typelbl->Size = System::Drawing::Size(110, 23);
            this->typelbl->TabIndex = 25;
            this->typelbl->Text = L"Place_holder";
            // 
            // locationlbl
            // 
            this->locationlbl->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->locationlbl->AutoSize = true;
            this->locationlbl->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10, System::Drawing::FontStyle::Bold));
            this->locationlbl->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->locationlbl->Location = System::Drawing::Point(72, 250);
            this->locationlbl->Name = L"locationlbl";
            this->locationlbl->Size = System::Drawing::Size(110, 23);
            this->locationlbl->TabIndex = 23;
            this->locationlbl->Text = L"Place_holder";
            // 
            // pricelbl
            // 
            this->pricelbl->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->pricelbl->AutoSize = true;
            this->pricelbl->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10, System::Drawing::FontStyle::Bold));
            this->pricelbl->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->pricelbl->Location = System::Drawing::Point(349, 251);
            this->pricelbl->Name = L"pricelbl";
            this->pricelbl->Size = System::Drawing::Size(110, 23);
            this->pricelbl->TabIndex = 22;
            this->pricelbl->Text = L"Place_holder";
            // 
            // arealbl
            // 
            this->arealbl->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->arealbl->AutoSize = true;
            this->arealbl->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10, System::Drawing::FontStyle::Bold));
            this->arealbl->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->arealbl->Location = System::Drawing::Point(70, 178);
            this->arealbl->Name = L"arealbl";
            this->arealbl->Size = System::Drawing::Size(110, 23);
            this->arealbl->TabIndex = 21;
            this->arealbl->Text = L"Place_holder";
            // 
            // deslbl
            // 
            this->deslbl->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->deslbl->Location = System::Drawing::Point(166, 300);
            this->deslbl->Multiline = true;
            this->deslbl->Name = L"deslbl";
            this->deslbl->ReadOnly = true;
            this->deslbl->Size = System::Drawing::Size(402, 97);
            this->deslbl->TabIndex = 9;
            // 
            // statuslbl
            // 
            this->statuslbl->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->statuslbl->AutoSize = true;
            this->statuslbl->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10, System::Drawing::FontStyle::Bold));
            this->statuslbl->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->statuslbl->Location = System::Drawing::Point(70, 102);
            this->statuslbl->Name = L"statuslbl";
            this->statuslbl->Size = System::Drawing::Size(110, 23);
            this->statuslbl->TabIndex = 8;
            this->statuslbl->Text = L"Place_holder";
            // 
            // idlbl
            // 
            this->idlbl->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->idlbl->AutoSize = true;
            this->idlbl->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10, System::Drawing::FontStyle::Bold));
            this->idlbl->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->idlbl->Location = System::Drawing::Point(48, 25);
            this->idlbl->Name = L"idlbl";
            this->idlbl->Size = System::Drawing::Size(110, 23);
            this->idlbl->TabIndex = 8;
            this->idlbl->Text = L"Place_holder";
            this->idlbl->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // label24
            // 
            this->label24->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label24->AutoSize = true;
            this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label24->ForeColor = System::Drawing::Color::White;
            this->label24->Location = System::Drawing::Point(262, 9);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(124, 38);
            this->label24->TabIndex = 1;
            this->label24->Text = L"Details";
            // 
            // button2
            // 
            this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button2->BackColor = System::Drawing::Color::CadetBlue;
            this->button2->FlatAppearance->BorderSize = 0;
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->button2->Location = System::Drawing::Point(266, 416);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(142, 44);
            this->button2->TabIndex = 7;
            this->button2->Text = L"Close";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &UserForm::button2_Click_2);
            // 
            // label25
            // 
            this->label25->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label25->AutoSize = true;
            this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label25->ForeColor = System::Drawing::Color::White;
            this->label25->Location = System::Drawing::Point(54, 300);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(112, 20);
            this->label25->TabIndex = 1;
            this->label25->Text = L"Description:";
            // 
            // label26
            // 
            this->label26->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label26->AutoSize = true;
            this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label26->ForeColor = System::Drawing::Color::White;
            this->label26->Location = System::Drawing::Point(57, 214);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(87, 20);
            this->label26->TabIndex = 1;
            this->label26->Text = L"Location:";
            // 
            // label27
            // 
            this->label27->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label27->AutoSize = true;
            this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label27->ForeColor = System::Drawing::Color::White;
            this->label27->Location = System::Drawing::Point(19, 25);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(30, 20);
            this->label27->TabIndex = 1;
            this->label27->Text = L"Id:";
            // 
            // label53
            // 
            this->label53->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label53->AutoSize = true;
            this->label53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label53->ForeColor = System::Drawing::Color::White;
            this->label53->Location = System::Drawing::Point(337, 145);
            this->label53->Name = L"label53";
            this->label53->Size = System::Drawing::Size(190, 20);
            this->label53->TabIndex = 1;
            this->label53->Text = L"Number of bedrooms:";
            // 
            // label54
            // 
            this->label54->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label54->AutoSize = true;
            this->label54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label54->ForeColor = System::Drawing::Color::White;
            this->label54->Location = System::Drawing::Point(58, 145);
            this->label54->Name = L"label54";
            this->label54->Size = System::Drawing::Size(54, 20);
            this->label54->TabIndex = 1;
            this->label54->Text = L"Area:";
            // 
            // label55
            // 
            this->label55->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label55->AutoSize = true;
            this->label55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label55->ForeColor = System::Drawing::Color::White;
            this->label55->Location = System::Drawing::Point(337, 214);
            this->label55->Name = L"label55";
            this->label55->Size = System::Drawing::Size(59, 20);
            this->label55->TabIndex = 1;
            this->label55->Text = L"Price:";
            // 
            // label56
            // 
            this->label56->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label56->AutoSize = true;
            this->label56->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label56->ForeColor = System::Drawing::Color::White;
            this->label56->Location = System::Drawing::Point(54, 75);
            this->label56->Name = L"label56";
            this->label56->Size = System::Drawing::Size(63, 20);
            this->label56->TabIndex = 1;
            this->label56->Text = L"Status";
            // 
            // label57
            // 
            this->label57->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label57->AutoSize = true;
            this->label57->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label57->ForeColor = System::Drawing::Color::White;
            this->label57->Location = System::Drawing::Point(337, 75);
            this->label57->Name = L"label57";
            this->label57->Size = System::Drawing::Size(55, 20);
            this->label57->TabIndex = 1;
            this->label57->Text = L"Type:";
            // 
            // flowLayoutPanel1
            // 
            this->flowLayoutPanel1->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->flowLayoutPanel1->AutoScroll = true;
            this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
            this->flowLayoutPanel1->Location = System::Drawing::Point(28, 65);
            this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
            this->flowLayoutPanel1->Size = System::Drawing::Size(926, 476);
            this->flowLayoutPanel1->TabIndex = 10;
            this->flowLayoutPanel1->WrapContents = false;
            this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &UserForm::flowLayoutPanel1_Paint);
            // 
            // panel3
            // 
            this->panel3->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
                static_cast<System::Int32>(static_cast<System::Byte>(122)));
            this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->panel3->Controls->Add(this->label51);
            this->panel3->Controls->Add(this->label52);
            this->panel3->Controls->Add(this->label50);
            this->panel3->Controls->Add(this->label49);
            this->panel3->Controls->Add(this->label48);
            this->panel3->Controls->Add(this->textBox18);
            this->panel3->Controls->Add(this->label28);
            this->panel3->Controls->Add(this->label29);
            this->panel3->Controls->Add(this->label30);
            this->panel3->Controls->Add(this->button22);
            this->panel3->Controls->Add(this->label31);
            this->panel3->Controls->Add(this->label32);
            this->panel3->Controls->Add(this->label42);
            this->panel3->Controls->Add(this->label43);
            this->panel3->Controls->Add(this->label44);
            this->panel3->Controls->Add(this->label45);
            this->panel3->Controls->Add(this->label46);
            this->panel3->Controls->Add(this->label47);
            this->panel3->Location = System::Drawing::Point(284, 13);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(662, 482);
            this->panel3->TabIndex = 10;
            this->panel3->Visible = false;
            // 
            // label51
            // 
            this->label51->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label51->AutoSize = true;
            this->label51->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10, System::Drawing::FontStyle::Bold));
            this->label51->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->label51->Location = System::Drawing::Point(351, 178);
            this->label51->Name = L"label51";
            this->label51->Size = System::Drawing::Size(110, 23);
            this->label51->TabIndex = 26;
            this->label51->Text = L"Place_holder";
            // 
            // label52
            // 
            this->label52->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label52->AutoSize = true;
            this->label52->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10, System::Drawing::FontStyle::Bold));
            this->label52->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->label52->Location = System::Drawing::Point(349, 109);
            this->label52->Name = L"label52";
            this->label52->Size = System::Drawing::Size(110, 23);
            this->label52->TabIndex = 25;
            this->label52->Text = L"Place_holder";
            // 
            // label50
            // 
            this->label50->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label50->AutoSize = true;
            this->label50->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10, System::Drawing::FontStyle::Bold));
            this->label50->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->label50->Location = System::Drawing::Point(72, 250);
            this->label50->Name = L"label50";
            this->label50->Size = System::Drawing::Size(110, 23);
            this->label50->TabIndex = 23;
            this->label50->Text = L"Place_holder";
            // 
            // label49
            // 
            this->label49->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label49->AutoSize = true;
            this->label49->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10, System::Drawing::FontStyle::Bold));
            this->label49->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->label49->Location = System::Drawing::Point(349, 251);
            this->label49->Name = L"label49";
            this->label49->Size = System::Drawing::Size(110, 23);
            this->label49->TabIndex = 22;
            this->label49->Text = L"Place_holder";
            // 
            // label48
            // 
            this->label48->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label48->AutoSize = true;
            this->label48->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10, System::Drawing::FontStyle::Bold));
            this->label48->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->label48->Location = System::Drawing::Point(70, 178);
            this->label48->Name = L"label48";
            this->label48->Size = System::Drawing::Size(110, 23);
            this->label48->TabIndex = 21;
            this->label48->Text = L"Place_holder";
            // 
            // textBox18
            // 
            this->textBox18->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox18->Location = System::Drawing::Point(166, 300);
            this->textBox18->Multiline = true;
            this->textBox18->Name = L"textBox18";
            this->textBox18->ReadOnly = true;
            this->textBox18->Size = System::Drawing::Size(402, 97);
            this->textBox18->TabIndex = 9;
            // 
            // label28
            // 
            this->label28->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label28->AutoSize = true;
            this->label28->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10, System::Drawing::FontStyle::Bold));
            this->label28->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->label28->Location = System::Drawing::Point(70, 102);
            this->label28->Name = L"label28";
            this->label28->Size = System::Drawing::Size(110, 23);
            this->label28->TabIndex = 8;
            this->label28->Text = L"Place_holder";
            // 
            // label29
            // 
            this->label29->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label29->AutoSize = true;
            this->label29->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10, System::Drawing::FontStyle::Bold));
            this->label29->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->label29->Location = System::Drawing::Point(48, 25);
            this->label29->Name = L"label29";
            this->label29->Size = System::Drawing::Size(110, 23);
            this->label29->TabIndex = 8;
            this->label29->Text = L"Place_holder";
            this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // label30
            // 
            this->label30->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label30->AutoSize = true;
            this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label30->ForeColor = System::Drawing::Color::White;
            this->label30->Location = System::Drawing::Point(262, 9);
            this->label30->Name = L"label30";
            this->label30->Size = System::Drawing::Size(124, 38);
            this->label30->TabIndex = 1;
            this->label30->Text = L"Details";
            // 
            // button22
            // 
            this->button22->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button22->BackColor = System::Drawing::Color::CadetBlue;
            this->button22->FlatAppearance->BorderSize = 0;
            this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button22->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->button22->Location = System::Drawing::Point(266, 416);
            this->button22->Name = L"button22";
            this->button22->Size = System::Drawing::Size(142, 44);
            this->button22->TabIndex = 7;
            this->button22->Text = L"Close";
            this->button22->UseVisualStyleBackColor = false;
            this->button22->Click += gcnew System::EventHandler(this, &UserForm::button22_Click);
            // 
            // label31
            // 
            this->label31->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label31->AutoSize = true;
            this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label31->ForeColor = System::Drawing::Color::White;
            this->label31->Location = System::Drawing::Point(54, 300);
            this->label31->Name = L"label31";
            this->label31->Size = System::Drawing::Size(112, 20);
            this->label31->TabIndex = 1;
            this->label31->Text = L"Description:";
            // 
            // label32
            // 
            this->label32->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label32->AutoSize = true;
            this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label32->ForeColor = System::Drawing::Color::White;
            this->label32->Location = System::Drawing::Point(57, 214);
            this->label32->Name = L"label32";
            this->label32->Size = System::Drawing::Size(87, 20);
            this->label32->TabIndex = 1;
            this->label32->Text = L"Location:";
            // 
            // label42
            // 
            this->label42->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label42->AutoSize = true;
            this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label42->ForeColor = System::Drawing::Color::White;
            this->label42->Location = System::Drawing::Point(19, 25);
            this->label42->Name = L"label42";
            this->label42->Size = System::Drawing::Size(30, 20);
            this->label42->TabIndex = 1;
            this->label42->Text = L"Id:";
            // 
            // label43
            // 
            this->label43->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label43->AutoSize = true;
            this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label43->ForeColor = System::Drawing::Color::White;
            this->label43->Location = System::Drawing::Point(337, 145);
            this->label43->Name = L"label43";
            this->label43->Size = System::Drawing::Size(190, 20);
            this->label43->TabIndex = 1;
            this->label43->Text = L"Number of bedrooms:";
            // 
            // label44
            // 
            this->label44->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label44->AutoSize = true;
            this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label44->ForeColor = System::Drawing::Color::White;
            this->label44->Location = System::Drawing::Point(58, 145);
            this->label44->Name = L"label44";
            this->label44->Size = System::Drawing::Size(54, 20);
            this->label44->TabIndex = 1;
            this->label44->Text = L"Area:";
            // 
            // label45
            // 
            this->label45->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label45->AutoSize = true;
            this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label45->ForeColor = System::Drawing::Color::White;
            this->label45->Location = System::Drawing::Point(337, 214);
            this->label45->Name = L"label45";
            this->label45->Size = System::Drawing::Size(59, 20);
            this->label45->TabIndex = 1;
            this->label45->Text = L"Price:";
            // 
            // label46
            // 
            this->label46->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label46->AutoSize = true;
            this->label46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label46->ForeColor = System::Drawing::Color::White;
            this->label46->Location = System::Drawing::Point(54, 75);
            this->label46->Name = L"label46";
            this->label46->Size = System::Drawing::Size(63, 20);
            this->label46->TabIndex = 1;
            this->label46->Text = L"Status";
            // 
            // label47
            // 
            this->label47->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label47->AutoSize = true;
            this->label47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label47->ForeColor = System::Drawing::Color::White;
            this->label47->Location = System::Drawing::Point(337, 75);
            this->label47->Name = L"label47";
            this->label47->Size = System::Drawing::Size(55, 20);
            this->label47->TabIndex = 1;
            this->label47->Text = L"Type:";
            // 
            // Browse_panel
            // 
            this->Browse_panel->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->Browse_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->Browse_panel->Controls->Add(this->panel3);
            this->Browse_panel->Controls->Add(this->panel1);
            this->Browse_panel->Controls->Add(this->panel2);
            this->Browse_panel->Controls->Add(this->flowLayoutPanel2);
            this->Browse_panel->Location = System::Drawing::Point(6, 93);
            this->Browse_panel->Name = L"Browse_panel";
            this->Browse_panel->Size = System::Drawing::Size(972, 621);
            this->Browse_panel->TabIndex = 7;
            // 
            // panel1
            // 
            this->panel1->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
                static_cast<System::Int32>(static_cast<System::Byte>(152)));
            this->panel1->Controls->Add(this->pictureBox10);
            this->panel1->Controls->Add(this->pictureBox6);
            this->panel1->Controls->Add(this->numericUpDown1);
            this->panel1->Controls->Add(this->label4);
            this->panel1->Controls->Add(this->label6);
            this->panel1->Controls->Add(this->label7);
            this->panel1->Controls->Add(this->label8);
            this->panel1->Controls->Add(this->textBox7);
            this->panel1->Controls->Add(this->textBox1);
            this->panel1->Controls->Add(this->textBox8);
            this->panel1->Controls->Add(this->textBox5);
            this->panel1->Controls->Add(this->comboBox1);
            this->panel1->Controls->Add(this->label33);
            this->panel1->Controls->Add(this->label34);
            this->panel1->Location = System::Drawing::Point(1, 3);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(221, 615);
            this->panel1->TabIndex = 1;
            // 
            // pictureBox10
            // 
            this->pictureBox10->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->pictureBox10->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
            this->pictureBox10->Location = System::Drawing::Point(133, 435);
            this->pictureBox10->Name = L"pictureBox10";
            this->pictureBox10->Size = System::Drawing::Size(75, 47);
            this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox10->TabIndex = 1;
            this->pictureBox10->TabStop = false;
            this->pictureBox10->Click += gcnew System::EventHandler(this, &UserForm::pictureBox10_Click);
            // 
            // pictureBox6
            // 
            this->pictureBox6->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->pictureBox6->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
            this->pictureBox6->Location = System::Drawing::Point(10, 435);
            this->pictureBox6->Name = L"pictureBox6";
            this->pictureBox6->Size = System::Drawing::Size(75, 47);
            this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox6->TabIndex = 1;
            this->pictureBox6->TabStop = false;
            this->pictureBox6->Click += gcnew System::EventHandler(this, &UserForm::pictureBox6_Click);
            // 
            // numericUpDown1
            // 
            this->numericUpDown1->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->numericUpDown1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
                static_cast<System::Int32>(static_cast<System::Byte>(152)));
            this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.999999F));
            this->numericUpDown1->ForeColor = System::Drawing::Color::White;
            this->numericUpDown1->Location = System::Drawing::Point(48, 373);
            this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
            this->numericUpDown1->Name = L"numericUpDown1";
            this->numericUpDown1->Size = System::Drawing::Size(143, 24);
            this->numericUpDown1->TabIndex = 15;
            // 
            // label4
            // 
            this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::Color::White;
            this->label4->Location = System::Drawing::Point(105, 217);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(30, 20);
            this->label4->TabIndex = 13;
            this->label4->Text = L"To";
            // 
            // label6
            // 
            this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->ForeColor = System::Drawing::Color::White;
            this->label6->Location = System::Drawing::Point(20, 264);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(48, 20);
            this->label6->TabIndex = 13;
            this->label6->Text = L"Area";
            // 
            // label7
            // 
            this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->ForeColor = System::Drawing::Color::White;
            this->label7->Location = System::Drawing::Point(20, 184);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(112, 20);
            this->label7->TabIndex = 13;
            this->label7->Text = L"Price Range";
            // 
            // label8
            // 
            this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->ForeColor = System::Drawing::Color::White;
            this->label8->Location = System::Drawing::Point(14, 339);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(187, 20);
            this->label8->TabIndex = 13;
            this->label8->Text = L"Number of Bedrooms";
            // 
            // textBox7
            // 
            this->textBox7->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
                static_cast<System::Int32>(static_cast<System::Byte>(152)));
            this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.999999F));
            this->textBox7->ForeColor = System::Drawing::Color::White;
            this->textBox7->Location = System::Drawing::Point(141, 216);
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(50, 24);
            this->textBox7->TabIndex = 4;
            // 
            // textBox1
            // 
            this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
                static_cast<System::Int32>(static_cast<System::Byte>(152)));
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.999999F));
            this->textBox1->ForeColor = System::Drawing::Color::White;
            this->textBox1->Location = System::Drawing::Point(48, 216);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(50, 24);
            this->textBox1->TabIndex = 4;
            // 
            // textBox8
            // 
            this->textBox8->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
                static_cast<System::Int32>(static_cast<System::Byte>(152)));
            this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.999999F));
            this->textBox8->ForeColor = System::Drawing::Color::White;
            this->textBox8->Location = System::Drawing::Point(46, 290);
            this->textBox8->Name = L"textBox8";
            this->textBox8->Size = System::Drawing::Size(145, 24);
            this->textBox8->TabIndex = 4;
            // 
            // textBox5
            // 
            this->textBox5->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
                static_cast<System::Int32>(static_cast<System::Byte>(152)));
            this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox5->ForeColor = System::Drawing::Color::White;
            this->textBox5->Location = System::Drawing::Point(53, 61);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(138, 24);
            this->textBox5->TabIndex = 4;
            // 
            // comboBox1
            // 
            this->comboBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
                static_cast<System::Int32>(static_cast<System::Byte>(152)));
            this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->comboBox1->ForeColor = System::Drawing::Color::White;
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
                L"Apartment", L"Condominium", L"Townhouse", L"Duplex",
                    L"Villa"
            });
            this->comboBox1->Location = System::Drawing::Point(53, 132);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(138, 26);
            this->comboBox1->TabIndex = 14;
            // 
            // label33
            // 
            this->label33->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label33->AutoSize = true;
            this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label33->ForeColor = System::Drawing::Color::White;
            this->label33->Location = System::Drawing::Point(19, 100);
            this->label33->Name = L"label33";
            this->label33->Size = System::Drawing::Size(49, 20);
            this->label33->TabIndex = 3;
            this->label33->Text = L"Type";
            // 
            // label34
            // 
            this->label34->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label34->AutoSize = true;
            this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label34->ForeColor = System::Drawing::Color::White;
            this->label34->Location = System::Drawing::Point(19, 31);
            this->label34->Name = L"label34";
            this->label34->Size = System::Drawing::Size(81, 20);
            this->label34->TabIndex = 3;
            this->label34->Text = L"Location";
            // 
            // panel2
            // 
            this->panel2->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->panel2->Location = System::Drawing::Point(0, 0);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(200, 100);
            this->panel2->TabIndex = 21;
            // 
            // flowLayoutPanel2
            // 
            this->flowLayoutPanel2->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->flowLayoutPanel2->AutoScroll = true;
            this->flowLayoutPanel2->Location = System::Drawing::Point(245, 27);
            this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
            this->flowLayoutPanel2->Size = System::Drawing::Size(709, 571);
            this->flowLayoutPanel2->TabIndex = 27;
            // 
            // button18
            // 
            this->button18->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button18->Location = System::Drawing::Point(0, 0);
            this->button18->Name = L"button18";
            this->button18->Size = System::Drawing::Size(75, 23);
            this->button18->TabIndex = 0;
            // 
            // label9
            // 
            this->label9->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label9->Location = System::Drawing::Point(0, 0);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(100, 23);
            this->label9->TabIndex = 0;
            // 
            // button19
            // 
            this->button19->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button19->Location = System::Drawing::Point(0, 0);
            this->button19->Name = L"button19";
            this->button19->Size = System::Drawing::Size(75, 23);
            this->button19->TabIndex = 0;
            // 
            // label35
            // 
            this->label35->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label35->Location = System::Drawing::Point(0, 0);
            this->label35->Name = L"label35";
            this->label35->Size = System::Drawing::Size(100, 23);
            this->label35->TabIndex = 0;
            // 
            // button20
            // 
            this->button20->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button20->Location = System::Drawing::Point(0, 0);
            this->button20->Name = L"button20";
            this->button20->Size = System::Drawing::Size(75, 23);
            this->button20->TabIndex = 0;
            // 
            // label36
            // 
            this->label36->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label36->Location = System::Drawing::Point(0, 0);
            this->label36->Name = L"label36";
            this->label36->Size = System::Drawing::Size(100, 23);
            this->label36->TabIndex = 0;
            // 
            // label37
            // 
            this->label37->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label37->Location = System::Drawing::Point(0, 0);
            this->label37->Name = L"label37";
            this->label37->Size = System::Drawing::Size(100, 23);
            this->label37->TabIndex = 0;
            // 
            // label38
            // 
            this->label38->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label38->Location = System::Drawing::Point(0, 0);
            this->label38->Name = L"label38";
            this->label38->Size = System::Drawing::Size(100, 23);
            this->label38->TabIndex = 0;
            // 
            // label39
            // 
            this->label39->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label39->Location = System::Drawing::Point(0, 0);
            this->label39->Name = L"label39";
            this->label39->Size = System::Drawing::Size(100, 23);
            this->label39->TabIndex = 0;
            // 
            // label40
            // 
            this->label40->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label40->Location = System::Drawing::Point(0, 0);
            this->label40->Name = L"label40";
            this->label40->Size = System::Drawing::Size(100, 23);
            this->label40->TabIndex = 0;
            // 
            // label41
            // 
            this->label41->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label41->Location = System::Drawing::Point(0, 0);
            this->label41->Name = L"label41";
            this->label41->Size = System::Drawing::Size(100, 23);
            this->label41->TabIndex = 0;
            // 
            // Comparison_panel
            // 
            this->Comparison_panel->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->Comparison_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->Comparison_panel->Controls->Add(this->flowLayoutPanel3);
            this->Comparison_panel->Controls->Add(this->button11);
            this->Comparison_panel->Controls->Add(this->button10);
            this->Comparison_panel->Location = System::Drawing::Point(6, 92);
            this->Comparison_panel->Name = L"Comparison_panel";
            this->Comparison_panel->Size = System::Drawing::Size(975, 625);
            this->Comparison_panel->TabIndex = 7;
            // 
            // flowLayoutPanel3
            // 
            this->flowLayoutPanel3->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->flowLayoutPanel3->Location = System::Drawing::Point(28, 35);
            this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
            this->flowLayoutPanel3->Size = System::Drawing::Size(910, 480);
            this->flowLayoutPanel3->TabIndex = 20;
            // 
            // button11
            // 
            this->button11->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button11->BackColor = System::Drawing::Color::CadetBlue;
            this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button11->FlatAppearance->BorderSize = 0;
            this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
            this->button11->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->button11->Location = System::Drawing::Point(286, 530);
            this->button11->Name = L"button11";
            this->button11->Size = System::Drawing::Size(143, 44);
            this->button11->TabIndex = 14;
            this->button11->Text = L"CLEAR";
            this->button11->UseVisualStyleBackColor = false;
            this->button11->Click += gcnew System::EventHandler(this, &UserForm::button11_Click);
            // 
            // button10
            // 
            this->button10->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button10->BackColor = System::Drawing::Color::CadetBlue;
            this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button10->FlatAppearance->BorderSize = 0;
            this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
            this->button10->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->button10->Location = System::Drawing::Point(576, 532);
            this->button10->Name = L"button10";
            this->button10->Size = System::Drawing::Size(143, 44);
            this->button10->TabIndex = 13;
            this->button10->Text = L"ADD";
            this->button10->UseVisualStyleBackColor = false;
            this->button10->Click += gcnew System::EventHandler(this, &UserForm::button10_Click);
            // 
            // label63
            // 
            this->label63->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label63->Location = System::Drawing::Point(0, 0);
            this->label63->Name = L"label63";
            this->label63->Size = System::Drawing::Size(100, 23);
            this->label63->TabIndex = 0;
            // 
            // label64
            // 
            this->label64->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label64->Location = System::Drawing::Point(0, 0);
            this->label64->Name = L"label64";
            this->label64->Size = System::Drawing::Size(100, 23);
            this->label64->TabIndex = 0;
            // 
            // label65
            // 
            this->label65->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label65->Location = System::Drawing::Point(0, 0);
            this->label65->Name = L"label65";
            this->label65->Size = System::Drawing::Size(100, 23);
            this->label65->TabIndex = 0;
            // 
            // label66
            // 
            this->label66->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label66->Location = System::Drawing::Point(0, 0);
            this->label66->Name = L"label66";
            this->label66->Size = System::Drawing::Size(100, 23);
            this->label66->TabIndex = 0;
            // 
            // label67
            // 
            this->label67->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label67->Location = System::Drawing::Point(0, 0);
            this->label67->Name = L"label67";
            this->label67->Size = System::Drawing::Size(100, 23);
            this->label67->TabIndex = 0;
            // 
            // button12
            // 
            this->button12->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button12->Location = System::Drawing::Point(0, 0);
            this->button12->Name = L"button12";
            this->button12->Size = System::Drawing::Size(75, 23);
            this->button12->TabIndex = 0;
            // 
            // button13
            // 
            this->button13->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button13->Location = System::Drawing::Point(0, 0);
            this->button13->Name = L"button13";
            this->button13->Size = System::Drawing::Size(75, 23);
            this->button13->TabIndex = 0;
            // 
            // textBox16
            // 
            this->textBox16->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox16->Location = System::Drawing::Point(0, 0);
            this->textBox16->Name = L"textBox16";
            this->textBox16->Size = System::Drawing::Size(100, 24);
            this->textBox16->TabIndex = 0;
            // 
            // label68
            // 
            this->label68->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label68->Location = System::Drawing::Point(0, 0);
            this->label68->Name = L"label68";
            this->label68->Size = System::Drawing::Size(100, 23);
            this->label68->TabIndex = 0;
            // 
            // label69
            // 
            this->label69->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label69->Location = System::Drawing::Point(0, 0);
            this->label69->Name = L"label69";
            this->label69->Size = System::Drawing::Size(100, 23);
            this->label69->TabIndex = 0;
            // 
            // label80
            // 
            this->label80->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label80->Location = System::Drawing::Point(0, 0);
            this->label80->Name = L"label80";
            this->label80->Size = System::Drawing::Size(100, 23);
            this->label80->TabIndex = 0;
            // 
            // label91
            // 
            this->label91->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label91->Location = System::Drawing::Point(0, 0);
            this->label91->Name = L"label91";
            this->label91->Size = System::Drawing::Size(100, 23);
            this->label91->TabIndex = 0;
            // 
            // label95
            // 
            this->label95->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label95->Location = System::Drawing::Point(0, 0);
            this->label95->Name = L"label95";
            this->label95->Size = System::Drawing::Size(100, 23);
            this->label95->TabIndex = 0;
            // 
            // label96
            // 
            this->label96->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label96->Location = System::Drawing::Point(0, 0);
            this->label96->Name = L"label96";
            this->label96->Size = System::Drawing::Size(100, 23);
            this->label96->TabIndex = 0;
            // 
            // label97
            // 
            this->label97->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label97->Location = System::Drawing::Point(0, 0);
            this->label97->Name = L"label97";
            this->label97->Size = System::Drawing::Size(100, 23);
            this->label97->TabIndex = 0;
            // 
            // label98
            // 
            this->label98->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label98->Location = System::Drawing::Point(0, 0);
            this->label98->Name = L"label98";
            this->label98->Size = System::Drawing::Size(100, 23);
            this->label98->TabIndex = 0;
            // 
            // label99
            // 
            this->label99->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label99->Location = System::Drawing::Point(0, 0);
            this->label99->Name = L"label99";
            this->label99->Size = System::Drawing::Size(100, 23);
            this->label99->TabIndex = 0;
            // 
            // payement_panel
            // 
            this->payement_panel->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->payement_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
                static_cast<System::Int32>(static_cast<System::Byte>(122)));
            this->payement_panel->Controls->Add(this->proceed_transaction);
            this->payement_panel->Controls->Add(this->button1);
            this->payement_panel->Controls->Add(this->pictureBox31);
            this->payement_panel->Controls->Add(this->pictureBox20);
            this->payement_panel->Controls->Add(this->label87);
            this->payement_panel->Controls->Add(this->label84);
            this->payement_panel->Controls->Add(this->label86);
            this->payement_panel->Controls->Add(this->label85);
            this->payement_panel->Controls->Add(this->label83);
            this->payement_panel->Controls->Add(this->label88);
            this->payement_panel->Controls->Add(this->label81);
            this->payement_panel->Controls->Add(this->label82);
            this->payement_panel->Controls->Add(this->ammount_to_add);
            this->payement_panel->Controls->Add(this->card_holder);
            this->payement_panel->Controls->Add(this->expiryBox);
            this->payement_panel->Controls->Add(this->cvv);
            this->payement_panel->Controls->Add(this->card_number);
            this->payement_panel->Location = System::Drawing::Point(265, 9);
            this->payement_panel->Name = L"payement_panel";
            this->payement_panel->Size = System::Drawing::Size(399, 526);
            this->payement_panel->TabIndex = 9;
            this->payement_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &UserForm::panel7_Paint);
            // 
            // proceed_transaction
            // 
            this->proceed_transaction->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->proceed_transaction->BackColor = System::Drawing::Color::CadetBlue;
            this->proceed_transaction->Cursor = System::Windows::Forms::Cursors::Hand;
            this->proceed_transaction->FlatAppearance->BorderSize = 0;
            this->proceed_transaction->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->proceed_transaction->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
            this->proceed_transaction->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->proceed_transaction->Location = System::Drawing::Point(228, 468);
            this->proceed_transaction->Name = L"proceed_transaction";
            this->proceed_transaction->Size = System::Drawing::Size(143, 44);
            this->proceed_transaction->TabIndex = 12;
            this->proceed_transaction->Text = L"PROCEED";
            this->proceed_transaction->UseVisualStyleBackColor = false;
            this->proceed_transaction->Click += gcnew System::EventHandler(this, &UserForm::button2_Click_1);
            // 
            // button1
            // 
            this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button1->BackColor = System::Drawing::Color::CadetBlue;
            this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button1->FlatAppearance->BorderSize = 0;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
            this->button1->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->button1->Location = System::Drawing::Point(15, 468);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(143, 44);
            this->button1->TabIndex = 11;
            this->button1->Text = L"CANCEL";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &UserForm::button1_Click_1);
            // 
            // pictureBox31
            // 
            this->pictureBox31->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.Image")));
            this->pictureBox31->Location = System::Drawing::Point(82, 131);
            this->pictureBox31->Name = L"pictureBox31";
            this->pictureBox31->Size = System::Drawing::Size(53, 37);
            this->pictureBox31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox31->TabIndex = 10;
            this->pictureBox31->TabStop = false;
            // 
            // pictureBox20
            // 
            this->pictureBox20->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.Image")));
            this->pictureBox20->Location = System::Drawing::Point(25, 131);
            this->pictureBox20->Name = L"pictureBox20";
            this->pictureBox20->Size = System::Drawing::Size(61, 37);
            this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox20->TabIndex = 10;
            this->pictureBox20->TabStop = false;
            // 
            // label87
            // 
            this->label87->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label87->AutoSize = true;
            this->label87->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label87->ForeColor = System::Drawing::Color::White;
            this->label87->Location = System::Drawing::Point(118, 389);
            this->label87->Name = L"label87";
            this->label87->Size = System::Drawing::Size(144, 20);
            this->label87->TabIndex = 2;
            this->label87->Text = L"Amount to Add :";
            // 
            // label84
            // 
            this->label84->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label84->AutoSize = true;
            this->label84->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label84->ForeColor = System::Drawing::Color::White;
            this->label84->Location = System::Drawing::Point(26, 168);
            this->label84->Name = L"label84";
            this->label84->Size = System::Drawing::Size(123, 20);
            this->label84->TabIndex = 2;
            this->label84->Text = L"Card Holder :";
            // 
            // label86
            // 
            this->label86->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label86->AutoSize = true;
            this->label86->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label86->ForeColor = System::Drawing::Color::White;
            this->label86->Location = System::Drawing::Point(225, 317);
            this->label86->Name = L"label86";
            this->label86->Size = System::Drawing::Size(58, 20);
            this->label86->TabIndex = 2;
            this->label86->Text = L"CVV :";
            // 
            // label85
            // 
            this->label85->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label85->AutoSize = true;
            this->label85->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label85->ForeColor = System::Drawing::Color::White;
            this->label85->Location = System::Drawing::Point(26, 317);
            this->label85->Name = L"label85";
            this->label85->Size = System::Drawing::Size(110, 20);
            this->label85->TabIndex = 2;
            this->label85->Text = L"Expires on :";
            // 
            // label83
            // 
            this->label83->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label83->AutoSize = true;
            this->label83->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label83->ForeColor = System::Drawing::Color::White;
            this->label83->Location = System::Drawing::Point(26, 237);
            this->label83->Name = L"label83";
            this->label83->Size = System::Drawing::Size(132, 20);
            this->label83->TabIndex = 2;
            this->label83->Text = L"Card Number :";
            // 
            // label88
            // 
            this->label88->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label88->AutoSize = true;
            this->label88->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label88->ForeColor = System::Drawing::Color::White;
            this->label88->Location = System::Drawing::Point(26, 111);
            this->label88->Name = L"label88";
            this->label88->Size = System::Drawing::Size(202, 20);
            this->label88->TabIndex = 2;
            this->label88->Text = L"Your payment method :";
            // 
            // label81
            // 
            this->label81->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label81->AutoSize = true;
            this->label81->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label81->ForeColor = System::Drawing::Color::White;
            this->label81->Location = System::Drawing::Point(26, 34);
            this->label81->Name = L"label81";
            this->label81->Size = System::Drawing::Size(196, 20);
            this->label81->TabIndex = 2;
            this->label81->Text = L"Your Current Balance:";
            // 
            // label82
            // 
            this->label82->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label82->AutoSize = true;
            this->label82->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label82->ForeColor = System::Drawing::Color::PaleGreen;
            this->label82->Location = System::Drawing::Point(130, 55);
            this->label82->Name = L"label82";
            this->label82->Size = System::Drawing::Size(153, 48);
            this->label82->TabIndex = 1;
            this->label82->Text = L"10,000";
            // 
            // ammount_to_add
            // 
            this->ammount_to_add->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->ammount_to_add->Location = System::Drawing::Point(136, 419);
            this->ammount_to_add->Name = L"ammount_to_add";
            this->ammount_to_add->Size = System::Drawing::Size(126, 24);
            this->ammount_to_add->TabIndex = 9;
            // 
            // card_holder
            // 
            this->card_holder->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->card_holder->Location = System::Drawing::Point(45, 201);
            this->card_holder->Name = L"card_holder";
            this->card_holder->Size = System::Drawing::Size(264, 24);
            this->card_holder->TabIndex = 9;
            this->card_holder->TextChanged += gcnew System::EventHandler(this, &UserForm::textBox3_TextChanged);
            // 
            // expiryBox
            // 
            this->expiryBox->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->expiryBox->Location = System::Drawing::Point(45, 343);
            this->expiryBox->Name = L"expiryBox";
            this->expiryBox->Size = System::Drawing::Size(74, 24);
            this->expiryBox->TabIndex = 9;
            // 
            // cvv
            // 
            this->cvv->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->cvv->Location = System::Drawing::Point(249, 343);
            this->cvv->Name = L"cvv";
            this->cvv->Size = System::Drawing::Size(74, 24);
            this->cvv->TabIndex = 9;
            // 
            // card_number
            // 
            this->card_number->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->card_number->Location = System::Drawing::Point(45, 270);
            this->card_number->Name = L"card_number";
            this->card_number->Size = System::Drawing::Size(264, 24);
            this->card_number->TabIndex = 9;
            this->card_number->TextChanged += gcnew System::EventHandler(this, &UserForm::textBox2_TextChanged);
            // 
            // UserForm
            // 
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->ClientSize = System::Drawing::Size(988, 713);
            this->Controls->Add(this->Navigationbar_panel);
            this->Controls->Add(this->Home_panel);
            this->Controls->Add(this->Profile_panel);
            this->Controls->Add(this->Welcome_panel);
            this->Controls->Add(this->Comparison_panel);
            this->Controls->Add(this->Browse_panel);
            this->Controls->Add(this->payement_panel);
            this->Name = L"UserForm";
            this->Text = L"User Form";
            this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &UserForm::UserForm_FormClosed);
            this->Load += gcnew System::EventHandler(this, &UserForm::UserForm_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->Welcome_panel->ResumeLayout(false);
            this->Welcome_panel->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            this->Profile_panel->ResumeLayout(false);
            this->Profile_panel->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
            this->change_password_panel->ResumeLayout(false);
            this->change_password_panel->PerformLayout();
            this->EditFieldPanel->ResumeLayout(false);
            this->EditFieldPanel->PerformLayout();
            this->Navigationbar_panel->ResumeLayout(false);
            this->Navigationbar_panel->PerformLayout();
            this->New_Property->ResumeLayout(false);
            this->New_Property->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBedrooms))->EndInit();
            this->Home_panel->ResumeLayout(false);
            this->Home_panel->PerformLayout();
            this->panel4->ResumeLayout(false);
            this->panel4->PerformLayout();
            this->panel3->ResumeLayout(false);
            this->panel3->PerformLayout();
            this->Browse_panel->ResumeLayout(false);
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
            this->Comparison_panel->ResumeLayout(false);
            this->payement_panel->ResumeLayout(false);
            this->payement_panel->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion
    private: System::Void UserForm_Load(System::Object^ sender, System::EventArgs^ e) {

        Welcome_panel->Visible = true;

        // Hide all other panels
        Home_panel->Visible = false;
        Browse_panel->Visible = false;
        Comparison_panel->Visible = false;
        Profile_panel->Visible = false;
        // Set the intro_paragraph TextBox selection to 0, effectively removing the selection
        intro_paragraph->SelectionStart = 0;
        intro_paragraph->SelectionLength = 0;
        
        intro_paragraph->ReadOnly = true;
        intro_paragraph->TabStop = false;
        change_password_panel->Visible = false;

        // credit card ammmar don't touch 
        payement_panel->Visible = false;
        expiryBox->Text = "MM/YY";
        expiryBox->Tag = "MM/YY"; // Store the placeholder text
        expiryBox->ForeColor = System::Drawing::Color::Gray;

        expiryBox->Enter += gcnew System::EventHandler(this, &UserForm::Placeholder_Enter);
        expiryBox->Leave += gcnew System::EventHandler(this, &UserForm::Placeholder_Leave);

        EditFieldPanel->Visible = false;
    }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

    if (Global::currUser.getFrozen()) {
        MessageBox::Show("Your account is frozen. You can't add property.", "Account Frozen", MessageBoxButtons::OK, MessageBoxIcon::Warning);
    }
    else New_Property->Visible = true; 

}
    private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

        System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show(
            "Do you want to save changes?",
            "Confirmation",
            System::Windows::Forms::MessageBoxButtons::OKCancel,
            System::Windows::Forms::MessageBoxIcon::Question
        );

        if (result == System::Windows::Forms::DialogResult::OK) {

            std::string Type = msclr::interop::marshal_as<std::string>(TypeCompo->Text);
            std::string Location = msclr::interop::marshal_as<std::string>(txtLocation->Text);
            std::string Des = msclr::interop::marshal_as<std::string>(txtDescription->Text);


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
                Bedrooms = Convert::ToInt32(numBedrooms->Text); // Convert to integer
            }
            catch (FormatException^ ex) {
                MessageBox::Show("Invalid bedrooms format.");
                return; // Exit early if bedrooms format is invalid
            }

            Global::currUser.addProperty(Type, Location, Price, Bedrooms, Area , Des);
            Property& p = Global::properties.back();

            System::String^ idStr = p.getId().ToString();
            System::String^ typeStr = gcnew System::String(p.getType().c_str());
            System::String^ priceStr = "$ " + p.getPrice().ToString("N0");
            System::String^ statusStr = gcnew System::String("Pending"); // Since availability = 0

            Panel^ panel = CreatePropertyPanel(idStr, typeStr, priceStr, statusStr);
            flowLayoutPanel1->Controls->Add(panel); // <== THIS is the key to show it immediately

            flowLayoutPanel1->ScrollControlIntoView(panel);

            System::Windows::Forms::MessageBox::Show("Property is added successfully");
            New_Property->Visible = false;
            this->ResetControlsInPanel(this->New_Property);
        }
        else {
            ResetControlsInPanel(New_Property);
            New_Property->Visible = false; 
        }
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

       // Function to handle panel visibility and button color change
       void ChangePanelAndButtonColor(Control^ clickedControl, Panel^ targetPanel, Button^ btnHome, Button^ btnBrowse, Button^ btnComparison)
       {
           // Hide all panels
           Home_panel->Visible = false;
           Browse_panel->Visible = false;
           Comparison_panel->Visible = false;
           Profile_panel->Visible = false;
           Welcome_panel->Visible = false; // Hide the Welcome panel as well

           // Show the selected panel
           targetPanel->Visible = true;

           // Reset the color of all buttons
           btnHome->BackColor = System::Drawing::Color::Transparent;
           btnBrowse->BackColor = System::Drawing::Color::Transparent;
           btnComparison->BackColor = System::Drawing::Color::Transparent;

           // Set the clicked button color
           if (clickedControl == btnHome)
           {
               btnHome->BackColor = System::Drawing::Color::FromArgb(159, 201, 191);
           }
           else if (clickedControl == btnBrowse)
           {
               btnBrowse->BackColor = System::Drawing::Color::FromArgb(159, 201, 191);
           }
           else if (clickedControl == btnComparison)
           {
               btnComparison->BackColor = System::Drawing::Color::FromArgb(159, 201, 191);
           }
       }

       // Button and Label click event handlers
private: System::Void Home_Click(System::Object^ sender, System::EventArgs^ e)
{
    ChangePanelAndButtonColor(Home, Home_panel, Home, Browse, Comparison);
}

private: System::Void Browse_Click(System::Object^ sender, System::EventArgs^ e)
{
    ChangePanelAndButtonColor(Browse, Browse_panel, Home, Browse, Comparison);
}

private: System::Void Comparison_Click(System::Object^ sender, System::EventArgs^ e)
{
    ChangePanelAndButtonColor(Comparison, Comparison_panel, Home, Browse, Comparison);
}
private: System::Void Profile_Click_1(System::Object^ sender, System::EventArgs^ e) {
    ChangePanelAndButtonColor(Profile, Profile_panel, Home, Browse, Comparison);

}
 private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
     ChangePanelAndButtonColor(Profile, Profile_panel, Home, Browse, Comparison);

   }
private: System::Void Welcome_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show(
        "Do you want to delete this property?",
        "Confirmation",
        System::Windows::Forms::MessageBoxButtons::OKCancel,
        System::Windows::Forms::MessageBoxIcon::Question
    );

    if (result == System::Windows::Forms::DialogResult::OK) {
        System::Windows::Forms::MessageBox::Show("property is deleted ");
        New_Property->Visible = false;
    }

}
    private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
        System::Windows::Forms::DialogResult result = MessageBox::Show(
            "Are you sure you want to logout?",
            "Confirm Logout",
            MessageBoxButtons::YesNo,
            MessageBoxIcon::Warning
        );

        if (result == System::Windows::Forms::DialogResult::Yes) {
            Global::inComp = 0;
            for (auto& p : Global::properties) {
                if (p.getInComparison()) {
                    p.setInComparison(0);
                }
            }
            this->Hide();
            parent->Show();
        }
    }
    private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

        New_Property->Visible = false;
        txtArea->Clear();
        txtPrice->Clear();
        txtLocation->Clear();
        txtDescription->Clear();
        numBedrooms->Text = "0";
        TypeCompo->Text = "";
    }
private: System::Void Home_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void Profile_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel7_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

       // enter leave function 
 private: System::Void Placeholder_Enter(System::Object^ sender, System::EventArgs^ e) {
     TextBox^ tb = dynamic_cast<TextBox^>(sender);
     if (tb != nullptr && tb->ForeColor == System::Drawing::Color::Gray) {
         tb->Text = "";
         tb->ForeColor = System::Drawing::Color::Black;
     }
 }

private: System::Void Placeholder_Leave(System::Object^ sender, System::EventArgs^ e) {
    TextBox^ tb = dynamic_cast<TextBox^>(sender);
    if (tb != nullptr && String::IsNullOrWhiteSpace(tb->Text)) {
        tb->Text = tb->Tag->ToString(); // Use Tag to store the placeholder
        tb->ForeColor = System::Drawing::Color::Gray;
    }
}
        //end of enter leave function 

private: System::Void Balance_Click(System::Object^ sender, System::EventArgs^ e) {
    expiryBox->Text = "MM/YY";
    expiryBox->Tag = "MM/YY"; // Store the placeholder text
    expiryBox->ForeColor = System::Drawing::Color::Gray;

    payement_panel->BringToFront();
    payement_panel->Visible = true;
}

private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
    expiryBox->Text = "MM/YY";
    expiryBox->Tag = "MM/YY"; // Store the placeholder text
    expiryBox->ForeColor = System::Drawing::Color::Gray;

    payement_panel->BringToFront();
    payement_panel->Visible = true;
}


private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
    ResetControlsInPanel(payement_panel);
    payement_panel->Visible = false;
}

       /////////////////payement///////////////////////
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
    String^ cardholder = card_holder->Text; // Cardholder: no special validation required
    String^ cardNumberStr = card_number->Text;
    String^ expiry = expiryBox->Text; // format: mm/yy
    String^ cvvStr = cvv->Text;
    String^ amountStr = ammount_to_add->Text;

    // Validate Card Number: must be exactly 16 digits.
    std::string cardNumber = marshal_as<std::string>(cardNumberStr);
    if (cardNumber.length() != 16) {
        MessageBox::Show("Invalid Card Number.", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        return;
    }
    for (char c : cardNumber) {
        if (!isdigit(c)) {
            MessageBox::Show("Card number must contain only digits.", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Warning);
            return;
        }
    }

    // Validate Expiry: expecting format "mm/yy"
    /*if (expiry->Length != 5 || expiry[2] != '/') {
        MessageBox::Show("Expiry must be in the format mm/yy.", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        return;
    }*/

    String^ monthPart = expiry->Substring(0, 2);
    String^ yearPart = expiry->Substring(3, 2);

    int month;
    if (!Int32::TryParse(monthPart, month) || month < 1 || month > 12) {
        MessageBox::Show("Invalid expiry month. It should be between 01 and 12.", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        return;
    }

    int year;
    if (!Int32::TryParse(yearPart, year)) {
        MessageBox::Show("Invalid expiry year.", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        return;
    }

    // Check if expiry is after 05/25
    if (year < 25 || (year == 25 && month <= 5)) {
        MessageBox::Show("The card is expired. Expiry must be later than 05/25.", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        return;
    }

    // Validate CVV: must be exactly 3 digits.
    std::string cvv = marshal_as<std::string>(cvvStr);
    if (cvv.length() != 3) {
        MessageBox::Show("CVV must be exactly 3 digits.", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        return;
    }
    for (char c : cvv) {
        if (!isdigit(c)) {
            MessageBox::Show("CVV must contain only digits.", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Warning);
            return;
        }
    }

    // Validate Amount
    double amount;
    if (!Double::TryParse(amountStr, amount)) {
        MessageBox::Show("Please enter a valid amount.", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        return;
    }
    if (amount <= 0) {
        MessageBox::Show("Amount must be greater than zero.", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        return;
    }

    // Update Balance
    Global::currUser.addBalance(static_cast<int>(amount));
    Global::users[Global::currUser.getId()].addBalance(static_cast<int>(amount));

    // Display Balance
    int balance = Global::currUser.getBalance();
    std::stringstream ss;
    ss.imbue(std::locale("en_US.UTF-8"));
    ss << balance;
    String^ currBalance = gcnew System::String(ss.str().c_str());
    Balance->Text = currBalance + " $";
    label82->Text = currBalance + " $";
    user_balance->Text = currBalance + " $";

    // Notify User
    MessageBox::Show("Transaction successful! Balance updated.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

    // Reset UI
    ResetControlsInPanel(payement_panel);
    payement_panel->Visible = false;
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}///////////////////////////////////////////////////////////////////////////////////////////////////////
       private: void ShowEditFieldPanel(String^ fieldName, String^ currentValue) {
           currentField = fieldName;  // track the current field being edited
           editLabel->Text = "Edit " + fieldName + ":";  // set label text
           editBox->Text = currentValue;  // set the textbox with the current value
           editBox->Focus();  // optional: focus on the textbox
           EditFieldPanel->Visible = true;  // make the Edit Field Panel visible
       }

private: System::Void pictureBox18_Click_1(System::Object^ sender, System::EventArgs^ e) {
    EditFieldPanel->Visible = true;
    ShowEditFieldPanel("Name", marshal_as<String^>(Global::currUser.getName()));
}
private: System::Void pictureBox19_Click_1(System::Object^ sender, System::EventArgs^ e) {
    EditFieldPanel->Visible = true;
    ShowEditFieldPanel("Email", marshal_as<String^>(Global::currUser.getEmail()));

}
private: System::Void pictureBox30_Click_1(System::Object^ sender, System::EventArgs^ e) {
    EditFieldPanel->Visible = true;
    ShowEditFieldPanel("Phone", marshal_as<String^>(Global::currUser.getPhoneNumber()));
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
    ResetControlsInPanel(EditFieldPanel);
    EditFieldPanel->Visible = false;

}
private: System::Void pictureBox32_Click(System::Object^ sender, System::EventArgs^ e) {
    payement_panel->BringToFront(); 
    payement_panel->Visible = true;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
    ResetControlsInPanel(change_password_panel); 
    change_password_panel->Visible = false; 
}
private: System::Void pictureBox33_Click(System::Object^ sender, System::EventArgs^ e) {
    change_password_panel->Visible = true;
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
    ChangePanelAndButtonColor(Browse, Browse_panel, Home, Browse, Comparison);
}
private: System::Void panel6_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
       // Save button click event to save the edited values
private: System::Void saveButton_Click_1(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void start_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    ChangePanelAndButtonColor(Browse, Browse_panel, Home, Browse, Comparison);
}
private: System::Void Buy_click(System::Object^ sender, System::EventArgs^ e);

private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
    this->panel3->Visible = 0;
}
private: System::Void pictureBox10_Click(System::Object^ sender, System::EventArgs^ e);
    
private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
    this->ResetControlsInPanel(this->panel1);
    Form1_Load(sender, e);
}
private: System::Void label53_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label54_Click(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void label58_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label57_Click(System::Object^ sender, System::EventArgs^ e) {
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

    // Clear fields (optional)label49
    old_pass->Text = "";
    new_pass->Text = "";
    change_password_panel->Visible = false;
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
    Global::inComp = 0;
    for (auto& p : Global::properties) {
        if (p.getInComparison()) {
            p.setInComparison(0);
        }
    }
    this->Form1_Load(sender , e);
}
private: System::Void button2_Click_2(System::Object^ sender, System::EventArgs^ e) {
    this->panel4->Visible = 0;
}
};
}