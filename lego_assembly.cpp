// g++ -Wall -Wextra lego_assembly.cpp -o lego_assembly.exe
// Thanks, STL. :3

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main () {
    cout << "The Lego Store stocks several components for minifigs: heads, bodies, legs, and accessories.\n";
    cout << "How many of each is in stock? Type in your input below for each item.\n";
    cout << "\n";
    int lego_heads;
    cout << "Heads:\n";
    cin >> lego_heads;
    cout << "\n";

    int lego_torsos;
    cout << "Torsos:\n";
    cin >> lego_torsos;
    cout << "\n";

    int lego_legs;
    cout << "Legs:\n";
    cin >> lego_legs;
    cout << "\n";

    int lego_accessories;
    cout << "Accessories:\n";
    cin >> lego_accessories;
    cout << "\n";

    cout << lego_heads << " Lego heads are in stock.\n";
    cout << lego_torsos << " Lego torsos are in stock.\n";
    cout << lego_legs << " Lego legs are in stock.\n";
    cout << lego_accessories << " Lego accessories are in stock.\n";
    cout << "\n";
    cout << "How many Lego figures can you assemble based on your previous input?\n";
    //if statements, assignments and less than.
    //use the smallest value to determine the total possible # of lego men.
    //4 components. Solve for 2 components like heads and torsos. Try handling more after this.
    int smallest_num;
    if (lego_heads < lego_torsos) { 
        smallest_num = lego_heads;
    } else { //look at ifs and else-if that have happened already. else will grab anything that hasn't activated one of the ifs above.
        smallest_num = lego_torsos;
    } 
    if (lego_legs < smallest_num) { //naming conventions are important. lego_body was confusing.
        smallest_num = lego_legs;
    } 
    if (lego_accessories < smallest_num) {
        smallest_num = lego_accessories;
    }
    cout << "You can assemble " << smallest_num << " Lego minifigures.\n";

}
