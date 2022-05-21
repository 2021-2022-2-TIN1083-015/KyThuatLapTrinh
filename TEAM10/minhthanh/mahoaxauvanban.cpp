#include<bits/stdc++.h>
#include "../../_src/Log.h"
#include "../../_src/Utils.h"
using namespace std;
int main(){
    LOG_WT("Bai: Ma Hoa Xau Van Ban\n");
    LOG_IT("Ten: Nguyen Hoang Quang Minh Thanh\n");
    LOG_IT("Msv: 21T1080040\n");
    LOG_DT("Xau Q :");
    string thanh;
    cin>>thanh;
    LOG_DT("Khoa k:");
    int k;
    cin>>k;
    string a="";
    string b="";
    string ans="";
    a=thanh.substr(0,k);
    b=thanh.substr(k,thanh.length()-k);
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    ans=a+b;
    LOG_DT("Xau S:"); LOG_E(""); cout<<ans;
}