#include "longmethod/Order.h"

namespace refactoring::longmethod {

double Order::calculateSubtotal() const
{
  double subtotal = 0.0;
  for (const OrderItem &item : *items_) {
    subtotal += item.getPrice() * item.getQuantity();
  }
  return subtotal;
}
Order::Order(std::optional<std::vector<OrderItem>> items, Customer customer)
    : items_(std::move(items)), customer_(customer) {}

OrderSummary Order::summarise() const {
  validate();

  double subtotal = calculateSubtotal();

  double discount = calculateDiscount(subtotal);

  // Tax calculation
  double tax = (subtotal - discount) * 0.20;

  // Total calculation
  double total = (subtotal - discount) + tax;

  return OrderSummary(subtotal, discount, tax, total);
}

double Order::calculateDiscount(double subtotal) const {
  if (customer_.isLoyal()) {
    return subtotal * 0.10;
  }
  if (subtotal > 100) {
    return subtotal * 0.05;
  }
  return 0.0;
}

void Order::validate() const {
  if (!items_.has_value()) {
    throw IllegalStateException("Items cannot be null");
  }
  if (items_->empty()) {
    throw IllegalStateException("Order must contain items");
  }
}

} // namespace refactoring::longmethod
