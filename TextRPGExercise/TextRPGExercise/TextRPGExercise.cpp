#include <iostream>
using namespace std;
#include "Game.h"

int main()
{
	srand(static_cast<unsigned int>(time(nullptr)));

	Game game;

	while (true)
	{
		game.Update();
	}
	
	return 0;

}
