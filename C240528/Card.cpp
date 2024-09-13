#include "Card.h"
#include "Deck.h"
#include "Actor.h"
#include "Player.h"
#include "Dealer.h"

#include<iostream>



using namespace std;



FCard::FCard()
{
	Type = ECardType::None;
	Type = ((ECardType::));
	cout << "Trump Card" << endl;
}

FCard::~FCard()
{
}

void FCard::GetScore()
{
	if (int Number > 10)
	{
		return 10;
	}

	return Number;
}

void FCard::Show()
{


	string CardType[4] = {
		"Clo","Spa", "Heat" ,"Dia"
	};

	cout << CardType[static_cast<int>(Type)] << " " << Number << endl;


	switch (Number)
	{
		case 1:
			cout << "Ace";
			break;

		case 11:
			cout << "J";
			break;

		case 12:
			cout << "Q";
			break;

		case 13:
			cout << "K";
			break;

		default:
			cout << Number;
			break;


	}


}
