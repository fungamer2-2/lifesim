#include <iostream>
#include "../../headers/main.h"

lsim::School::School(lsim::mainCharacter *nSelf, int nIndex, int nSchoolType, int nCurrentYear) : lsim::Occupation(nSelf, nIndex, nSchoolType) {
	this->currentYear = nCurrentYear;
	this->updateGrades();
	int randomStudents = rand() % 6;
	switch (this->type) {
		case lsim::SCHOOLELEMENTARY:
			randomStudents += 22;
			this->name = lsim::io::getTXT("data/txts/schools.txt", rand() % 32);
			break;
		case lsim::SCHOOLMIDDLE:
			randomStudents += 25;
			this->name = lsim::io::getTXT("data/txts/schools.txt", rand() % 2 == 0 ? rand() % 16 : rand() % 16 + 32);
			break;
		case lsim::SCHOOLHIGH:
			randomStudents += 25;
			this->name = lsim::io::getTXT("data/txts/schools.txt", rand() % 2 == 0 ? rand() % 16 : rand() % 16 + 48);
			break;
		case lsim::SCHOOLCOLLEGE:
			randomStudents += 29;
			break;
	}
	for (int i = 0; i < randomStudents; i++) {
		this->classmates.push_back(lsim::Classmate(this->self->getAge()));
		this->classmatesMenu.add(this->classmates[i].getFirstName() + " " + this->classmates[i].getLastName());
	}
	this->menu.remove("Exit");
	this->menu.add("Drop out");
	this->menu.add("Teacher");
	this->menu.add("Classmates");
	this->menu.add("Exit");
}

short int lsim::School::updateGrades() {
	int baseGrade = 0.6 * this->self->getIntelligence();
	baseGrade += 44;
	if (baseGrade > 100) {
		baseGrade -= 2;
	}
	std::cout << "TESTTESTTEST" << std::endl << "Intelligence : " << this->self->getIntelligence() << std::endl;
	std::cout << "baseGrade : " << baseGrade << std::endl;
	float multiplier = this->efforts / 4 + 75;
	multiplier /= 100;
	std::cout << "efforts : " << this->efforts << std::endl;
	std::cout << "multiplier : " << multiplier << std::endl;
	std::cout << "happiness : " << this->self->getRelation() << std::endl;
	int bonus = 2 * this->self->getRelation();
	bonus /= 25;
	std::cout << "bonus : " << bonus << std::endl;
	if (bonus < 0) {
		bonus -= 2;
	}
	std::cout << "bonus : " << bonus << std::endl;
	int tempBonus = this->teacher.getSeverity() / 25;
	std::cout << "severity : " << this->teacher.getSeverity() << std::endl;
	std::cout << "sBonus : " << tempBonus << std::endl;
	bonus -= tempBonus;
	bonus += rand() % 4 - 2;
	this->avgGrades = (baseGrade * multiplier) + bonus;
	this->avgGrades = (baseGrade * multiplier) + bonus;
	return this->avgGrades;
}

void lsim::School::goToMenu() {
	std::cout << this->name << " (" << lsim::occupationType(this->type) << ") :" << std::endl;
	int choice = this->menu.awaitUserInput();
	switch (choice) {
		case 1:
			std::cout << "Efforts : " << this->efforts << std::endl;
			std::cout << "Current year : " << this->currentYear << std::endl;
			std::cout << "Average grades : " << this->avgGrades << std::endl;
			break;
		case 2:
			std::cout << "Studying harder! Efforts are now " << this->putEfforts(true) << "." << std::endl;
			break;
		case 3:
			std::cout << "Studying less... Efforts are now " << this->putEfforts(true) << "." << std::endl;
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
					this->self->removeOccupation(this->index);
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
	this->currentYear++;
	std::cout << "You finish this year at " << this->name << " with an average of " << this->updateGrades() << "." << std::endl;
	for (int i = 0; i < this->classmates.size(); i++) {
		this->classmates[i].ageAYear();
	}
	if (this->self->getAge() == 12 or this->self->getAge() == 15) {
		this->self->removeOccupation(this->index);
	}
}