#pragma once
#include <vector>

class FCard; //??���� ��������

class FDeck
{
public:
	FDeck();
	virtual ~FDeck();

	void Check();

	FCard* Draw();

protected:
	std::vector<FCard*> Cards;
	int CurrentPosition;

};
