#include <random>

#include "../headers/generateStat.h"

short int lsim::generateStat(float multiplier, short int bonus) {
	// returns average of two random numbers to achieve a distribution somewhat centralized around 60-70
	short int x = rand() % 70 + 30;
	short int y = rand() % 100;
	short int result = (x + y) / 2 * multiplier;
	result += bonus;
	if (result > 100) {
		result = 100;
	} else if (result < 0) {
		result = 0;
	}
	return result;
}