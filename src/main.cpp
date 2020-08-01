#include <iostream>
#include <generateStat.h>
#include <createVehicle.h>
#include <createPerson.h>

int main() {
	srand(time(NULL));
	int total[101] = {0};
	for (int i = 0; i < 1000000000; i++) {
		total[generateStat()]++;
	}
	int sum = 0;
	for (int i = 0; i < 101; i++) {
		sum += total[i];
		std::cout << std::endl << total[i] << " captured as " << i << "." << std::endl;
	}
	std::cout << std::endl << sum << " captured over 1 000 000 000 (one billion) calls." << std::endl;
	sum = 0;
	for (int i = 25; i <= 75; i++) {
		sum += total[i];
	}
	std::cout << std::endl << sum << " captured as between 25 and 75." << std::endl;
	sum = 0;
	for (int i = 35; i <= 65; i++) {
		sum += total[i];
	}
	std::cout << std::endl << sum << " captured as between 35 and 65." << std::endl;
	sum = 0;
	for (int i = 45; i <= 55; i++) {
		sum += total[i];
	}
	std::cout << std::endl << sum << " captured as between 45 and 55." << std::endl;
	sum = 0;
	for (int i = 0; i < 25; i++) {
		sum += total[i];
	}
	std::cout << std::endl << sum << " captured as less than 25." << std::endl;
	sum = 0;
	for (int i = 75; i < 101; i++) {
		sum += total[i];
	}
	std::cout << std::endl << sum << " captured as more than 75." << std::endl;
	sum = 0;
	Person player = createPerson(0, 0);

	return 0;
}