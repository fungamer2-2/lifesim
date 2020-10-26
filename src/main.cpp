#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "../headers/classes/mainCharacter.h"

int main() {
	srand(time(NULL));
	lsim::Parent p1(true);
	lsim::Parent p2(false);
	lsim::mainCharacter player(&p1, &p2);
	std::cout << player.getFirstName() << std::endl;
	std::cout << player.getLastName() << std::endl;
	std::cout << player.getSex() << std::endl;
	std::cout << player.getIntelligence() << std::endl;
	std::cout << player.getCharisma() << std::endl;
	std::cout << player.getHealth() << std::endl;
	std::cout << player.getAge() << std::endl;

	return 0;
}