#include "../../headers/generateStat.h"
#include <fstream>

int main() {
	std::ofstream file("data/generateStats/generateStatResults.txt", std::ios::trunc);
	int hits[101] = {0};
	for (int i = 0; i < 100000000; i++) {
		hits[lsim::generateStat()]++;
	}
	for (int i = 0; i < 100; i++) {
		file << i << " " << hits[i] << std::endl;
	}
	return 0;
}