#include "Actor.h"
#include "Player.h"
#include "Dealer.h"
#include "Deck.h"

#include<iostream>
#include<vector>


using namespace std;


FActor::FActor()
{
	cout << "게임을 시작합니다." << endl;
}

FActor::~FActor()
{
	cout << "  " << endl;
}

void FActor::Betting()
{

}

void FActor::Set()
{
	
	int PGetCard[4] = { 0, };
	int DGetCard[4] = { 0, };


	for (int i = 0; i < 4; ++i)
	{
		char Call = 0;

		cout << "카드를 받으시겠습니까? : ";
		cin >> Call;
		cout << "\n";


		if (Call == 'Y')
		{
			cout << "Call : ";
			FPlayer = ;
		}

		else if (Call == 'N')
		{

			cout << "Stay" << endl;

		}
	}

	for (int i = 0; DGetCard[5] <= 21; ++i)
	{
		cout << 


	}


}
