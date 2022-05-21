#include<bits/stdc++.h>
using namespace std;
#include "../../_src/Log.h"
#include "../../_src/Utils.h"

int main(){
	string t, u, s, a, j="",k="";
	LOG_WT("Bai: Cong hai so nguyen lon\n");
    LOG_IT("Ten: Dang Ngoc Toan\n");
    LOG_IT("Msv: 21T1080048\n");
    LOG_DT("-----\n");
    LOG_DT("Nhap chuoi a:"); getline (cin,t);
	LOG_DT("Nhap chuoi b:"); getline (cin,u);
	LOG_WT("Tong so:");
    int m,n,x;
	m= t.size();
	n= u.size();
	if(m>=n){
		s=u;
		for(int i=0;i<m-n;i++)
			j=j+'0';
		s=j+s;
		a=t;
		x=m;
		
	}
	else{
		s=t;
		for (int i=0;i<n-m;i++)
			k=k+'0';
		s=k+s;
		a=u;
		x=n;
	}
	int g[x];
	int o,c;
	int thieu=0;
	for (int i=x-1;i>=0;i--){
		o=s[i]-'0';
		c=a[i]-'0';
		if(o+c+thieu<=9){
			g[i]=o+c+thieu;
			thieu=0;
		}
		else{
			g[i]=(o+c+thieu)%10;
			thieu=1;
		}
	}
	if(thieu==0)
		for(int i=0; i<x;i++)
			cout << g[i];
			
	else{
		long long z[x+1];
		z[0]=1;
		for(int i=0;i<x;i++)
            z[i+1] = g[i];
        for(int i=0;i<=x;i++)
            cout << z[i];
	}
	return 0;		
}
