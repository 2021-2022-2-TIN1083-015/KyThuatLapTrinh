#include <bits/stdc++.h>
#include "../../_src/Log.h"
#include "../../_src/Utils.h"
#include <string>
using namespace std;

int main(){
    LOG_WT("%s\n",tong.c_str());
		string ten="Ten: Nguyen Thi Dieu Anh";
    LOG_IT("%s\n",ten.c_str());
	    string msv="Msv: 21T1020113";
    LOG_IT("%s\n",msv.c_str());
        string cach="-----";
    LOG_DT("%s\n",cach.c_str());
		string nhap="Nhap chuoi: ";
    LOG_DT("%s",nhap.c_str());
		string s;
			getline(cin,s);
	string x1, x2, ketqua;
	int nho=0, kq=0;
	cin >> x1 >> x2;  
	while (x1.size() < x2.size())	
		x1 = '0' + x1; 
	while (x2.size() < x1.size())	
		x2 = '0' + x2;
	for (int i=x1.size()-1; i>=0; i--) {
    	kq = (x1[i] - 48) + (x2[i] - 48) + nho;
    	nho = kq/10;
    	ketqua += kq%10 + 48;}
		if (nho != 0)
    		ketqua += nho + 48;
	for (int i=ketqua.size()-1; i>=0; i--) 
    	cout << ketqua[i];
        string so="Tong so: "+ketqua;
    LOG_WT("%s\n",so.c_str());
    return 0;
}
