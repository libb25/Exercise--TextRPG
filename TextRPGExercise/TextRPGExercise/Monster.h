#pragma once
#include "Creature.h"


enum MosterType
{
	MT_SLIME = 0,
	MT_WOLF = 1,
	MT_SKELETON = 2,
};

class Monster : public Creature
{
public:
	Monster(int monsterType) : Creature(CT_MONSTER), _monsterType(monsterType)
	{

	}
	~Monster()
	{

	}

	void PrintInfo();
	void PrintMonsterType();

protected:
	int _monsterType;
};

class Slime : public Monster
{
public:
	Slime() : Monster(MT_SLIME)
	{
		_hp = 50;
		_attack = 5;
		_defence = 2;
	}
};

class Wolf : public Monster
{
public:
	Wolf() : Monster(MT_WOLF)
	{
		_hp = 80;
		_attack = 8;
		_defence = 3;
	}
};

class Skeleton : public Monster
{
public:
	Skeleton() : Monster(MT_SKELETON)
	{
		_hp = 100;
		_attack = 15;
		_defence = 4;
	}
};

