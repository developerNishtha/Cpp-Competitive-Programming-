#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
ll n,q;
cin >>n>>q;
vector<ll> v(n);
ll sum=0;
for (int i = 0; i < n; i++)
{
    cin >>v[i];
    sum+=v[i];
}
vector<ll> a(n,0);
a[0]=v[0];
for (ll i = 1; i < n; i++)
{
    a[i]=a[i-1]+v[i];
}
for (int i = 0; i < q; i++)
{
    ll l,r,k,cnt=0,ans=0;
    cin >>l>>r>>k;
    cnt=a[r-1]-(a[l-1]-v[l-1]);
    ans=sum-cnt+((r-l+1)*k);

    if(ans%2!=0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;   
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