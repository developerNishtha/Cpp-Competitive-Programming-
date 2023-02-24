#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    int n, cnt = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
            cnt++;
    }
    cout << cnt << endl;
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