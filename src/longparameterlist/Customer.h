#pragma once
#include <string>

class Customer{
    public:
        std::string firstName;
        std::string lastName;
        Customer(std::string firstName, std::string lastName) {
            this->firstName = firstName;
            this->lastName = lastName;
        };
};