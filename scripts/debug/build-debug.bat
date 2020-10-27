@echo off

g++ -Wall -c -o main.o src/main.cpp
g++ -Wall -c -o generateStat.o src/generateStat.cpp
g++ -Wall -c -o readJSON.o src/jsonsupport/readJSON.cpp
g++ -Wall -c -o vehicle.o src/classes/vehicle.cpp
g++ -Wall -c -o person.o src/classes/person.cpp
g++ -Wall -c -o mainCharacter.o src/classes/mainCharacter.cpp
g++ -Wall -c -o parent.o src/classes/parent.cpp
g++ -Wall -c -o instring.o src/io/instring.cpp
g++ -Wall -c -o inint.o src/io/inint.cpp
g++ -Wall -c -o inchoice.o src/io/inchoice.cpp

g++ -Wall -g main.o generateStat.o readJSON.o vehicle.o person.o mainCharacter.o parent.o instring.o inint.o inchoice.o
move a.exe bin\a.exe