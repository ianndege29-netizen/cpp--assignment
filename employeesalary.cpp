#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string employeeName;
    double hoursWorked, hourlyRate;

    cout << "Enter employee name: ";
    getline(cin, employeeName);
    cout << "Enter hours worked: ";
    if (!(cin >> hoursWorked) || hoursWorked < 0) {
        cerr << "Invalid hours. Enter a non-negative number.\n";
        return 1;
    }
    cout << "Enter hourly rate: ";
    if (!(cin >> hourlyRate) || hourlyRate < 0) {
        cerr << "Invalid rate. Enter a non-negative number.\n";
        return 1;
    }

    cout << fixed << setprecision(2)
         << "Employee: " << employeeName << '\n'
         << "Gross salary: " << hoursWorked * hourlyRate << '\n';
    return 0;
}
