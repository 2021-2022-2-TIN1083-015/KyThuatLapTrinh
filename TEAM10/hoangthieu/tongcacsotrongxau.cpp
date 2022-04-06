#include <stdio.h> 
#include <string.h>
#include "..\..\_src\Log.h"
#include "..\..\_src\Log.cpp"

int main() 
{
    LOG_ET("Bai 1: Tong so trong xau");
 	LOG_WT("Ten :Nguyen Xuan Hoang Thieu");
 	LOG_WT("MSSV :21t1080043");
     char str[500];
     int i=0,j,tong=0,n;
    LOG_IT("----------");
    LOG_IT("Nhap chuoi"); 
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
    
    LOG_ET("Tong so :");
    LOG_ET("tong"); 
 
}
