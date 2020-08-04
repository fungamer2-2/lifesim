#ifndef PERSON_H
#define PERSON_H

#include <random>
#include <generateStat.h>

class Person {
	public:
		Person(int nBalance, short int nAge, const char *nFirstName, const char *nLastName, bool nSex = rand() % 2, short int nIntelligence = generateStat(), short int nCharisma = generateStat(), short int nHappiness = generateStat(), short int nHealth = generateStat());
		const char * getFirstName();
		const char * getLastName();
		int getBalance();
		void updateBalane(int gains);
		short int getAge();
		void ageAYear();
		short int getIntelligence();
		void updateIntelligence(short int offset);
		short int getCharisma();
		void updateCharisma(short int offset);
		short int getHappiness();
		void updateHappiness(short int offset);
		short int getHealth();
		void updateHealth(short int offset);
		bool getSex();
	private:
		int balance;
		short int age;
		short int intelligence;
		short int charisma;
		short int happiness;
		short int health;
		bool sex;
		const char *firstName;
		const char *lastName;
};

#endif