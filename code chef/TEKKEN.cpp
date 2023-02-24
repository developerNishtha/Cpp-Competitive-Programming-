#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    int a, b, c;
    cin >> a >> b >> c;
    int x = b - min(b, c);
    int y = c - min(b, c);
    if (x > y)
    {
        a = a - x;
        if (a > 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    else
    {
        a = a - y;
        if (a > 0) cout << "YES" << endl;
        else cout << "NO" << endl;
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