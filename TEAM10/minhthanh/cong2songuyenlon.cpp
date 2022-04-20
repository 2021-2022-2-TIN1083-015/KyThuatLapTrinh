#include <bits/stdc++.h>
#include "../../_src/Log.h"
#include "../../_src/Utils.h"
using namespace std;

int main() {
    LOG_WT("Bai: Cong hai so nguyen lon\n");
    LOG_IT("Ten: Nguyen Hoang Quang Minh Thanh\n");
    LOG_IT("Msv: 21T1080040\n");
    LOG_DT("-----\n");
    string a,b, res="";
    int nho=0;
    LOG_DT("Nhap so a: "); cin>>a;
    LOG_DT("Nhap so b: "); cin>>b;
    while(a.size()<b.size()) 
        a="0"+a;
    while(a.size()>b.size()) 
        b="0"+b;
    int len=a.size()-1;
    for(int i=len; i>=0; i--) {
        int so=int(a[i]-'0') + int(b[i]-'0') + nho;
        res=char(so%10+'0')+res;
        nho=so/10;
    }
    if(nho>0) 
    res=char(nho+'0')+res;
    LOG_WT("Tong so:"); cout<<res;
    return 0;

}