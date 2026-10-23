
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string customerName, phoneModel;
    int quantity;
    double pricePerPhone;

    cout << "Enter customer name: ";
    getline(cin, customerName);

    cout << "Enter phone model: ";
    getline(cin, phoneModel);

    cout << "Enter quantity bought: ";
    if (!(cin >> quantity) || quantity <= 0) {
        cerr << "Invalid quantity. Enter a whole number greater than zero.\n";
        return 1;
    }

    cout << "Enter price per phone: Ksh ";
    if (!(cin >> pricePerPhone) || pricePerPhone < 0.0) {
        cerr << "Invalid price. Enter a number that is zero or greater.\n";
        return 1;
    }

    const double totalSalesAmount = quantity * pricePerPhone;

    cout << "\n====================================\n";
    cout << " MOBILE PHONE SALES RECEIPT\n";
    cout << "====================================\n";
    cout << fixed << setprecision(2);
    cout << "Customer Name: " << customerName << '\n';
    cout << "Phone Model: " << phoneModel << '\n';
    cout << "Quantity Bought: " << quantity << '\n';
    cout << "Price Per Phone: Ksh " << pricePerPhone << '\n';
    cout << "Total Sales Amount: Ksh " << totalSalesAmount << '\n';
    cout << "====================================\n";
    cout << " Thank you for shopping!\n";
    cout << "====================================\n";

    return 0;
}
