#include <fstream>
#include <limits>
#include <iostream>
#include "../../headers/classes/school.h"

int main() {
	std::ifstream in("data/generateStats/generateStatResults.txt");
	std::ofstream out("data/generateStats/gradeResults.txt", std::ios::trunc);
	int stats[101];
	int grades[101];
	int result;
	for (int i = 0; i < 100; i++) {
		in.ignore(std::numeric_limits<std::streamsize>::max(), ' ');
		in >> stats[i];
		if (in.fail()) {
			in.clear();
		}
		in.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		lsim::School s;
		lsim::Person p;
		p.updateIntelligence(i - p.getIntelligence());
		result = s.updateGrades(p);
		std::cout << p.getIntelligence() << " : " << result << "%" << std::endl;
		grades[result] += stats[i];
	}
	for (int i = 0; i < 100; i++) {
		out << i << " " << grades[i] << std::endl;
	}
	return 0;
}