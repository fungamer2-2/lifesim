#!/bin/bash

clang++ -Wall -c -Iheaders/classes -Iheaders/jsonsupport -o main.o src/main.cpp
clang++ -Wall -c -Iheaders/classes -Iheaders/jsonsupport -o vehicle.o classes/vehicle.cpp
clang++ -Wall -c -Iheaders/classes -Iheaders/jsonsupport -o readJSON.o jsonsupport/readJSON.cpp
clang++ -Wall -c -Iheaders/classes -Iheaders/jsonsupport -o createVehicle.o jsonsupport/createVehicle.cpp
clang++ -Wall -o main main.o vehicle.o readJSON.o createVehicle.o
rm *.o
./main