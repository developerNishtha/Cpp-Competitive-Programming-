#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;

void nishtha(){
ll n,count=1;
cin >>n;
string s;
cin >>s;
map<ll,ll> mp;
ll mx=0;
for (ll i = 0; i < n; i++)
{
 mp[s[i]]++;   
}
for(auto x:mp){
    mx=max(mx,x.second);
}

if(mx==1) cout <<0<<endl;
else if(mx>1){
	for (ll i = 0; i < n-1; i++)
	{
		if(s[i]==s[i+1]) count++;
	}
	
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