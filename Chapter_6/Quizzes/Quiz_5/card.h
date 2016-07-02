#ifndef card_h
#define card_h

enum class card_suit {
    CLUBS,
    DIAMONDS,
    HEARTS,
    SPADES
};

namespace card_rank {
    enum card_rank {
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

struct card {
	int card_suite,
	int card_rank
};

#endif
