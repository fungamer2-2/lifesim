#ifndef READJSON_H
#define READJSON_H

#include <vector>
#include <string>

void readJSON(const char * path, short int pos, std::vector<std::string> *strs, std::vector<int> *nums, std::vector<bool> *bools);

#endif // ifndef READJSON_H