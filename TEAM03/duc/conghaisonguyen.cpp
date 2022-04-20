#include <bits/stdc++.h>
#include "../../_src/Log.h"
#include "../../_src/Utils.h"
using namespace std;

int main() {
    LOG_WT("Bai: Cong hai so nguyen lon\n");
    LOG_IT("Ten: Phan Trung Duc\n");
    LOG_IT("Msv: 21T1080008\n");
    LOG_DT("-----\n");
    string a;
    string b;
    LOG_DT("Nhap so a: "); cin >> a;
    LOG_DT("Nhap so b: "); cin >> b;
    while ( a.size()<b.size()) a='0'+a;
    while ( a.size()>b.size()) b='0'+b;
    string t="";
    int sd=0;
    for ( int i=a.size()-1;i>=0;i--)
        {
            int z=(a[i]-48)+(b[i]-48)+sd;
            sd=z/10;
            t=(char)(z%10+48)+t ;
         } 
    if(sd>0)
    {
        t=(char)(sd+48)+t;
    }
    LOG_WT("Tong so:"); cout << t;
    return 0;
}