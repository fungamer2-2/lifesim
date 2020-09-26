#include <createPerson.h>
#include <readJSON.h>
#include <vector>
#include <generateStat.h>

Person createPerson(short int age, int balance, bool sex) {
	std::vector<std::string> strs;
	std::vector<int> nums;
	std::vector<bool> bools;
	if (sex) {
		readJSON("./data/jsons/person.json", rand() % 50, &strs, &nums, &bools);
	} else {
		readJSON("./data/jsons/person.json", rand() % 50 + 50, &strs, &nums, &bools);
	}
	readJSON("./data/jsons/person.json", rand() % 100 + 100, &strs, &nums, &bools);
	return Person(balance, age, strs[0].c_str(), strs[1].c_str(), sex);
}