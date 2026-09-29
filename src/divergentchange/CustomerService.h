#pragma once

#include <string>
#include "EmailValidator.h"
#include "LoyaltyPoints.h"
#include "AccountStatus.h"
#include "DisplayName.h"

namespace refactoring::divergentchange {

class CustomerService {
private:
    EmailValidator emailValidator;
    LoyaltyPoints loyaltyPoints;
    AccountStatus accountStatus;
    DisplayName displayName;

public:
    bool isValidEmail(const char* email) const;
    std::string formatDisplayName(const std::string& firstName, const std::string& lastName) const;
    int calculateLoyaltyPoints(int numberOfPurchases) const;
    std::string determineAccountStatus(int daysSinceLastLogin) const;
};

} // namespace refactoring::divergentchange
