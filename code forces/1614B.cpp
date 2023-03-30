#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int a[200005], id[200005], b[200005];
int cmp(int &b, int &c)
{
    return a[b] > a[c];
}

void nishtha()
{
    int n;
    cin >> n;
    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        id[i] = i;
    }
    sort(id + 1, id + n + 1, cmp);
    for (int i = 0; i < n; i++)
    {
        ans += ((ll)(i / 2 + 1) * a[id[i + 1]]) * 2;
        b[id[i + 1]] = (i / 2 + 1) * ((i & 1) * 2 - 1);
    }
    cout << ans << endl;
    cout << "0 ";
    for (int i = 1; i <= n; i++)
        cout << b[i] << " ";
    cout << endl;
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
