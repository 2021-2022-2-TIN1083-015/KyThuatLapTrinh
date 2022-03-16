#include <stdio.h>
#include "..\..\_src\Log.h"

int main(){
  printf("hello\n");
  LOG_ET("a\n");
  LOG_WT("b\n");
  LOG_IT("c\n");
  LOG_DT("d\n");

  LOG_E("e\n");
  LOG_W("f\n");
  LOG_I("g\n");
  LOG_D("h\n");

  return 0;
}