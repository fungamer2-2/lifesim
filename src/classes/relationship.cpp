#include "../../headers/classes/relationship.h"

lsim::Relationship::Relationship(lsim::Person *nSelf, short int nType) {
	this->self = nSelf;
	this->relationType = nType;
}

void lsim::Relationship::goToMenu() {
	int choice = this->menu.awaitUserInput();
	switch (choice) {

	}
}

short int lsim::Relationship::ageAYear() {
	
}