#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    int n, i,m,j;
    cin >> n;
    ll ans[n + 1];
    vector<ll> pos[n + 1];
    m = n;
    for (; m--;)
    {
        for (i = 1; i <= n - 1; i++)
        {
            cin >> j;
            pos[j].push_back(i);
        }
    }
    for (i = 1; i <= n; i++)
    {
        sort(pos[i].begin(), pos[i].end());
    }
    for (i = 1; i <= n; i++)
    {
        if (pos[i][n - 2] == n - 1)
        {
            if (pos[i][0] == n - 1)
            {
                ans[n] = i;
            }
            else
            {
                ans[n - 1] = i;
            }
        }
        else
        {
            ans[pos[i][n - 2]] = i;
        }
    }

    for (i = 1; i <= n; i++)
    {
        cout << ans[i] << " ";
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