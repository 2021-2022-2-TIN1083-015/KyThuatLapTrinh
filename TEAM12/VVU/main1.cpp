#include <bits/stdc++.h>
#include "..\..\_src\Log.h"
#include "..\..\_src\Utils.h"
using namespace std;
void solve(string s){
	int sum=0;
	int res=0;
	for(auto x:s){
		if(isdigit(x)){
			sum=sum*10+x-'0';
		}
		else {
			res+=sum; sum=0;
		}
	}
	res+=sum;
	cout<<res;
}
int main()
{
    string s; getline(cin,s);
    string tong="Bai: Tong so trong xau";
    LOG_WT("%s\n",tong.c_str());
    string ten="Ten: Mai Van Vu";
    LOG_IT("%s\n",ten.c_str());
    string msv="Msv: 21T1020848";
    LOG_IT("%s\n",msv.c_str());
    string cach="-----";
    LOG_DT("%s\n",cach.c_str());
    string tmp=s;
    string nhap="Nhap chuoi: "+tmp;
    // cout<<s<<endl;
    LOG_DT("%s\n",nhap.c_str());
    string so="Tong so: ";
    LOG_WT("%s",so.c_str());
    solve(s);
}