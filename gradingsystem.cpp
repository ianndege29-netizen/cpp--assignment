#include <iostream>

using namespace std;

int main() {
    double marks;

    cout << "Enter marks (0-100): ";
    if (!(cin >> marks) || marks < 0 || marks > 100) {
        cerr << "Invalid marks. Enter a number from 0 to 100.\n";
        return 1;
    }

    char grade;
    if (marks >= 80) {
        grade = 'A';
    } else if (marks >= 70) {
        grade = 'B';
    } else if (marks >= 60) {
        grade = 'C';
    } else if (marks >= 50) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    cout << "Grade: " << grade << '\n';
    return 0;
}
