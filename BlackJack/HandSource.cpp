#include "Hand.h"

Hand::Hand()
{
	Cards.reserve(7);
}

int Hand::Add(Card* arg)
{
	Cards.push_back(arg);
	return 0;
}

Hand::~Hand()
{
	Cards.clear();
}


int Hand::Clear()
{
	for (std::vector<Card*>::iterator i = Cards.begin(); i < Cards.end(); i++)
	{
		delete *i;
		*i = 0;
	}
	Cards.clear();
	return 0;
}

int Hand::GetTotal() const
{
	int sum{ 0 };

	for (size_t i = 0; i < Cards.size(); i++)
	{
		if ((Cards[i]->GetValue() == VALUE_ACE) && (sum + 11 <= 21))
		{
			sum += 11;
		}
		else
		{
			sum += Cards[i]->GetValue();
		}
	}
	return sum;
}
