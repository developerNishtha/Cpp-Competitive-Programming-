#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    string s, t;
    cin >> s >> t;
    int tcn = 0;
    for (int i = 0; i < t.size(); i++)
    {
        if (t[i] == 'a')
            tcn++;
    }

    if (t == "a")
        cout << 1 << endl;
    else if (tcn != 0)
        cout << -1 << endl;
    else
        cout << (ll)pow(2, s.length()) << endl;
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