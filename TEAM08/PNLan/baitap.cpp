#include <stdio.h> 
 #include<string.h>
 #include <stdlib.h>
 #include "..\..\_src\Log.h"
#include "..\..\_src\Utils.h"
 int main()
 { 
      char chuoi[500]; 
      int i=0,j;
       int sum=0;
       int res; 
    string sum="Bai: Tong so trong xau";
    LOG_WT("%s\n",sum.c_str());
    string hovaten="Ten: Phan Ngoc Lan";
    LOG_WT("%s\n",hovaten.c_str());
    string masv="Msv: 21T1020469";
    LOG_WT("%s\n",masv.c_str());
    string khoangtrang="-----";
    LOG_DT("%s\n",khoangtrang.c_str());
      printf(""); 
      gets(chuoi); 
      while(i<=strlen(chuoi)-1) 
          if(chuoi[i]<='9' && chuoi[i]>='0') 
           { 
            j=i; 
             res=0;        
            while(j<=strlen(chuoi)-1 && (chuoi[j]<='9' && chuoi[j]>='0')) 
      { 
       res=10*res+(int)chuoi[j]-48; 
       j++; 
    }  
            sum+=res; 
             i=j; 
            } 
           else i++; 
      printf("Tong So:%d",sum);     
 }



