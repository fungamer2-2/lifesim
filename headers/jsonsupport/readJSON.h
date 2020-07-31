#ifndef READJSON_H
#define READJSON_H

#include <vector>

void readJSON(const char * path, short int pos, std::vector<const char *> *strs, std::vector<int> *nums, std::vector<bool> *bools);

#endif