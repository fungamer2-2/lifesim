#include "../../headers/classes/classmate.h"
#include "../../headers/lsim.h"

lsim::Classmate::Classmate(int nAge) {
	this->relationType = lsim::RELATIONCLASSMATE;
	this->age = nAge;
}