#pragma once

class Player;

class Field
{
public:
	Field();
	~Field();

	void CreateMonster();
	void Update(Player* player);
	void StartBattle(Player* player);

protected:
	class Monster* _monster;
	class Event* _event;
};

