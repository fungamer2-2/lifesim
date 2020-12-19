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

std::string lsim::schoolType(int schoolType) {
	switch (schoolType) {
		case 0:
			return "DEFAULTSCHOOL";
		case 1:
			return "Elementary School";
		case 2:
			return "Middle School";
		case 3:
			return "High School";
		case 4:
			return "College";
	}
	return "NULLSCHOOL";
}