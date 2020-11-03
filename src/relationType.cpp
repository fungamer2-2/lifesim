#include "../headers/relationType.h"

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
		default:
			return "NULLRELATION";
	}
}