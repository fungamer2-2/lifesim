#include <person.h>
#include <readJSON.h>

Person::Person(bool nSex, short int nAge, int nBalance, short int nIntelligence, short int nCharisma) {
	this->balance = nBalance;
	this->age = nAge;
	this->intelligence = nIntelligence;
	this->charisma = nCharisma;
	this->sex = nSex;
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

bool Person::getSex() {
	return this->sex;
}