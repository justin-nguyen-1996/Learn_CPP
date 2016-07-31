/*
 * Author:  Justin Nguyen
 * Created: 7/28/2016
 */

#ifndef CARD_H
#define CARD_H

class Card {
    public:
        enum CardSuit {
            CLUBS, DIAMONDS, HEARTS, SPADES,
            MAX_CARD_SUITS,
            DEFAULT_SUIT
        };

        enum CardValue {
            TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN,
            JACK, QUEEN, KING, ACE,
            MAX_CARD_VALUES,
            DEFAULT_VALUE
        };
    private:
        CardSuit m_suit = DEFAULT_SUIT;
        CardValue m_value = DEFAULT_VALUE;

    public:
        Card() {}
        Card(CardSuit suit, CardValue value) : m_suit(suit), m_value(value) {}
        Card(CardValue value, CardSuit suit) { Card(suit, value); }

        CardSuit getSuit() const { return m_suit; }
        CardValue getValue() const { return m_value; }
        void setSuit(CardSuit suit) { m_suit = suit; }
        void setValue(CardValue value) { m_value = value; }

        void printCard() const;
        char getSuitString() const;
        char getValueString() const;
};

#endif
