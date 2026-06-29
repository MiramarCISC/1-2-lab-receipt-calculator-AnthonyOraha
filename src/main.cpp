#include <iostream>
#include <iomanip>
#include "receipt.hpp"
// #include <string> // might need later

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

    // do all the math here using our functions
    double sub = calculateSubtotal(p1, p2, p3);
    double myTax = calculateTax(sub);
    double myTip = calculateTip(sub, tip_amount);
    double total_price = calculateTotal(sub, myTax, myTip);

    // format it so it looks like real money (2 decimals)
    cout << fixed;
    cout << setprecision(2);
    
    cout << endl; // extra space
    cout << "Subtotal: $" << sub << endl;
    cout << "Tax: $" << myTax << endl;
    cout << "Tip: $" << myTip << endl;
    cout << "Total: $" << total_price << "\n";

    return 0; // program finished
}