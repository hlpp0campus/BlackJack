#include "Card.h"

std::ostream & operator<<(std::ostream & os, const Card & arg)
{
	if (arg.opened)
	{
		os << arg.CARD_VALUE << arg.CARD_SUIT;
	}
	else
	{
		os << "XX";
	}
	return os;
}
