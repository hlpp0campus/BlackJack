#include "Card.h"

Card::Card(Suit arg_suit, Value arg_value) : CARD_SUIT(arg_suit), CARD_VALUE(arg_value)
{

}
void Card::Flip()
{
	(opened == false) ? opened = true : opened = false;
}
int Card::GetValue()
{
	if (opened)
		return CARD_VALUE;
	else
		return 0;
}
Card::~Card()
{

}

