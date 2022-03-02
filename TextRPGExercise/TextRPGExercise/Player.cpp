#include "Player.h"
#include <iostream>

void Player::PrintInfo()
{
	std::cout << " 플레이어 정보" << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << " HP: " << _hp << std::endl;
	std::cout << " ATTACK: " << _attack << std::endl;
	std::cout << " DEFENCE: " << _defence << std::endl;
	std::cout << "----------------------------" << std::endl;

}

void Player::ChangeHp(double result)
{
	_hp *= result;
}
void Player::ChangeAtt(double result)
{
	_attack *= result;
}
void Player::ChangeDef(double result)
{
	_defence *= result;
}
