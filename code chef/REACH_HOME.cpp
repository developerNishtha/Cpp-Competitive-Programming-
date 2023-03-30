#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    int x, y;
    cin >> x >> y;
    if (5 * x >= y)
        cout << "YES" << endl;
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