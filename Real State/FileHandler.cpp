#include "FileHandler.h"
#include <sstream> 
#include <iostream>
#include <fstream>

void FileHandler::Save()
{
    // Open user and property files for saving data
    std::ofstream userFile("Users.txt");
    std::ofstream propertyFile("Properties.txt");
    std::ofstream companyFile("CompanyBalance.txt"); // File to store company balance

    if (!userFile || !propertyFile || !companyFile)
    {
        std::cout << "Error opening file(s) for saving.\n";
        return;
    }

    // Save Users data
    for (auto& u : Global::users)
    {
        userFile << u.second.getId() << ","
            << u.second.getAdmin() << ","
            << u.second.getBalance() << ","
            << u.second.getName() << ","
            << u.second.getEmail() << ","
            << u.second.getPassword() << ","
            << u.second.getPhoneNumber() << ","
            << u.second.getFrozen() << ","
            << u.second.getcompany_balance() << "\n";  // Save company balance with each user
    }

    // Save Properties data
    for (auto& p : Global::properties)
    {
        propertyFile << p.getId() << ","
            << p.getType() << ","
            << p.getLocation() << ","
            << p.getPrice() << ","
            << p.getOwnerId() << ","
            << p.getAvailability() << ","
            << p.getNumBedrooms() << ","
            << p.getArea() << ","
            << p.getHighlight() << ","
            << p.getInComparison() << ","
            << p.getOldId() << ","
            << p.getDescription() << "\n";
    }

    // Save Company Balance to a separate file
    companyFile << user::getcompany_balance() << "\n"; // Save static company balance

    // Close all files
    userFile.close();
    propertyFile.close();
    companyFile.close();
}

void FileHandler::Load()
{
    std::ifstream userFile("Users.txt");
    std::ifstream propertyFile("Properties.txt");
    std::ifstream companyFile("CompanyBalance.txt"); // Corrected filename

    if (!userFile || !propertyFile || !companyFile)
    {
        std::cout << "Error opening file(s) for loading.\n";
        return;
    }

    // Load company balance
    int company_balance = 0;
    if (companyFile)
    {
        if (!(companyFile >> company_balance))  // Check for valid integer read
        {
            std::cout << "Error reading company balance from file.\n";
            return;
        }
    }
    user::setcompany_balance(company_balance); // Set the global company balance

    // Load Users
    Global::users.clear();
    std::string line;
    while (getline(userFile, line)) // Read each line for user data
    {
        std::stringstream ss(line);
        std::string temp;

        int id, isAdmin;
        double balance;
        std::string name, email, password, phoneNumber;
        bool frozen;

        // Read user details
        getline(ss, temp, ','); id = stoi(temp); // first value: user id (int)
        getline(ss, temp, ','); isAdmin = stoi(temp); // second value: user or admin status (int)
        getline(ss, temp, ','); balance = stod(temp); // third value: user balance (double)
        getline(ss, name, ','); // fourth value: user name (string)
        getline(ss, email, ','); // fifth value: user email (string)
        getline(ss, password, ','); // sixth value: user password (string)
        getline(ss, phoneNumber, ','); // seventh value: user phone number (string)
        getline(ss, temp); frozen = stoi(temp); // eighth value: user frozen status (bool)

        // Create user object and add to Global::users map
        Global::users[id] = user(id, isAdmin, balance, name, email, password, phoneNumber, frozen);
    }

    // Load Properties
    Global::properties.clear();
    while (getline(propertyFile, line))
    {
        std::stringstream ss(line);
        std::string temp;

        int id, ownerId, availability, numBedrooms, oldId;
        std::string type, location, description;
        double price, area;
        bool isHighlighted, inComp;

        // Read each property detail
        std::getline(ss, temp, ','); id = std::stoi(temp);
        std::getline(ss, type, ',');
        std::getline(ss, location, ',');
        std::getline(ss, temp, ','); price = std::stod(temp);
        std::getline(ss, temp, ','); ownerId = std::stoi(temp);
        std::getline(ss, temp, ','); availability = std::stoi(temp);
        std::getline(ss, temp, ','); numBedrooms = std::stoi(temp);
        std::getline(ss, temp, ','); area = std::stod(temp);
        std::getline(ss, temp, ','); isHighlighted = std::stoi(temp);
        std::getline(ss, temp, ','); inComp = std::stoi(temp);
        std::getline(ss, temp, ','); oldId = std::stoi(temp);
        std::getline(ss, description);

        // Add property object to Global::properties vector
        Global::properties.emplace_back(id, type, location, price, ownerId, availability, numBedrooms, area, isHighlighted, description, inComp, oldId);
    }

    // Close the files
    userFile.close();
    propertyFile.close();
    companyFile.close();
}
