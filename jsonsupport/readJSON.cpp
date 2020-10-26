#include <fstream>
#include <sstream>
#include <string>

#include "../headers/jsonsupport/readJSON.h"

void lsim::readJSON(const char * path, short int pos, std::vector<std::string> *strs, std::vector<int> *nums, std::vector<bool> *bools) {
	std::ifstream in(path);

	bool name = false;
	short int level = 0;
	short int iterations = 0;
	bool awaitingValue = false;
	std::string line;
	std::vector<std::string> tempNums;

	while (std::getline(in, line)) {

		for (int i = 0; i < (int)line.size(); i++) {
			char c = line[i];
			if (iterations != pos) {
				if (c == '}') {
					level--;
				} else if (c == '{') {
					if (level == 1) {
						iterations++;
					}
					level++;
				}
				continue;
			}

			switch (c) {
				case ':':
					awaitingValue = true;
					break;
				case '{':
					if (awaitingValue and !name) {
						awaitingValue = false;
					}
					if (level == 1) {
						iterations++;
					}
					level++;
					break;
				case '}':
					level--;
					break;
				case '"':
					name = !name;
					break;
				default:
					break;
			}
			if (c == '"' and awaitingValue) {
				std::string temp(line.begin() + i + 1, line.end());
				for (int j = 0; j < (int)temp.size(); j++) {
					if (temp[j] == '"') {
						(*strs).push_back(temp.substr(0, j));
						break;
					}
				}
				awaitingValue = false;
			} else if ((c == '0' or c == '1' or c == '2' or c == '3' or c == '4' or c == '5' or c == '6' or c == '7' or c == '8' or c == '9') and awaitingValue) {
				std::string temp(line.begin() + i, line.end());
				for (int j = 0; j < (int)temp.size(); j++) {
					if (temp[j] != '0' and temp[j] != '1' and temp[j] != '2' and temp[j] != '3' and temp[j] != '4' and temp[j] != '5' and temp[j] != '6' and temp[j] != '7' and temp[j] != '8' and temp[j] != '9') {
						tempNums.push_back(temp.substr(0, j));
						break;
					}
				}
				awaitingValue = false;
			} else if (line.substr(i, 4) == "true") {
				(*bools).push_back(true);
				awaitingValue = false;
			} else if (line.substr(i, 5) == "false") {
				(*bools).push_back(false);
				awaitingValue = false;
			}
		}
		if (iterations > pos) {
				break;
			}
	}
	for (int i = 0; i < (int)tempNums.size(); i++) {
		int nNum;
		std::istringstream(tempNums[i]) >> nNum;
		(*nums).push_back(nNum);
	}
}