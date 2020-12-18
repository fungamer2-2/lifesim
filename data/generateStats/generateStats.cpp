#include <fstream>
#include "../../headers/generateStat.h"

int main() {
	std::ofstream out("data/generateStats/generateStatResults.txt", std::ios::trunc);
	int hits[101] = {0};
	for (int i = 0; i < 10000000; i++) {
		// ten million (10 000 000) generateStat calls
		hits[lsim::generateStat()]++;
	}
	for (int i = 0; i < 100; i++) {
		out << i << " " << hits[i] << std::endl;
	}
	out.close();
	return 0;
}