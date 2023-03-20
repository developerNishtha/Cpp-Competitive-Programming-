#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    int n, k, d, w;
    cin >> n >> k >> d >> w;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int c = 1;
    int x = a[0] + w + d;
    int s = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] <= x && s < k)
        {
            s++;
        }
        else
        {
            c++;
            x = a[i] + w + d;
            s = 1;
        }
    }
    cout << c << endl;
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
