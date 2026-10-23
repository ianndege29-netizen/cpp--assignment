
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string studentName;
    double theoryMarks, practicalMarks;

    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter theory test marks: ";
    if (!(cin >> theoryMarks)) {
        cerr << "Invalid theory marks. Please enter a number.\n";
        return 1;
    }

    cout << "Enter practical test marks: ";
    if (!(cin >> practicalMarks)) {
        cerr << "Invalid practical marks. Please enter a number.\n";
        return 1;
    }

    const double averageScore = (theoryMarks + practicalMarks) / 2.0;

    cout << "\n====================================\n";
    cout << "       DRIVING TEST RESULTS\n";
    cout << "====================================\n";
    cout << fixed << setprecision(2);
    cout << "Student Name: " << studentName << '\n';
    cout << "Theory Marks: " << theoryMarks << '\n';
    cout << "Practical Marks: " << practicalMarks << '\n';
    cout << "Average Score: " << averageScore << '\n';
    cout << "Result: " << (averageScore >= 50.0 ? "PASSED" : "FAILED") << '\n';
    cout << "====================================\n";

    return 0;
}
