#include <iostream>
#include <iomanip>
#include "receipt.hpp"


using namespace std;

int main() {
    double p1; 
    double p2; 
    double p3; 
    double tip_amount;

    cout << "Receipt Calculator\n\n";

    cout << "Enter price for item 1: ";
    cin >> p1;
    
    cout << "Enter price for item 2: ";
    cin >> p2;
    
    cout << "Enter price for item 3: ";
    cin >> p3;
    
    cout << "Enter tip percentage: ";
    cin >> tip_amount;

    double sub = calculateSubtotal(p1, p2, p3);
    double myTax = calculateTax(sub);
    double myTip = calculateTip(sub, tip_amount);
    double total_price = calculateTotal(sub, myTax, myTip);

    
    cout << fixed;
    cout << setprecision(2);
    
    cout << endl; 
    cout << "Subtotal: $" << sub << endl;
    cout << "Tax: $" << myTax << endl;
    cout << "Tip: $" << myTip << endl;
    cout << "Total: $" << total_price << "\n";

    return 0; 
}