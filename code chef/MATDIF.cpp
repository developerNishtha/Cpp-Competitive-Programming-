#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    int n;
    cin >> n;
    int od = 1, ev = 2;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (od <= n * n)
            {
                cout << od << " ";
                od += 2;
            }
            else
            {
                cout << ev << " ";
                ev += 2;
            }
        }
        cout << endl;
    }

    // for (int i = n / 2; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //
    //     }
    //     cout << endl;
    // }
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