#include<bits/stdc++.h>
#include "../../_src/Log.h"
#include "../../_src/Utils.h"

using namespace std;

int main() 
{
    LOG_WT("Bai: Tong so trong xau\n");
    LOG_IT("Ten: Nguyen Xuan Hoang Thieu\n");
    LOG_IT("Msv: 21T1080043\n");
     char str[500];
     int i=0,j,tong=0,n;
    LOG_DT("-----\n");
    LOG_DT("Nhap chuoi:");
     fgets(str , sizeof(str),stdin); 
     while(i<=strlen(str)-1) {
          if(str[i]<='9' && str[i]>='0'){ 
               j=i; 
               n=0;            
               while(j<=strlen(str)-1 && (str[j]<='9' && str[j]>='0')) 
               { 
                    n=10*n+(int)str[j]-48; 
                    j++; 
               }
               tong+=n; 
               i=j; 
               } 
          else i++; 
     }
    
 LOG_WT("Tong so:");
 cout << tong << endl;

 
}
