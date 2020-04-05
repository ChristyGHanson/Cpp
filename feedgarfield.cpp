// g++ -Wall -Wextra feedgarfield.cpp -o feedgarfield.exe

#include <iostream>
#include <cmath> //provides functions for math. sqrt and pow can be used with this 
#include <string> //even if you don't need #include <string> there is little cost. 
using namespace std;

int main () {
    cout << "A Petco cashier needs to make change for Jon Arbuckle who is buying cat food for Garfield. How much did he pay for it in cents?\n";
    cout << "\n";
    cout << "Jon's payment in cents: "; //Write a 'label' for answer input without \n newline.
    //Use if-statement to print out 'cent' and 'cents.'

    int cents_paid;
    cin >> cents_paid;
    cout << "\n";
    cout << "Jon paid " << cents_paid << " cents.\n";
    cout << "\n";

    cout << "What was the total price of Garfield's cat food?\n";
    int total_price;
    cin >> total_price;
    cout << "\n";
    
    cout << "The total price of the cat food was " << total_price << " cents.\n";
    int change_owed = cents_paid - total_price; //Mathematical expression.
    cout << "Petco owes Jon Arbuckle " << change_owed << " cents.\n"; //No newline = print error
    cout << "\n";
    int quarter_value = 25; //quarters value
    int quarters_owed = change_owed / quarter_value; //'quarters owed to Jon' formula
    cout << "Quarters owed: " << quarters_owed << "\n"; // check answer.
    change_owed = change_owed % quarter_value; // reassignment of change_owed

    int dime_value = 10; // dimes value
    int dimes_owed = change_owed / dime_value; // 'dimes owed to Jon' formula
    cout << "Dimes owed: " << dimes_owed << "\n"; //check answer.
    change_owed = change_owed % dime_value; //reassignment on change_owed

    int nickel_value = 5;
    int nickels_owed = change_owed / nickel_value;
    cout << "Nickels owed: " << nickels_owed << "\n";
    change_owed = change_owed % nickel_value;

    int penny_value = 1;
    int pennies_owed = change_owed / penny_value;
    cout << "Pennies owed: " << pennies_owed << "\n";
    cout << "\n";
}



