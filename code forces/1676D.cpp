#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int now = 0;
            int ci = i, cj = j;
            while (ci >= 0 && ci < n && cj >= 0 && cj < m)
            {
                now += a[ci][cj];
                ci--;
                cj--;
            }
            ci = i, cj = j;
            while (ci >= 0 && ci < n && cj >= 0 && cj < m)
            {
                now += a[ci][cj];
                ci++;
                cj--;
            }
            ci = i, cj = j;
            while (ci >= 0 && ci < n && cj >= 0 && cj < m)
            {
                now += a[ci][cj];
                ci--;
                cj++;
            }
            ci = i, cj = j;
            while (ci >= 0 && ci < n && cj >= 0 && cj < m)
            {
                now += a[ci][cj];
                ci++;
                cj++;
            }
            now -= a[i][j] * 3;
            mx = max(mx, now);
        }
    }
    cout << mx << endl;
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
