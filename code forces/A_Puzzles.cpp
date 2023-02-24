#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
ll n,m;
cin >>n>>m;
ll a[m];
for (ll i = 0; i < m; i++)
{
    cin >>a[i];
}
sort(a,a+m);
ll ans=INT_MAX;
for (ll i = n-1; i < m; i++)
{
    //cout <<a[i]-a[i-n+1]<<" ";
    ans=min(ans,a[i]-a[i-n+1]);
}
cout <<ans<<endl;
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