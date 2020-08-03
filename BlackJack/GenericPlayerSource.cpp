#include "GenericPlayer.h"
#include <string>

GenericPlayer::GenericPlayer(const std::string& arg) : name(arg)
{

}

GenericPlayer::~GenericPlayer()
{

}

bool GenericPlayer::IsBoosted()
{
	return(GetTotal() > 21);
}

int GenericPlayer::Bust()
{
	/*if (IsBoosted())
	{
		std::cout << "Player " << name << " is BOOSTED" << std::endl;
		return 0;
	}
	else
	{
		return 1;
	}*/
	std::cout << name << " busts" << std::endl;
	return 0;
}


