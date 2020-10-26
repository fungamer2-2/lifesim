#ifndef PERSON_H
#define PERSON_H

#include <random>
#include <string>

#include "../src/generateStat.h"

namespace lsim {
	class Person {
		public:
			Person(bool nSex = rand() % 2, short int nAge = 0, int nBalance = 0, short int nIntelligence = generateStat(), short int nCharisma = generateStat(), short int nRelation = generateStat());
			const char * getFirstName();
			const char * getLastName();
			int getBalance();
			int updateBalane(int gains);
			short int getAge();
			short int ageAYear();
			short int getIntelligence();
			short int updateIntelligence(short int offset);
			short int getCharisma();
			short int updateCharisma(short int offset);
			short int getRelation();
			short int updateRelation(short int offset);
			bool getSex();
		protected:
			int balance;
			short int age;
			short int intelligence;
			short int charisma;
			short int relation;
			bool sex;
			std::string firstName;
			std::string lastName;
	}; // class Person
} // namespace lsim

#endif // ifndef PERSON_H