#include "../../_src/Log.h"
#include "../../_src/Utils.h"
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std; 
int main(){
	  string tong="Bai: Tong so trong xau";
    LOG_WT("%s\n",tong.c_str());
		      string ten="Ten: Duong Minh Chau";
    LOG_IT("%s\n",ten.c_str());
	   string msv="Msv: 21T1020119";
    LOG_IT("%s\n",msv.c_str());
    string cach="-----";
    LOG_DT("%s\n",cach.c_str());
		    string nhap="Nhap chuoi: ";
    LOG_DT("%s",nhap.c_str());
		string s;
			getline(cin,s);
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
 string so="Tong so: ";
    LOG_WT("%s",so.c_str());
cout<<sum;
return 0;
}