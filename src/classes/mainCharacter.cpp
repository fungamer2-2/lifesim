#include <iostream>
#include "../../headers/lsim.h"

lsim::mainCharacter::mainCharacter() : parents({lsim::Parent(lsim::FEMALE), lsim::Parent(lsim::MALE)}) {
    this->health = generateStat();
    if (rand() % 2 == 1) {
        this->lastName = this->parents[0].getLastName();
    } else {
        this->lastName = this->parents[1].getLastName();
    }
    short int firstParentWeight = rand() % 100;
    this->intelligence = (this->parents[0].getIntelligence() * firstParentWeight / 100) + (this->parents[1].getIntelligence() * (100 - firstParentWeight) / 100);
    firstParentWeight = rand() % 100;
    this->charisma = (this->parents[0].getCharisma() * firstParentWeight / 100) + (this->parents[1].getCharisma() * (100 - firstParentWeight) / 100);
    this->relationType = lsim::RELATIONSELF;
    this->relationships.push_back(&this->parents[0]);
    this->relationships.push_back(&this->parents[1]);
    this->relationshipsMenu.add(this->parents[0].getFirstName() + " " + this->parents[0].getLastName() + " (" + lsim::relationType(this->parents[0].getRelationType()) + ")");
    this->relationshipsMenu.add(this->parents[1].getFirstName() + " " + this->parents[1].getLastName() + " (Father)");
    this->menu.remove("Exit");
    this->menu.add("Relationships");
    this->menu.add("Exit");
}

short int lsim::mainCharacter::getHealth() {
    return this->health;
}

short int lsim::mainCharacter::updateHealth(short int offset) {
    this->health += offset;
    return this->health;
}

void lsim::mainCharacter::goToMenu() {
    int choice = this->menu.awaitUserInput();
    switch (choice) {
        case 1:
            std::cout << "Sex : " << (this->sex == lsim::FEMALE ? "Female" : "Male") << std::endl;
			std::cout << "Age : " << this->age << std::endl;
			std::cout << "Balance : $" << this->balance << std::endl;
			std::cout << "Intelligence : " << this->intelligence << std::endl;
			std::cout << "Charisma : " << this->charisma << std::endl;
			std::cout << "Relationship : " << this->relation << std::endl;
			break;
        case 2:
            {
                int relationshipChoice = this->relationshipsMenu.awaitUserInput();
                this->relationships[relationshipChoice - 1]->goToMenu();
            }
            break;
        case 3:
            break;
    }
}