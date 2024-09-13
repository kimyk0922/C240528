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
			
			switch (Type)									//	Key의 값에 따라 여러개의 case 값을 출력해주는 조건문		switch(key값)
			{												//	예시. 옆의 switch(Type)의 경우 Key의 자리에 들어간 Type이라는 변수 값에 
															//	case를 매칭하여 결과를 출력해준다
				case 0:
					Temp->SetShape ("Dia");
					break;									//	다시 처음으로 돌려서 
		
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
	for (int i = 0; i < Card.size(); ++i)			//	auto에 비하면 다 써주는 for문이 처리 속도가 빠른 편이다
	{
	
		Cards[i]->Show();

	}									
*/

	for (auto Card : Cards)
	{
		Card->Show();
	}



}
