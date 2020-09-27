#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle {
	public:
		Vehicle(const char *nName, int nCost, int nAge, bool nIsNew);
		const char * getName();
		int getCost();
		int getAge();
		bool getIsNew();
	private:
		const char *name;
		int cost;
		int age;
		bool isNew;
};

#endif // ifndef VEHICLE_H