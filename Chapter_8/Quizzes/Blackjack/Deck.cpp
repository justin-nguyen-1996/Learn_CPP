/*
 * Author:  Justin Nguyen
 * Created: 7/29/2016
 */
 
void Deck::printDeck() const {
    for (const auto& card : m_deck) {
        printCard(card);
    }
}

static int Deck::getRandomNumber(int min, int max) const {
    // static used for efficiency, so we only calculate this value once
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
 	// evenly distribute the random number across our range
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

static void Deck::swapCard(Card& a, Card& b) {
    Card temp = a;
    a = b;
    b = temp;
}

