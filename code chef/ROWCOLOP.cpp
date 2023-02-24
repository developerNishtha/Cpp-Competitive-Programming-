#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
	ll n, q;
	cin>>n>>q;
	ll r[n] = {0}, c[n] = {0};
	while(q--){
	    string s;
	    ll rc, x;
	    cin>>s>>rc>>x;
	    if(s == "RowAdd") r[rc-1] += x;
	    else c[rc-1] += x;
	}
	ll mx1 = 0, mx2 = 0;
	for(int i = 0; i < n; i++){
	    mx1 = max(mx1, r[i]);
	    mx2 = max(mx2, c[i]);
	}
	cout<<(mx1+mx2)<<"\n";
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