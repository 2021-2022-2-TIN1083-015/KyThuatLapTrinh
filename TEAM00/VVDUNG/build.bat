@echo off
set SRC=..\..\_src
set LIB=D:\msys64\mingw64\lib\

g++ .\time.cpp ^
    %SRC%\Log.cpp ^
    %SRC%\Utils.cpp ^
    %SRC%\HttpClient.cpp ^
-DCURL_STATICLIB ^
-o t.exe ^
-static -L%LIB% ^
-lcurl -lnghttp2 -lidn2 -lpsl -lunistring -liconv ^
-lssh2 -lssl -lcrypto -lzstd -lbrotlidec -lbrotlicommon -lz ^
-ladvapi32 -lcrypt32 -lgdi32 -lwldap32 -lws2_32