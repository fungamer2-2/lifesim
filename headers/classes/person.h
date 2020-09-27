#ifndef PERSON_H
#define PERSON_H

#include <random>
#include <generateStat.h>
#include <string>

class Person {
	public:
		Person(bool nSex = rand() % 2, short int nAge = 0, int nBalance = 0, short int nIntelligence = generateStat(), short int nCharisma = generateStat());
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
		bool getSex();
	protected:
		int balance;
		short int age;
		short int intelligence;
		short int charisma;
		bool sex;
		std::string firstName;
		std::string lastName;
};

#endif // ifndef PERSON_H