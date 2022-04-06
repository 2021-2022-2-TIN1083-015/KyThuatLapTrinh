	#include<iostream>
#include<string.h>
#include<math.h>
#include "../../_src/Log.h"
#include "../../_src/Utils.h"
using namespace std;
void solve(string s){
	int sum = 0;
	for(int i = 0; i < s.size(); i++){
	if(s[i] >= '0' && s[i] <='9'){
		int dem = 0;
		for(int j = i; j < s.size(); j++){
			if(s[j] >= '0' && s[j] <='9'){
				dem++;
			}else{
				break;
			}
		}
		sum = sum + (s[i] - 48)*pow(10,dem-1);
	}
}
cout<<sum;
}
int main()
{
    string s; getline(cin,s);
    string tong="Bai: Tong so trong xau";
    LOG_WT("%s\n",tong.c_str());
    string ten="Ten: Nguyen Dinh Ngoc Bao";
    LOG_IT("%s\n",ten.c_str());
    string msv="Msv: 21T1020237";
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