#include "EmailValidator.h"
#include <regex>

bool EmailValidator::isValidEmail(const char* email) const 
{
    if (email == nullptr) {
        return false;
    }
    static const std::regex pattern("^[A-Za-z0-9+_.-]+@[A-Za-z0-9.-]+$");
    return std::regex_match(email, pattern);
}