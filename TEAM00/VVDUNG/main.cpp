#include <stdio.h>
#include "..\..\_src\Log.h"
#include "..\..\_src\Utils.h"

int main(){
  // printf("Welcome C/C++\n");
  // LOG_ET("Logger Error\n");
  // LOG_WT("Logger Warning\n");
  // LOG_IT("Logger Info\n");
  // LOG_DT("Logger Debug\n");

  // LOG_E("Logger Error\n");
  // LOG_W("Logger Warning\n");
  // LOG_I("Logger Info\n");
  // LOG_D("Logger Debug\n");

  char ten[] ="Vo Viet Dung";
  char lop[] =" KTLT-N15";
  int  thang = 3;
  int  nam = 2022;
  std::string name = StringFormat("%s %s %02d %04d",ten, lop, thang, nam);
  LOG_IT("%s\n",name.c_str());
  std::vector<std::string> arrName = SplitString(name.c_str()," ");
  int iCnt = (int)arrName.size();
  for (int i = 0; i < iCnt;i++)
    LOG_WT("%d [%s]\n",i,arrName[i].c_str()); 

  return 0;
}