#include <bits/stdc++.h> 

#include "..\..\_src\Log.h"
#include "..\..\_src/Utils.h"

int main(){
  std::string s;
  std::getline(std::cin, s);
  int result=0;
  std::string t = "";
    for(char ch : s) { 
    if(ch >= '0' && ch <= '9') {
        t += ch;
    }
    else { 
        if (t.length() > 0)
      result += stoi(t);  
      t = ""; 
    } 
  }
  if(t.length() > 0)
  result += stoi(t);  

  LOG_WT("Bai: tong so trong xau\n");
  LOG_IT("Ten: Nguyen Van Nam\n");
  LOG_IT("Msv: 21T1020049\n");
  LOG_DT("--------\n");
  LOG_DT("Nhap chuoi: %s\n", s);
  LOG_WT("Tong so: %d", result);
  return 0;
}
