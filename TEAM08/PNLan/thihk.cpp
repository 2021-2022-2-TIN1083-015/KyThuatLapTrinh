#include "../../_src/Log.h"
#include "../../_src/Utils.h"
#include<iostream>
#include<string.h>
using namespace std;

int main(){
     string tong="Bai: Ma hoa van ban";
    LOG_WT("%s\n",tong.c_str());
		      string ten="Ten: Phan Ngoc Lan";
    LOG_IT("%s\n",ten.c_str());
	   string msv="Msv: 21T1020469";
    LOG_IT("%s\n",msv.c_str());
     LOG_DT("Xau Q: "); getline (cin,Q);
	LOG_DT("Khoa k: "); (cin,k);
	LOG_WT("Xau S: ");
    for(int i = k-1; i>=0 ;i--){
temp = temp + Q[i];
}
for(int i = Q.length() - 1; i>= k;i--){
    temp= temp + Q[i];
}
cout << temp;
}
	return 0;		
}