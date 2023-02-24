#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    int n, x, y;
    cin >> n;
    int a[n];
    pair<int, int> p;
    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i != n - 1)
        {
            p.first = a[i];
            p.second = a[i + 1];
            mn = min(mn, abs(p.first - p.second));
            if (abs(p.first - p.second) == mn)
            {
                x = i + 1;
                y = i + 2;
            }
        }
        else
        {
            p.first = a[n - 1];
            p.second = a[0];
            mn = min(mn, abs(p.first - p.second));
            if (abs(p.first - p.second) == mn)
            {
                x = n;
                y = 1;
            }
        }
    }
    cout << x<<" "<<y<<endl;
}

int main()
{
    int t=1;
    //cin >> t;
    while (t--)
    {
        nishtha();
    }
    return 0;
}