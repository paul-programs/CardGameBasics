#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>

#include "UnoCard.h"

using namespace std;

void ShuffleDeck(vector<UnoCard> &scards, int shuffleCount);
UnoCard DrawCard(vector<UnoCard> &cards);
void PlaceCard(UnoCard card, vector<UnoCard> &cards);

int main() {
	srand(time(NULL));//initialize random seeding

	cout << "test";

	vector<UnoCard> unoDeck;//uno game deck

	//add an initial card -- can create loop to all in all cards
	PlaceCard(UnoCard(-1, 3, 6), unoDeck);

	//add in game loop and logic here

	return 0;
}

void ShuffleDeck(vector<UnoCard> &cards, int shuffleCount) {
	//basic loops to go shuffle based on times set to shuffle
	//goes through each card in a vector (deck) and moves it to a new location
	for (int i = 0; i < shuffleCount; i++) {
		for (int j = 0; j < cards.size(); j++) {
			UnoCard holdCard = cards.at(j);

			//randomly select other element in vector to place card
			int swapSpot = rand() % cards.size();

			cards.at(j) = cards.at(swapSpot);//put new card in hold card slot
			cards.at(swapSpot) = holdCard;//put hold card in new card spot
		}
	}
}

UnoCard DrawCard(vector<UnoCard> &cards) {
	UnoCard draw = cards.at(0);//get first card from vector of cards

	//remove card from vector
	cards.erase(cards.begin());

	return draw;//return card that was drawn
}

void PlaceCard(UnoCard card, vector<UnoCard> &cards) {
	cards.insert(cards.begin(), card);//add card to beginning of vector
}