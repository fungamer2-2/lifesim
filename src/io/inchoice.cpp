#include <iostream>
#include <limits>

#include "../../headers/io/inchoice.h"

short int lsim::io::inchoice(std::vector<const char *> choices) {
	for (int i = 1; i <= choices.size(); i++) {
		std::cout << i << ". " << choices[i] << std::endl;
	}
	short int result;
	do {
		std::cout << "Enter a number 1-" << choices.size() << " : ";
		std::cin >> result;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin.clear();
	} while (std::cin.fail() or result < 0 or result > choices.size());
	return result;
}