@echo off
set SRC=..\..\_src\

g++ .\baitap1.cpp ^
    %SRC%\Log.cpp ^
    %SRC%\Utils.cpp ^
-o t.exe