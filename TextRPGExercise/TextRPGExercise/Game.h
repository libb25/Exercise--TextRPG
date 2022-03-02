#pragma once
#include<memory>
class Player;
class Field;

class Game
{
public:
	Game();
	~Game();

	void Update();
	void CreatePlayer();

	

protected:
	Player* _player;
	std::shared_ptr<Field> _field;
	
};

