#include "Authentication.h"
#include "Global.h"
#include <vector>
#include <algorithm>
int Authentication::SignIn(std::string email, std::string pass)
{
    for (auto& u : Global::users) {
        if (u.second.getEmail() == email) {
            if (u.second.getPassword() == pass) {
                Global::currUser = u.second;
                Global::currId = u.first;
                return 0;
            }
            return 1;
        }
    }
    return 2;
}

int Authentication::SignUp(std::string name, std::string email, std::string pass, std::string phone)
{
    if (pass.length() < 8) {
        return 1;
    }
    bool ok = true;
    int id = 0;
    for (auto u : Global::users) {
        id = std::max(id, u.second.getId());
        if (u.second.getEmail() == email) {
            ok = false;
        }
    }
    if (!ok) return 2;
   
    Global::users[id+1] = user(id + 1, 0, 0, name, email, pass, phone, 0);
    Global::currUser = Global::users[id + 1];
    return 0;
}