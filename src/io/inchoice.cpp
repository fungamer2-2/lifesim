#include <iostream>
#include <limits>

#include "../../headers/io/inchoice.h"

template <class T, class ...Ts>
lsim::io::Menu<T, Ts...>::Menu(Ts ...elements) {
	this->store(elements...);
}

template <class T, class ...Ts>
void lsim::io::Menu<T, Ts...>::display() {
	for (int i = 0; i < this->choices.size(); i++) {
		std::cout << (i + 1) << ". " << this->choices[i] << std::endl;
	}
}

template <class T, class ...Ts>
int lsim::io::Menu<T, Ts...>::getUserInput() {
	this->display;
	int in;
	do {
		if (std::cin.fail()) {
			std::cin.clear();
		}
		std::cin >> in;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	} while (std::cin.fail());
	return in;
}

template <class T, class ...Ts>
void lsim::io::Menu<T, Ts...>::store(T first, Ts ...rest) {
	this->choices.push_back(first);
	this->store(rest...);
}