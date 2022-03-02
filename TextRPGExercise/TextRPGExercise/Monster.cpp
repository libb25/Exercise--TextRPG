#include "Monster.h"
#include <iostream>

void Monster::PrintMonsterType()
{
	if (_hp == 50)
	{
		std::cout << "-------------" << std::endl;
		std::cout << "슬라임 등장" << std::endl;
		std::cout << "-------------" << std::endl;
	}
	else if (_hp == 80)
	{
		std::cout << "-------------" << std::endl;
		std::cout << "늑대 등장" << std::endl;
		std::cout << "-------------" << std::endl;
	}
	else
	{
		std::cout << "-------------" << std::endl;
		std::cout << "스켈레톤 등장" << std::endl;
		std::cout << "-------------" << std::endl;
	}
}

void Monster::PrintInfo()
{
	std::cout << " 몬스터 정보" << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << " HP: " <<_hp<< std::endl;
	std::cout << " ATTACK: " <<_attack<< std::endl;
	std::cout << " DEFENCE: " <<_defence<< std::endl;
	std::cout << "----------------------------" << std::endl;

}
