#include "divergentchange/CustomerService.h"

#include <algorithm>
#include <cctype>
namespace refactoring::divergentchange {


namespace {

std::string trim(const std::string& s) {
    auto start = s.find_first_not_of(" \t\n\r\f\v");
    if (start == std::string::npos) {
        return "";
    }
    auto end = s.find_last_not_of(" \t\n\r\f\v");
    return s.substr(start, end - start + 1);
}

std::string toUpper(const std::string& s) {
    std::string result = s;
    std::transform(result.begin(), result.end(), result.begin(),
            [](unsigned char c) { return static_cast<char>(std::toupper(c)); });
    return result;
}

} // namespace


bool CustomerService::isValidEmail(const char* email) const {

    return emailValidator.isValidEmail(email);

}

std::string CustomerService::formatDisplayName(const std::string& firstName, const std::string& lastName) const {
    return trim(firstName) + " " + toUpper(trim(lastName));
}

int CustomerService::calculateLoyaltyPoints(int numberOfPurchases) const {
    return loyaltyPoints.calculate(numberOfPurchases);
}

std::string CustomerService::determineAccountStatus(int daysSinceLastLogin) const {
    return accountStatus.determine(daysSinceLastLogin);
}

} // namespace refactoring::divergentchange
