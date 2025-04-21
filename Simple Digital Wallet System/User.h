#pragma once
#include <string>
#include <vector>
#include <unordered_map>
#include "Transaction.h"
class User {
protected:
    std::string username;
    std::string password;
    double balance;
    bool isSuspended;
    std::vector<Transaction> transactions;
public:
    // constructor
    User(const std::string& username, const std::string& Password, double balance = 0.0);
    // getters
    const std::string& getUsername() const;
    double getBalance() const;
    bool getSuspendedStatus() const;

    bool checkPassword(const std::string& password) const;
    bool changePassword(const std::string& oldPassword,const std::string& newPassword);

    bool viewTransactions()const;
    bool addTransaction(const Transaction& t);
    bool sendMoney(User& recipient, double amount);
    bool requestMoney(User& sender, double amount);

};
  