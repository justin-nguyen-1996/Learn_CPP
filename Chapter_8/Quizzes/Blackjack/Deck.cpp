/*
 * Author:  Justin Nguyen
 * Created: 7/29/2016
 */

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

void Deck::printDeck() const {
    for (const auto& card : m_deck) {
        printCard(card);
    }
}

Card& Deck::dealCard() {
    assert(m_top_card_i < 52);
    return m_deck[m_top_card_i];
}

void Deck::shuffleDeck() const {
    for (int i = 0; i < TOTAL_NUM_CARDS; ++i) {
        int swap_i = getRandomNumber(0, TOTAL_NUM_CARDS);
        swapCard(m_deck[i], m_deck.at(swap_i));
    }
    top_card_i = 0;
}

