#include "../../headers/lsim.h"
#include <iostream>

lsim::Person::Person(bool nSex, short int nAge, int nBalance, short int nIntelligence, short int nCharisma, short int nRelation) {
	this->balance = nBalance;
	this->age = nAge;
	this->intelligence = nIntelligence;
	this->charisma = nCharisma;
	this->sex = nSex;
	this->relation = nRelation;
	if (this->sex == lsim::FEMALE) {
		this->firstName = lsim::io::getTXT("./data/txts/names.txt", rand() % 50);
	} else {
		this->firstName = lsim::io::getTXT("./data/txts/names.txt", rand() % 50 + 50);
	}
	this->lastName = lsim::io::getTXT("./data/txts/names.txt", rand() % 100);
	this->relationType = lsim::RELATIONNULL;
	this->menu.add("Stats");
	this->menu.add("Exit");
}

std::string lsim::Person::getFirstName() {
	return this->firstName;
}

std::string lsim::Person::getLastName() {
	return this->lastName;
}

int lsim::Person::getBalance() {
	return this->balance;
}

int lsim::Person::updateBalance(int gains) {
	this->balance += gains;
	return this->balance;
}

short int lsim::Person::getAge() {
	return this->age;
}

short int lsim::Person::ageAYear() {
	this->age++;
	return this->age;
}

short int lsim::Person::getIntelligence() {
	return this->intelligence;
}

short int lsim::Person::updateIntelligence(short int offset) {
	this->intelligence += offset;
	return this->intelligence;
}

short int lsim::Person::getCharisma() {
	return this->charisma;
}

short int lsim::Person::updateCharisma(short int offset) {
	this->charisma += offset;
	return this->charisma;
}

short int lsim::Person::getRelation() {
	return this->relation;
}

short int lsim::Person::updateRelation(short int offset) {
	this->relation += offset;
	return this->relation;
}

bool lsim::Person::getSex() {
	return this->sex;
}

void lsim::Person::goToMenu() {
	std::cout << std::endl << this->firstName << " " << this->lastName << " (" << lsim::relationType(this->relationType) << ") :" << std::endl;
	int choice = this->menu.awaitUserInput();
	switch (choice) {
		case 1:
			std::cout << "Sex : " << (this->sex == lsim::FEMALE ? "Female" : "Male") << std::endl;
			std::cout << "Age : " << this->age << std::endl;
			std::cout << "Intelligence : " << this->intelligence << std::endl;
			std::cout << "Charisma : " << this->charisma << std::endl;
			std::cout << "Relationship : " << this->relation << std::endl << std::endl;
			break;
		case 2:
			break;
	}
}

int lsim::Person::getRelationType() {
	return this->relationType;
}