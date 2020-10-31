#include "../../headers/classes/mainCharacter.h"

lsim::mainCharacter::mainCharacter() : parents({lsim::Parent(true), lsim::Parent(false)}) {
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
}

short int lsim::mainCharacter::getHealth() {
    return this->health;
}

short int lsim::mainCharacter::updateHealth(short int offset) {
    this->health += offset;
    return this->health;
}