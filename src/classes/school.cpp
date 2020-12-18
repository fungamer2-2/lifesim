#include "../../headers/main.h"

lsim::School::School(int nSchoolType, int nCurrentYear) {
	this->schoolType = nSchoolType;
	this->currentYear = currentYear;
	this->avgGrades = 0;
	//this->name = lsim::io::getTXT("data/txts/schools.txt", lsim::ANY);
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
	//for (int i = 0; i < randomStudents; i++) {
	//	this->classmates.push_back(lsim::Classmate());
	//}
}

int lsim::School::updateGrades(lsim::Person &person) {
	int baseGrade = 0.6 * person.getIntelligence();
	baseGrade += 42;
	if (baseGrade > 100) {
		baseGrade -= 2;
	}
	return baseGrade;
}