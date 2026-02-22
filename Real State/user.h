#pragma once
#include <string>
#include "Property.h"


class user
{
private:
    int id;
    bool isAdmin; // 0 -> user , 1 -> admin
    int balance;
    std::string name;
    std::string email;
    std::string password;
    std::string phoneNumber;
    bool frozen; // 1 -> frozen , 0 -> unfrozen
    static int company_balance; 
public:
    user();
    user(int id, bool isAdmin, int balance, std::string name, std::string email, std::string password, std::string phonenumber, bool frozen );
    
    
    // getters 
    int getId();
    bool getAdmin();
    bool getFrozen();
    int getBalance();
    static int getcompany_balance();
    std::string getName();
    std::string getEmail();
    std::string getPassword();
    std::string getPhoneNumber();
    std::string to_string();

    // setters
    void setFrozen(bool freeze);
    void setName(std::string name);
    void setPhoneNumber(int phone);
    void setEmail(std::string email);
    void setPassword(std::string password);
    static void setcompany_balance(int balance);
    // Property functions
    void addProperty(std::string type, std::string location, int price, int bedrooms, double area , std::string description = "");
    bool removeProperty(int propertyID);
    void editProperty(int proId, Property pro);
    void addBalance(int balance);
    int buyProperty(int proId); // 0-> bought successfully , 1-> user is forzen , 2-> insufficient balance
    void setAvailability(int proId , int Availability); // for Admin
    void Moderate(int id, bool freezeFlag); // for Admin
    void highLight_property(int proId, bool h); // for Admin
   


    int add_admin(std::string name, std::string email, std::string pass, std::string phone); // 0->added succesfully, 1 -> pass < 8 , 2 -> email exists , 3-> not admin

};