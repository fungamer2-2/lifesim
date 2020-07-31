#include <vehicle.h>

Vehicle::Vehicle(const char *nName, int nAge, int nCost, bool nIsNew) {
	this->name = nName;
	this->age = nAge;
	this->cost = nCost;
	this->isNew = nIsNew;
}

const char * Vehicle::getName() {
	return this->name;
}

int Vehicle::getAge() {
	return this->age;
}

int Vehicle::getCost() {
	return this->cost;
}

bool Vehicle::getIsNew() {
	return this->isNew;
}