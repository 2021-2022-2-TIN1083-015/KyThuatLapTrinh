	#include<iostream>
#include<string.h>
#include<math.h>
#include "../../_src/Log.h"
#include "../../_src/Utils.h"
using namespace std;
void solve(string s){
	long int tong = 0;
	int len = s.size();
	for(int i = 0; i < len ; i++){
		if(s[i] >= 48 && s[i] <= 57){
			int count = 0;
			for(int j = i; j < len; j++){
				if(s[j] >= 48 && s[j] <= 57){
					count++;
				}else{
					break;
				}
			}
		tong = tong + (s[i] - 48) * pow(10,count-1);
		}
	}
cout<<tong;
}

int main()
{
    string s; getline(cin,s);
    string tong="Bai: Tong so trong xau";
    LOG_WT("%s\n",tong.c_str());
    string ten="Ten: Duong Minh Chau";
    LOG_IT("%s\n",ten.c_str());
    string msv="Msv: 21T1020119";
    LOG_IT("%s\n",msv.c_str());
    string cach="-----";
    LOG_DT("%s\n",cach.c_str());
    string tmp=s;
    string nhap="Nhap chuoi: "+tmp;
    LOG_DT("%s\n",nhap.c_str());
    string so="Tong so: ";
    LOG_WT("%s",so.c_str());
    solve(s);
}