#include<iostream>
#include"Actor.h"
#include"Player.h"
#include"Dealer.h"
#include"Deck.h"


#include<vector>



using namespace std;

//						enum class E	������,	���ڸ� ���ڷ� ǥ�����ִ�,	���ڷ� 
enum class EType
{
	None	=	-1,
	Clova	=	0,
	Spade	=	1,
	Heart	=	2,
	Diamond =	3,
	Max

};

int main()
{
	int Type = (int)EType::Clova;

	FDeck Deck;

	Deck.Check();

	

	return 0;

}