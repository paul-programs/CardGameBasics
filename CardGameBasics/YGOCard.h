#pragma once
#include "Card.h"

class YGOCard :
	public Card
{
	private:
		string name;
		string element;
		int level;
		string type;
		string text;
		string action;
		int atk;
		int def;

	public:
		YGOCard();//holder for eventual constructor
};