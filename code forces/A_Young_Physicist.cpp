#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    int n;
    cin >> n;
    int x[n], y[n], z[n];
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i] >> z[i];
        a += x[i];
        b += y[i];
        c += z[i];
    }
    if (a == 0 && b == 0 && c == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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