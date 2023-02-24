#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.length();
    int p = s2.length();
    bool check = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            if (s1[i] == s2[j])
            {
                check = true;
            }
        }
    }
    if (check)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
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