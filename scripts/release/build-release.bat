@echo off

g++ -Wall -c -O3 -o main.o src/main.cpp

g++ -Wall -c -O3 -o classmate.o src/classes/classmate.cpp
g++ -Wall -c -O3 -o vehicle.o src/classes/vehicle.cpp
g++ -Wall -c -O3 -o person.o src/classes/person.cpp
g++ -Wall -c -O3 -o mainCharacter.o src/classes/mainCharacter.cpp
g++ -Wall -c -O3 -o parent.o src/classes/parent.cpp
g++ -Wall -c -O3 -o teacher.o src/classes/teacher.cpp
g++ -Wall -c -O3 -o school.o src/classes/school.cpp
g++ -Wall -c -O3 -o occupation.o src/classes/occupation.cpp
g++ -Wall -c -O3 -o exceptions.o src/classes/exceptions.cpp

g++ -Wall -c -O3 -o instring.o src/io/instring.cpp
g++ -Wall -c -O3 -o inint.o src/io/inint.cpp
g++ -Wall -c -O3 -o menu.o src/io/menu.cpp
g++ -Wall -c -O3 -o getTXT.o src/io/getTXT.cpp

g++ -Wall -c -O3 -o game.o src/classes/game.cpp
g++ -Wall -c -O3 -o getType.o src/getType.cpp
g++ -Wall -c -O3 -o generateStat.o src/generateStat.cpp

g++ -Wall -O3 -o main.exe main.o classmate.o vehicle.o person.o mainCharacter.o parent.o teacher.o school.o occupation.o exceptions.o instring.o inint.o menu.o getTXT.o game.o getType.o generateStat.o

move .\main.exe .\bin\lifesim.exe
del *.o