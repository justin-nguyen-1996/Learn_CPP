#ifndef card_h
#define card_h

enum CardSuit {
	CLUBS,
	DIAMONDS,
	HEARTS,
	SPADES
};

enum CardRank {
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
	ACE
};

struct Card {
	int card_rank;
	int card_suit;
};

#endif

