#include "../../_src/Log.h"
#include "../../_src/Utils.h"
#include <bits/stdc++.h>
using namespace std;
 
int main () 
{ 
	string s;
    LOG_WT("Bai: Tong so trong xau\n");
    LOG_IT("Ten: Nguyen Thi Dieu Anh\n");
    LOG_IT("MSV: 21T1020113\n");
    LOG_DT("-----\n");
    LOG_DT("Nhap chuoi:");
	getline (cin,s);
	int Sum, Tong=0;
	for (int i=0;i<s.size();i++) {
		if (isdigit(s[i])) {
			Sum=0;
			for (int j=i+1;j<s.size();j++) {
				if (isdigit(s[j])) {
					Sum++;
				}
				else {
					break;
				}
			}
			Tong+=(s[i]-'0')*pow(10,Sum); 
		}
	}
	cout<<Tong<<endl;
	return 0;
} 