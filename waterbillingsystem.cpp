#include <iostream>
 #include <string> 
 #include <iomanip> using namespace std;
  string customerName;
   double unitsConsumed; 
   double ratePerUnit = 50;
    double totalBill; 
    double discount; 
    double finalAmount;
     void getCustomerDetails() { 
      cout << "Enter customer name: ";
       getline(cin, customerName); 
       cout << "Enter units consumed: ";
        cin >> unitsConsumed; 
      } 
      double calculateBill() { 
        return unitsConsumed * ratePerUnit;
       } 
       double applyDiscount() {
         if (unitsConsumed > 100) 
         { return totalBill * 0.10; 
        } 
        else 
        { return 0; 
        } 
      } 
      void displayBill() {
         cout << fixed << setprecision(2); 
         cout << "\n========== WATER BILL ==========\n";
          cout << "Customer Name: "
           << customerName << endl; 
           cout << "Units Consumed: "
            << unitsConsumed << endl; 
           cout << "Rate Per Unit: KSh "
            << ratePerUnit << endl; 
           cout << "Total Bill Before Discount: KSh "
            << totalBill << endl; 
           cout << "Discount: KSh "
            << discount << endl; 
           cout << "Final Amount Payable: KSh "
            << finalAmount << endl; 
           cout << "================================\n"; 
      } 
      int main() { 
        getCustomerDetails(); 
        totalBill = calculateBill(); 
        discount = applyDiscount(); 
        finalAmount = totalBill - discount; 
        displayBill(); 
        return 0; 
      } 