#include "../../headers/classes/school.h"

lsim::School::School(int nSchoolType, int nCurrentYear) {
	this->schoolType = nSchoolType;
	this->currentYear = currentYear;
	this->avgGrades = 0;
	int randomStudents = rand() % 5;
	switch (this->schoolType) {
		case lsim::SCHOOLELEMENTARY:
			randomStudents += 22;
			break;
		case lsim::SCHOOLMIDDLE:
		case lsim::SCHOOLHIGH:
			randomStudents += 24;
			break;
		case lsim::SCHOOLCOLLEGE:
			randomStudents += 28;
			break;
	}
	for (int i = 0; i < randomStudents; i++) {
		this->classmates.push_back(lsim::Classmate());
	}
}

int lsim::School::updateGrades(lsim::Person &person) {
	
}