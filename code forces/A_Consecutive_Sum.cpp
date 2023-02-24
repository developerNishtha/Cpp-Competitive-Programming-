#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
	ll n,k;
	cin >>n>>k;
	ll a[n];
	map<ll,ll> mp;
	for (ll i = 0; i < n; i++)
	{
		cin >>a[i];
		if(mp.find(i%k) != mp.end())
		{mp[i%k] = max(mp[i%k], a[i]);}
		else{
			mp[i%k]=a[i];
		}
	}
	ll ans=0;
	for (auto x: mp)
	{
		ans+=x.second;
	}
	cout <<ans<<endl;
	
	
}

int main()
{
	ll t;
	cin >> t;
	while (t--){
		nishtha();
	}
	return 0;	
}