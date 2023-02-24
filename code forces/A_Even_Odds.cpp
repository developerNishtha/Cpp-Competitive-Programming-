#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
ll n,k;
cin >>n>>k;
ll ans=(n+1)/2;
if(k<= ans) cout <<(2*k)-1<<endl;
else cout << (2*(k-ans))<<endl;
}

int main()
{
	int t=1;
	//cin >> t;
	while (t--){
		nishtha();
	}
	return 0;	
}