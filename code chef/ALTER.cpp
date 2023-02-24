#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    ll a, b, p, q;
    cin >> a >> b >> p >> q;
    ll k = p / a;
    ll l = q / b;
    ll o = k - l;
    if (k < l)
        o = l - k;
    if (p % a == 0 && q % b == 0)
    {
        if (k == l)
            cout << "YES" << endl;
        else if (o == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
        cout << "NO" << endl;
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