#include <iostream>
#include <limits>

#include "../../headers/io/menu.h"

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
	std::cout << std::endl;
}

void lsim::io::Menu::add(std::string nChoice) {
	this->choices.push_back(nChoice);
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