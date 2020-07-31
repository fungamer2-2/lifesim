#!/bin/bash

clang++ -Wall -c -Iheaders/classes -Iheaders/jsonsupport -Iheaders/src -o main.o src/main.cpp
clang++ -Wall -c -Iheaders/classes -Iheaders/jsonsupport -Iheaders/src -o generateStat.o src/generateStat.cpp
clang++ -Wall -c -Iheaders/classes -Iheaders/jsonsupport -Iheaders/src -o readJSON.o jsonsupport/readJSON.cpp
clang++ -Wall -c -Iheaders/classes -Iheaders/jsonsupport -Iheaders/src -o createVehicle.o jsonsupport/createVehicle.cpp
clang++ -Wall -c -Iheaders/classes -Iheaders/jsonsupport -Iheaders/src -o createPerson.o jsonsupport/createPerson.cpp
clang++ -Wall -c -Iheaders/classes -Iheaders/jsonsupport -Iheaders/src -o vehicle.o classes/vehicle.cpp
clang++ -Wall -c -Iheaders/classes -Iheaders/jsonsupport -Iheaders/src -o person.o classes/person.cpp
clang++ -Wall -o main main.o generateStat.o readJSON.o createVehicle.o createPerson.o vehicle.o person.o
rm *.o
./main