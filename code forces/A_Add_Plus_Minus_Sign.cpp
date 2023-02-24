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
    int ans = 0;
   
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == '0' && s[i + 1] == '0')
            {
                cout << "+";
                s[i + 1] = '0';
            }
            else if (s[i] == '1' && s[i + 1] == '1')
            {
                cout << "-";
                s[i + 1] = '0';
            }
            else if (s[i] == '1' && s[i + 1] == '0')
            {
                cout << "-";
                s[i + 1] = '1';
            }
            else if (s[i] == '0' && s[i + 1] == '1')
            {
                cout << "+";
                s[i + 1] = '1';
            }
        }
        cout << endl;
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
