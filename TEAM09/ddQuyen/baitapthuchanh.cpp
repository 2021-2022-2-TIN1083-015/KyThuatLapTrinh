#include <bits/stdc++.h>
#include "../../_src/Log.h"
#include "../../_src/Utils.h"
using namespace std;
int tong(string s){
	int sum=0;
	int res=0;
	for(auto x:s){
		if(isdigit(x)){
			sum=sum*10+x-'0';
		}
		else {
			res+=sum; sum=0;
		}
	}
	res+=sum;
	return res;
}
int main()
{
    string s; getline(cin,s);
    LOG_WT("%s\n","Bai: Tong so trong xau");
    LOG_IT("%s\n","Ten: Dang Duy Quyen");
    LOG_IT("%s\n","Msv: 20T1080048");
    string cach="-----";
    LOG_DT("%s\n",cach.c_str());
    string tmp=s;
    string nhap="Nhap chuoi: "+tmp;
    // cout<<s<<endl;
    LOG_DT("%s\n",nhap.c_str());
    string so="Tong so: ";
    LOG_WT("%s",so.c_str());
    LOG_W("%d",tong(s));
    
}