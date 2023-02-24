#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> mp;
    string s1 = "";
    string s2 = "";
    for (int i = 0; i < 2 * n; i++)
    {
        mp[s[i]]++;
    }
    if (mp.size() == 1)
    {
        cout << -1 << endl;
        return;
    }
    int i;
    int a = 1;
    for (i = 1; i < 2 * n; i++)
        if (s[i] != s[0])
        {
            a = 0;
            break;
        }
    if (!a)
    {
        cout << 1 << " ";
        int x = n - 1;
        int y = 2;
        while (x)
        {
            if (y == i + 1)
                {x++;}
            else
                {cout << y << " ";}

            y++;
            x--;
        }
        cout <<endl;
    }
    else
    {
        cout << -1<<endl;;
    }

    
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