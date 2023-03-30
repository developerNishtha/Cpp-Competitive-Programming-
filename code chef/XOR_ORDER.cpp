#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    int a, b, c;
    cin >> a >> b >> c;
    int cnt = 0, ans = 0;
    for (int i = 0; i < 10; i++)
    {
        if (((a ^ i) < (b ^ i)) && ((b ^ i) < (c ^ i)))
        {
            ans = i;
            cnt++;
        }
    }
    if (cnt == 0)
        cout << -1 << endl;
    else
        cout << ans << endl;
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
