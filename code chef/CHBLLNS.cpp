#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
    ll r,g,b,k;
    cin>>r>>g>>b;
    cin>>k;
    cout <<min(r,k-1) + min(g,k-1) + min(b,k-1) +1 <<endl;
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