#include <iostream>
#include <limits>

#include "../../headers/io/menu.h"
#include "../../headers/classes/exceptions.h"

lsim::io::Menu::Menu(std::vector<std::string> choices) {
	this->choices = choices;
}

 void lsim::io::Menu::display(bool notNumerated) {
	 if (notNumerated) {
		 for (int i = 0; i < this->choices.size(); i++) {
			std::cout << " - " << this->choices[i] << std::endl;
		 }
	 } else {
		 for (int i = 0; i < this->choices.size(); i++) {
			 std::cout << " " << (i + 1) << ". " << this->choices[i] << std::endl;
		 }
	 }
}

int lsim::io::Menu::awaitUserInput() {
	int in;
	while (true) {
		this->display();
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

void lsim::io::Menu::add(std::string nChoice, int index) {
	if (index < 0) {
		if (index < -1 * this->choices.size() - 1) {
			throw lsim::invalidIndexException(2);
		}
		this->choices.insert(this->choices.end() + index + 1, nChoice);
	} else {
		if (index > this->choices.size()) {
			throw lsim::invalidIndexException(1);
		}
		this->choices.insert(this->choices.begin() + index, nChoice);
	}
}

bool lsim::io::Menu::remove(std::string choice) {
	for (int i = 0; i < this->choices.size(); i++) {
		if (this->choices[i] == choice) {
			this->choices.erase(this->choices.begin() + i);
			return true;
		}
	}
	return false;
}