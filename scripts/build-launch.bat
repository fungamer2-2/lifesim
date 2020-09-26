@echo off

g++ -Wall -c -Iheaders/classes -Iheaders/jsonsupport -Iheaders/src -o main.o src/main.cpp
g++ -Wall -c -Iheaders/classes -Iheaders/jsonsupport -Iheaders/src -o generateStat.o src/generateStat.cpp
g++ -Wall -c -Iheaders/classes -Iheaders/jsonsupport -Iheaders/src -o readJSON.o jsonsupport/readJSON.cpp
g++ -Wall -c -Iheaders/classes -Iheaders/jsonsupport -Iheaders/src -o createVehicle.o jsonsupport/createVehicle.cpp
g++ -Wall -c -Iheaders/classes -Iheaders/jsonsupport -Iheaders/src -o createPerson.o jsonsupport/createPerson.cpp
g++ -Wall -c -Iheaders/classes -Iheaders/jsonsupport -Iheaders/src -o vehicle.o classes/vehicle.cpp
g++ -Wall -c -Iheaders/classes -Iheaders/jsonsupport -Iheaders/src -o person.o classes/person.cpp
g++ -Wall -o main.exe main.o generateStat.o readJSON.o createVehicle.o createPerson.o vehicle.o person.o
del *.o
.\main.exe