#ifndef CREATEPERSON_H
#define CREATEPERSON_H

#include <person.h>

Person createPerson(short int age, int balance, bool sex = rand() % 2);

#endif