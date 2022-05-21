@echo off
set SRC=..\..\_src

g++ .\thuchanh.cpp ^
    %SRC%\Log.cpp ^
    %SRC%\Utils.cpp ^
-o thuchanh.exe