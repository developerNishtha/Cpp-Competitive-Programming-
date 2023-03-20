#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    ll n, d;
    cin >> n >> d;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());
    ll l = 0, r = n - 1, sum = 0, team = 0;
    while (l <= r)
    {
        if (a[r] > d) team++;       
        else
        {
            sum = a[r];
            l += (d / a[r]);
            if (l <= r) team++;
            else break;  
        }
        r--;
    }
    cout << team << endl;
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        nishtha();
    }
    return 0;
}