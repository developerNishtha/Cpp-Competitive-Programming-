#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    int n, k;
    cin >> n >> k;
    int p = n;
    int q = 1;

    while (p >= q)
    {
        cout << p-- << " ";

        if (p >= q)
        {
            cout << q++ << " ";
        }
    }
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