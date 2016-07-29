/*
 * Author:  Justin Nguyen
 * Created: 7/29/2016
 */
 
#include <iostream>
#include "Deck.h"
#include "Card.h"
 
int main() {
	srand(static_cast<unsigned int>(time(0))); // set initial seed value to system clock
	
    const Card queen_hearts (CardSuit::HEARTS, CardValue::QUEEN);
    queen_hearts.printCard();
    
    const Card two_spades (CardValue::TWO, CardSuit::SPADES);
    two_spades.printCard();
    
    Deck deck;
    deck.printDeck();
    
    deck.shuffleDeck
    deck.printDeck();
}

