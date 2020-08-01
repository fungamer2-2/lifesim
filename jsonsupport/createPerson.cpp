#include <createPerson.h>
#include <readJSON.h>
#include <vector>
#include <generateStat.h>

Person createPerson(short int age, int balance, bool sex) {
	std::vector<const char *> strs;
	std::vector<int> nums;
	std::vector<bool> bools;
	readJSON("./data/jsons/person.json", rand() % 100, &strs, &nums, &bools);
	readJSON("./data/person.json", rand() % 100 + 100, &strs, &nums, &bools);
	return Person(balance, age, strs[0], strs[1], sex);
}