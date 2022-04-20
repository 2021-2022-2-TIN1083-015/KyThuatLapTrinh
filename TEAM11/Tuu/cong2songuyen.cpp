#include<bits/stdc++.h>
using namespace std;

 string add(string a, string b)
 {
 	string rev = "";
 	int lon =0;
 	while(a.size()<b.size()) a= "0"+a;
 	while(a.size()>b.size()) a= "0"+b;
 	int len=a.size()-1;
 	for(int i=len;i>=0;i--)
 	{
 		int so = int(a[i]-'0'+int(b[i]-'0')+lon);
 		rev = char(so%10 +'0') + rev;
 		lon = so/10;
	}
	if (lon>0) rev = char(lon+'0') + rev;
	return rev;
 }
 
 int main()
 {
 	string a,b;
 	cin>>a>>b;
 	cout<<add(a,b);
	 
 	return 0;
 }