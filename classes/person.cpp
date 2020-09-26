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

const char * Person::getFirstName() {
	return this->firstName.c_str();
}

const char * Person::getLastName() {
	return this->lastName.c_str();
}

int Person::getBalance() {
	return this->balance;
}

void Person::updateBalane(int gains) {
	this->balance += gains;
}

short int Person::getAge() {
	return this->age;
}

void Person::ageAYear() {
	this->age++;
}

short int Person::getIntelligence() {
	return this->intelligence;
}

void Person::updateIntelligence(short int offset) {
	this->intelligence += offset;
}

short int Person::getCharisma() {
	return this->charisma;
}

void Person::updateCharisma(short int offset) {
	this->charisma += offset;
}

short int Person::getHappiness() {
	return this->happiness;
}

void Person::updateHappiness(short int offset) {
	this->happiness += offset;
}

short int Person::getHealth() {
	return this->health;
}

void Person::updateHealth(short int offset) {
	this->health += offset;
}

bool Person::getSex() {
	return this->sex;
}