@echo off
g++ -Wall -c -o generateStat.o src/generateStat.cpp
g++ -Wall -c -o main.o data/generateStats\generateStats.cpp
g++ -Wall -o generate-stat.exe generateStat.o main.o
.\generate-stat.exe
del *.o
del generate-stat.exe
py -3 .\data\generateStats\viewStats.py