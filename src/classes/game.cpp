#include "../../headers/classes/game.h"

lsim::Game::Game() {
	this->mainMenu.add("Age");
	this->mainMenu.add("Occupation");
	this->mainMenu.add("Activities");
	this->mainMenu.add("Self");
	this->mainMenu.add("Quit");
}

void lsim::Game::play() {
	int mainMenuAction;
	while (true) {
		mainMenuAction = this->mainMenu.awaitUserInput();
		switch (mainMenuAction) {
			case 1:
				this->player.ageAYear();
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				this->player.goToMenu();
				break;
			case 5:
				return;
		}
	}
}