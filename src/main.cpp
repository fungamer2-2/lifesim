#include <iostream>
#include <time.h>
#include <stdlib.h>

#include "../headers/classes/mainCharacter.h"
#include "../headers/io/inchoice.h"
#include "../headers/io/inint.h"
#include "../headers/io/instring.h"

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

	std::string str = lsim::io::instring("swagrid : ");
	lsim::io::Menu forgetTheName({"aaa", "big yoshi", "juan."});
	int interestingVariable = forgetTheName.awaitUserInput();
	std::cout << interestingVariable << std::endl;
	forgetTheName.add("will will smith smith will smith?");
	forgetTheName.add("will smith will smith will smith");
	forgetTheName.display();

	int num = lsim::io::inint("shrek : ");

	std::cout << std::endl << str << " " << num << std::endl;

	return 0;
}