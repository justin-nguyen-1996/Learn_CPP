#ifndef card_h
#define card_h

enum class CardSuit {
    CLUBS,
    DIAMONDS,
    HEARTS,
    SPADES
};

namespace CardRank {
    enum CardRank {
        TWO = 2,
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
        ACE
    };
}

struct Card {
	CardSuit card_suit,
	int card_rank
};

#endif
