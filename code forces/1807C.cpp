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
    int x = 0;
    for (int  i = 0; i < n - 1; i++)
    {
        int cnt = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (s[i] != s[j])  cnt++;           
            else if (s[i] == s[j])
            {
                if (cnt % 2 == 0)   x = 1;    
                break;
            }
        }
    }
    if (x == 0) cout << "YES" << endl;   
    else  cout << "NO" << endl;   
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