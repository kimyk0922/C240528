#pragma once


class FCard:public FDeck

{

public:

	FCard();
	virtual ~FCard();


protected:

	int ThumpCard[52] = { 0, };
	void Shape();
	void Type();


};

