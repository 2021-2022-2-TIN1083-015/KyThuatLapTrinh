#include <stdio.h>
#include "../../_src/Log.h"
#include "../../_src/Utils.h"
using namespace std;

int main () 
{
	string s;
    LOG_WT("Bai: Tong so trong xau\n");
    LOG_IT("Ten: Nguyen Quoc Huy\n");
    LOG_IT("Msv: 21T1080017\n");
    LOG_DT("-----\n");
    LOG_DT("Nhap chuoi:");
	getline(cin, s);
	int sum, tong=0;
	for (int i=0; i<s.size(); i++) {
		if (isdigit(s[i])) {
			sum = 0;
			for (int j=i+1; j<s.size(); j++) {
				if (isdigit(s[j])) {
					sum++;
				}
				else {
					break;
				}
			}
			tong+= (s[i]-'0') * pow(10,sum); 
		}
	}
    LOG_WT("Tong so:"); cout << tong << endl;
	return 0;
}