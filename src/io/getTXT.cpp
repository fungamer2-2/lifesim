#include <fstream>

#include "../../headers/io/getTXT.h"

std::string lsim::io::getTXT(const char * path, int pos) {
	std::ifstream in(path);
	std::string out;
	
	for (int i = 0; i < pos; i++) {
		std::getline(in, out);
	}
	return out;
}