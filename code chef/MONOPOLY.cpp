#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
ll r1,r2,r3;
cin >>r1>>r2>>r3;
if(r1>(r2+r3) || r2>(r1+r3) || r3>(r1+r2)){
    cout <<"Yes"<<endl;
}
else {
    cout <<"No"<<endl;
}
}

int main()
{
	int t;
	cin >> t;
	while (t--){
		nishtha();
	}
	return 0;	
}