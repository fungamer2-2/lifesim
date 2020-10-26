#include <iostream>
#include <limits>

#include "../../headers/io/inint.h"

template <class T>
T lsim::io::inint<T> (const char * message) {
	// default function ; not used
}

template <class T>
T lsim::io::inint<int> (const char * message) {
	std::cout << message;
	int in;
	do {
		std::cin >> in;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin.clear();
	} while (std::cin.fail());
}

template <class T>
T lsim::io::inint<double> (const char * message) {
	std::cout << message;
	double in;
	do {
		std::cin >> in;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin.clear();
	} while (std::cin.fail());
}