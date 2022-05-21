#include <bits/stdc++.h>
#include "../../_src/Log.h"
#include "../../_src/Utils.h"
using namespace std;


int Tong(int a, int b)
{
	return a+b;
}

int main()
{
    LOG_WT("Bai: a+b\n");
    LOG_IT("Ten: Huynh Thanh Tuu\n");
    LOG_IT("Msv: 21T1080052\n");
    LOG_DT("-----\n");
	int a;
	int b;
	LOG_DT("Nhap so a: "); cin >> a; 
    LOG_DT("Nhap so b: "); cin >> b;
	LOG_WT("Tong so:"); cout << Tong(a,b);
	return 0;
}