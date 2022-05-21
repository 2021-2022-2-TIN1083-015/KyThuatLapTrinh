#include<bits/stdc++.h>
#include "../../_src/Log.h"
#include "../../_src/Utils.h"
using namespace std;
string K,Q;
int main(){
	LOG_WT("Bai: Ma Hoa Van Ban\n");
    LOG_IT("Ten: Le Thi Thanh Nhan\n");
    LOG_IT("Msv: 21T1020543\n");
    cout<<"-----\n";
    int n;
    LOG_DT("Xau Q: ");
    cin >>Q ;
    LOG_DT("Khoa K: ");
    cin >> K;
    for(int i = n-1; i>=0 ;i--){
        K = K + Q[i];
    }
    for(int i = Q.length() - 1; i>= n;i--){
        K = K + Q[i];
    }
	cout << K;
}