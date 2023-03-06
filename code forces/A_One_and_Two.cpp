#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    int n;
    cin >> n;
    int a[n];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 2)
            cnt++;
    }
    if (cnt % 2 == 1)
    {
        cout << -1 << endl;
    }
    else
    {
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 2)
                x++;
            if (x == cnt / 2)
            {
                cout << i + 1 << endl;
                return;
            }
        }
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