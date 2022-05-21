#include <bits/stdc++.h>
#include "../../_src/Log.h"
#include "../../_src/Utils.h"
using namespace std;

int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    LOG_WT("Bai: Ma hoa van ban\n");
    LOG_IT("Ten: Nguyen Quoc Huy\n");
    LOG_IT("Msv: 21T1080017\n");
    LOG_DT("Xau Q:");
	string s;
	cin>>s;
    LOG_DT("Khoa k:");
	int a; cin>>a;
	for(int i=a-1;i>=0;i--) cout<<s[i];
	for(int i=s.size()-1;i>=a;i--) cout<<s[i]; 
    LOG_DT("Xau S:"); LOG_E("\n");
}