@echo off

g++ -Wall -c -Iheaders/classes -Iheaders/jsonsupport -Iheaders/src -o main.o src/main.cpp
g++ -Wall -c -Iheaders/classes -Iheaders/jsonsupport -Iheaders/src -o generateStat.o src/generateStat.cpp
g++ -Wall -c -Iheaders/classes -Iheaders/jsonsupport -Iheaders/src -o readJSON.o jsonsupport/readJSON.cpp
g++ -Wall -c -Iheaders/classes -Iheaders/jsonsupport -Iheaders/src -o vehicle.o classes/vehicle.cpp
g++ -Wall -c -Iheaders/classes -Iheaders/jsonsupport -Iheaders/src -o person.o classes/person.cpp
g++ -Wall -c -Iheaders/classes -Iheaders/jsonsupport -Iheaders/src -o mainCharacter.o classes/mainCharacter.cpp
g++ -Wall -c -Iheaders/classes -Iheaders/jsonsupport -Iheaders/src -o parent.o classes/parent.cpp

g++ -Wall -o main.exe main.o generateStat.o readJSON.o vehicle.o person.o mainCharacter.o parent.o
del *.o
.\main.exe
del main.exe