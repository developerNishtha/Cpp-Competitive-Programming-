#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    ll n;
    cin >> n;
    ll a = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            a = n / i;
            break;
        }
    }
    cout << a << " " << n - a << endl;
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