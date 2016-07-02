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

int getCardVal(Card& card) {
	switch (card.card_rank) {
		case CardRank::TWO : return 2;
		case CardRank::THREE: return 3;
		case CardRank::FOUR: return 4;
		case CardRank::FIVE: return 5;
		case CardRank::SIX: return 6;
		case CardRank::SEVEN: return 7;
		case CardRank::EIGHT: return 8;
		case CardRank::NINE: return 9;
		case CardRank::TEN: 
		case CardRank::JACK: 
		case CardRank::QUEEN:
		case CardRank::KING: return 10;
		case CardRank::ACE: return 11;
		default: return -100;
	}
}

enum class PlayerChoice {
	HIT,
	STAND,
	INVALID
};

PlayerChoice getValidChoice(std::string& player_choice) {
	while (1) {
		/* get the player's choice */
		std::cout << "Hit or Stand (H or S)? ";
		std::cin >> player_choice;

		/* test the player's choice */
		if (player_choice == "Hit" || player_choice == "hit" ||
			player_choice == "H" || player_choice == "h") {
				return PlayerChoice::HIT;
		} else if (player_choice == "Stand" || player_choice == "stand" ||
				   player_choice == "S" || player_choice == "s") {
				return PlayerChoice::STAND;
		} else {
				std::cout << "Invalid choice. Try again.\n";
		}
	}
}

void playBlackjack(std::array<Card,52>& card_deck) {
	using namespace std;

	/* start the game */
	cout << "\nWelcome. Let's play Blackjack.\n"
			  << "-----------------------------------\n";

	/* initial cards for player and dealer */
	string player_cards = "";
	string dealer_cards = "";
	int player_sum = 0;
	int dealer_sum = 0;

	dealer_cards += getCard(card_deck[0]);
	player_cards += getCard(card_deck[1]) + " " + getCard(card_deck[2]);

	dealer_sum += getCardVal(card_deck[0]);
	player_sum += getCardVal(card_deck[1]) + getCardVal(card_deck[2]);

	/* debugging */
	cout << dealer_sum << "\n";
	cout << player_sum << "\n";

	int top_card = 3; // game always starts with 3 cards dealt to dealer and player, zero-indexed
	string player_choice;

	std::cout << "Dealer's cards: " << dealer_cards << "\n";
	std::cout << "Your cards: " << player_cards << "\n";
	while (getValidChoice(player_choice) == PlayerChoice::HIT) {
		/* add to the player's list of cards */
		player_sum += getCardVal(card_deck[top_card]);
		player_cards += " " + getCard(card_deck[top_card]);
		std::cout << "Your cards: " << player_cards << "\n";
		std::cout << "Your sum: " << player_sum << "\n";

		top_card += 1;
		if (player_sum > 21) { break; }
	}

		/* get player's choice */

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
		int rando = rand() % 52;
		swapCards(card_deck[card_i], card_deck[rando]);
	}

	/* print out the deck */
	/*for (const auto& card : card_deck) {
		printCard(card);
	}*/

	/* play Blackjack */
	playBlackjack(card_deck);
}

