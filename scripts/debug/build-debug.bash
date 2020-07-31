#!/bin/bash

clang++ -Wall -c -Iheaders/classes -Iheaders/jsonsupport -g src/main.cpp
clang++ -Wall -c -Iheaders/classes -Iheaders/jsonsupport -g classes/vehicle.cpp
clang++ -Wall -c -Iheaders/classes -Iheaders/jsonsupport -g jsonsupport/readJSON.cpp
clang++ -Wall -c -Iheaders/classes -Iheaders/jsonsupport -g jsonsupport/createVehicle.cpp
clang++ -Wall -g main.o vehicle.o readJSON.o createVehicle.o