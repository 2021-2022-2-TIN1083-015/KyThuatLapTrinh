#include "../../_src/Log.h"
#include "../../_src/Utils.h"
#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
     string tong="Bai: Ma hoa van ban";
    LOG_WT("%s\n",tong.c_str());
		      string ten="Ten: Duong Minh Chau";
    LOG_IT("%s\n",ten.c_str());
	   string msv="Msv: 21T1020119";
    LOG_IT("%s\n",msv.c_str());
       string xauq="Xau Q: ";
    LOG_DT("%s",xauq.c_str());
	string str;
	getline(cin,str);
	  string nhapk="Khoa k: ";
    LOG_DT("%s",nhapk.c_str());
int k;
cin>>k;
	reverse(str.begin(),str.begin() + k);
	
	reverse(str.begin() + k  , str.end());
	string xaus="Xau S: ";
    LOG_WT("%s",xaus.c_str());
    cout<<str;
	return 0;  
}

