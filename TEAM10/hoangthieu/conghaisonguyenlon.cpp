#include<bits/stdc++.h>
#include "../../_src/Log.h"
#include "../../_src/Utils.h"
using namespace std;

int main()
{
	string a; 
	string b, result;
	int carry=0, kq=0;
    LOG_WT("Bai: Cong hai so nguyen lon\n");
    LOG_IT("Ten: Nguyen Xuan Hoang Thieu\n");
    LOG_IT("Msv: 21T1080043\n");
    LOG_DT("-----\n");
    LOG_DT("Nhap so a:");
        cin>> a;
    LOG_DT("Nhap so b:");
        cin>> b;

while (a.size() < b.size()){
	a = '0' + a; 
	}
while (b.size() < a.size()) {
	
b = '0' + b;
}

for (int i=a.size()-1; i>=0; i--) {	
    kq = (a[i] - 48) + (b[i] - 48) + carry;
    carry = kq/10;
    result += kq%10 + 48;
}
if (carry != 0)	
    result += carry + 48;

LOG_WT("Tong so:");
for (int i=result.size()-1; i>=0; i--) 
    cout << result[i];
    
return 0;
}