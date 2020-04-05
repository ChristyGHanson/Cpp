// g++ -Wall -Wextra stl_challenge_3.cpp -o stl_challenge_3.exe

//Stephan T. Lavavej challenge: Ask user to type in a number. Use the addition operator to calculate eight times that number.
// Print result.
// Do not use the multiplication operator. 

#include <iostream> 
#include <cmath>
using namespace std;  // std::cin: object, 

int main () {
    cout << "Input any number and I will multiply it by 8 using only addition operators.\n";
    int user_number;
    cin >> user_number; 
    int doubled = user_number+user_number;
    int quadrupled = doubled+doubled;
    int octupled = quadrupled+quadrupled; // 3 addition operators were used. 
    cout << "Voila!\n" << octupled; //Did NOT use multiplication operator. YAY! 

    // STL: Extend powers. Practice code. It's confusing if you try new things. Brain hurting yet? If so, you are learning. 

    // "Double" is a keyword, so using it would have returned an error. "Doubled" is fine. 

}



