/*
 * Author:  Justin Nguyen
 * Created: 7/29/2016
 */
 
#ifndef DECK_H
#define DECK_H

#include <array>

class Deck {
    private:
        std::array<Card, 52> m_deck;
        int top_card_i = 0;
        const int TOTAL_NUM_CARDS = 52;
    
    public:
        Deck() {
            for (int suit_i = 0; suit_i < CardSuit::MAX_CARD_SUITS; ++suit_i) {
                for (int rank_i = 0; rank_i < CardValue::MAX_CARD_VALUES; ++rank_i) {
                    CardSuit suit = CardSuit[suit_i];
                    CardValue value = CardValue[rank_i];
                    m_deck[suit_i][rank_i] = Card(suit, rank);
                }
            }
        }
        
        void printDeck() const;
        void shuffleDeck() const;
        Card& dealCard();
        
        static int getRandomNumber(int min, int max) const;
        static void swapCard() const;
};

#endif
