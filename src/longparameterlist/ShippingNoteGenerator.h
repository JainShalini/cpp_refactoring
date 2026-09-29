#pragma once

#include <string>
#include "Customer.h"

namespace refactoring::longparameterlist {

class ShippingNoteGenerator {
public:
    std::string generateShippingNote(
            const Customer& customer,
            const std::string& customerFirstName,
            const std::string& customerLastName,

            const std::string& addressLine1,
            const char* addressLine2,
            const std::string& city,
            const std::string& postcode,
            const std::string& country,

            const std::string& orderId,
            const std::string& itemDescription,
            int quantity) const;
};

} // namespace refactoring::longparameterlist
