@echo off

g++ -Wall -c -o main.o src/main.cpp

g++ -Wall -c -o vehicle.o src/classes/vehicle.cpp
g++ -Wall -c -o person.o src/classes/person.cpp
g++ -Wall -c -o mainCharacter.o src/classes/mainCharacter.cpp
g++ -Wall -c -o parent.o src/classes/parent.cpp
g++ -Wall -c -o teacher.o src/classes/teacher.cpp
g++ -Wall -c -o school.o src/classes/school.cpp

g++ -Wall -c -o instring.o src/io/instring.cpp
g++ -Wall -c -o inint.o src/io/inint.cpp
g++ -Wall -c -o menu.o src/io/menu.cpp
g++ -Wall -c -o getTXT.o src/io/getTXT.cpp

g++ -Wall -c -o game.o src/classes/game.cpp
g++ -Wall -c -o getType.o src/getType.cpp
g++ -Wall -c -o generateStat.o src/generateStat.cpp

g++ -Wall -o main.exe main.o vehicle.o person.o mainCharacter.o parent.o teacher.o school.o instring.o inint.o menu.o getTXT.o game.o getType.o generateStat.o
del *.o
move main.exe bin\main.exe
.\bin\main.exe
del .\bin\main.exe