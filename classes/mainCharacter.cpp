#include <mainCharacter.h>

mainCharacter::mainCharacter(bool nSex, short int nAge, int nBalance, short int nIntelligence, short int nCharisma) {
    this->happiness = generateStat();
    this->health = generateStat();
}

short int mainCharacter::getHappiness() {
    return this->happiness;
}

void mainCharacter::updateHappiness(short int offset) {
    this->happiness += offset;
}

short int mainCharacter::getHealth() {
    return this->health;
}

void mainCharacter::updateHealth(short int offset) {
    this->health += offset;
}