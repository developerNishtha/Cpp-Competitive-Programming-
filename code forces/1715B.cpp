#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    ll n, k, b, s,i;
    cin >> n >> k >> b >> s;
    ll mn = k * b;
    ll mx = (k * b) + (n * (k - 1));
    if (s < mn || s > mx)
    {
        cout << -1 << endl;
        return;
    }
    ll a[n];
    a[0] = b * k;
    s = s - b * k;
    if (s > 0)
    {
        a[0] = a[0] + min(k - 1, s);
        s = s - min(k - 1, s);
    }
    for (i = 1; i < n; i++)
    {
        if (s > 0)
        {
            a[i] = min(k - 1, s);
            s = s - a[i];
        }
        else
        {
            a[i] = 0;
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
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