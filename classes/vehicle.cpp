#include "../headers/classes/vehicle.h"

lsim::Vehicle::Vehicle(const char *nName, int nAge, int nCost, bool nIsNew) {
	this->name = nName;
	this->age = nAge;
	this->cost = nCost;
	this->isNew = nIsNew;
}

const char * lsim::Vehicle::getName() {
	return this->name;
}

int lsim::Vehicle::getAge() {
	return this->age;
}

int lsim::Vehicle::getCost() {
	return this->cost;
}

bool lsim::Vehicle::getIsNew() {
	return this->isNew;
}