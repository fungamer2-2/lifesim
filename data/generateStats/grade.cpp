#include <fstream>
#include <limits>
#include "../../headers/classes/school.h"

int main() {
	std::ifstream in("data/generateStats/generateStatResults.txt");
	std::ofstream out("data/generateStats/gradeResults.txt", std::ios::trunc);
	int stats[101];
	int grades[101];
	for (int i = 0; i < 101; i++) {
		in >> stats[i];
		if (in.fail()) {
			in.clear();
		}
		in.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		for (int i = 0; i < stats[i]; i++) {
			lsim::School s;
			lsim::Person p;
			grades[s.updateGrades(p)]++;
		}
	}
	for (int i = 0; i < 101; i++) {
		out << i << " " << grades[i] << std::endl;
	}
	return 0;
}