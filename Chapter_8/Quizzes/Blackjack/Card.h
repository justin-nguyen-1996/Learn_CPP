/*
 * Author:  Justin Nguyen
 * Created: 7/28/2016
 */
 
#ifndef CARD_H
#define CARD_H

class Card {
    private:
        CardSuit m_suit = DEFAULT_SUIT;
        CardValue m_value = DEFAULT_VALUE;
    public:
        enum CardSuit {
            CLUBS,
            DIAMONDS,
            HEARTS,
            SPADES,
            MAX_CARD_SUITS,
            DEFAULT_SUIT
        };
        
        enum CardValue {
            TWO,
            THREE,
            FOUR,
            FIVE,
            SIX,
            SEVEN,
            EIGHT,
            NINE,
            TEN,
            JACK,
            QUEEN,
            KING,
            ACE,
            MAX_CARD_VALUES,
            DEFAULT_VALUE
        };
		
		Card() {}
		Card(CardSuit suit, CardValue value) : m_suit(suit), m_value(value) {}
		
};

#endif
