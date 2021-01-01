#include "../../headers/main.h"

lsim::Parent::Parent(bool nSex) : Person(nSex) {
	this->relation /= 2;
	this->relation += 50;
	if (this->sex == lsim::FEMALE) {
		this->relationType = lsim::RELATIONMOTHER;
	} else {
		this->relationType = lsim::RELATIONFATHER;
	}
	this->age = rand() % 9 + 24;
	if (this->sex == lsim::MALE) {
		this->age += 2;
	}
}