#include <iostream>
#include "..\..\_src\Log.h"
#include "..\..\_src/Utils.h"

int main(){
  LOG_ET("Nguyen Van Loc\n");
  LOG_W("Nguyen Van Loc\n");

  char name[]="Nguyen Van Loc";
  char className[]="KTLT -N15";
  char day[] = "02";
  char month[] = "04";
  char year[] = "2022";
  std::string info =StringFormat("%s %s %s %s %s", name, className, day, month, year);
  LOG_IT("%s\n",info.c_str());

  LOG_D("Good Bye!\n");

  return 0;
}
