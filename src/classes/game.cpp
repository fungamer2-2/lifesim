#include <iostream>
#include "../../headers/classes/game.h"

lsim::Game::Game() {
	this->mainMenu.add("Start!");
	this->mainMenu.add("Life is overrated");
}

void lsim::Game::play() {
	std::cout << "You are born as a " << (this->player.getSex() == lsim::FEMALE ? "female" : "male") << " human with the name of " << this->player.getFirstName() << " " << this->player.getLastName() << std::endl;
	std::cout << "No rules, no instruction manual, good luck!" << std::endl;
	int choice = this->mainMenu.awaitUserInput();
	this->mainMenu.remove("Start!");
	this->mainMenu.remove("Life is overrated");
	this->mainMenu.add("Continue");
	this->mainMenu.add("Suicide is my only way out of this misery");
	while (choice != 2 and this->player.getHealth() > 0) {
		this->player.goToMenu();
		choice = this->mainMenu.awaitUserInput();
	}
}