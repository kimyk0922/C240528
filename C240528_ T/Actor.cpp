#include "Actor.h"
#include "Player.h"
#include "Dealer.h"
#include "Deck.h"

#include<iostream>
#include<vector>


using namespace std;


FActor::FActor()
{
	cout << "������ �����մϴ�." << endl;
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

		cout << "ī�带 �����ðڽ��ϱ�? : ";
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
