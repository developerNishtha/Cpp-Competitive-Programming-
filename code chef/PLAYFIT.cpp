#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    ll n;
    cin >> n;
    ll a[n];
    ll mx = 0;
    ll mn = INT_MAX;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mn = min(mn, a[i]);
        mx = max(mx, (a[i] - mn));
    }
    
    if (mx)
    {
        cout << mx << endl;
    }
    else
    {
        cout << "UNFIT" << endl;
    }
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

