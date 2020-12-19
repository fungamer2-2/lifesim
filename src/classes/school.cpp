#include "../../headers/main.h"

lsim::School::School(int nSchoolType, int nCurrentYear) {
	this->schoolType = nSchoolType;
	this->currentYear = currentYear;
	this->avgGrades = 0;
	this->name = lsim::io::getTXT("data/txts/schools.txt", lsim::ANY);
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
	this->efforts = rand() % 15 + 55;
}

int lsim::School::updateGrades(lsim::Person &person) {
	int baseGrade = 0.6 * person.getIntelligence();
	baseGrade += 44;
	if (baseGrade > 100) {
		baseGrade -= 2;
	}
	float multiplier = (this->efforts / 100) / 3;
	multiplier += 2 / 3;
	float bonus = 2 * person.getHappiness();
	bonus /= 25;
	bonus -= 4;
	if (bonus < 0) {
		bonus -= 2;
	}
	this->avgGrades = (baseGrade * multiplier) + bonus;
	return (baseGrade * multiplier) + bonus;
}

void lsim::School::updateEfforts(bool p_efforts) {
	if (p_efforts) {
		float distance = 100 - this->efforts;
		distance /= 1.5;
		this->efforts = 100 - distance;
	} else {
		this->efforts /= 1.5;
	}
}

void lsim::School::goToMenu() {
	
}