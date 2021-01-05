#include <iostream>
#include "../../headers/main.h"

lsim::mainCharacter::mainCharacter() : parents({lsim::Parent(lsim::FEMALE), lsim::Parent(lsim::MALE)}) {
    this->health = generateStat(1, 25);
    if (rand() % 2 == 1) {
        this->lastName = this->parents[0].getLastName();
    } else {
        this->lastName = this->parents[1].getLastName();
    }
    short int firstParentWeight = rand() % 100;
    this->intelligence = (this->parents[0].getIntelligence() * firstParentWeight / 100) + (this->parents[1].getIntelligence() * (100 - firstParentWeight) / 100);
    firstParentWeight -= 100;
    firstParentWeight *= -1;
    this->charisma = (this->parents[0].getCharisma() * firstParentWeight / 100) + (this->parents[1].getCharisma() * (100 - firstParentWeight) / 100);
    this->relationType = lsim::RELATIONSELF;
    this->relationships.push_back(&this->parents[0]);
    this->relationships.push_back(&this->parents[1]);
    this->relationshipsMenu.add(this->parents[0].getFirstName() + " " + this->parents[0].getLastName() + " (" + lsim::relationType(this->parents[0].getRelationType()) + ")");
    this->relationshipsMenu.add(this->parents[1].getFirstName() + " " + this->parents[1].getLastName() + " (" + lsim::relationType(this->parents[1].getRelationType()) + ")");
    this->menu.remove("Exit");
    this->menu.add("Age");
    this->menu.add("Occupations");
    this->menu.add("Activities");
    this->menu.add("Relationships");
    this->menu.add("Exit");
}

lsim::mainCharacter::~mainCharacter() {
    for (int i = 0; i <= this->occupations.size(); i--) {
        delete this->occupations[i];
    }
}

short int lsim::mainCharacter::getHealth() {
    return this->health;
}

short int lsim::mainCharacter::updateHealth(short int offset) {
    this->health += offset;
    return this->health;
}

void lsim::mainCharacter::goToMenu() {
    std::cout << std::endl << this->firstName << " " << this->lastName << " (" << lsim::relationType(this->relationType) << ") :" << std::endl;
    int choice = this->menu.awaitUserInput();
    while (choice != 6) {
        switch (choice) {
            case 1:
                std::cout << "Sex : " << (this->sex == lsim::FEMALE ? "Female" : "Male") << std::endl;
                std::cout << "Age : " << this->age << std::endl;
                std::cout << "Balance : $" << this->balance << std::endl;
                std::cout << "Intelligence : " << this->intelligence << std::endl;
                std::cout << "Charisma : " << this->charisma << std::endl;
                std::cout << "Relationship : " << this->relation << std::endl;
                std::cout << "Health : " << this->health << std::endl << std::endl;
                break;
            case 2:
                this->ageAYear();
                break;
            case 3:
                if (this->occupations.size() > 0) {
                    int choice = this->occupationsMenu.awaitUserInput();
                    this->occupations[choice - 1]->goToMenu();
                } else {
                    std::cout << "No current occupations" << std::endl;
                }
                break;
            case 4:
                break;
            case 5:
                {
                    std::cout << std::endl;
                    int relationshipChoice = this->relationshipsMenu.awaitUserInput();
                    this->relationships[relationshipChoice - 1]->goToMenu();
                }
                break;
        }
        choice = this->menu.awaitUserInput();
    }
}

short int lsim::mainCharacter::ageAYear() {
    this->age++;
    for (int i = 0; i < this->occupations.size(); i++) {
        this->occupations[i]->passAYear();
    }
    for (int i = 0; i < this->relationships.size(); i++) {
        this->relationships[i]->ageAYear();
    }
    if (this->age == 6) {
        int pos = this->occupations.size();
        this->occupations.push_back(new lsim::School(this, pos, 2));
        this->occupationsMenu.add(this->occupations[pos]->getName());
        std::cout << "You enter " << this->occupations[pos]->getName() << " at the age of 6." << std::endl;
    } else if (this->age == 12) {
        int pos = this->occupations.size();
        this->occupations.push_back(new lsim::School(this, pos, 3));
        this->occupationsMenu.add(this->occupations[pos]->getName());
        std::cout << "You enter " << this->occupations[pos]->getName() << " at the age of 12." << std::endl;
    } else if (this->age == 15) {
        int pos = this->occupations.size();
        this->occupations.push_back(new lsim::School(this, pos, 4));
        this->occupationsMenu.add(this->occupations[pos]->getName());
        std::cout << "You enter " << this->occupations[pos]->getName() << " at the age of 15." << std::endl;
    }
    return this->age;
}

void lsim::mainCharacter::removeOccupation(int index) {
    this->occupationsMenu.remove(this->occupations[index]->getName());
    delete this->occupations[index];
    this->occupations.erase(this->occupations.begin() + index);
    try {
        for (int i = index; i < this->occupations.size(); i++) {
            this->occupations[i]->shift();
        }
    } catch (std::exception &e) {
        std::cerr << "Error caught : " << e.what() << std::endl;
        std::cerr << "Cannot remove occupation." << std::endl;
    }
}