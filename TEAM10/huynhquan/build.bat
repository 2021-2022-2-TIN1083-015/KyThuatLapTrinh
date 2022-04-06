@echo off
set SRC=..\..\_src\

g++ .\ojhusc.cpp ^
    %SRC%\Log.cpp ^
    %SRC%\Utils.cpp ^
-o t.exe