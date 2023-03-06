
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    int n;
    cin >> n;
    unordered_map<int, vector<string>> mp;
    for (int i = 0; i < 2 * n - 2; i++)
    {
        string s;
        cin >> s;
        int x = s.length();
        mp[x].push_back(s);
    }

    bool flag = true;
    for (int i = 1; i < n; i++)
    {
        string s1 = mp[i][0];
        string s2 = mp[i][1];

        reverse(s2.begin(), s2.end());

        if (s1 != s2)
        {
            flag = false;
            break;
        }
    }

if (flag) cout << "YES" << endl;
else cout << "NO" << endl;
  
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
