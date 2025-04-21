#pragma once
#include <string>
#include <ctime>
#include <iomanip>
class Transaction {
private:
    std::string sender;
    std::string recipient;
    double amount;
    std::time_t time;
public:
    // constructors
    Transaction(const std::string& sender, const std::string& recipient, double amount);
};