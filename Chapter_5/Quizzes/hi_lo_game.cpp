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

/*
 *     Author:  Justin Nguyen
 *         Created: 6/8/2016
 *         */

#include <iostream>
#include <cstdlib>
#include <ctime>

enum class Guess_Status {
        LOW,
        HIGH,
        CORRECT,
        VALID,
        INVALID
};

Guess_Status testBadInput() {
        if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(32767, '\n');
                return Guess_Status::INVALID;
        }

        std::cin.ignore(32767, '\n');
        return Guess_Status::VALID;
}

void runGame(Guess_Status* guess_status) {
        std::cout << "Let's play a game. I'm thinking of a number from 1-100.\n" <<
                "You have 7 tries to guess what it is.\n";

        ///// temp for debugging, remove line below
        std::cout << "Real Guess: " << REAL_GUESS << "\n";

        /* determine correct answer */
        srand(time(0));
        const int REAL_GUESS = rand();

        int guess_count = 1;
        /* game engine loop */
        while (1) {
                std::cout << "Guess #" << guess_count << ": ";
                static int guess;
                std::cin >> guess;

                /* if bad input then ask for a new one */
                if (testBadInput() == Guess_Status::INVALID) {
                        std::cout << "Bad input. Give me a number from 1-100\n";
                        continue;
                }

                /* test if the guess is low, high, or correct */
                if (guess < REAL_GUESS) {
                        std::cout << "Your guess is too low.\n";
                } else if (guess > REAL_GUESS) {
                        std::cout << "Your guess is too high.\n";
                } else {
                        *guess_status {Guess_Status::CORRECT};
                        return;
                }

                guess_count += 1;
        }
}

int main() {
        /* start the game */
        Guess_Status guess_status;
        while (1) {
                runGame(&guess_status);
                guess_status ? std::cout << "Correct! You win!\n" :
                               std::cout << "Sorry, you lose.\n";
                std::cout << "Would you like to play again (y/n)? ";
        }

        return 0;
}


