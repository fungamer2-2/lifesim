#include <person.h>
#include <readJSON.h>

lsim::Person::Person(bool nSex, short int nAge, int nBalance, short int nIntelligence, short int nCharisma, short int nRelation) {
	this->balance = nBalance;
	this->age = nAge;
	this->intelligence = nIntelligence;
	this->charisma = nCharisma;
	this->sex = nSex;
	this->relation = nRelation;
	std::vector<std::string> strs;
	std::vector<int> nums;
	std::vector<bool> bools;
	if (this->sex) {
		readJSON("./data/jsons/person.json", rand() % 50, &strs, &nums, &bools);
	} else {
		readJSON("./data/jsons/person.json", rand() % 50 + 50, &strs, &nums, &bools);
	}
	readJSON("./data/jsons/person.json", rand() % 100 + 100, &strs, &nums, &bools);
	this->firstName = strs[0];
	this->lastName = strs[1];
}

const char * lsim::Person::getFirstName() {
	return this->firstName.c_str();
}

const char * lsim::Person::getLastName() {
	return this->lastName.c_str();
}

int lsim::Person::getBalance() {
	return this->balance;
}

int lsim::Person::updateBalane(int gains) {
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