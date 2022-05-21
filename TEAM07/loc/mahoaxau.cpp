#include<bits/stdc++.h>
using namespace std;

string s,q;
int k;

int main(){
    cin >>q>>k;
    for(int i = k-1; i >=0 ;i--){
        s += q[i];
    }
    for(int i = q.length() - 1; i>= k;i--){
        s+= q[i];
    }
    cout << s;
}