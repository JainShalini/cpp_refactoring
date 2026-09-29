#include "featureenvy/PriceCalculator.h"

namespace refactoring::featureenvy {

double PriceCalculator::calculateFinalPrice(const Product& product) const {
    return product.priceAfterDiscount();
}



} // namespace refactoring::featureenvy
