#include "Deck.h"
#include "Actor.h"
#include "Player.h"
#include "Dealer.h"
#include "Card.h"

#include <iostream>


using namespace std;



FDeck::FDeck()
{
	cout << "Loding........Trump Card Setting" << endl;
	for (int Type = 0; Type < 4; ++Type)
	{

		for (int Number = 1; Number <= 13; ++Number)
		{

			FCard* Temp = new FCard();
			
			switch (Type)									//	Key�� ���� ���� �������� case ���� ������ִ� ���ǹ�		switch(key��)
			{												//	����. ���� switch(Type)�� ��� Key�� �ڸ��� �� Type�̶�� ���� ���� 
															//	case�� ��Ī�Ͽ� ����� ������ش�
				case 0:
					Temp->SetShape ("Dia");
					break;									//	�ٽ� ó������ ������ 
		
				case 1:
					Temp->SetShape ("Spa");
					break;
			
				case 2:
					Temp->SetShape ("Clo");
					break;
			
				case 3:
					Temp->SetShape  ("Hart");
					break;
				default:
					break;
			}
			static_cast<int>(3.4f) == (int)3.4f;


			Temp->SetType(static_cast<ECardType>(Type));
			Temp->SetNumber(Number);

			Cards.Push_back(Temp);
		}
	}

	cout << "Loding........Set..............." << endl;
}

FDeck::~FDeck()
{
	cout << "Ready" << endl;
}

void FDeck::shuffle()
{

	cout << "Loding........Shuffle..........." << endl;

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

void FDeck::Check()
{
/*	
	for (int i = 0; i < Card.size(); ++i)			//	auto�� ���ϸ� �� ���ִ� for���� ó�� �ӵ��� ���� ���̴�
	{
	
		Cards[i]->Show();

	}									
*/

	for (auto Card : Cards)
	{
		Card->Show();
	}



}
