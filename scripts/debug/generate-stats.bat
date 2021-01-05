@echo off

g++ -Wall -c -o generateStat.o src/generateStat.cpp
g++ -Wall -c -o mainStats.o data/generateStats/generateStats.cpp
g++ -Wall -o generate-stat.exe generateStat.o mainStats.o

.\generate-stat.exe

g++ -Wall -c -o school.o src/classes/school.cpp
g++ -Wall -c -o person.o src/classes/person.cpp
g++ -Wall -c -o menu.o src/io/menu.cpp
g++ -Wall -c -o getTXT.o src/io/getTXT.cpp
g++ -Wall -c -o teacher.o src/classes/teacher.cpp
g++ -Wall -c -o relationType.o src/relationType.cpp
g++ -Wall -c -o mainGrades.o data/generateStats/grade.cpp
g++ -Wall -c -o exceptions.o src/classes/exceptions.cpp
g++ -Wall -o grades.exe school.o person.o menu.o getTXT.o teacher.o relationType.o generateStat.o mainGrades.o exceptions.o
.\grades.exe

py -3 data/generateStats/viewStats.py

del *.o
del generate-stat.exe
del grades.exe