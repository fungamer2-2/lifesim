#include <createVehicle.h>
#include <readJSON.h>
#include <vector>

Vehicle createVehicle() {
	std::vector<const char *> strs;
	std::vector<int> nums;
	std::vector<bool> bools;
	readJSON("./data/vehicles.json", 1, &strs, &nums, &bools);
	Vehicle v(strs[0], rand() % (nums[1] - nums[0]) + nums[0], nums[2], bools[0]);
	return v;
}