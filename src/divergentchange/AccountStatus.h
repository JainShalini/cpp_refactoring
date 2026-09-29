#pragma once
#include <string>

class AccountStatus {
    public:
        std::string determine(int daysSinceLastLogin) const;
};