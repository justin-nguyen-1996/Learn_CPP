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
#include <array>
#include <time.h>
#include "card.h"

void printCard(const Card card) {
	int card_rank = card.card_rank;
	switch (card_rank) {
		case CardRank::TWO:    std::cout << "2"; break;
        case CardRank::THREE:    std::cout << "3"; break;
        case CardRank::FOUR:    std::cout << "4"; break;
        case CardRank::FIVE:    std::cout << "5"; break;
        case CardRank::SIX:    std::cout << "6"; break;
        case CardRank::SEVEN:    std::cout << "7"; break;
        case CardRank::EIGHT:    std::cout << "8"; break;
        case CardRank::NINE:    std::cout << "9"; break;
        case CardRank::TEN:    std::cout << "T"; break;
        case CardRank::JACK:    std::cout << "J"; break;
        case CardRank::QUEEN:    std::cout << "Q"; break;
        case CardRank::KING:    std::cout << "K"; break;
        case CardRank::ACE:    std::cout << "A"; break;
		default: std::cout << "\nInvalid Choice\n";
	}

	int card_suit = card.card_suit;
	switch (card_suit) {
		case CardSuit::CLUBS: std::cout << "C"; break;
		case CardSuit::DIAMONDS: std::cout << "D"; break;
		case CardSuit::HEARTS: std::cout << "H"; break;
		case CardSuit::SPADES: std::cout << "S"; break;
		default: std::cout << "\nInvalid Choice\n";
		break;
	}

	std::cout << "\n";
}

void swapCards(Card& a, Card& b) {
	Card temp = a;
	a = b;
	b = temp;
}

/*enum class ErrorType {
	SUCCESS,
	FAILURE
};

ErrorType isBadInput() {
	using namespace std;

	if (cin.fail()) {
		cin.clear();
		cin.ignore(32767, '\n');
		cout << 
	}

	cin.ignore(32767, '\n');
}*/

void playBlackjack(std::array<Card,52>& card_deck) {
	/* start the game */
	std::cout << "\nWelcome. Let's play Blackjack.\n"
			  << "-----------------------------------\n";
	int top_card = 0;
	std::string my_cards = "";
	std::string dealers_cards = "";

	std::cout << "Your cards: " << my_cards << "\n";
}

int main() {
	/* make the deck */
	std::array<Card, 52> card_deck;
	int card = 0;
	for (int suit = 0; suit < 4; suit += 1) {
		for (int rank = 0; rank < 13; rank += 1) {
			card_deck[card] = {CardRank(rank), CardSuit(suit)};
			card += 1;
		}
	}

	/* shuffle the deck */ 
	srand(time(NULL));
	for (int card_i = 0; card_i < 52; card_i += 1) {
		int rando = (rand() % 52) + 1;
		swapCards(card_deck[card_i], card_deck[rando]);
	}

	/* print out the deck */
	/*for (const auto& card : card_deck) {
		printCard(card);
	}*/

	/* play Blackjack */
	playBlackjack(card_deck);
}



