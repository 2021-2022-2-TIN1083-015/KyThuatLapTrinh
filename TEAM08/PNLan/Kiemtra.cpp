#include<bits/stdc++.h>
#include "../../_src/Log.h"
#include "../../_src/Utils.h"
using namespace std;
string tongso(string a,string b){
	
string res ="";
	int temp=0;
		while(a.size()<b.size()) a="0"+a;
	 	while(a.size()>b.size()) b="0"+b;
			
	int n=a.size()-1;
	for(int i=n;i>=0;i--){
		int s = int(a[i]-'0')+int(b[i]-'0') + temp;
		res = char(s%10 +'0')+res;
		temp =s/10;
			
	}
	if(temp>0) res=char(temp+'0')+res;
	return res;
} 
int main(){
	string a;
	string b;
		cin>>a>>b;
		cout<<tongso(a,b);

	return 0;
}string tongso="Bai: Cong hai so nguyen lon";
    LOG_WT("%s\n",tongso.c_str());
    string hovaten="Ten: Phan Ngoc Lan";
    LOG_IT("%s\n",hovaten.c_str());
    string Masv="Msv: 21T1020469";
    LOG_IT("%s\n",Masv.c_str());
    string cach="-----";
    LOG_DT("%s\n",cach.c_str());
    string nhapa="Nhap so a: ";
    LOG_DT("%s",nhap.c_str());
	cout<<a<<endl;
    string nhapb="Nhap so b: ";
    LOG_DT("%s",nhap1.c_str());
	cout<<b<<endl;
    string s="Tong so: ";
    LOG_WT("%s",s.c_str());
    cout<<s;
	cout<<endl;
}
