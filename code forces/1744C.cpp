#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    char c;
    int n;
    string s;
    int ans = 0, k = 0;
    cin >> n >> c >> s;
    s += s;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == 'g') k = i;
        if (s[i] == c) ans = max(ans, k - i);
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