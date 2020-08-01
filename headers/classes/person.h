#ifndef PERSON_H
#define PERSON_H

#include <random>
#include <generateStat.h>

class Person {
	public:
		Person(int nBalance, short int nAge, const char *nFirstName, const char *nLastName, bool nSex = rand() % 2, short int nIntelligence = generateStat(), short int nCharisma = generateStat(), short int nHappiness = generateStat(), short int nHealth = generateStat());
		int balance;
		short int age;
		short int intelligence;
		short int charisma;
		short int happiness;
		short int health;
		bool sex;
		const char *firstName;
		const char *lastName;
	private:
};

#endif