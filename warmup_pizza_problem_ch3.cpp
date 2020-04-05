// g++ -Wall -Wextra warmup_pizza_problem_ch3.cpp -o warmup_pizza_problem_ch3.exe

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main () {
    cout << "It takes 3 lbs of dough and 5 lbs of cheese to make an enormous pizza.\n";
    int dough_input;
    cout << "How many pounds of dough do you have?\n";
    cin >> dough_input;
    cout << "You have " << dough_input << " lbs of dough.\n";
    int dough_required = 3;
    int hypothetical_dough_pizzas = dough_input / dough_required; //figure out how to use this later.
    cout << hypothetical_dough_pizzas << " dough-only pizzas are possible with this amount of dough.\n";

    int cheese_input;
    cout << "How many pounds of cheese do you have?\n";
    cin >> cheese_input;
    cout << "You have " << cheese_input << " lbs of cheese.\n";
    int cheese_required = 5;
    int hypothetical_cheese_pizzas = cheese_input / cheese_required; //imagined result.
    cout << hypothetical_cheese_pizzas << " cheese-only pizzas are possible with this amount of cheese.\n";

    if (hypothetical_cheese_pizzas < hypothetical_dough_pizzas) {
        // If we go here, this means lots of dough, but cheese limited.
        // I need to choose the ingredient I have less of.
        // Final answer: hypothetical_cheese_pizzas
        cout << "Cheese limited!\n";
        cout << "Final Pizzas: " << hypothetical_cheese_pizzas << "\n";
    } else { 
        // If we go here, this means dough limited.
        // Again, choose ingredient I have less of.
        // Final answer: hypothetical_dough_pizzas
        cout << "Dough limited!\n";
        cout << "Final Pizzas: " << hypothetical_dough_pizzas << "\n";
    }

    //need an if statement.
    //am i going to run out of cheese first or run out of dough first?
    //This question leads us to the if statement. 


}