#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    string s;
    cin >> s;
    int a[s.size()];
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        a[i] = s[i] - 'a' + 1;
    }
    sort(a, a + s.size());
    for (int i = 0; i < s.size(); i++)
    {
        ans += (i + 1) * a[i];
    }
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