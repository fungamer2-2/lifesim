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
	int baseGrade = 0.6 * this->self->getIntelligence();
	baseGrade += 44;
	if (baseGrade > 100) {
		baseGrade -= 2;
	}
	float multiplier = this->efforts / 3;
	multiplier += 67;
	multiplier /= 100;
	float bonus = 2 * this->self->getRelation();
	bonus /= 25;
	bonus -= 4;
	if (bonus < 0) {
		bonus -= 2;
	}
	int tempBonus = this->teacher.getSeverity() / 25;
	tempBonus -= 2;
	bonus += tempBonus;
	bonus += rand() % 4 + 2;
	this->avgGrades = (baseGrade * multiplier) + bonus;
	this->avgGrades = (baseGrade * multiplier) + bonus;
	return this->avgGrades;
}

void lsim::School::goToMenu() {
	std::cout << this->name << " (" << lsim::occupationType(this->type) << ") :" << std::endl;
	int choice = this->menu.awaitUserInput();
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
			{
				int chance = rand() % 100;
				int successChance = (this->self->parents[0].getRelation() + this->self->parents[1].getRelation()) / 2;
				successChance *= -1;
				successChance /= 10;
				successChance += 8;
				if (this->self->getAge() > 16 and this->self->getAge() < 20) {
					successChance *= 4;
					successChance += 48;
				}
				if (chance < successChance) {
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
			{
				int classmateChoice = this->classmatesMenu.awaitUserInput();
				this->classmates[classmateChoice - 1].goToMenu();
			}
			break;
		case 7:
			break;
	}
}

void lsim::School::passAYear() {
	std::cout << "You finish this year at " << this->name << " with an average of " << this->updateGrades() << "." << std::endl;
}