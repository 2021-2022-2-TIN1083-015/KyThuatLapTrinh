#include<bits/stdc++.h>
#include "../../_src/Log.h"
#include "../../_src/Utils.h"
using namespace std;
string a,Q;
int main(){
    LOG_WT("Bai: Ma Hoa Van Ban\n");
    LOG_IT("Ten: Phan Trung Duc\n");
    LOG_IT("Msv: 21T1080008\n");
    LOG_DT("-----\n");
    int n;
    LOG_DT("Xau Q: ");
    cin >>Q;
    LOG_DT("Khoa K: ");
    cin >>n;
    for(int z = n-1; z>=0 ;z--){
        a = a + Q[z];
    }
    for(int z = Q.length() - 1; z>= n;z--){
        a = a + Q[z];
    }
    LOG_WT("Xau S:"); cout << a;
}