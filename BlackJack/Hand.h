#pragma once
#include <iostream>
#include <vector>
#include"Card.h"

class Hand {
protected:
	std::vector<Card*> Cards;
public:
	Hand();
	int Add(Card* arg);
	int Clear();
	int GetTotal() const;
	virtual ~Hand();

};
	

