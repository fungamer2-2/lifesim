#include <iostream>
#include "../../headers/main.h"

lsim::School::School(lsim::mainCharacter *nSelf, int nSchoolType, int nCurrentYear) : lsim::Occupation(nSelf, nSchoolType) {
	this->currentYear = currentYear;
	this->avgGrades = 0;
	this->name = lsim::io::getTXT("data/txts/schools.txt", lsim::ANY);
	int randomStudents = rand() % 5;
	switch (this->type) {
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
	this->menu.remove("Exit");
	this->menu.add("Drop out");
	this->menu.add("Teacher");
	this->menu.add("Classmates");
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
	float bonus = 2 * self->getRelation();
	bonus /= 25;
	bonus -= 4;
	if (bonus < 0) {
		bonus -= 2;
	}
	this->avgGrades = (baseGrade * multiplier) + bonus;
	return (baseGrade * multiplier) + bonus;
}

void lsim::School::goToMenu() {
	std::cout << this->name << " (" << lsim::occupationType(this->type) << ") :" << std::endl;
	int choice = this->menu.awaitUserInput();
	int chance, classmateChoice;
	switch (choice) {
		case 1:
			std::cout << "Efforts : " << this->efforts;
			break;
		case 2:
			std::cout << "Studying harder! Efforts are now" << this->putEfforts(true) << "." << std::endl;
			break;
		case 3:
			std::cout << "Studying less... Efforts are now" << this->putEfforts(true) << "." << std::endl;
			break;
		case 4:
			if (self->getAge() < 16) {
				chance = rand() % 100;
				if (chance < 2) {
					std::cout << "Somehow, your parents let you drop out of school! Now what?" << std::endl;
				} else {
					std::cout << "Your parents refuse to let you drop out." << std::endl;
				}
			}
			break;
		case 5:
			this->teacher.goToMenu();
			break;
		case 6:
			std::cout << std::endl;
			classmateChoice = this->classmatesMenu.awaitUserInput();
			this->classmates[classmateChoice - 1].goToMenu();
			break;
		case 7:
			break;
	}
}