#include <iostream>
#include <time.h>
#include "../headers/main.h"

int main() {
	srand(time(NULL));
	lsim::Game game;
	game.play();
	return 0;
}