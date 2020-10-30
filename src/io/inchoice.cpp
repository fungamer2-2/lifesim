#include <iostream>
#include <limits>

#include "../../headers/io/inchoice.h"

lsim::io::Menu::Menu(std::vector<char *> choices) {
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

void lsim::io::Menu::add(char * nChoice) {
	this->choices.push_back(nChoice);
}