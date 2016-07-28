/*
 * Author:  Justin Nguyen
 * Created: 7/28/2016
 */
 
#ifndef CARD_H
#define CARD_H

class Card {
    private:
        m_suit;
        m_value;
    public:
        enum CardSuit {
            CLUBS,
            DIAMONDS,
            HEARTS,
            SPADES,
            MAX_CARD_SUITS
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
            MAX_CARD_VALUES
        };
};

#endif
