#include<bits/stdc++.h>
using namespace std;
string a,Q;
int main(){
    int n;
    cin >>Q>>n;
    for(int z = n-1; z>=0 ;z--){
        a = a + Q[z];
    }
    for(int z = Q.length() - 1; z>= n;z--){
        a = a + Q[z];
    }
    cout << a;
}