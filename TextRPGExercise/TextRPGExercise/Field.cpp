#include "Field.h"
#include <stdlib.h>
#include "Monster.h" 
#include "Player.h"
#include<iostream>
#include "Event.h"

Field::Field() : _monster(nullptr), _event(nullptr)
{

}
Field::~Field()
{
	if (_monster != nullptr)
		delete _monster;
}


void Field::Update(Player* player)
{

	if (_monster == nullptr)
		CreateMonster();
	
	StartBattle(player);


}

void Field::CreateMonster()
{
	int MonsterType = rand() % 3;

	switch (MonsterType)
	{
	case MT_SLIME:
		_monster = new Slime();
		break;
	case MT_WOLF:
		_monster = new Wolf();
		break;
	case MT_SKELETON:
		_monster = new Skeleton();
		break;
	}

}

void Field::StartBattle(Player* player)
{

	_event = new Event;

	_event->EventAtACrossRoads(player);
	if (_event != nullptr)
		delete _event;

	_monster->PrintMonsterType();

	while (true)
	{
		player->PrintInfo();
		_monster->PrintInfo();

		// �÷��̾�->���� ����
		_monster->OnAttacked(player);

		if (_monster->IsDead())
		{
			std::cout << "���Ͱ� ����߽��ϴ�" << std::endl;
			_monster->PrintInfo();
			delete _monster;
			_monster = nullptr;
			break;
		}

		// ����->�÷��̾� ����
		player->OnAttacked(_monster);

		if (player->IsDead())
		{
			player->PrintInfo();
			break;
		}
	}
}

