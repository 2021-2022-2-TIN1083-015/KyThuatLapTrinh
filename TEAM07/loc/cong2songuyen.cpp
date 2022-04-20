#include <bits/stdc++.h>
#include "../../_src/Log.h"
#include "../../_src/Utils.h"
using namespace std;

string add(string a, string b)
 {
     string rev = "";
     int lon =0;
     while(a.size()<b.size()) a= "0"+a;
     while(a.size()>b.size()) a= "0"+b;
     int len=a.size()-1;
     for(int i=len;i>=0;i--)
     {
         int so = int(a[i]-'0'+int(b[i]-'0')+lon);
         rev = char(so%10 +'0') + rev;
         lon = so/10;
    }
    if (lon>0) rev = char(lon+'0') + rev;
    return rev;
 }

 int main()
 {
    LOG_WT("Bai: Cong hai so nguyen lon\n");
    LOG_IT("Ten: Nguyen Van Loc\n");
    LOG_IT("Msv: 21T1080019\n");
    LOG_DT("-----\n");
     string a,b;
     LOG_DT("Nhap so a: "); cin >> a;
    LOG_DT("Nhap so b: "); cin >> b;
     LOG_WT("Tong so:"); cout<<add(a,b);

     return 0;
 }

Nhắn #kĩ-thuật-lập-trình
