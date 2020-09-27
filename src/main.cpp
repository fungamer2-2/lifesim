#include <iostream>
#include <mainCharacter.h>
#include <time.h>
#include <stdlib.h>

int main() {
	srand(time(NULL));
	mainCharacter player;
	std::cout << player.getFirstName() << std::endl;
	std::cout << player.getLastName() << std::endl;
	std::cout << player.getSex() << std::endl;
	std::cout << player.getIntelligence() << std::endl;
	std::cout << player.getCharisma() << std::endl;
	std::cout << player.getHappiness() << std::endl;
	std::cout << player.getHealth() << std::endl;
	std::cout << player.getAge() << std::endl;

	return 0;
}