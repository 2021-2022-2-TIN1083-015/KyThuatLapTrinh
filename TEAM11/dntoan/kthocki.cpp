#include<bits/stdc++.h>
using namespace std;
#include "../../_src/Log.h"
#include "../../_src/Utils.h"

int main(){
	string j;
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
	LOG_WT("Bai: Ma hoa van ban\n");
    LOG_IT("Ten: Dang Ngoc Toan\n");
    LOG_IT("Msv: 21T1080048\n");
    LOG_DT("Xau Q: "); 
    cin >> j;
	LOG_DT("Khoa k: ");
    int k;
    cin >> k;
    for(int a=k-1;a>=0;a--)
	cout<<j[a];
	for(int a=j.length()-1;a>=k;a--)
	cout<<j[a];
	LOG_WT("Xau S: ");	
}
