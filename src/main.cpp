#include <iostream>
#include <mainCharacter.h>
#include <parent.h>
#include <time.h>
#include <stdlib.h>

int main() {
	srand(time(NULL));
	Parent p1(true);
	Parent p2(false);
	mainCharacter player(&p1, &p2);
	std::cout << player.getFirstName() << std::endl;
	std::cout << player.getLastName() << std::endl;
	std::cout << player.getSex() << std::endl;
	std::cout << player.getIntelligence() << std::endl;
	std::cout << player.getCharisma() << std::endl;
	std::cout << player.getHealth() << std::endl;
	std::cout << player.getAge() << std::endl;

	return 0;
}