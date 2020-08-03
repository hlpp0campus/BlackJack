#include "House.h"

House::House(const std::string & NAME)
{

}

House::~House()
{
}

bool House::IsHitting() const
{
	return (GetTotal()<=16);
}

void House::FlipFirstCard()
{
	if (!(Cards.empty()))
	{
		Cards[0]->Flip();
	}
	else
	{
		std::cout << "No card to flip!"<<std::endl;
	}

}
