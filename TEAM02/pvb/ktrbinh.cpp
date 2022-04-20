#include <bits/stdc++.h>
#include "../../_src/Log.h"
using namespace std;

void Cong( string &s1, string &s2){
	string ans = "";
	if( s1.size() < s2.size() ){
		swap( s1 , s2 );
	}
	reverse( s1.begin(), s1.end() );
	reverse( s2.begin(), s2.end() );
	s2 += string( s1.size() - s2.size(), '0');
	int rmb = 0, tmp ;
	for( int  i = 0; i < s1.size(); i++ ){
		 tmp =  ( s1[i] - '0' ) + ( s2[i] - '0' ) + rmb;
		 ans +=  ( char )( tmp % 10 + '0' );
		 rmb = tmp / 10;
	}
	if( rmb ) ans += (char)( rmb + '0' );
	reverse ( ans.begin(), ans.end() );
	cout << ans;
}
void output(){
    string a, b; 
    LOG_ET("Bai: Cong hai so nguyen lon\n");
    LOG_WT("Ten: Phan Van Binh\n");
    LOG_IT("Ma sv: 21T1020248\n");
    LOG_DT("_____\n");
    LOG_DT("Nhap so a: " ); getline( cin, a );
    LOG_DT("Nhap so b: " ); getline( cin, b );
    LOG_ET("Tong so: " ); Cong(a, b);
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    output();
    return 0;
}