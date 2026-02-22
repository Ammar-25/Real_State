#pragma once
#include <vector>
#include <list>
#include <string>
#include <queue>
#include <map>
#include <vector>
#include "Property.h"
#include "user.h"

class Global
{
public:
    // Global attributes
    static int currId; // Stores the ID of the currently signed-in user
    static user currUser;
    static int inComp;

    static std::map<int, user> users;
    static std::list<Property> properties;
    // Global functions
    static std::string toLowerCase(const std::string& s); // for searching
	static bool isContain(std::string a, std::string b);


   static std::vector<Property>search(std::string location, std::string type , int area , int mnPrice , int mxPrice , int nmOfbedrooms , std::string ownerName = "");
   static std::vector<user>search_users(std::string name, std::string email);
};
