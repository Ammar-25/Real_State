#include "AdminForm.h"
#include "FileHandler.h"
#include "Global.h"
#include "Property.h"
#include "user.h"
System::Void LoginPage::AdminForm::AdminForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)
{
    this->parent->Close();
}

System::Void LoginPage::AdminForm::Users_Load(System::Object^ sender, System::EventArgs^ e) {
    flowLayoutPanel3->Controls->Clear();

    for (auto u : Global::users) {

        if (u.second.getAdmin())continue;

        String^ id = u.first.ToString();
        String^ email = gcnew System::String(u.second.getEmail().c_str());
        String^ name = gcnew System::String(u.second.getName().c_str());
        int balance = u.second.getBalance();

        Panel^ panel = this->CreateUserPanel(id, email, name, balance, u.second.getFrozen());
        flowLayoutPanel3->Controls->Add(panel);
    }
}
System::Void LoginPage::AdminForm::Form1_Load(System::Object^ sender, System::EventArgs^ e)  
{
    int pending = 0, prop = 0, sold = 0;
   flowLayoutPanel2->Controls->Clear();
   flowLayoutPanel1->Controls->Clear();
   for (auto& p : Global::properties) {
       if (p.getAvailability() == 0)++pending;
       else if (p.getAvailability() == 1)prop++;
       else if (p.getAvailability() == 2)sold++;

       if (p.getAvailability() > 1)continue;
       int id = p.getId();  
       System::String^ type = gcnew System::String(p.getType().c_str());
       System::String^ ownerName = gcnew System::String(Global::users[p.getOwnerId()].getName().c_str());
       int price = p.getPrice();
       System::String^ status;
       switch (p.getAvailability()) {
       case 0: status = "Pending"; break;
       case 1: status = "Available"; break;
       case 2: status = "Bought"; break;
       case 3: status = "Declined"; break;
       }
       if (p.getAvailability() == 0) {
           Panel^ p = this->CreatePropertyPendingPanel(id.ToString(), ownerName, type, price);
           this->flowLayoutPanel2->Controls->Add(p);
           continue;
       }
       Panel^ panel = this->CreatePropertyBrowsePanel(id.ToString(), type, ownerName, price, p.getHighlight());
       this->flowLayoutPanel1->Controls->Add(panel);       
   } 
   Users_Load(sender, e);
   this->requestNum->Text = pending.ToString();
   this->propertiesnum->Text = prop.ToString();
   this->soldnum->Text = sold.ToString();
}

System::Void LoginPage::AdminForm::DetailsButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    

    Button^ button = dynamic_cast<Button^>(sender);
    String^ propertyId = dynamic_cast<String^>(button->Tag);
    int id = Convert::ToInt32(propertyId);



    for (auto p : Global::properties) {
        if (p.getId() == id) {

            System::String^ status;
            switch (p.getAvailability()) {
            case 0: status = "Pending"; break;
            case 1: status = "Available"; break;
            case 2: status = "Bought"; break;
            case 3: status = "Declined"; break;
            }
            std::string name = Global::users[p.getOwnerId()].getName();
            this->label24->Text = status;
            this->label79->Text = gcnew System::String(name.c_str());
            this->label27->Text = id.ToString();
            this->textBox1->Text = p.getArea().ToString();
            this->textBox2->Text = gcnew System::String(p.getLocation().c_str());
            this->comboBox1->Text = gcnew System::String(p.getType().c_str());
            this->numericUpDown1->Value = p.getNumBedrooms();
            this->textBox4->Text = p.getPrice().ToString();
            this->textBox12->Text = gcnew System::String(p.getDescription().c_str());
            break;
        }
    }
    this->Details_Panel->Visible = 1;

}

System::Void LoginPage::AdminForm::DetailsButton_Click2(System::Object^ sender, System::EventArgs^ e)
{
    Button^ button = dynamic_cast<Button^>(sender);
    String^ propertyId = dynamic_cast<String^>(button->Tag);
    int id = Convert::ToInt32(propertyId);


    for (auto& p : Global::properties)
    {
        if (p.getId() == id) {
            System::String^ status;
            switch (p.getAvailability()) {
            case 0: status = "Pending"; break;
            case 1: status = "Available"; break;
            case 2: status = "Bought"; break;
            case 3: status = "Declined"; break;
            }
            std::string name = Global::users[p.getOwnerId()].getName();
            this->statuslbl->Text = status;
            this->ownerNamelbl->Text = gcnew System::String(name.c_str());
            this->idlbl->Text = id.ToString();
            this->arealbl->Text = p.getArea().ToString();
            this->locationlbl->Text = gcnew System::String(p.getLocation().c_str());
            this->typelbl->Text = gcnew System::String(p.getType().c_str());
            this->numberOFbedroomslbl->Text = p.getNumBedrooms().ToString();
            this->pricelbl->Text = "$ " + p.getPrice().ToString("N0");
            this->destxt->Text = gcnew System::String(p.getDescription().c_str());
            break;
        }
    }
    this->panel2->Visible = 1;
}

