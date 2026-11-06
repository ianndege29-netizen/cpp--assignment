#include <iostream>
#include <string>

using namespace std;

int main() {
    const string correctUsername = "admin";
    const string correctPassword = "12345";
    string username;
    string password;

    do {
        cout << "Enter username: ";
        if (!(cin >> username)) return 1;
        cout << "Enter password: ";
        if (!(cin >> password)) return 1;

        if (username == correctUsername && password == correctPassword) {
            cout << "Access Granted\n";
        } else {
            cout << "Incorrect credentials, try again\n";
        }
    } 
    while (username != correctUsername || password != correctPassword);

    return 0;
}
