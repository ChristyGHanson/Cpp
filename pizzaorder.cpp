#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main () {
    cout << "Welcome to Stroustrop's Starving Dev, Redmond branch. We serve the noodly triad: cheese, pepperoni, and supreme. How can we help you? Please input digits for each type of pizza.\n";
    int cheese;
    int pepperoni;
    int supreme;
    cout << "How many cheese pizzas do you want?\n";
    cin >> cheese;
    cout << "How many pepperoni pizzas do you want?\n";
    cin >> pepperoni;
    cout << "How many supreme pizzas do you want?\n";
    cin >> supreme;
    double cheese_price = 12; //No $ signs right now. 
    double pep_price = 15;
    double sup_price = 19;
    double subtotal;
    subtotal = (cheese * cheese_price) + (pepperoni * pep_price) + (supreme * sup_price);
    cout << "Subtotal: " << subtotal << "\n";
    double state_tax = .10;
    double grand_total;
    grand_total = (subtotal * state_tax) + subtotal;
    cout << "Grand total: " << grand_total << "\n";
    double tip_before_tax = .20;
    tip_before_tax = (subtotal * tip_before_tax);
    cout << "20% suggested tip before tax: " << tip_before_tax << "\n";
    double tip_after_tax = .20;
    tip_after_tax = (grand_total * tip_after_tax);
    cout << "20% suggested tip after tax: " << tip_after_tax << "\n";
}