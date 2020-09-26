#!/bin/bash

clang++ -Wall -c -Iheaders/classes -Iheaders/jsonsupport -Iheaders/src -g src/main.cpp
clang++ -Wall -c -Iheaders/classes -Iheaders/jsonsupport -Iheaders/src -g src/generateStat.cpp
clang++ -Wall -c -Iheaders/classes -Iheaders/jsonsupport -Iheaders/src -g classes/vehicle.cpp
clang++ -Wall -c -Iheaders/classes -Iheaders/jsonsupport -Iheaders/src -g classes/person.cpp
clang++ -Wall -c -Iheaders/classes -Iheaders/jsonsupport -Iheaders/src -g jsonsupport/readJSON.cpp
clang++ -Wall -c -Iheaders/classes -Iheaders/jsonsupport -Iheaders/src -g jsonsupport/createVehicle.cpp
clang++ -Wall -c -Iheaders/classes -Iheaders/jsonsupport -Iheaders/src -g jsonsupport/createPerson.cpp
clang++ -Wall -g main.o generateStat.o vehicle.o person.o readJSON.o createVehicle.o createPerson.o