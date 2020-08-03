#pragma once
#include "GenericPlayer.h"

class Player : public GenericPlayer {
private:

public:
	Player(const std::string& arg = "Player");
	virtual ~Player();
	virtual bool IsHitting();
	void Win() const;
	void Lose() const;
	void Push() const;
};