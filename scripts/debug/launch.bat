@echo off

call .\scripts\debug\build-debug.bat
call .\bin\a.exe
call del *.o