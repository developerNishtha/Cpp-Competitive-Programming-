#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
ll n,m;
cin >>n>>m;
vector<ll> a(m);
map<ll,ll> mp;
ll x=1;
ll y=n;
for (ll i = 0; i < m; i++)
{
    cin >>a[i];
}
for (ll i = 1; i <=n; i++)
{
    mp[i]=-1;
}
for (ll i = 0; i < m; i++)
{
    if(y==0) {
        break;
    }
    if(mp.find(a[i])==mp.end()){
        mp[a[i]]=1;
        mp[y]=x;
        y--;
    }
    x++;
}
for(auto p:mp){
    if(p.first <=n) cout <<p.second<<" ";
}
cout <<endl;
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