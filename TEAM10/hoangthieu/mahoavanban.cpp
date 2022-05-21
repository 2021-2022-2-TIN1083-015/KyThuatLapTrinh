#include<bits/stdc++.h>
#include "../../_src/Utils.h"
#include "../../_src/Log.h"
using namespace std;

int main()
{
	
    LOG_WT("Bai: Tong so trong xau\n");
    LOG_IT("Ten: Nguyen Xuan Hoang Thieu\n");
    LOG_IT("Msv: 21T1080043\n");
	string xau;
    LOG_DT("Xau Q:");
	cin>>xau;
	int a;
    LOG_DT("Khoa k:");
	cin>>a;
	string b=xau;
	int k=a;
    LOG_DT("Xau S:");
	for(int i=a-1;i>=0;i--) {
		cout<<xau[i];
	}
	
	for(int i=xau.size()-1;i>=a;i--){
		cout<<xau[i];
	}  
	return 0;
}