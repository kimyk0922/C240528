#pragma once
#include<vector>

//	#include"Card.h"

class FCard;	//전방 선언


class FDeck
{

public:

	FDeck();
	virtual ~FDeck();

	void Check();

	void shuffle();
	std::vector<FCard*>Card;


};

