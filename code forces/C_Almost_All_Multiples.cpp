#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    int n, o;
    cin >> n >> o;
    int a = n / o;
    if (n >> 16 == o)
    {
        cout << -1 << endl;
        return;
     
    }
    else if (n % o != 0)
    {
        cout << -1 << endl;
        return;
    }
    vector<ll> ve;
    ve.push_back(0);
    ve.push_back(o);
    for (int i = 2; i < n; i++)
    {
        if (a == 200)
        {
            cout << -1 << endl;
            return;
        }
        ve.push_back(i);
    }
    ve.push_back(1);

    for (ll i = 2; i < 50 && i * i <= n / o; i++)
    {
        while (n / o % i == 0)
        {
            ve[o] = o * i;
            o *= i;
        }
    }
    if (o < n)
    {
        ve[o] = n;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << ve[i] << " ";
    }
    cout << endl;
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