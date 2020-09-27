#include <parent.h>
#include <iostream>

Parent::Parent(bool nSex) : Person(nSex) {
	if (this->relation < 20) {
		this->relation += 50;
	} else if (this->relation < 40) {
		this->relation += 40;
	} else if (this->relation < 60) {
		this->relation += 30;
	} else if (this->relation < 80) {
		this->relation += 15;
	}
}