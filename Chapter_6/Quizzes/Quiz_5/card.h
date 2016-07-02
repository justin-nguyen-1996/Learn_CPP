#ifndef card_h
#define card_h

namespace {
	enum CardSuit {
		CLUBS,
		DIAMONDS,
		HEARTS,
		SPADES
	};
}

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
        JACK = 'J',
        QUEEN,
        KING,
        ACE
    };
}

struct Card {
	int card_suit;
	int card_rank;
};

#endif

