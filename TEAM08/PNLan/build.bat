@echo off
set SRC=..\..\_src

g++ .\Kiemtra.cpp ^
    %SRC%\Log.cpp ^
    %SRC%\Utils.cpp ^
-o t.exe