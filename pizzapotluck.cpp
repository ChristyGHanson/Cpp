//g++ -Wall -Wextra pizzapotluck.cpp -o pizzapotluck.exe

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main () {
    cout << "Enter the number of pizzas you want to order: \n";
    int pizza_pie; //use ints.
    cin >> pizza_pie;
    int slices_per_pie = 8;
    int total_slices = slices_per_pie * pizza_pie;
    cout << "debugging: " << total_slices << '\n';
    cout << "Enter the number of people you invited to the party: \n";
    int people;
    cin >> people;
    int potluck;
    potluck = total_slices/people;
    int modulo_pizza; 
    modulo_pizza = total_slices % people;
    cout << "Each person will get " << potluck << " slices with " << modulo_pizza << " remaining slices.\n";

  //cout << ??? << "pizza slices will be left over.\n";
  //How do I use modulo?
}