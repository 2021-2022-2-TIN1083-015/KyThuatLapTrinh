#include<bits/stdc++.h>
using namespace std;
#include "../../_src/Log.h"
#include "../../_src/Utils.h"

int main(){
	string x, y, a, b, c="",d="";
	LOG_WT("Bai: Cong hai so nguyen lon\n");
    LOG_IT("Ten: Nguyen Quoc Huy\n");
    LOG_IT("Msv: 21T1080017\n");
    LOG_DT("-----\n");
    LOG_DT("Nhap chuoi a:"); getline (cin,a);
	LOG_DT("Nhap chuoi b:"); getline (cin,b);
	LOG_WT("Tong so:");
	int n1, n2, Max;
	n1 = a.size();
	n2 = b.size();
	if (n1 >= n2)
	{
		c = b;
		for (int i = 0; i < n1 - n2; i++)
			d += '0';
		c = d + c;
		x = a;
		Max = n1;
	}
	else
	{
		c = a;
		for (int i = 0; i < n2 - n1; i++)
			d += '0';
		c = d + c;
		x = b;
		Max = n2;
	}
	int E[Max], du=0, e, f;
	for (int i = Max - 1; i >= 0; i--){
		e = c[i] - '0';
		f = x[i] - '0';
		if (e + f + du <= 9)
		{
			E[i] = e + f + du;
			du = 0;
		}
		else
		{
			E[i] = (e + f + du) % 10;
			du = 1;
		}
	}
	if (du == 0){
		for (int i = 0; i < Max; i++)
			cout << E[i];		
	}
	else{
		long long K[Max + 1];
		K[0] = 1;
		for (int i = 0; i < Max; i++){
			K[i + 1] = E[i];
		}
		for (int i = 0; i <= Max; i++){
				cout << K[i];
		}
	}
    return 0;
}