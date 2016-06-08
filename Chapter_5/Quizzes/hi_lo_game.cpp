/*
    Author:  Justin Nguyen
    Created: 6/8/2016
*/

/*
    Implement a game of hi-lo. First, pick a random integer between 1 and 100. 
    The user is given 7 tries to guess the number (2 ^ 7 > 100). 
    The program should tell them whether they guessed too high or too low. 
    If the user guesses the right number, the program should tell them they won. 
    If they run out of guesses, the program should tell them they lost, and what the correct number is. 
    At the end of the game, the user should be asked if they want to play again. 
    If the user doesn’t enter ‘y’ or ‘n’, ask them again.

    Sample Output:
    
    Let's play a game.  I'm thinking of a number.  You have 7 tries to guess what it is.
    Guess #1: 64
    Your guess is too high.
    Guess #2: 32
    Your guess is too low.
    Guess #3: 54
    Your guess is too high.
    Guess #4: 51
    Correct! You win!
    Would you like to play again (y/n)? y
    .........
    Sorry, you lose.  The correct number was 49.
*/

#include <iostream>
#include <cstdlib>

enum class Guess_Status {
    LOW,
    HIGH,
    CORRECT
};

int main() {
    std::cout << "Let's play a game. I'm thinking of a number from 1-100." <<
        "You have 7 tries to guess what it is.\n";

    int guess_count = 1;
    while (1) {
        std::cout << "Guess #" << guess_count << ": ";
        static int guess;
        std::cin >> guess;
        testBadInput();
        testGuess(guess);
        guess_count += 1;
    }
}

