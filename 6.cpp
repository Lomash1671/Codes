#include <iostream>
using namespace std;
int main() {
    double amount;
    int choice;
    const double INR_TO_GBP = 0.010;  // Example conversion rate
    const double GBP_TO_INR = 100.0;  // Example conversion rate
    cout << "Currency Converter\n";
    cout << "1. Convert INR to GBP\n";
    cout << "2. Convert GBP to INR\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;
    if (choice == 1) {
        cout << "Enter amount in INR: ";
        cin >> amount;
        double convertedAmount = amount * INR_TO_GBP;
        cout << amount << " INR is equal to " << convertedAmount << " GBP" << endl;
    } else if (choice == 2) {
        cout << "Enter amount in GBP: ";
        cin >> amount;
        double convertedAmount = amount * GBP_TO_INR;
        cout << amount << " GBP is equal to " << convertedAmount << " INR" << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}