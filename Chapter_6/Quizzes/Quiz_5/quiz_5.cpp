/*
    Author:  Justin Nguyen
    Created: 7/1/2016
*/

/* A deck of cards has 52 unique cards (13 card ranks of 4 suits). 
   Create enumerations for the card ranks (2, 3, 4, 5, 6, 7, 8, 9, 10, Jack, Queen, King, Ace).
   Create enumerations for the suits (clubs, diamonds, hearts, spades).

   Each card will be represented by a struct named Card that contains a rank and a suit.

   Create a printCard() function that takes a const Card reference as a parameter and 
   prints the card rank and value as a 2-letter code (e.g. the jack of spades would print as JS).

   Create an array (using std::array) to represent the deck of cards, and initialize it with one of each card.
   Hint: Use static_cast if you need to convert an integer into an enumerated type.

   Write a function named printDeck() that takes the deck as a const reference parameter 
   and prints the values in the deck. Use a for-each loop.

   Write a swapCard function that takes two Cards and swaps their values.

   Write a function to shuffle the deck of cards called shuffleDeck(). 
   To do this, use a for loop to step through each element of your array. 
   Pick a random number between 1 and 52 and call swapCard with the card picked at random. 
   Update your main function to shuffle the deck and print out the shuffled deck. */

#include <iostream>
#include <string>
#include "card.h"

void printCard(const Card card) {
	int card_suit = card.card_suit;
	std::string card_suit_str;
	switch (card_suit) {
		case CardSuit::CLUBS: card_suit_str = "CLUBS";
		break;
	}

	std::cout << card_suit_str << card.card_rank;
}

int main() {
	Card card {CardSuit::CLUBS, CardRank::KING};
	printCard(card);
}

