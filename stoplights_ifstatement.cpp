// g+ -Wall -Wextra stoplights_ifstatement.cpp -o stoplights_ifstatement.exe
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    cout << "You see a stoplight ahead. It flashes one of three colors: red, yellow, and green.\n";
    cout << "What color does the stoplight flash now?\n";
    string stoplight;
    cin >> stoplight;
    if (stoplight == "red"){
        cout <<"Stop.\n";
    } else if (stoplight == "yellow"){
        cout << "Slow down.\n";
    } else if (stoplight == "green"){
        cout << "Keep going.\n";
    } else{
        cout << "There are only three colors available: red, yellow, and green. Try again.\n";
    }
}