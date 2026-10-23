#include <iostream>
#include <string>

using namespace std;

int main()
{
    string applicantName;
    double marks;

    cout << "Enter applicant name: ";
    getline(cin, applicantName);

    cout << "Enter admission test marks (0 to 100): ";
    if (!(cin >> marks) || marks < 0 || marks > 100)
    {
        cout << "Invalid marks. Enter a number from 0 to 100.\n";
        return 1;
    }

    cout << "\nADMISSION RESULT\n";
    cout << "Applicant: ";
    cout << applicantName;
    cout << '\n';

    cout << "Marks: ";
    cout << marks;
    cout << '\n';

    if (marks >= 50)
    {
        cout << "Status: QUALIFIED FOR ADMISSION\n";
    }
    else
    {
        cout << "Status: NOT QUALIFIED\n";
    }

    return 0;
}
