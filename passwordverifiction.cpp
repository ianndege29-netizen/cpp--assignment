#include <iostream> 
#include <string>
 using namespace std;
  int main() {
     string correctUsername = "admin"; 
     string correctPassword = "12345";
      string username; 
      string password;
       do { cout << "Enter username: ";
         cin >> username; cout << "Enter password: ";
          cin >> password;
           if (username == correctUsername && password == correctPassword)
            {
               cout << "Access Granted\n"; 
              }
               else {,
                 cout << "Incorrect credentials, try again\n"; 
                }
               } 
               while (username != correctUsername || password != correctPassword);
                return 0; 
              }