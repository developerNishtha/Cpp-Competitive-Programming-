#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    ll n, x, p, q, a = 0, b = 0, c = 0;
    cin >> n >> x;
    p = -1 * (n - 1);
    q = n + 1;
    if (x < p || x > q) cout << -1 << endl; 
    else
    {
        if (x < 0)
        {
            a = (x * -1) + 1;
            c = n - a;
            b = 0;
        }
        else if (x > 0)
        {
            b = x - 1;
            c = n - b;
            a = 0;
        }
        else
        {
            a = 1;
            b = 0;
            c = n - 1;
        }
        for (int i = 0; i < c; i++) cout << "*";
        for (int i = 0; i < b; i++) cout << "+";
        for (int i = 0; i < a; i++)  cout << "-";

        cout << endl;
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