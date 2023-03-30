#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    int n, k;
    cin >> n >> k;
    if (k == 1)
    {
        cout << "YES" << endl;
        for (int i = 1; i <= n; i++)
        {
            cout << i << endl;
        }
        return;
    }
    if (n % 2 != 0)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        cout << "YES" << endl;
        for (int i = 1; i <= n * k; i += 2)
        {
            int x = 0;
            while (x < k)
            {
                cout << i << " ";
                i += 2;
                x++;
            }
            i -= 2;
            cout << endl;
        }
        for (int i = 2; i <= n * k; i += 2)
        {
            int x = 0;
            while (x < k)
            {
                cout << i << " ";
                i += 2;
                x++;
            }
            i -= 2;
            cout << endl;
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