#include <fstream>

#include "../../headers/io/getTXT.h"

std::string lsim::io::getTXT(const char * path, int pos) {
	std::ifstream in(path);
	std::string out;

	int numLines = 0;
	while (std::getline(in, out)) {
		numLines++;
	}
	in.clear();
	in.seekg(0);
	if (pos == -1) {
		pos = rand() % numLines;
	} else if (pos < -1 or pos > numLines) {
		return NULL;
	}
	for (int i = 0; i < pos; i++) {
		std::getline(in, out);
	}
	in.close();
	return out;
}