#include <fstream>
#include <limits>
#include <iostream>
#include "../../headers/classes/school.h"
#include "../../headers/classes/mainCharacter.h"

// for each of the intelligence levels in ./generateStatResults.txt (should
// be from 0 up to 100), calls lsim::School::updateGrades 50 times with a
// lsim::mainCharacter of that intelligence level. Each time, adds a fiftieth
// of the number of the number of people with that intelligence level (from
// ./generateStatResults.txt) to the resulting grade and outputs the final
// result to ./gradeResults.txt for visualization. In short, combines
// ./generateStatResults and lsim::School::updateGrades to obtain the
// average number of people with a given grade.

int main() {
	std::ifstream in("data/generateStats/generateStatResults.txt");
	int stats[101] = {0};
	int grades[101] = {0};
	int result;
	for (int i = 0; i < 100; i++) {
		in.ignore(std::numeric_limits<std::streamsize>::max(), ' ');
		in >> stats[i];
		if (in.fail()) {
			std::cerr << "std::ifstream fail flag set to true. An error occured." << std::endl;
			in.clear();
		}
		in.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		lsim::mainCharacter m;
		lsim::School s(&m, 0);
		m.updateIntelligence(i - m.getIntelligence());
		for (int i = 0; i < 50; i++) {
			result = s.updateGrades();
			grades[result] += stats[i] / 50;
		}
	}
	in.close();
	std::ofstream out("data/generateStats/gradeResults.txt", std::ios::trunc);
	for (int i = 0; i < 100; i++) {
		out << i << " " << grades[i] << std::endl;
	}
	out.close();
	return 0;
}