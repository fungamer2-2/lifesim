#include <createPerson.h>
#include <readJSON.h>
#include <vector>

Person createPerson(short int age, int balance, bool sex = rand() % 2) {
	std::vector<const char *> strs;
	std::vector<int> nums;
	std::vector<bool> bools;
	readJSON("./data/person.json", rand() % 100, &strs, &nums, &bools);
	readJSON("./data/person.json", rand() % 100 + 100, &strs, &nums, &bools);
	// return Person(balance, age, )
}