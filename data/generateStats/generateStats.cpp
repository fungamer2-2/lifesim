#include <fstream>
#include "../../headers/generateStat.h"

// outputs results of ten million (10 000 000) lsim::generateStat calls
// in file ./generateStatResults.txt for visualization

int main() {
	std::ofstream out("data/generateStats/generateStatResults.txt", std::ios::trunc);
	int hits[101] = {0};
	for (int i = 0; i < 10000000; i++) {
		hits[lsim::generateStat()]++;
	}
	for (int i = 0; i < 100; i++) {
		out << i << " " << hits[i] << std::endl;
	}
	out.close();
	return 0;
}