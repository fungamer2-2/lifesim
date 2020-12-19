#include <iostream>
#include "../../headers/main.h"

lsim::School::School(int nSchoolType, int nCurrentYear, lsim::mainCharacter *nSelf) {
	this->schoolType = nSchoolType;
	this->currentYear = currentYear;
	this->avgGrades = 0;
	this->name = lsim::io::getTXT("data/txts/schools.txt", lsim::ANY);
	this->self = nSelf
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
		this->classmatesMenu.add(this->classmates[i].getFirstName() + " " + this->classmates[i].getLastName());
	}
	this->efforts = rand() % 15 + 55;
	this->menu.add("Teacher");
	this->menu.add("Classmates");
	this->menu.add("Study harder");
	this->menu.add("Study less");
	this->menu.add("Drop out");
	this->menu.add("Exit");
}

int lsim::School::updateGrades() {
	int baseGrade = 0.6 * self->getIntelligence();
	baseGrade += 44;
	if (baseGrade > 100) {
		baseGrade -= 2;
	}
	float multiplier = (this->efforts / 100) / 3;
	multiplier += 2 / 3;
	float bonus = 2 * self->getHappiness();
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
	std::cout << this->name << " (" << lsim::schoolType(this->schoolType) << ") :" << std::endl;
	int choice = this->schoolMenu.awaitUserInput();
	switch (choice) {
		case 1:
			this->teacher.goToMenu();
			break;
		case 2:
			std::cout << std::endl;
			int classmateChoice = this->classmatesMenu.awaitUserInput();
			this->classmates[classmateChoice - 1].goToMenu();
			break;
		case 3:
			this->updateEfforts(true);
			break;
		case 4:
			this->updateEfforts(false);
			break;
		case 5:
			int chance = rand() % 100;
			if (self->getAge() < 16) {
				if (chance < 2) {
					std::cout << "Somehow, your parents let you drop out of school! Now what?" << std::endl;
				} else {
					std::cout << "Your parents refuse to let you drop out." << std::endl;
				}
			}
			break;
		case 6:
			break;
	}
}