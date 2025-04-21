#pragma once
#include "User.h"
#include "Admin.h"
#include "Authentication.h"
#include <vector>
#include <unordered_map>
#include <string>

class System {
private:

    std::unordered_map<std::string, User> users;
    Admin admin;
    User* currentUser = nullptr;

public:
    // constructor
    System();
    
    bool loginUser(const std::string& username, const std::string& password);
    bool registerUser(const std::string& username, const std::string& password);
    void logout();
    static bool verifyPassword(const std::string& input,const std::string& password);
};
