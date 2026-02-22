#include<iostream>
#include "user.h"
#include "Property.h"
#include "Global.h"
#include "Authentication.h"
#include <map>
#include <vector>
using namespace std;
void ini() {

	Global::users.push_back(user(1, 1, 0, "Ammar", "ammar@gmail.com", "12021", "01213", 0));
	Global::users.push_back(user(2, 0, 0, "Ali", "Ali@gmail.com", "12021", "01213", 0));
	Global::users.push_back(user(3, 0, 0, "Mostafa", "Mostafa@gmail.com", "12021", "01213", 0));
	Global::users.push_back(user(4, 0, 0, "Mahmoud", "Moahmoud@gmail.com", "12021", "01213", 0));

}

int main() {

	ini();





	/*for (auto p : Global::properties) {
		cout << p.to_string() << endl;
		cout << "--------------------------------------\n";
	}*/

	/*for (auto u : Global::users) {
		cout << u.to_string() << endl;
		cout << "------------------------------------\n";
	}*/

	return 0;
}