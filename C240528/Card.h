#pragma once
#include "Black_Jk_00.cpp"



class FCard

{

public:

	FCard();
	virtual ~FCard();

	void SetType(std::string newType);
	void SetShape(std::string newShape);
	void SetNumber(std::string newNumber);
	void GetScore();

protected:
	EType Type;
	std::string Shape;
	int Number;

public:

	void Show();


};

