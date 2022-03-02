#include "Event.h"
#include <iostream>
using namespace std;
#include "Player.h"

void Event::EventAtACrossRoads(Player* player)
{
	cout << "-------------------- EVENT ------------------------" << endl;
	cout << "���� ���� �� ������ ���� ������ �߰��ߴ�." << endl;
	cout << "���� �ȿ��� �����̶�� ������ �� ���� ������ �˾��� �־���. " << endl;
	cout << "���� ������ ���Ϳ� �ο�µ� ������ ���� ������?" << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "1. ������ �˾��� �Դ´�." << endl;
	cout << "2. �İ��� �˾��� �Դ´�." << endl;
	cout << "3. ��� �˾��� �Դ´�." << endl;
	cout << "4. ���� �ʴ´�." << endl;
	
	player->PrintInfo();
	cout << ">";
	int input;
	cin >> input;

	int randValue = rand() % 6;
	if (input == 1)
	{
		player->ChangeHp(Result(randValue));
		cout << "Hp�� ���߽��ϴ�." << endl;
		player->PrintInfo();
	}
	else if (input == 2)
	{
		player->ChangeAtt(Result(randValue));
		cout << "Attack�� ���߽��ϴ�." << endl;
		player->PrintInfo();
	}	
	else if (input == 3)
	{
		player->ChangeDef(Result(randValue));
		cout << "defence�� ���߽��ϴ�." << endl;
		player->PrintInfo();
	}
	else
	{
		cout << "�׳� �������ϴ�" << endl;
	}
	
}
double Event::Result(int randvalue)
{
	if (randvalue == 0)
		return 0.3;
	else if (randvalue == 1)
		return 0.5;
	else if (randvalue == 2)
		return 0.8;
	else if (randvalue == 3)
		return 1;
	else if (randvalue == 4)
		return 1.5;
	else 
		return 2;
}
