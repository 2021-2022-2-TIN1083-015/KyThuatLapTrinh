#include<bits/stdc++.h>
#include "../../_src/Log.h"
#include "../../_src/Utils.h"
using namespace std;

int main()
{
    LOG_WT("Bai: Ma hoa xau van ban\n");
    LOG_IT("Ten: Huynh Thanh Tuu\n");
    LOG_IT("Msv: 21T1080052\n");
    LOG_DT("-----\n");
	string tuu;
	LOG_DT("Nhap chuoi: "); cin >> tuu;
	int s;
	LOG_DT("Nhap do dai: "); cin >> s;
	string m = "";
	string n = "";
	string ketqua = "";
	m = tuu.substr(0,s);
	n = tuu.substr(s,tuu.length()-s);
	reverse(m.begin(), m.end());
	reverse(n.begin(), n.end());
	ketqua = m + n;
	LOG_WT("Ket qua:"); cout << ketqua;
}