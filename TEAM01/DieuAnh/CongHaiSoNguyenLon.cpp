#include<iostream>
#include "../../_src/Log.h"
#include "../../_src/Utils.h"
#include <string>
using namespace std;

int main(){
    int nho = 0, kq = 0;
        string tong = "Bai: Cong hai so nguyen lon";
    LOG_WT("%s\n", tong.c_str());
        string ten = "Ten: Nguyen Thi Dieu Anh";
    LOG_IT("%s\n", ten.c_str());
        string msv = "Msv: 21T1020113";
    LOG_IT("%s\n", msv.c_str());
        string cach = "-----";
    LOG_DT("%s\n", cach.c_str());
        string nhapx1 = "Nhap so x1: ";
    LOG_DT("%s", nhapx1.c_str());
        string x1;
        cin >> x1;
        string nhapx2 = "Nhap so x2: ";
    LOG_DT("%s", nhapx2.c_str());
        string x2;
        cin >> x2;
        string so = "Tong so: ";
    LOG_WT("%s", so.c_str());
        string ketqua;
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
    return 0;
}
