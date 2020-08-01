#include <person.h>

Person::Person(int nBalance, short int nAge, const char *nFirstName, const char *nLastName, bool nSex, short int nIntelligence, short int nCharisma, short int nHappiness, short int nHealth) {
	this->balance = nBalance;
	this->age = nAge;
	this->intelligence = nIntelligence;
	this->charisma = nCharisma;
	this->happiness = nHappiness;
	this->health = nHealth;
	this->sex = nSex;
	this->firstName = nFirstName;
	this->lastName = nLastName;
}