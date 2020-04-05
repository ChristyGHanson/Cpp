//g++ -Wall -Wextra converttemp.cpp -o converttemp.exe

#include <iostream>
#include <cmath>
using namespace std;
//reads a floating pt number from user
//takes that number and converts it from degrees fahrenheit to degrees celsius
//(98.6°F − 32) × 5/9 = 37°C
//be able to work with any temperature the user inputs. 

int main () {

    cout << "Give me a temp in Fahrenheit and I'll convert it for ya. Oooo, magic.\n"; //string prompt for user input
    double fahrenheit; // defining a value for this variable. "double" is the type.
    cin >> fahrenheit; //user input
    double celsius;
    celsius = (fahrenheit - 32) * 5/9; //formula for conversion written using C++ operators.
    cout << "It is " << celsius << " degrees Celsius. Voila!\n";
}



