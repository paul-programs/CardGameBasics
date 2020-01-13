#pragma once
#include "Card.h"

class UnoCard :
	public Card
{
	public:
		UnoCard(int actionNum, int colorNum, int valueNum);

	private:
		int actionType;//value to hold action types...example -1-none, 0-reverse, 
					   //1-skip, 2-draw two, 3-change color, 4-change color and draw four
		int color;//value to hold color typing red-0, blue-1, green-2, yellow-3, wild-4
};

