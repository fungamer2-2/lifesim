#include "../../headers/classes/teacher.h"
#include "../../headers/lsim.h"

lsim::Teacher::Teacher() {
	this->severity = lsim::generateStat(0.85);
	this->intelligence = generateStat(1, 0, 1.5f);
	this->relationType = lsim::RELATIONTEACHER;
	this->age = rand() % 25 + 25;
}

int lsim::Teacher::getSeverity() {
	return this->severity;
}