#pragma once
#include "user.h"
class admin : public user 
{
private:
	
public:
	admin();
	void setAvailability(int proId, int Availability);
};