#pragma once
#include <vector>

class FCard; //??©ö©¡ ¨ù¡¾¨ú©£

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
