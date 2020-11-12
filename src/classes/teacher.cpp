#include "../../headers/classes/teacher.h"

lsim::Teacher::Teacher() {
	this->severity = lsim::generateStat();
}

int lsim::Teacher::getSeverity() {
	return this->severity;
}