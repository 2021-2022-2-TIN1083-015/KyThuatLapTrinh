#include"../../_src/Log.h"
#include"../../_src/Utils.h"
#include<bits/stdc++.h>
using namespace std;
int main(){
	int tong = 0;
	int rem = 0;
    string tong2="Bai: Cong hai so nguyen lon nhat";
    LOG_WT("%s\n",tong2.c_str());
    string ten="Ten: Nguyen Dinh Ngoc Bao";
    LOG_IT("%s\n",ten.c_str());
    string msv="Msv: 21T1020237";
    LOG_IT("%s\n",msv.c_str());
    string cach="-----";
    LOG_DT("%s\n",cach.c_str());
    string nhapa = "Nhap so a: ";
    LOG_DT("%s", nhapa.c_str());
	string s1;
	cin >> s1;
    string nhapb = "Nhap so b: ";
    LOG_DT("%s", nhapb.c_str());
	string s2;
	cin >> s2;
    string tongso = "Tong so: ";
    LOG_DT("%s", tongso.c_str());
	string sum;
	while(s1.size() < s2.size()){
		s1 =  '0' + s1;
	}
	while(s1.size() < s2.size()){
		s2 = '0' + s2;
	}
	for(int i = s1.size()- 1; i >= 0; i--){
		tong = (s1[i] - '0') + (s2[i] - '0') + rem;
		rem = tong / 10;
		sum += tong % 10 + '0';
	}
	if(rem != 0){
		sum += rem + '0';
	}
	long int l = sum.size();
	for(int i = l - 1; i>= 0; i--){
		cout<<sum[i];
	}
	return 0;
}