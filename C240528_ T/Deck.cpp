#include "Deck.h"
#include "Actor.h"
#include "Player.h"
#include "Dealer.h"

#include <iostream>


using namespace std;



FDeck::FDeck()
{
	cout << "Loding........Trump Card Setting" << endl;
	cout << "Loding........Shuffle..........." << endl;
	cout << "Loding........Set..............." << endl;
}

FDeck::~FDeck()
{
	cout << "Ready" << endl;
}

void FDeck::shuffle()
{

	int Temp = 0;
	int Card1 = 0;
	int Card2 = 0;

	srand(time(0));
	for (int i = 0; i < 3171; ++i)
	{
	
		Card1 = rand() % 52 + 1;
		Card2 = rand() % 52 + 1;

		Temp = Card1;
		Card1 = Card2;
		Card2 = Temp;

	}

}
