#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
ll n,m;
cin >>n>>m;
ll a[n];
for (ll i = 0; i < n; i++)
{
    cin >>a[i];
}
sort(a,a+n);
ll cnt=0;
cnt=(a[n-1]*2)+2;
for (ll i = n-2; i >= 1; i--)
{
    cnt+=a[i]+1;
}
if(cnt<=m) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
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