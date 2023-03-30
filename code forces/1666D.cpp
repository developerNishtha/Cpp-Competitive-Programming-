#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    string s, t;
    cin >> s >> t;
    int n = s.size() - 1, m = t.size() - 1;

    map<char, int> mp;

    for (int i = n; i >= 0; i--)
    {
        if (s[i] == t[m] && mp[s[i]] == 0)
            m--;
        else
            mp[s[i]] = 1;
        if (m < 0)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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