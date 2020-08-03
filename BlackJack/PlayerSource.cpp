#include "Player.h"

std::ostream& operator<< (std::ostream &os, const GenericPlayer& Player)
{
	os << Player.name << ":\t";

	std::vector<Card*>::const_iterator pCard;
	if (!Player.Cards.empty())
	{
		for (pCard = Player.Cards.begin();
			pCard != Player.Cards.end();
			++pCard)
		{
			os << *(*pCard) << "\t";
		}


		if (Player.GetTotal() != 0)
		{
			std::cout << "(" << Player.GetTotal() << ")";
		}
	}
	else
	{
		os << "<empty>";
	}

	return os;
}


Player::Player(const std::string & arg) 
{

}

Player::~Player()
{
}

bool Player::IsHitting()
{
	std::string answer;
	while (1)
	{
		std::cout << "Would you like to take one more card? \"y/n\"" << std::endl;
		std::getline(std::cin, answer); //<< std::cin.ignore();
		if (answer == "y")
		{
			return 1;
		}
		else if (answer == "n")
		{
			return 0;
		}
		else
		{
			std::cout << "Please, enter \"y\" if you need card or \"n\" if you do not need card" << std::endl;
			continue;
		}

	}
}


void Player::Win() const
{
	std::cout << "Player " << name << " win!" << std::endl;
}


void Player::Lose() const
{
	std::cout << "Player " << name << " lose!" << std::endl;
}


void Player::Push() const
{
	std::cout << "Player " << name << " pushes!" << std::endl;
}
