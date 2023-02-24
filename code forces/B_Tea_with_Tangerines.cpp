#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll sol = 0;
        for (ll i = 0; i < n; i++)
        {
            sol += (a[i] / (2 * a[0] - 1));
            if (a[i] % ((2 * a[0] - 1)) == 0) sol--;
        }
        cout << sol << endl;
    }
    return 0;
}