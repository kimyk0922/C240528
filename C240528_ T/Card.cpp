#include "Card.h"
#include "Deck.h"
#include "Actor.h"
#include "Player.h"
#include "Dealer.h"

#include<iostream>



using namespace std;



FCard::FCard()
{
	cout << "Trump Card" << endl;
}

FCard::~FCard()
{
}

void FCard::Shape()
{

	int CardGroup = 13;

	char CardShape[4] = { 'S','C','H','D' };


	ThumpCard[CardGroup] = rand() % 13;

}

void FCard::Type()
{
	int CardNumber = 4;

	int A = 1;
	int J = 10;
	int Q = 10;
	int K = 10;

	char CardType[4] = { 'A','J','Q','K' };

	ThumpCard[CardNumber] = rand() % 52 + 36

}

