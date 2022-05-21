#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int k;
    cin>>k;
    string a="";
    string b="";
    string ans="";
    a=s.substr(0,k);
    b=s.substr(k,s.length()-k);
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    ans=a+b;
    cout<<ans;
}