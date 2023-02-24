#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    int n;
    cin >> n;
    bool flag = false;
    vector<int> a(n + 1);
    vector<int> b(n + 2);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    if (n == 1) cout << "YES" << endl;
    else
    {
        b[1] = a[1];
        b[n + 1] = a[n];
        for (int i = 2; i < n + 1; i++)
        {
            b[i] = (a[i - 1] * a[i]) / __gcd(a[i - 1], a[i]);
        }
        for (int i = 1; i <= n; i++)
        {
            if (__gcd(b[i], b[i + 1]) != a[i]) flag = true;           
        }

        if (flag == true) cout << "NO" << endl;
       else  cout << "YES" << endl;

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