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

std::string getCard(const Card card) {
	int card_rank = card.card_rank;
	std::string card_str_val = "";

	switch (card_rank) {
		case CardRank::TWO:    card_str_val += "2"; break;
        case CardRank::THREE:    card_str_val += "3"; break;
        case CardRank::FOUR:    card_str_val += "4"; break;
        case CardRank::FIVE:    card_str_val += "5"; break;
        case CardRank::SIX:    card_str_val += "6"; break;
        case CardRank::SEVEN:    card_str_val += "7"; break;
        case CardRank::EIGHT:    card_str_val += "8"; break;
        case CardRank::NINE:    card_str_val += "9"; break;
        case CardRank::TEN:    card_str_val += "T"; break;
        case CardRank::JACK:    card_str_val += "J"; break;
        case CardRank::QUEEN:    card_str_val += "Q"; break;
        case CardRank::KING:    card_str_val += "K"; break;
        case CardRank::ACE:    card_str_val += "A"; break;
		default: std::cout << "\nInvalid Choice\n";
	}

	int card_suit = card.card_suit;
	switch (card_suit) {
		case CardSuit::CLUBS: card_str_val += "C"; break;
		case CardSuit::DIAMONDS: card_str_val += "D"; break;
		case CardSuit::HEARTS: card_str_val += "H"; break;
		case CardSuit::SPADES: card_str_val += "S"; break;
		default: std::cout << "\nInvalid Choice\n";
		break;
	}

	return card_str_val;
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

bool isValidChoice(std::string& players_choice) {
	if (! (players_choice == "Hit" || players_choice == "hit" ||
		   players_choice == "H" || players_choice == "h")) {
				return false;
	}

	return true;
}

void playBlackjack(std::array<Card,52>& card_deck) {
	using namespace std;

	/* start the game */
	cout << "\nWelcome. Let's play Blackjack.\n"
			  << "-----------------------------------\n";

	/* initial cards */
	string my_cards = "";
	string dealers_cards = "";
	my_cards += getCard(card_deck[0]) + " " + getCard(card_deck[1]);


	do {
		/* get player's choice */
		cout << "Your cards: " << my_cards << "\n";
		cout << "Hit or Stand (H or S)? ";
		string players_choice;
		cin >> players_choice;
	} while (isValidChoice(players_choice) && sum <= 21);

	

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



