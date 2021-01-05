@echo off

call .\scripts\debug\build-debug.bat
.\bin\a.exe
del *.o