#include <bits/stdc++.h>
#include "../../_src/Log.h"
#include "../../_src/Utils.h"
using namespace std;

int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    string tong="Bai:Ma hoa van ban";
    LOG_WT("%s\n",tong.c_str());
    string ten="Ten: Mai Van Vu";
    LOG_IT("%s\n",ten.c_str());
    string msv="Msv: 21T1020848";
    LOG_IT("%s\n",msv.c_str());
    string nhap="Xau Q: ";
    LOG_DT("%s\n",nhap.c_str());
	string s;
	cin>>s;
    string nhap1="Khoa k ";
    LOG_DT("%s\n",nhap1.c_str());
	int a; cin>>a;
    string so="Sau s: ";
	for(int i=a-1;i>=0;i--) cout<<s[i];
	for(int i=s.size()-1;i>=a;i--) cout<<s[i]; 
    LOG_WT("%s\n",so.c_str());

}