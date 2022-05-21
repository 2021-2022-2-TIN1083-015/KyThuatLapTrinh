#include <bits/stdc++.h>
#include "../../_src/Log.h"
#include "../../_src/Utils.h"
using namespace std;

int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    string tong="Bai:Ma hoa van ban";
    LOG_WT("%s\n",tong.c_str());
    string ten="Ten: Lê Quang Phú";
    LOG_IT("%s\n",ten.c_str());
    string msv="Msv: 21T1020590";
    LOG_IT("%s\n",msv.c_str());
    string nhap="Xau Q: ";
    LOG_DT("%s\n",nhap.c_str());
	string m;
	cin>>m;
    string nhap1="Khoa k ";
    LOG_DT("%s\n",nhap1.c_str());
	int k;cin>>k;
    string so="Sau s: ";
	for(int j=k-1;j>=0;j--) cout<<m[j];
	for(int zi=m.size()-1;zi>=k;zi--) cout<<m[zi];	
    LOG_WT("%s\n",so.c_str());

}