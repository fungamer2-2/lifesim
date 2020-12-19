#include "../headers/getType.h"

std::string lsim::relationType(int relationType) {
	switch (relationType) {
		case 0:
			return "DEFAULTRELATION";
		case 1:
			return "Self";
		case 2:
			return "Mother";
		case 3:
			return "Father";
	}
	return "NULLRELATION";
}

std::string lsim::occupationType(int occupationType) {
	switch (occupationType) {
		case 0:
			return "DEFAULTOCCUPATION";
		case 1:
			return "DEFAULTSCHOOL";
		case 2:
			return "Elementary School";
		case 3:
			return "Middle School";
		case 4:
			return "High School";
		case 5:
			return "College";
		case 6:
			return "DEFAULTJOB";
	}
	return "NULLOCCUPATION";
}