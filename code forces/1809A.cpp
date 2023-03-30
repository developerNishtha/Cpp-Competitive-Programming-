#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int n = s.length();
    if (s[0] == s[n - 1])
    {
        cout << -1 << endl;
        return;
    }
    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    int op = n;
    for (auto x : mp)
    {
        if (x.second > (n + 1) / 2)
        {
            op += 2;
        }
    }
    cout << op << endl;
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