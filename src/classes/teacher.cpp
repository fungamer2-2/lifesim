#include "../../headers/classes/teacher.h"

lsim::Teacher::Teacher() {
	this->severity = lsim::generateStat(0.85);
}

int lsim::Teacher::getSeverity() {
	return this->severity;
}