#include <iostream>
#include <limits>

#include "../../headers/io/instring.h"

char * lsim::io::instring(const char * message) {
	std::cout << message << std::endl;
	char * in;
	std::cin >> in;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.clear();
	return in;
}