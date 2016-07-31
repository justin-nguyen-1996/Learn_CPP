/*
 * Author:  Justin Nguyen
 * Created: 7/29/2016
 */
 
#ifndef DECK_H
#define DECK_H

#include <array>
#include "Card.h"

class Deck {
    private:
        std::array<Card, 52> m_deck;
        int m_top_card_i = 0;
        const int TOTAL_NUM_CARDS = 52;
    
    public:
        Deck() {
            int card_i = 0;
            for (int suit_i = 0; suit_i < Card::CardSuit::MAX_CARD_SUITS; ++suit_i) {
                for (int rank_i = 0; rank_i < Card::CardValue::MAX_CARD_VALUES; ++rank_i) {
                    Card::CardSuit suit 
                        = static_cast<Card::CardSuit>(suit_i);
                    Card::CardValue rank
                        = static_cast<Card::CardValue>(rank_i);
                    m_deck[card_i] = Card(suit, rank);
                }
            }
        }
        
        void printDeck() const;
        void shuffleDeck() const;
        Card& dealCard();
        
        static int getRandomNumber(int min, int max);
        static void swapCard();
};

#endif
