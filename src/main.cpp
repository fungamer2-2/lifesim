#include <iostream>
#include <generateStat.h>
#include <createVehicle.h>
#include <createPerson.h>

int main() {
	srand(time(NULL));
	
	Person player = createPerson(0, 0);
	std::cout << std::endl << player.getFirstName() << std::endl;
	std::cout << std::endl << player.getLastName() << std::endl;
	std::cout << std::endl << player.getSex() << std::endl;
	std::cout << std::endl << player.getIntelligence() << std::endl;
	std::cout << std::endl << player.getHappiness() << std::endl;
	std::cout << std::endl << player.getCharisma() << std::endl;
	std::cout << std::endl << player.getHealth() << std::endl;

	return 0;
}