#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
ll n;
cin >>n;
ll a[n],b[n];
ll c0=0,c1=0,ans=0;
vector<ll> v1;
vector<ll> v2;

for (ll i = 0; i < n; i++)
{
    cin >>a[i]; 
    if(a[i]==0){
        c0++;
    } 
    else {
        c1++;
    }
}
for (ll i = 0; i < n; i++)
{
    cin >>b[i]; 
    ans+=b[i];
    if(a[i]==0){
        v1.push_back(b[i]);
    }
    else{
        v2.push_back(b[i]);
    }
}
sort(v1.begin(),v1.end(),greater<ll>());
sort(v2.begin(),v2.end(),greater<ll>());
ll mn =min(c0,c1);

for (ll i = 0; i < mn; i++){
ans+=v1[i]+v2[i];
}
if(c0==c1){
    ans=ans-min(v1[c0-1],v2[c1-1]);
}
cout <<ans<<endl;
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