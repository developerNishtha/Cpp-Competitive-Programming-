#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    int n;
    cin >> n;

    int m1 = 0, m2 = 0;
    int a[n], b[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= a[n - 1] && b[i] <= b[n - 1])
            continue;
        if (a[i] <= b[n - 1] && b[i] <= a[n - 1])
            continue;
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;

    // for (int i = 0; i < n; i++)
    // {
    //     if (a[i] <= b[i])
    //         swap(a[i], b[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     m1 = max(m1, a[i]);
    //     m2 = max(m2, b[i]);
    // }

    // if (m1 == a[n - 1] && m2 == b[n - 1])
    //     cout << "YES" << endl;
    // else
    //     cout << "NO" << endl;
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