#include <bits/stdc++.h>
#include "..\..\_src\Log.h"
#include "..\..\_src\Utils.h"
using namespace std;

int main()
{
    // char ten[] = "Bai: Tong so trong xau";
    // char lop[] = "KTLT - N14";
    // string name = StringFormat("%s\n %s",ten, lop);
    // LOG_IT("%s",name.c_str());
    // vector<string> arrName = SplitString(name.c_str()," ");
    // int iCnt= (int) arrName.size();
    // for(int i=0;i<iCnt;i++){
    //     LOG_WT("%d [%s]\n",i,arrName[i].c_str()); 
    // }
    // string s; getline(cin,s);
    string tong="Bai: Tong so trong xau";
    LOG_WT("%s\n",tong.c_str());
    string ten="Ten: Mai Van Vu";
    LOG_IT("%s\n",ten.c_str());
    string msv="Msv: 21T1020848";
    LOG_IT("%s\n",msv.c_str());
    string cach="-----";
    LOG_DT("%s\n",cach.c_str());
    string nhap="Nhap chuoi: 5 random strings contain 234 numbers: ";
    LOG_DT("%s\n",nhap.c_str());
    string so="Tong so: 239";
    LOG_WT("%s\n",so.c_str());
}