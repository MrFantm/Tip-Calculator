#include<iostream>
#include<iomanip>

using namespace std;

int GetInput() {
   int input;
   //Output tip menu & get response
   cout << "\nPlease choose a tip amount\n";
   cout << "0 - the service was nonexistent (no tip)\n";
   cout << "1 - they tried but not good service (you tip 10%)\n";
   cout << "2 - the service was normal (you tip 15%)\n";
   cout << "3 - the service was very good (you tip 20%)\n";
   cout << "4 - the service was exceptional (you tip 25%)\n";
   cout << "5 - best service you've received (you tip 35%)\n";
   cin >> input;
   
   return input;
}


void Initiate(float bill) {
   float tip, tipTotal, totalAfterTip;
   int input;
   float service[6] = {0, 0.10, 0.15, 0.20, 0.25, 0.35};
   
   //Set Precision of decimal output
   cout << fixed << setprecision(2);
   
   
      
   input = GetInput();
   
   
   //Assign tip value based on user input as long as it is a nummber between 0 and 5 
   if(input <= 5 && input >= 0) {
      tip = service[input];
      
      //Calculate Tip Total
      tipTotal = bill * tip;
      totalAfterTip = bill + tipTotal;
   
   
      //Output
      cout << "\nSub-Total --->    $" << bill << endl;
      cout << "Tip Amount --->   $" << tipTotal << endl;
      cout << "*************************" << endl;
      cout << "Total Amount ---> $" << totalAfterTip << endl << endl;

   }
   else {
      cout << "Invalid input. Please enter a number between 0 and 5." << endl;
      Initiate(bill);
   }  
}

int main() {
   float bill;
   
   //Get User input
   cout << "Please Enter the Bill Amount\n$";
   cin >> bill;

   Initiate(bill);
   return 0;
}