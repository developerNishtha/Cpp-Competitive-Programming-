#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n+m);
    for (ll i = 0; i < n+m; i++)
    {
        cin >> a[i];
    }
    ll ans = 0;
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    for (int i = 0; i < n; i++)
    {
        ans+=a[i];
    }   
    cout << ans << endl;
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