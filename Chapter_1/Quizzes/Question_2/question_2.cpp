/*
    Author:  Justin Nguyen
    Created: 5/27/2016
*/

/*
    Modify the program you wrote in exercise #1 
    so that readNumber and writeAnswer() 
    live in a separate file called "io.cpp". 
    Use a forward declaration to access them from main().
*/

#include <iostream>
#include "Question_2.h"

int main() {
    int a = readNumber();
    int b = readNumber();

    int sum = a + b;
    writeAnswer(sum);

    return 0;
}

