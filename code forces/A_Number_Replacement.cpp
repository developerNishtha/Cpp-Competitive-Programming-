#include <bits/stdc++.h>
using namespace std;

int nishtha()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    string s;
    cin >> s;
    map<int, set<char>> m;
    for (int i = 0; i < n; i++)
    {
        m[v[i]].insert(s[i]);
    }
    for (auto x : m)
    {
        if (x.second.size() > 1)
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
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