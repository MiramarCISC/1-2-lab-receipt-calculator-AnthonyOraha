#include "receipt.hpp"

double calculateSubtotal(double item1, double item2, double item3) {
    return item1 + item2 + item3; // AnthonyOraha: Uses less lines of code and decreases number of variables
}

double calculateTax(double subtotal) {
    return subtotal*TAX_RATE; // AnthonyOraha: Uses less lines of code and decreases number of variables
}

double calculateTip(double subtotal, double tipPercent) {
    // gotta divide by 100 to get the decimal
    return subtotal * (tipPercent/100.0); // AnthonyOraha: Uses less lines of code and decreases number of variables
}

double calculateTotal(double subtotal, double tax, double tip) {
    return subtotal + tax + tip; // AnthonyOraha: Uses less lines of code and decreases number of variables
}