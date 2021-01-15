#include "../../headers/classes/parentship.h"

lsim::Parentship::Parentship(lsim::Person *nSelf) : lsim::Relationship(nSelf, nSelf->getSex() == lsim::FEMALE ? lsim::RELATIONMOTHER : lsim::RELATIONFATHER) {
	
}