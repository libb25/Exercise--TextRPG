#include "Game.h"
#include <iostream>
using namespace std;
#include "Player.h"
#include "Field.h"

Game::Game() : 
	_player(nullptr), _field(std::make_shared<Field>())
{

}
Game::~Game()
{
	if (_player != nullptr)
		delete _player;
}

void Game::Update()
{
	//_event = new Event;
	
	if (_player == nullptr)
		CreatePlayer();

	if (_player->IsDead())
	{
		cout << "캐릭터가 사망하였습니다." << endl;
		delete _player;
		_player = nullptr;
		CreatePlayer();
	}

	/*_event->EventAtACrossRoads(_player);
	if (_event != nullptr)
		delete _event;*/

	_field->Update(_player);
}

void Game::CreatePlayer()
{
	cout << "--------------------" << endl;
	cout << "1. 기사 2. 궁수 3. 법사" << endl;
	cout << "--------------------" << endl;
	cout << ">";

	int playerType;
	cin >> playerType;

	switch(playerType)
	{
	case PT_KNIGHT:
		_player = new Knight();
		break;
	case PT_ARCHER:
		_player = new Archer();
		break;
	case PT_MAGE:
		_player = new Mage();
		break;
	}
}


