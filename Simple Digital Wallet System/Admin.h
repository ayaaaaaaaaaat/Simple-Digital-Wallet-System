#pragma once
#include "User.h"
#include <vector>
#include <string>
#include <unordered_map>
class Admin : public User {
public:
    // constructors
    Admin(const std::string& username, const std::string& password);

    void viewAllUsers(const std::unordered_map<std::string, User>& users) const;
    void viewAllTransactions(const std::vector<Transaction>& transactions) const;

    bool deleteUser(std::unordered_map<std::string, User>& users, const std::string& username);
    bool addUser(std::unordered_map<std::string, User>& users, const std::string& uname, const std::string& pass);
    bool suspendUser(User& user);
    bool editPassword(User& user, const std::string& newPassword);
    bool adjustUserBalance(User& user, double newBalance);

};
   
    
   