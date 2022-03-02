#pragma once
#include "Creature.h"


enum PlayerType
{
	PT_KNIGHT=0,
	PT_ARCHER=1,
	PT_MAGE = 2,
};


class Player : public Creature
{
public:
	Player(int playerType) : Creature(CT_PLAYER), _playerType(playerType)
	{

	}
	~Player()
	{

	}

	void PrintInfo();
	void ChangeHp(double result);
	void ChangeAtt(double result);
	void ChangeDef(double result);

protected:
	int _playerType;
};

class Knight : public Player
{
public:
	Knight() : Player(PT_KNIGHT)
	{
		_hp = 150;
		_attack = 10;
		_defence = 5;
	}
};

class Archer : public Player
{
public:
	Archer() : Player(PT_ARCHER)
	{
		_hp = 80;
		_attack = 15;
		_defence = 3;
	}
};

class Mage : public Player
{
public:
	Mage() : Player(PT_MAGE)
	{
		_hp = 50;
		_attack = 25;
		_defence = 0;
	}
};