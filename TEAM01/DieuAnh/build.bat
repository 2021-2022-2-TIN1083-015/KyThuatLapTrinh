@echo offset
set SRC=..\..\_src\

g++ .\main.cpp ^
    %SRC%\Log.cpp ^
        %SRC%\Utils.cpp ^
        -o t.exe