#include <fstream>
#include <limits>
#include <iostream>
#include "../../headers/classes/school.h"
#include "../../headers/classes/mainCharacter.h"

int main() {
		std::ifstream in("data/generateStats/generateStatResults.txt");
	int stats[101] = {0};
	int grades[101] = {0};
	int result;
	for (int i = 0; i < 100; i++) {
		in.ignore(std::numeric_limits<std::streamsize>::max(), ' ');
		in >> stats[i];
		if (in.fail()) {
			in.clear();
		}
		in.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		lsim::mainCharacter m;
		lsim::School s(&m);
		m.updateIntelligence(i - m.getIntelligence());
		result = s.updateGrades();
		grades[result] += stats[i];
	}
	in.close();
	std::ofstream out("data/generateStats/gradeResults.txt", std::ios::trunc);
	for (int i = 0; i < 100; i++) {
		out << i << " " << grades[i] << std::endl;
	}
	out.close();
	return 0;
}