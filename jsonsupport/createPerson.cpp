#include <createPerson.h>
#include <readJSON.h>
#include <readTXT.h>
#include <vector>
#include <generateStat.h>
#include <iostream>//test

Person createPerson(short int age, int balance, bool sex) {
	std::vector<const char *> strs;
	std::vector<int> nums;
	std::vector<bool> bools;
	const char *firstName, *lastName;
	if (sex) {
		//readJSON("./data/jsons/person.json", rand() % 50, &strs, &nums, &bools);
		firstName = readTXT("./data/txts/person.txt", rand() % 50);
	} else {
		//readJSON("./data/jsons/person.json", rand() % 50 + 50, &strs, &nums, &bools);
		firstName = readTXT("./data/txts/person.txt", rand() % 50 + 50);
	}
	std::cout << firstName << std::endl;
	//readJSON("./data/jsons/person.json", rand() % 100 + 100, &strs, &nums, &bools);
	lastName = readTXT("./data/txts/person.txt", rand() % 100 + 100);
	std::cout << lastName << std::endl;
	return Person(balance, age, firstName, lastName, sex);
}