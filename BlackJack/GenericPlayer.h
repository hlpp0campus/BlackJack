#pragma once
#include"Hand.h"



class GenericPlayer : public Hand {
protected:
	std::string name;
public:
	GenericPlayer(const std::string& arg = "");
	virtual ~GenericPlayer();
	virtual bool IsHitting() = 0;
	bool IsBoosted();
	int Bust();
	friend std::ostream& operator<< (std::ostream &out, const GenericPlayer& Player);
};




