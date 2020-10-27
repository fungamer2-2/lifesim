#include <iostream>
#include <limits>

#include "../../headers/io/inint.h"

int lsim::io::inint(const char * message) {
	std::cout << message;
	int in;
	do {
		if (std::cin.fail()) {
			std::cin.clear();
		}
		std::cin >> in;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	} while (std::cin.fail());
}