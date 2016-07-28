/*
 * Author:  Justin Nguyen
 * Created: 7/28/2016
 */

#include <iostream>
#include <string>
#include "Card.h"

char Card::getSuitString() {
    switch (m_suit) {
        case CLUBS:        return 'C';
        case DIAMONDS:     return 'D';
        case HEARTS:       return 'H';
        case SPADES:       return 'S';
        case default:      return '?';
    }
}

char Card::getValueString() {
    switch (m_value) {
        case TWO:          return '2';
        case THREE:        return '3';
        case FOUR:         return '4';
        case FIVE:         return '5';
        case SIX:          return '6';
        case SEVEN:        return '7';
        case EIGHT:        return '8';
        case NINE:         return '9';
        case TEN:          return 'T';
        case JACK:         return 'J';
        case QUEEN:        return 'Q';
        case KING:         return 'K';
        case ACE:          return 'A';
        case default:      return '?';
    }
}

void Card::printCard() {
    
}

int main() {
    
}

