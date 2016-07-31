/*
 * Author:  Justin Nguyen
 * Created: 7/29/2016
 */
 
#include <iostream>
#include "Deck.h"
#include "Card.h"
 
int main() {
    srand(static_cast<unsigned int>(time(0))); // set initial seed value to system clock
	
//     const Card queen_hearts 
//         (Card::CardSuit::HEARTS, Card::CardValue::QUEEN);
//     queen_hearts.printCard();
//     const Card two_spades 
//         (Card::CardSuit::SPADES, Card::CardValue::TWO);
//     two_spades.printCard();
//     const Card two_spades2
//         (Card::CardValue::TWO, Card::CardSuit::SPADES);
//     two_spades2.printCard();
    
    Deck deck;
    deck.shuffleDeck();
    deck.printDeck();
    
//     std::cout << "First card is: ";
//     deck.dealCard().printCard();
//     std::cout << "\n";
//     
//     std::cout << "Second card is: ";
//     deck.dealCard().printCard();
//     std::cout << "\n";
}

