#include "../../_src/Log.h"
#include "../../_src/Utils.h"
#include<iostream>
#include<string.h>
using namespace std;

int main(){
	 int tmp=0; 
	int result=0;
     string tong="Bai: Cong hai so nguyen lon";
    LOG_WT("%s\n",tong.c_str());
		      string ten="Ten: Duong Minh Chau";
    LOG_IT("%s\n",ten.c_str());
	   string msv="Msv: 21T1020119";
    LOG_IT("%s\n",msv.c_str());
    string cach="-----";
    LOG_DT("%s\n",cach.c_str());
       string nhapa="Nhap so a: ";
    LOG_DT("%s",nhapa.c_str());
	string a;
	cin>>a;
	  string nhapb="Nhap so b: ";
    LOG_DT("%s",nhapb.c_str());
string b;
cin>>b;
	string so="Tong so: ";
    LOG_WT("%s",so.c_str());
	string sum;
		while(a.length()<b.length()){
		a='0'+a;
	}
	while(a.length()<b.length()){
		b='0' +b;
	}
	for(int i=a.length()-1;i>=0;i--){
		result =(a[i]-'0')+(b[i]-'0')+tmp;
		tmp=result/10;
		sum+=result%10 +'0';	
	}
	if(tmp !=0)
	sum+=tmp+48;
	for(int i=sum.length()-1;i>=0;i--){
		cout<< sum[i];}
	return 0;
}
