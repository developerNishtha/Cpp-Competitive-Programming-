#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    ll n,c0=0,c1=0,c=0;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i]==1) c1++;
        else if(a[i]==0) c0++;
        else c++;
    }
    if(c0<=((n%2)+(n/2))) cout<<0<<endl;
    else if(c>0) cout<<1<<endl;
    else if(c1==0) cout<<1<<endl;    
    else cout<<2<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        nishtha();
    }
    return 0;
}