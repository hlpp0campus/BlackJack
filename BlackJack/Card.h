#pragma once
#include <iostream>
#include <string>

enum Suit {
	SUIT_SPADES,
	SUIT_CLUBS,
	SUIT_DIAMONDS,
	SUIT_HEARTS,
};

enum Value {
	VALUE_ACE = 1,
	VALUE_TWO ,
	VALUE_THREE,
	VALUE_FOUR,
	VALUE_FIVE,
	VALUE_SIX,
	VALUE_SEVEN,
	VALUE_EIGHT,
	VALUE_NINE,
	VALUE_TEN,
	VALUE_JACK = 10,
	VALUE_QUEEN = 10,
	VALUE_KING = 10,
};
class Card {
private:
	Suit CARD_SUIT;
	Value CARD_VALUE;
	bool opened = false;
public:
	Card(Suit arg_suit, Value arg_value);
	void Flip();
	int GetValue();
	~Card();
	friend std::ostream& operator<<(std::ostream &os, const Card& arg);
};

