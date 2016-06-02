/*
    Author:  Justin Nguyen
    Created: 6/2/2016
*/

/* 
    Ask the user to enter their full name and their age. 
    Output how many years they’ve lived for each letter in their name.
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
    getLine(cin, name);
    
    cout << "Enter your age: ";
    int age;
    cin >> age;
    cin.ignore(32767, "\n");
    
    cout << "You've lived " << 
}
