#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    ll n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    ll a[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        cin >> a[i];
    }
    ll cnt = 0;
    ll ans = 0;
    for (int i = 0; i < n ; i++)
    {
        if (s1[i] == s2[i])
        {
            cnt++;
            ans = max(ans, a[cnt]);
        }
    }
    if (cnt == n)
        cout << a[n] << endl;
    if (cnt < n)
    {
        ans = max(ans, a[0]);
        cout << ans << endl;
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