/*
    Author:  Justin Nguyen
    Created: 6/2/2016
*/

/* 
    Ask the user to enter their full name and their age. 
    Output how many (age / #_of_letters_in_their_name).
    For simplicity, count spaces as a letter.

    Sample output:
    Enter your full name: John Doe
    Enter your age: 46
    You've lived 5.75 years for each letter in your name.
*/

#include <iostream>
#include <string>

int main() {
    using namespace std;

    cout << "Enter your full name: ";
    string name;
    getline(cin, name);

    cout << "Enter your age: ";
    int age;
    cin >> age;
    cin.ignore(32767, '\n');

    cout << "You've lived " << age / static_cast<double>(name.length()) <<
        " for each letter in your name." << '\n';

    return 0;
}
