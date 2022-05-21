#include"../../_src/Log.h"
#include"../../_src/Utils.h"
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string tong2="Bai: Ma hoa van ban";
    LOG_WT("%s\n",tong2.c_str());
    string ten="Ten: Nguyen Dinh Ngoc Bao";
    LOG_IT("%s\n",ten.c_str());
    string msv="Msv: 21T1020237";
    LOG_IT("%s\n",msv.c_str());
    string cach="-----";
    LOG_DT("%s\n",cach.c_str());
    string nhaps = "Xau Q: ";
    LOG_DT("%s", nhaps.c_str());
	string s;
	cin >> s;
    string nhapb = "Khoa k: ";
    LOG_DT("%s", nhapb.c_str());
	int k;
    cin>>k;
    string xauS = "Xau s: ";
    LOG_DT("%s", xauS.c_str());
	if(k >= 0){
		for(int i = k-1; i >=0; i--){
			cout<<s[i];
		}	
	}
	for(int i = s.size()-1; i >= k; i--){
			cout<<s[i];
		}
	return 0;
}