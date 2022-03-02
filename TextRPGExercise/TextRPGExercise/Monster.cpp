#include "Monster.h"
#include <iostream>

void Monster::PrintMonsterType()
{
	if (_hp == 50)
	{
		std::cout << "-------------" << std::endl;
		std::cout << "������ ����" << std::endl;
		std::cout << "-------------" << std::endl;
	}
	else if (_hp == 80)
	{
		std::cout << "-------------" << std::endl;
		std::cout << "���� ����" << std::endl;
		std::cout << "-------------" << std::endl;
	}
	else
	{
		std::cout << "-------------" << std::endl;
		std::cout << "���̷��� ����" << std::endl;
		std::cout << "-------------" << std::endl;
	}
}

void Monster::PrintInfo()
{
	std::cout << " ���� ����" << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << " HP: " <<_hp<< std::endl;
	std::cout << " ATTACK: " <<_attack<< std::endl;
	std::cout << " DEFENCE: " <<_defence<< std::endl;
	std::cout << "----------------------------" << std::endl;

}
