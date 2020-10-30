#include <iostream>
#include <limits>

#include "../../headers/io/inint.h"

int lsim::io::inint(const char * message) {
	int in;
	do {
		std::cout << message << std::endl;
		if (std::cin.fail()) {
			std::cin.clear();
		}
		std::cin >> in;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	} while (std::cin.fail());
}