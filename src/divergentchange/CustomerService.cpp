#include "divergentchange/CustomerService.h"
namespace refactoring::divergentchange {

bool CustomerService::isValidEmail(const char* email) const {

    return emailValidator.isValidEmail(email);

}

std::string CustomerService::formatDisplayName(const std::string& firstName, const std::string& lastName) const {
    return displayName.format(firstName, lastName);
}

int CustomerService::calculateLoyaltyPoints(int numberOfPurchases) const {
    return loyaltyPoints.calculate(numberOfPurchases);
}

std::string CustomerService::determineAccountStatus(int daysSinceLastLogin) const {
    return accountStatus.determine(daysSinceLastLogin);
}

}
