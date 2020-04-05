// g++ -Wall -Wextra usernameinput.cpp -o usernameinput.exe

#include <iostream> // See chapter 3.3 page 65 for the Try This task.
using namespace std;

int main () {
    cout << "Please enter your first name, middle name, surname, and age. (Separate each with a single space, pls.)\n";
    string first;
    string middle;
    string surname;
    double age;
    cin >> first >> middle >> surname >> age;
    age = age * 12;
    cout << "Hello, " << first << " " << middle << " " << surname << " (age " << age << ")\n";
}