System::Void LoginPage::AdminForm::AprroveBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
    Button^ button = dynamic_cast<Button^>(sender);
    String^ propertyId = dynamic_cast<String^>(button->Tag);
    int id = Convert::ToInt32(propertyId);


    if (MessageBox::Show("Are you sure you want to Approve this property?", "Confirm", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {

        Global::users[Global::currId].setAvailability(id, 1);
        Form1_Load(sender, e);
        MessageBox::Show("Property approved.");
    }
}

System::Void LoginPage::AdminForm::Rejectbtn_Click(System::Object^ sender, System::EventArgs^ e)
{
    Button^ button = dynamic_cast<Button^>(sender);
    String^ propertyId = dynamic_cast<String^>(button->Tag);
    int id = Convert::ToInt32(propertyId);

    if (MessageBox::Show("Are you sure you want to REJECT this property?", "Confirm", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {

        Global::users[Global::currId].setAvailability(id, 3);
        Form1_Load(sender, e);
        MessageBox::Show("Property rejected.");
    }
}

System::Void LoginPage::AdminForm::User_moreDetails_Click(System::Object^ sender, System::EventArgs^ e)
{
    Button^ button = dynamic_cast<Button^>(sender);
    String^ propertyId = dynamic_cast<String^>(button->Tag);
    int id = Convert::ToInt32(propertyId);
    user u;
    
    for (auto us : Global::users) {
        if (us.first == id) {
            u = us.second;
            break;
        }
    }
    int bought = 0, inMarket = 0;

    for (auto p : Global::properties) {
        if (p.getOwnerId() == id) {
            if (p.getAvailability() == 0 || p.getAvailability() == 1)
                inMarket++;
            else if (p.getAvailability() == 2)
                bought++;
        }
    }


    this->iidlbl->Text = id.ToString();
    this->Namelbl->Text = gcnew System::String(u.getName().c_str());
    this->emaillbl->Text = gcnew System::String(u.getEmail().c_str());
    this->phonelbl->Text = gcnew System::String(u.getPhoneNumber().c_str());
    this->Balancelbl->Text = "$ " + u.getBalance().ToString("N0");
    this->boughtlbl->Text = bought.ToString();
    this->Properties_in_Marketlbl->Text = inMarket.ToString();

    this->user_details->Visible = 1;
}

System::Void LoginPage::AdminForm::Toggle_freeze_Click(System::Object^ sender, System::EventArgs^ e)
{
    PictureBox^ pic = dynamic_cast<PictureBox^>(sender);
    String^ UserId = dynamic_cast<String^>(pic->Tag);
    int id = Convert::ToInt32(UserId);
    
    bool f = Global::users[id].getFrozen(); // 0-> frozen , 1-> not frozen
    std::string name = Global::users[id].getName();
    if (f) {
        if (MessageBox::Show("Are you sure you want to UNFREEZE this user?", "Confirm", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {

            Global::users[Global::currId].Moderate(id, !f);
            Form1_Load(sender, e);
            MessageBox::Show((gcnew System::String(name.c_str())) + " is unfrozen.");
        }
    }
    else {
        if (MessageBox::Show("Are you sure you want to FREEZE this user?", "Confirm", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {

            Global::users[Global::currId].Moderate(id, !f);
            Form1_Load(sender, e);
            MessageBox::Show((gcnew System::String(name.c_str())) + " is now frozen.");
        }
    }
}


System::Void LoginPage::AdminForm::delete_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
    Button^ button = dynamic_cast<Button^>(sender);
    String^ propertyId = dynamic_cast<String^>(button->Tag);
    int id = Convert::ToInt32(propertyId);

    // Confirm deletion
    if (MessageBox::Show("Are you sure you want to delete this property?", "Confirm", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {

        // Remove from Global::properties
        Global::currUser.removeProperty(id);
        Form1_Load(sender, e);
        MessageBox::Show("Property deleted.");
    }

}

System::Void LoginPage::AdminForm::HighlightProperty(System::Object^ sender, System::EventArgs^ e)
{
    PictureBox^ picture = dynamic_cast<PictureBox^>(sender);
    String^ propertyId = dynamic_cast<String^>(picture->Tag);
    int id = Convert::ToInt32(propertyId);

    for (auto& p : Global::properties) {
        if (p.getId() == id) {
            p.setHighlight(!p.getHighlight());
        }
    }
    Form1_Load(sender, e);

}
// search
System::Void LoginPage::AdminForm::pictureBox10_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->flowLayoutPanel1->Controls->Clear();
    int nmofBedrooms = System::Convert::ToInt32(this->numBedrooms->Value);
    std::string name = msclr::interop::marshal_as<std::string>(this->textBox9->Text);
    bool isMnValid = 1, isMxValid = 1, isAreaValid = 1;
    int mnPrice, mxPrice, area;

    std::string location, type;

    if (String::IsNullOrWhiteSpace(textBox5->Text)) {
        location = "";
    }
    else location = msclr::interop::marshal_as<std::string>(this->textBox5->Text);

    if (String::IsNullOrWhiteSpace(comboBox1->Text)) {
        type = "";
    }
    else type = msclr::interop::marshal_as<std::string>(this->TypeCompo->Text);

    if (String::IsNullOrWhiteSpace(textBox6->Text)) {
        mnPrice = -1;
    }
    else isMnValid = Int32::TryParse(this->textBox6->Text, mnPrice);

    if (String::IsNullOrWhiteSpace(textBox7->Text)) {
        mxPrice = -1;
    }
    else isMxValid = Int32::TryParse(this->textBox7->Text, mxPrice);


    if (String::IsNullOrWhiteSpace(textBox8->Text)) {
        area = -1;
    }
    else isAreaValid = Int32::TryParse(this->textBox8->Text, area);

    if (!isMnValid || !isMxValid || !isAreaValid) {
        MessageBox::Show("Please enter valid numbers for Minimum Price, Maximum Price, and Area.");
        return;
    }

    std::vector <Property> s;
    s = Global::search(location, type, area, mnPrice, mxPrice, nmofBedrooms , name);
    std::cout << s.size() << '\n';
    for (auto& p : s) {
        if (p.getAvailability() != 1)continue;
        std::string typeStr = p.getType();
        int id = p.getId();
        int price = p.getPrice();

        std::string statusStr;
        switch (p.getAvailability()) {
        case 0: statusStr = "Pending"; break;
        case 1: statusStr = "Available"; break;
        case 2: statusStr = "Sold"; break;
        case 3: statusStr = "Declined"; break;
        }

        // Convert std::string and int to System::String^
        System::String^ idStr = id.ToString();
        System::String^ type = gcnew System::String(typeStr.c_str());
        System::String^ priceStr = "$ " + price.ToString("N0");
        System::String^ status = gcnew System::String(statusStr.c_str());
        System::String^ ownerName = gcnew System::String(Global::users[p.getOwnerId()].getName().c_str());


        Panel^ panel = this->CreatePropertyBrowsePanel(idStr , type , ownerName , price , p.getHighlight());
        this->flowLayoutPanel1->Controls->Add(panel);
    }
}
// search (users)
System::Void LoginPage::AdminForm::pictureBox2_Click_1(System::Object^ sender, System::EventArgs^ e)
{
    String^ flag = this->Search_combobox->Text;
    std::cout << msclr::interop::marshal_as<std::string>(flag) << '\n';
    std::string name, email;
    if (flag == "Name") {
        email = "";
        if (String::IsNullOrWhiteSpace(this->Search_textbox->Text)) {
            name = "";
        }
        else name = msclr::interop::marshal_as<std::string>(this->Search_textbox->Text);
    }
    else {
        name = "";
        if (String::IsNullOrWhiteSpace(this->Search_textbox->Text)) {
            email = "";
        }
        else email = msclr::interop::marshal_as<std::string>(this->Search_textbox->Text);
    }

    std::vector<user>s = Global::search_users(name, email);


    this->flowLayoutPanel3->Controls->Clear();
    
    
    for (auto u : s) {
        if (u.getAdmin())continue;

        String^ id = u.getId().ToString();
        String^ email = gcnew System::String(u.getEmail().c_str());
        String^ name = gcnew System::String(u.getName().c_str());
        int balance = u.getBalance();

        Panel^ panel = this->CreateUserPanel(id, email, name, balance, u.getFrozen());
        flowLayoutPanel3->Controls->Add(panel);
    }
}
