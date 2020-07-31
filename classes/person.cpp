#include <person.h>

Person::Person(int nBalance, short int nAge, short int nIntelligence, short int nCharisma, short int nHappiness, short int nHealth, bool nSex, char *nName) {
	this->balance = nBalance;
	this->age = nAge;
	this->intelligence = nIntelligence;
	this->charisma = nCharisma;
	this->happiness = nHappiness;
	this->health = nHealth;
	this->sex = nSex;
	this->name = nName;
}