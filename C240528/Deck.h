#pragma once
#include<vector>

//	#include"Card.h"

class FCard;	//���� ����


class FDeck
{

public:

	FDeck();
	virtual ~FDeck();

	void Check();

	void shuffle();
	std::vector<FCard*>Card;


};

