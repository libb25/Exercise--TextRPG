#include "Event.h"
#include <iostream>
using namespace std;
#include "Player.h"

void Event::EventAtACrossRoads(Player* player)
{
	cout << "-------------------- EVENT ------------------------" << endl;
	cout << "길을 가던 중 주인이 없는 상점을 발견했다." << endl;
	cout << "상점 안에는 영약이라고 쓰여진 세 가지 색깔의 알약이 있었다. " << endl;
	cout << "저걸 먹으면 몬스터와 싸우는데 도움이 되지 않을까?" << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "1. 빨간색 알약을 먹는다." << endl;
	cout << "2. 파간색 알약을 먹는다." << endl;
	cout << "3. 녹색 알약을 먹는다." << endl;
	cout << "4. 먹지 않는다." << endl;
	
	player->PrintInfo();
	cout << ">";
	int input;
	cin >> input;

	int randValue = rand() % 6;
	if (input == 1)
	{
		player->ChangeHp(Result(randValue));
		cout << "Hp가 변했습니다." << endl;
		player->PrintInfo();
	}
	else if (input == 2)
	{
		player->ChangeAtt(Result(randValue));
		cout << "Attack이 변했습니다." << endl;
		player->PrintInfo();
	}	
	else if (input == 3)
	{
		player->ChangeDef(Result(randValue));
		cout << "defence가 변했습니다." << endl;
		player->PrintInfo();
	}
	else
	{
		cout << "그냥 지나갑니다" << endl;
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
