#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    int n;
    cin >> n;
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "  ";
        }

        for (int j = 0; j < i; j++)
        {
            cout << j << " ";
        }
        for (int j = i; j >= 0; j--)
        {
            if (j != 0)
                cout << j << " ";
            else
                cout << j;
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "  ";
        }

        for (int j = 0; j < i; j++)
        {
            cout << j << " ";
        }
        for (int j = i; j >= 0; j--)
        {
            if (j == 0)
            {
                cout << j;
            }
            else
                cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        nishtha();
    }
    return 0;
}