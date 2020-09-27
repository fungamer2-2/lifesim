@echo off

g++ -Wall -c -Iheaders\classes -Iheaders\jsonsupport -Iheaders\src -g -o main.o src\main.cpp
g++ -Wall -c -Iheaders\classes -Iheaders\jsonsupport -Iheaders\src -g -o generateStat.o src\generateStat.cpp
g++ -Wall -c -Iheaders\classes -Iheaders\jsonsupport -Iheaders\src -g -o readJSON.o jsonsupport\readJSON.cpp
g++ -Wall -c -Iheaders\classes -Iheaders\jsonsupport -Iheaders\src -g -o vehicle.o classes\vehicle.cpp
g++ -Wall -c -Iheaders\classes -Iheaders\jsonsupport -Iheaders\src -g -o person.o classes\person.cpp
g++ -Wall -g main.o generateStat.o readJSON.o vehicle.o person.o
.\a.exe