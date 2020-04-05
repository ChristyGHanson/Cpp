// g++ -Wall -Wextra coincounter.cpp -o coincounter.exe

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main () {
    cout << "Enter the number of pennies, nickels, dimes, quarters, half dollars, and one-dollar coins you have in that order.\n";
    int total_cents; 
    int pennies;
    cout << "How many pennies do you have?\n";
    cin >> pennies;
    total_cents = pennies;
    int nickels;
    cout << "How many nickels do you have?\n";
    cin >> nickels;
    total_cents = total_cents + (nickels * 5);
    cout << "How many dimes do you have?\n";
    int dimes;
    cin >> dimes;
    total_cents = total_cents + (dimes * 10);
    cout << "How many quarters do you have?\n";
    int quarters;
    cin >> quarters;
    total_cents = total_cents + (quarters * 25);
    cout << "How many half dollars do you have?\n";
    int half_dollars;
    cin >> half_dollars;
    total_cents = total_cents + (half_dollars * 50);
    cout << "How many one-dollar coins do you have?\n";
    int one_dollar_coins;
    cin >> one_dollar_coins;
    total_cents = total_cents + (one_dollar_coins * 100);
    cout << "Let's see what you have altogether:\n";
    cout << "You have " << pennies << " pennies.\n";
    cout << "You have " << nickels << " nickels.\n";
    cout << "You have " << dimes << " dimes.\n";
    cout << "You have " << quarters << " quarters.\n";
    cout << "You have " << half_dollars << " half dollars.\n";
    cout << "You have " << one_dollar_coins << " one-dollar coins.\n";
    cout << "The value of all of your coins is " << total_cents << " cents.\n";
}
//Don't forget to put semi-colons after your lines.
//Look before and after a compiler error. The compiler sometimes isn't clear on which line mistakes are found in.