#include<bits/stdc++.h>
#include "../../_src/Log.h"
#include "../../_src/Utils.h"
using namespace std;
int main(){
    string c;
    getline(cin,c);
    string tong="Bai: Tong so trong xau";
    LOG_WT("%s\n",tong.c_str());
    string ten="Ten: Duong Minh Chau";
    LOG_WT("%s\n",ten.c_str());
    string masv="Msv: 21T1020119";
    LOG_WT("%s\n",masv.c_str());
    string cach="-----";
    LOG_DT("%s\n",cach.c_str());
    long int tong =0;
    int len = c.size();
    for(int i=0;i<len;i++){
        if(c[i]>=48 && c[i]<=57){
            int count =0;
            for(int j=i;i<len;j++){
                if(c[j]>=48 && c[j]<=57){
                    count++;
                }else{
                    break;
                }
            }
            tong =tong +(c[i]-48)*pow(10,count-1);
        }
    }
    cout<<tong;
}
