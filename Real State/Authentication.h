#pragma once
#include <string>
class Authentication
{
public:
	static int SignIn(std::string email , std::string pass); // 0->accepted , 1->wrong pass , 2->email not found
	static int SignUp(std::string name , std::string email , std::string pass , std::string phone); // 0 -> accepted , 1 -> pass < 8 , 2 -> email exists
};