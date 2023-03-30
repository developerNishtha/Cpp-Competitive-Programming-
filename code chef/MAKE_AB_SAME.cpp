#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    int n;
    cin >> n;
    int a[n], b[n];
    int f = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1 && b[i] == 0)
        {
            cout << "NO" << endl;
            return;
        }
        else if (a[i] == 1 && b[i] == 1)
        {
            f = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0 && b[i] == 1)
        {
            if ((i == 0 || i == n - 1 || f == 0))
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
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