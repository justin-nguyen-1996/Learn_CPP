/*
 * Author:  Justin Nguyen
 * Created: 7/29/2016
 */
 
void Deck::printDeck() const {
    for (const auto& card : m_deck) {
        printCard(card);
    }
}
