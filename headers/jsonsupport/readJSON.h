#ifndef READJSON_H
#define READJSON_H

#include <vector>
#include <string>

namespace lsim {
	void readJSON(const char * path, short int pos, std::vector<std::string> *strs, std::vector<int> *nums, std::vector<bool> *bools);
} // namespace lsim

#endif // ifndef READJSON_H