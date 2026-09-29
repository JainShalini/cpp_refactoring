#pragma once

namespace refactoring::featureenvy {

class Product {
public:
    Product(double price, bool onSale);
    double priceAfterDiscount() const;

private:
    double price_;
    bool onSale_;
};

} // namespace refactoring::featureenvy
