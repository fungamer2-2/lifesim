#include <createVehicle.h>
#include <readJSON.h>
#include <vector>
#include <stdlib.h>

Vehicle createVehicle() {
	std::vector<const char *> strs;
	std::vector<int> nums;
	std::vector<bool> bools;
	readJSON("./data/jsons/vehicles.json", 1, &strs, &nums, &bools);
	return Vehicle(strs[0], rand() % (nums[1] - nums[0]) + nums[0], nums[2], bools[0]);
}