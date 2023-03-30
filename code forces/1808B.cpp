// #include <iostream>
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// void nishtha()
// {
//     ll n, m;
//     cin >> n >> m;

//     vector<vector<ll>> v(n, vector<ll>(m));
//     for (ll i = 0; i < n; i++)
//     {
//         for (ll j = 0; j < m; j++)
//         {
//             cin >> v[i][j];
//         }
//     }

//     ll ans = 0;
//     for (ll i = 0; i < n - 1; i++)
//     {
//         for (ll j = i + 1; j < n; j++)
//         {
//             ll sum = 0;
//             for (ll k = 0; k < m; k++)
//             {
//                 sum += abs(v[i][k] - v[j][k]);
//             }
//             ans += sum;
//         }
//     }

//     cout << ans << endl;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         nishtha();
//     }
//     return 0;
// }

#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    ll n, m;
    cin >> n >> m;

    vector<vector<ll>> v(n, vector<ll>(m));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }

    ll ans = 0;
    for (ll j = 0; j < m; j++)
    {
        vector<ll> col(n);
        for (ll i = 0; i < n; i++)
        {
            col[i] = v[i][j];
        }
        sort(col.begin(), col.end());

        for (ll i = 0; i < n - 1; i++)
        {
            ans += abs(col[i] - col[i + 1]) * (i + 1) * (n - i - 1);
        }
    }

    cout << ans << endl;
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
