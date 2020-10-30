#include <iostream>
#include <limits>

#include "../../headers/io/inint.h"

int lsim::io::inint(const char * message) {
	int in;
	while (true) {
		std::cout << message;
		std::cin >> in;
		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		} else {
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			return in;
		}
	}
}