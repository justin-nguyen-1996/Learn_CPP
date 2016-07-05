/*
    Author:  Justin Nguyen
    Created: 7/5/2016
*/

#include <iostream>

int fibonacci(int x) {
    if (x <= 2) { return 2; }
    
    int two_ago = 1;
    int one_ago = 1;
    int cur;
    for (int counter = 2; counter < x; counter += 1) {
        cur = one_ago + two ago;
        two_ago = one_ago;
        one_ago = cur;
    }
    
    return cur;
}

int main() {

}

