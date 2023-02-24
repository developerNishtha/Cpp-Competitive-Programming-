#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    ll n;
    cin >> n;
    ll a[n];
    ll ans1 = 0, ans2 = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n == 1)
    {
        cout << a[0] << endl;
        return;
    }
    else
    {
        ans1 = a[0];
        ans2 = a[n - 1];
        ll x = 1, y = n - 2;
        while (x <= y)
        {
            if (ans2 > ans1)
            {
                ans1 += a[x];
                x++;
            }
            else
            {
                ans2 += a[y];
                y--;
            }
        }
    }
    cout << max(ans1, ans2) << endl;
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