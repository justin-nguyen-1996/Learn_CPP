/*
    Author:  Justin Nguyen
    Created: 5/27/2016
*/

/*
    Write a single-file program (named main.cpp) that reads two separate integers from the user, 
    adds them together, and then outputs the answer. The program should use three functions:

    1. A function named “readNumber” should be used to get (and return) a single integer from the user.
    2. A function named “writeAnswer” should be used to output the answer. 
       This function should take a single parameter and have no return value.
    3. A main() function should be used to glue the above functions together. 
*/

int readNumber();
void writeAnswer();

public int main() {
    int a = readNumber();
    int b = readNumber();
    
    int sum = a + b;
    writeAnswer(sum);
    
    return 0;
}

int readNumber() {
    int x;
    std::cout << "Enter a number: ";
    std::cin  >> x;
    return x;
}

void writeAnswer(int ans) {
    std::cout << "Sum: " << ans << endl;
}
