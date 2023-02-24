#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    int n, k, l;
    cin >> n >> k >> l;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    a[n - 1] = a[n - 1] + (k * (l - 1));
    int mx = a[n - 1];
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, a[i]);
    }
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == mx)
        {
            c++;
        }
    }
    if (mx == a[n - 1] && c == 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
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