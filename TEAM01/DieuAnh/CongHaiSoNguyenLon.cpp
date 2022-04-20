#include <bits/stdc++.h>
#include "../../_src/Log.h"
#include "../../_src/Utils.h"
using namespace std;

int main(){
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
    string tong="Bai: Cong Hai So Nguyen Lon";
    string nhap="Nhap x1: "+x1;
    LOG_DT("%s\n",nhap.c_str());
    string nhap1="Nhap x2: "+x2;
    LOG_DT("%s\n",nhap1.c_str());
    string so="Tong so: "+ketqua;
    LOG_WT("%s\n",so.c_str());
    return 0;
}
