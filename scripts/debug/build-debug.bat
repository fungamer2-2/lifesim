@echo off

g++ -Wall -c -g -o main.o src/main.cpp

g++ -Wall -c -g -o classmate.o src/classes/classmate.cpp
g++ -Wall -c -g -o vehicle.o src/classes/vehicle.cpp
g++ -Wall -c -g -o person.o src/classes/person.cpp
g++ -Wall -c -g -o mainCharacter.o src/classes/mainCharacter.cpp
g++ -Wall -c -g -o parent.o src/classes/parent.cpp
g++ -Wall -c -g -o teacher.o src/classes/teacher.cpp
g++ -Wall -c -g -o school.o src/classes/school.cpp
g++ -Wall -c -g -o occupation.o src/classes/occupation.cpp
g++ -Wall -c -g -o exceptions.o src/classes/exceptions.cpp

g++ -Wall -c -g -o instring.o src/io/instring.cpp
g++ -Wall -c -g -o inint.o src/io/inint.cpp
g++ -Wall -c -g -o menu.o src/io/menu.cpp
g++ -Wall -c -g -o getTXT.o src/io/getTXT.cpp

g++ -Wall -c -g -o game.o src/classes/game.cpp
g++ -Wall -c -g -o getType.o src/getType.cpp
g++ -Wall -c -g -o generateStat.o src/generateStat.cpp

g++ -Wall -g main.o classmate.o vehicle.o person.o mainCharacter.o parent.o teacher.o school.o occupation.o exceptions.o instring.o inint.o menu.o getTXT.o game.o getType.o generateStat.o
move a.exe bin\a.exe