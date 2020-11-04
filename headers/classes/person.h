#ifndef PERSON_H
#define PERSON_H

#include <random>
#include <string>

#include "../io/menu.h"
#include "../generateStat.h"

namespace lsim {
	class Person {
		public:
			Person(bool nSex = rand() % 2, short int nAge = 0, int nBalance = 0, short int nIntelligence = generateStat(), short int nCharisma = generateStat(), short int nRelation = generateStat());
			std::string getFirstName();
			std::string getLastName();
			int getBalance();
			int updateBalance(int gains);
			short int getAge();
			virtual short int ageAYear();
			short int getIntelligence();
			short int updateIntelligence(short int offset);
			short int getCharisma();
			short int updateCharisma(short int offset);
			short int getRelation();
			short int updateRelation(short int offset);
			bool getSex();
			virtual void goToMenu();
			int getRelationType();
		protected:
			int relationType;
			int balance;
			short int age;
			short int intelligence;
			short int charisma;
			short int relation;
			bool sex;
			std::string firstName;
			std::string lastName;
			lsim::io::Menu menu;
	}; // class Person
} // namespace lsim

#endif // ifndef PERSON_H