#include <iostream>
#include <limits>

#include "../../headers/io/instring.h"

std::string lsim::io::instring(const char * message) {
	std::cout << message << std::endl;
	std::string in;
	std::cin >> in;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.clear();
	return in;
}