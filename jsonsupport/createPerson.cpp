#include <createPerson.h>
#include <readJSON.h>
#include <vector>
#include <generateStat.h>
#include <iostream>//test

Person createPerson(short int age, int balance, bool sex) {
	std::vector<const char *> strs;
	std::vector<int> nums;
	std::vector<bool> bools;
	if (sex) {
		readJSON("./data/jsons/person.json", rand() % 50, &strs, &nums, &bools);
	} else {
		readJSON("./data/jsons/person.json", rand() % 50 + 50, &strs, &nums, &bools);
	}
	std::string firstName = strs[0];
	std::cout << firstName << std::endl << std::endl;
	readJSON("./data/jsons/person.json", rand() % 100 + 100, &strs, &nums, &bools);
	std::cout << firstName.c_str() << std::endl;
	return Person(balance, age, firstName.c_str(), strs[1], sex);
}