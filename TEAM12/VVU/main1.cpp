#include <bits/stdc++.h>
#include "../../_src/Log.h"
#include "../../_src/Utils.h"
using namespace std;

int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  	string a,b;
  	cin>>a>>b;
 	string s="";
  	int nho=0;
  	while(a.size()<b.size()) a="0"+a;
  	while(a.size()>b.size()) b="0"+b;
  	for(int i=a.size()-1;i>=0;i--){
   		 int so=(a[i]-48)+(b[i]-48)+nho;
   		 s=char(so%10+'0')+s;
   		 nho=so/10;
 	}
 	if(nho>0)
 	s=char(nho+'0')+s;
    string tong="Bai: Cong hai so nguyen lon";
    LOG_WT("%s\n",tong.c_str());
    string ten="Ten: Mai Van Vu";
    LOG_IT("%s\n",ten.c_str());
    string msv="Msv: 21T1020848";
    LOG_IT("%s\n",msv.c_str());
    string cach="-----";
    LOG_DT("%s\n",cach.c_str());
    string nhap="Nhap a: "+a;
    LOG_DT("%s\n",nhap.c_str());
	// cout<<a<<endl;
    string nhap1="Nhap b: "+b;
    LOG_DT("%s\n",nhap1.c_str());
	// cout<<b<<endl;
    string so="Tong so: "+s;
    LOG_WT("%s\n",so.c_str());

}