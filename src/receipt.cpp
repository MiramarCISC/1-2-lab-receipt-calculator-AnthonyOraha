#include "receipt.hpp"

double calculateSubtotal(double item1, double item2, double item3) {
    // just add them all up
    double temp_sub = item1 + item2 + item3;
    return temp_sub; 
}

double calculateTax(double subtotal) {
    double the_tax;
    // TAX_RATE comes from the hpp file
    the_tax = subtotal * TAX_RATE;
    return the_tax;
}

double calculateTip(double subtotal, double tipPercent) {
    // gotta divide by 100 to get the decimal
    double decimalTip = tipPercent / 100.0;
    return subtotal * decimalTip; 
}

double calculateTotal(double subtotal, double tax, double tip) {
    double final_amount = 0.0;
    final_amount = subtotal + tax + tip;
    
    return final_amount;
}