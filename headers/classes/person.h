#ifndef PERSON_H
#define PERSON_H

class Person {
	public:
		Person(int nBalance, short int nAge, short int nIntelligence, short int nCharisma, short int nHappiness, short int nHealth, bool nSex, char *nFirstName, char *nLastName);
		int balance;
		short int age;
		short int intelligence;
		short int charisma;
		short int happiness;
		short int health;
		bool sex;
		char *firstName;
		char *lastName;
	private:
};

#endif