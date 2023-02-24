#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    ll n;
    cin >> n;
    ll temp = 0, cnt = 0;
    while (n != 0)
    {
        temp = n % 10;
        n /= 10;
        if (temp == 4 || temp == 7)
        {
            cnt++;
        }
    }
    if (cnt == 4 || cnt == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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