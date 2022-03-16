#include <stdio.h>
#include <iostream>
#include "../../_src/Log.h"
using namespace std;


int main(){
    LOG_ET("abc\n");
    LOG_WT("abc\n");
    LOG_IT("abc\n");
    LOG_DT("abc\n");
    //-------------g
    LOG_E("\nabc");
    LOG_W("\nabc");
    LOG_I("\nabc");
    LOG_D("\nabc");
    
    cout << "\nhello world";

    return 0;
}