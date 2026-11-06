#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double balance, withdrawal;
    cout << "Enter account balance: ";
    if (!(cin >> balance) || balance < 0) {
        cerr << "Invalid balance. Enter a non-negative amount.\n";
        return 1;
    }
    cout << "Enter withdrawal amount: ";
    if (!(cin >> withdrawal) || withdrawal <= 0) {
        cerr << "Invalid withdrawal. Enter an amount greater than zero.\n";
        return 1;
    }
    if (withdrawal > balance) {
        cout << "Insufficient funds.\n";
        return 0;
    }
    cout << fixed << setprecision(2)
         << "Withdrawal successful. Remaining balance: "
         << balance - withdrawal << '\n';
    return 0;
}
