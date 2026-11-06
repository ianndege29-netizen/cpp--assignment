#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string employeeName;
    double salary, bonusRate;

    cout << "Enter employee name: ";
    getline(cin, employeeName);
    cout << "Enter monthly salary: ";
    if (!(cin >> salary) || salary < 0) {
        cerr << "Invalid salary. Enter a non-negative number.\n";
        return 1;
    }
    cout << "Enter bonus percentage: ";
    if (!(cin >> bonusRate) || bonusRate < 0) {
        cerr << "Invalid bonus percentage. Enter a non-negative number.\n";
        return 1;
    }

    const double bonus = salary * bonusRate / 100.0;
    cout << fixed << setprecision(2)
         << "Employee: " << employeeName << '\n'
         << "Bonus: " << bonus << '\n'
         << "Total pay: " << salary + bonus << '\n';
    return 0;
}
