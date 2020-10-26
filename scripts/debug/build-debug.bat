@echo off

g++ -Wall -c -o main.o src/main.cpp
g++ -Wall -c -o generateStat.o src/generateStat.cpp
g++ -Wall -c -o readJSON.o jsonsupport/readJSON.cpp
g++ -Wall -c -o vehicle.o classes/vehicle.cpp
g++ -Wall -c -o person.o classes/person.cpp
g++ -Wall -c -o mainCharacter.o classes/mainCharacter.cpp
g++ -Wall -c -o parent.o classes/parent.cpp

g++ -Wall -g main.o generateStat.o readJSON.o vehicle.o person.o mainCharacter.o parent.o
move a.exe bin\a.exe
copy lib\* bin